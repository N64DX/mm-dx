#ifndef _Z64_TITLE_H_
#define _Z64_TITLE_H_

#include "global.h"

void Title_Init(GameState* thisx);
void Title_Destroy(GameState* thisx);

typedef struct {
    /* 0x000 */ GameState state;
    /* 0x0A4 */ u8* staticSegment;
    /* 0x0A8 */ View view;
    /* 0x210 */ SramContext sramCtx;
    /* 0x238 */ s16 mode;
    /* 0x23A */ s16 timer;
    /* 0x23C */ s16 coverAlpha;
    /* 0x23E */ s16 addAlpha;
    /* 0x240 */ s16 visibleDuration;
    /* 0x242 */ s16 ult;
    /* 0x244 */ s16 uls;
    /* 0x246 */ u8 exit;
} TitleContext; // size = 0x248

#endif
