#ifndef Z_EN_SCOPECOIN_H
#define Z_EN_SCOPECOIN_H

#include <global.h>

struct EnScopecoin;

typedef struct EnScopecoin {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x8];
} EnScopecoin; // size = 0x14C

extern const ActorInit En_Scopecoin_InitVars;

#endif // Z_EN_SCOPECOIN_H
