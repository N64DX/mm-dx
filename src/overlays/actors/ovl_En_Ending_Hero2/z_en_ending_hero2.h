#ifndef Z_EN_ENDING_HERO2_H
#define Z_EN_ENDING_HERO2_H

#include <global.h>

struct EnEndingHero2;

typedef struct EnEndingHero2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x13C];
} EnEndingHero2; // size = 0x280

extern const ActorInit En_Ending_Hero2_InitVars;

#endif // Z_EN_ENDING_HERO2_H
