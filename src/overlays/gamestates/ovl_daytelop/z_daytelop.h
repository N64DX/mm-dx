#ifndef _Z64_DAYTELOP_H_
#define _Z64_DAYTELOP_H_

#include "global.h"

void Daytelop_Init(GameState* thisx);
void Daytelop_Destroy(GameState* thisx);

typedef struct {
    /* 0x000 */ GameState common;
    /* 0x0A4 */ UNK_TYPE1 padA4[0xC];
    /* 0x0B0 */ View view;
    /* 0x218 */ UNK_TYPE1 pad218[0x28];
    /* 0x240 */ s16 transitionCountdown;
    /* 0x242 */ s16 unk242;
    /* 0x244 */ s16 unk244;
    /* 0x246 */ UNK_TYPE1 pad246[0x2];
} DaytelopContext; // size = 0x248

#endif
