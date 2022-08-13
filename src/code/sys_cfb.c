#include "global.h"

extern OSViMode D_801FBB30;
extern uintptr_t* gFramebuffers[2];
extern OSViMode* D_801FBB88;
extern u16* gZBufferPtr;
extern void* D_801FBB90;
extern u64* gGfxSPTaskOutputBufferPtr;
extern size_t gGfxSPTaskOutputBufferSize;
extern uintptr_t D_801FBB9C; //UNK_TYPE
extern uintptr_t D_801FBBA0; //UNK_TYPE
extern u16 (*gZBuffer)[SCREEN_WIDTH * SCREEN_HEIGHT];
extern u16 (*gWorkBuffer)[SCREEN_WIDTH * SCREEN_HEIGHT];
extern u64 (*gGfxSPTaskOutputBuffer)[0x3000];
extern void* gGfxSPTaskOutputBufferEnd;
extern uintptr_t D_801FBBB4;
extern s32 D_801FBBB8;
extern s32 D_801FBBBC; //PAL Z buffer?
extern s32 D_801FBBC0;
extern u64 (*gGfxSPTaskOutputBuffer2)[0x3000];
extern void* gGfxSPTaskOutputBufferEnd2;
extern s16 D_801FBBCC;
extern s16 D_801FBBCE;
extern s16 D_801FBBD0;
extern s16 D_801FBBD2;
extern s8 D_801FBBD4;

void func_80178750(void) {
    gFramebuffers[1] = D_801FBB9C;
    gFramebuffers[0] = D_801FBBA0;
    gZBufferPtr = *gZBuffer;
    D_801FBB90 = gWorkBuffer;
    gGfxSPTaskOutputBufferPtr = *gGfxSPTaskOutputBuffer;
    gGfxSPTaskOutputBufferSize = (u32) gGfxSPTaskOutputBufferEnd;
    D_801FBBCC = 320;
    D_801FBBCE = 240;
    D_801FBBD0 = 0;
    D_801FBBD2 = 0;
    D_801FBBD4 = 0;
    gScreenWidth =  D_801FBBCC;
    gScreenHeight = D_801FBBCE;
    D_801FBB88 = &osViModeNtscLan1;
}


void func_80178818(void) {
    s32 width;
    s32 height;
    gFramebuffers[1] = D_801FBBB4;
    gFramebuffers[0] = D_801FBBB8;
    gZBufferPtr = D_801FBBBC;
    D_801FBB90 = D_801FBBC0;
    gGfxSPTaskOutputBufferPtr = *gGfxSPTaskOutputBuffer2;
    gGfxSPTaskOutputBufferSize = gGfxSPTaskOutputBufferEnd2;
    if(1){}
    D_801FBBCC = 576; //576P
    D_801FBBCE = 454;
    D_801FBBD0 = 30;
    D_801FBBD2 = 10;
    gScreenWidth = D_801FBBCC;
    gScreenHeight = D_801FBBCE;
    if ((D_801FBBCC == 640) && (D_801FBBCE == 480)) {
        D_801FBB88 = &osViModeNtscHpf1;
    } else {
        l1:
        width = D_801FBBCC - 610;
        height = D_801FBBCE - 470;
        func_8014026C(&D_801FBB30, -1, osTvType, 0, 1, 0, 1,  D_801FBBCC,  D_801FBBCE, 0x1E, width, 0xA, height);
        D_801FBB88 = &D_801FBB30;
    }
    D_801FBBD4 = 1;
}



//TODO Fake match
extern u16 gFramebuffer1_[SCREEN_HEIGHT][SCREEN_WIDTH]; 
void func_80178978(void) {
    D_801FBB9C = gFramebuffer1;
    D_801FBBA0 = gFramebuffer0;
    D_801FBBB4 = gFramebuffer1_;
    D_801FBBB8 = D_80780000;
    func_80178750();
}

//Unused
void func_801789D4(void) {
    gFramebuffers[0] = 0;
    gFramebuffers[1] = 0;
}

uintptr_t SysCfb_GetFbPtr(s32 index) {
    if (index < 2) {
        return gFramebuffers[index];
    }
    return 0;
}

u16* SysCfb_GetZBuffer(void) {
    return gZBufferPtr;
}

void* func_80178A24(void) {
    return D_801FBB90;
}

u16 func_80178A34(s32 arg0, s32 arg1) { //Get ZBuffer pixel?
    u16 *zBuff;
    u16 var_v1;

    zBuff = SysCfb_GetZBuffer();
    if (zBuff != NULL) {
        var_v1 = (&zBuff[arg0])[arg1 * D_801FBBCC];
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_80178A94(s32 param_1, s32 param_2) {
    return func_800F50D4(func_80178A34(param_1, param_2) * 4) >> 3;
}
