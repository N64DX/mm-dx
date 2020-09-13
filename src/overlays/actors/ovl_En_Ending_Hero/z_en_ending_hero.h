#ifndef Z_EN_ENDING_HERO_H
#define Z_EN_ENDING_HERO_H

#include <global.h>

struct EnEndingHero;

typedef struct EnEndingHero {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x104];
} EnEndingHero; // size = 0x248

extern const ActorInit En_Ending_Hero_InitVars;

#endif // Z_EN_ENDING_HERO_H
