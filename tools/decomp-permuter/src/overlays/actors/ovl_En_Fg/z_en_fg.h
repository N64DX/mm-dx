#ifndef Z_EN_FG_H
#define Z_EN_FG_H

#include <global.h>

struct EnFg;

typedef struct EnFg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x410];
} EnFg; // size = 0x554

extern const ActorInit En_Fg_InitVars;

#endif // Z_EN_FG_H
