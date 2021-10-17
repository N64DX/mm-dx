#ifndef Z_EN_TORCH2_H
#define Z_EN_TORCH2_H

#include <global.h>

struct EnTorch2;

typedef struct EnTorch2 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char unk_144[0x50];
} EnTorch2; // size = 0x194

extern const ActorInit En_Torch2_InitVars;

#endif // Z_EN_TORCH2_H
