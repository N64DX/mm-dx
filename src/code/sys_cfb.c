#include "z64.h"
#include "buffers.h"
#include "regs.h"
#include "macros.h"

// Variables are put before most headers as a hacky way to bypass bss reordering
OSViMode sNotebookViMode; // placeholder name
void* gFramebuffers[2];
OSViMode* gActiveViMode;
u16* gZBufferPtr;
void* gWorkBuffer;
u64* gGfxSPTaskOutputBufferPtr;
void* gGfxSPTaskOutputBufferEnd;

void* sCfbLoRes1;
void* sCfbLoRes0;
u16 (*gZBufferLoRes)[SCREEN_WIDTH * SCREEN_HEIGHT];
u16 (*gWorkBufferLoRes)[SCREEN_WIDTH * SCREEN_HEIGHT];
u64 (*gGfxSPTaskOutputBufferLoRes)[0x3000];
void* gGfxSPTaskOutputBufferEndLoRes;

s16 gCfbWidth;
s16 gCfbHeight;
s16 gCfbLeftAdjust;
s16 gCfbUpperAdjust;

#include "sys_cfb.h"
#include "stdbool.h"
#include "buffers.h"
#include "libc64/malloc.h"
#include "z64vimode.h"

void SysCfb_SetLoResMode(void) {
    gFramebuffers[1] = sCfbLoRes1;
    gFramebuffers[0] = sCfbLoRes0;
    gZBufferPtr = *gZBufferLoRes;
    gWorkBuffer = gWorkBufferLoRes;
    gGfxSPTaskOutputBufferPtr = *gGfxSPTaskOutputBufferLoRes;
    gGfxSPTaskOutputBufferEnd = gGfxSPTaskOutputBufferEndLoRes;
    gCfbWidth = SCREEN_WIDTH;
    gCfbHeight = SCREEN_HEIGHT;
    gCfbLeftAdjust = 0;
    gCfbUpperAdjust = 0;
    gScreenWidth = gCfbWidth;
    gScreenHeight = gCfbHeight;
    gActiveViMode = &osViModeNtscLan1;
}

void SysCfb_Init(void) {
    do {
        sCfbLoRes1 = gLoBuffer.framebuffer;
        sCfbLoRes0 = gHiBuffer.framebuffer;
    } while ((u64)0);

    SysCfb_SetLoResMode();
}

// Unused
void SysCfb_Reset(void) {
    gFramebuffers[0] = NULL;
    gFramebuffers[1] = NULL;
}

void* SysCfb_GetFramebuffer(s32 index) {
    if (index < 2) {
        return gFramebuffers[index];
    }
    return NULL;
}

void* SysCfb_GetZBuffer(void) {
    return gZBufferPtr;
}

void* SysCfb_GetWorkBuffer(void) {
    return gWorkBuffer;
}

u16 SysCfb_GetZBufferPixel(s32 x, s32 y) {
    u16* zBuff = SysCfb_GetZBuffer();
    u16 val;

    if (zBuff != NULL) {
        val = (&zBuff[x])[y * gCfbWidth];
    } else {
        val = 0;
    }
    return val;
}

s32 SysCfb_GetZBufferInt(s32 x, s32 y) {
    return Environment_ZBufValToFixedPoint(SysCfb_GetZBufferPixel(x, y) << 2) >> 3;
}
