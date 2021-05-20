#include <ultra64.h>
#include <global.h>

extern s32 D_801FD040[];
extern OSIoMesg D_801FD050;
extern OSMesgQueue D_801FD068;
extern OSMesg D_801FD0F4;
extern s32 D_801FD0F8;

u32 osFlashGetAddr(u32 page_num) {
    s32 temp = (D_801FD0F8 == 0) ? page_num << 6 : page_num << 7;

    return temp;
}

OSPiHandle* osFlashReInit(u8 latency, u8 pulse, u8 page_size, u8 rel_duration, u32 start) {
    D_801FD080.baseAddress = RDRAM_UNCACHED | start;
    D_801FD080.type++;
    D_801FD080.latency = latency;
    D_801FD080.pulse = pulse;
    D_801FD080.pageSize = page_size;
    D_801FD080.relDuration = rel_duration;
    D_801FD080.domain = 1;

    return &D_801FD080;
}

void osFlashChange(u32 flash_num) {
    D_801FD080.baseAddress = RDRAM_UNCACHED | (FRAM_STATUS_REGISTER + (flash_num << 17));
    D_801FD080.type = 8 + flash_num;
    return;
}

OSPiHandle* osFlashInit(void) {
    u32 flash_type;
    u32 flash_vendor;

    osCreateMesgQueue(&D_801FD068, &D_801FD0F4, 1);

    if (D_801FD080.baseAddress == (RDRAM_UNCACHED | FRAM_BASE_ADDRESS)) {
        return &D_801FD080;
    }

    D_801FD080.type = 8;
    D_801FD080.baseAddress = (RDRAM_UNCACHED | FRAM_BASE_ADDRESS);
    D_801FD080.latency = 0x5;
    D_801FD080.pulse = 0xC;
    D_801FD080.pageSize = 0xF;
    D_801FD080.relDuration = 0x2;
    D_801FD080.domain = 1;
    D_801FD080.speed = 0;
    bzero(&D_801FD080.transferInfo, 96);

    func_8008AE20(&D_801FD080);
    osFlashReadId(&flash_type, &flash_vendor);

    if (flash_vendor == 0x00C2001E || flash_vendor == 0x00C20001 || flash_vendor == 0x00C20000) {
        D_801FD0F8 = 0; // OLD FLASH
    } else {
        D_801FD0F8 = 1; // NEW FLASH
    }

    return &D_801FD080;
}

void osFlashReadStatus(u8* flash_status) {
    u32 outFlashStatus;

    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_EXECUTE);
    // read status using IO
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &outFlashStatus);

    // why twice ?
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_EXECUTE);
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &outFlashStatus);

    *flash_status = outFlashStatus & 0xFF;

    return;
}

void osFlashReadId(u32* flash_type, u32* flash_vendor) {
    u8 flash_status; // sp1F

    // why read status ?
    osFlashReadStatus(&flash_status);

    // select silicon id read mode
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_STATUS_AND_STATUS);

    // read silicon id using DMA
    D_801FD050.hdr.pri = 0;
    D_801FD050.hdr.retQueue = &D_801FD068;
    D_801FD050.dramAddr = D_801FD040;
    D_801FD050.devAddr = 0;
    D_801FD050.size = 8;

    osInvalDCache(D_801FD040, 16);
    osEPiStartDma(&D_801FD080, &D_801FD050, 0);
    osRecvMesg(&D_801FD068, 0, 1);

    *flash_type = D_801FD040[0];
    *flash_vendor = D_801FD040[1];

    return;
}

void osFlashClearStatus(void) {
    // select status mode
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_EXECUTE);
    // clear status
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress, 0x00000000);

    return;
}

s32 osFlashAllErase(void) {
    u32 status;     // sp6C
    OSTimer timer;  // sp48
    OSMesgQueue mq; // sp30
    OSMesg msg;     // sp2C

    // start chip erase operation
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_UNK_ERASE_OPERATION);
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_ERASE_AND_STATUS);

    // wait for completion by polling erase-busy flag
    osCreateMesgQueue(&mq, &msg, 1);
    do {
        osSetTimer(&timer, 0xABA95ULL, 0ULL, &mq, &msg);
        osRecvMesg(&mq, &msg, 1);
        func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    } while ((status & 0x2) == 0x2);

    // check erase operation status, clear status
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    osFlashClearStatus();

    if (((status & 0xFF) == 0x08) || ((status & 0xFF) == 0x48) || ((status & 0x08) == 0x08)) {
        return 0;
    } else {
        return -1;
    }
}

void osFlashAllEraseThrough(void) {
    // start chip erase operation
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_UNK_ERASE_OPERATION);
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_ERASE_AND_STATUS);
}

