#ifndef Z_EN_BU_H
#define Z_EN_BU_H

#include <global.h>

struct EnBu;

typedef struct EnBu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x4C];
} EnBu; // size = 0x190

extern const ActorInit En_Bu_InitVars;

#endif // Z_EN_BU_H
