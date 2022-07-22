#include "global.h"

s32 __osVoiceContRead36(OSMesgQueue* mq, s32 port, u16 arg2, u8 dst[36]) {
    s32 errorCode;
    u8 status;
    u8* ptr;
    s32 retryCount = 2;
    s32 i;

    __osSiGetAccess();

    do {

        ptr = (u8*)&__osPfsPifRam;

        if ((__osContLastPoll != 9) || (port != __osPfsLastChannel)) {
            __osContLastPoll = 9;
            __osPfsLastChannel = port;

            for (i = 0; i < port; i++, *ptr++ = 0) {
                ;
            }

            __osPfsPifRam.status = CONT_CMD_READ_BUTTON;

            ptr[0] = 0xFF;
            ptr[1] = 3;
            ptr[2] = 0x25;
            ptr[3] = 9;
            ptr[0x2A] = 0xFF;
            ptr[0x2B] = 0xFE;
        } else {
            ptr = (u8*)&__osPfsPifRam + port;
        }

        ptr[4] = arg2 >> 3;
        ptr[5] = __osContAddressCrc(arg2) | (arg2 << 5);

        __osSiRawStartDma(OS_WRITE, &__osPfsPifRam);
        osRecvMesg(mq, NULL, OS_MESG_BLOCK);
        __osSiRawStartDma(OS_READ, &__osPfsPifRam);
        osRecvMesg(mq, NULL, OS_MESG_BLOCK);

        errorCode = (ptr[2] & 0xC0) >> 4;

        if (errorCode == 0) {
            if (ptr[0x2A] != __osVoiceContDataCrc(&ptr[6], 36)) {
                errorCode = __osVoiceGetStatus(mq, port, &status);
                if (errorCode != 0) {
                    break;
                }

                errorCode = CONT_ERR_CONTRFAIL;
            } else {
                bcopy(&ptr[6], dst, 36);
            }
        } else {
            errorCode = CONT_ERR_NO_CONTROLLER;
        }

    } while ((errorCode == CONT_ERR_CONTRFAIL) && (retryCount-- >= 0));

    __osSiRelAccess();

    return errorCode;
}