s32 osFlashCheckEraseEnd(void) {
    u8 status; // sp1F

    // check if erase operation is completed
    osFlashReadStatus(&status);
    if ((status & 0x02) == 0x02) {
        return 2; // busy
    } else {
        // check erase operation status, clear status
        osFlashReadStatus(&status);
    }
    osFlashClearStatus();

    if (((status & 0xFF) == 0x08) || ((status & 0xFF) == 0x48) || ((status & 0x08) == 0x08)) {
        return 0;
    } else {
        return -1;
    }
}

s32 osFlashSectorErase(u32 page_num) {
    u32 status;     // sp6C
    OSTimer timer;  // sp48
    OSMesgQueue mq; // sp30
    OSMesg msg;     // sp2C

    // start sector erase operation
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER,
                  FRAM_COMMAND_SET_ERASE_SECTOR_OFFSET | page_num);
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_ERASE_AND_STATUS);

    // wait for completion by polling erase-busy flag
    osCreateMesgQueue(&mq, &msg, 1);
    do {
        osSetTimer(&timer, 0x8F0D1ULL, 0ULL, &mq, &msg);
        osRecvMesg(&mq, &msg, 1);
        func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    } while ((status & 0x2) == 0x02);

    // check erase operation status, clear status
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    osFlashClearStatus();

    if (((status & 0xFF) == 0x08) || ((status & 0xFF) == 0x48) || ((status & 0x08) == 0x08)) {
        return 0;
    } else {
        return -1;
    }
}

void osFlashSectorEraseThrough(u32 page_num) {
    // start sector erase operation
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER,
                  FRAM_COMMAND_SET_ERASE_SECTOR_OFFSET | page_num);
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_ERASE_AND_STATUS);
}

s32 osFlashWriteBuffer(OSIoMesg* mb, s32 priority, void* dramAddr, OSMesgQueue* mq) {
    s32 ret;
    // select load page mode
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_WRITE);

    // DMA 128-byte page
    mb->hdr.pri = priority;
    mb->hdr.retQueue = mq;
    mb->dramAddr = dramAddr;
    mb->devAddr = 0;
    mb->size = 0x80;

    ret = osEPiStartDma(&D_801FD080, mb, 1);

    return ret;
}

s32 osFlashWriteArray(u32 page_num) {
    u32 status;     // sp6C
    OSTimer timer;  // sp48
    OSMesgQueue mq; // sp30
    OSMesg msg;     // sp2C

    // only needed for new flash ?
    if (D_801FD0F8 == 1) {
        func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_WRITE);
    }

    // start program page operation
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER,
                  FRAM_COMMAND_SET_ERASE_SECTOR_OFFSET_AND_STATUS | page_num);

    // wait for completion by polling write-busy flag
    osCreateMesgQueue(&mq, &msg, 1);
    do {
        osSetTimer(&timer, 0x249FULL, 0ULL, &mq, &msg);
        osRecvMesg(&mq, &msg, 1);
        func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    } while ((status & 0x01) == 0x01);

    // check program operation status, clear status
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &status);
    osFlashClearStatus();

    if (((status & 0xFF) == 0x04) || ((status & 0xFF) == 0x44) || ((status & 0x04) == 0x04)) {
        return 0;
    } else {
        return -1;
    }
}

s32 osFlashReadArray(OSIoMesg* mb, s32 priority, u32 page_num, void* dramAddr, u32 n_pages, OSMesgQueue* mq) {
    s32 ret;
    u32 dummy;     // sp20
    u32 last_page; // sp1C
    u32 pages;     // sp18

    // select read array mode
    func_80093BB0(&D_801FD080, D_801FD080.baseAddress | FRAM_COMMAND_REGISTER, FRAM_COMMAND_SET_MODE_READ_AND_STATUS);

    // dummy read to initiate "fast-page" reads ?
    func_800920B0(&D_801FD080, D_801FD080.baseAddress, &dummy);

    // DMA requested pages
    mb->hdr.pri = priority;
    mb->hdr.retQueue = mq;
    mb->dramAddr = dramAddr;

    last_page = page_num + n_pages - 1;

    if ((last_page & 0xF00) != (page_num & 0xF00)) {

        pages = 256 - (page_num & 0xFF);
        n_pages -= pages;
        mb->size = pages << 7;
        mb->devAddr = osFlashGetAddr(page_num);
        osEPiStartDma(&D_801FD080, mb, 0);
        osRecvMesg(mq, 0, 1);
        page_num = (page_num + 256) & 0xF00;
        mb->dramAddr = (void*)((uintptr_t)mb->dramAddr + mb->size);
    }

    while (n_pages > 256) {
        pages = 256;
        n_pages -= 256;
        mb->size = pages << 7;
        mb->devAddr = osFlashGetAddr(page_num);
        osEPiStartDma(&D_801FD080, mb, 0);
        osRecvMesg(mq, 0, 1);
        page_num += 256;
        mb->dramAddr = (void*)((uintptr_t)mb->dramAddr + mb->size);
    }

    mb->size = n_pages << 7;
    mb->devAddr = osFlashGetAddr(page_num);
    ret = osEPiStartDma(&D_801FD080, mb, 0);

    return ret;
}
