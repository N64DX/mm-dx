#ifndef Z_OBJ_Y2SHUTTER_H
#define Z_OBJ_Y2SHUTTER_H

#include "global.h"

struct ObjY2shutter;

typedef struct ObjY2shutter {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ s16 unk_15C;
    /* 0x15E */ u8 unk_15E;
    /* 0x15F */ u8 unk_15F;
} ObjY2shutter; // size = 0x160

extern const ActorInit Obj_Y2shutter_InitVars;

typedef enum {
    /* 0x0 */ BARRED_SHUTTER,
    /* 0x1 */ GRATED_SHUTTER,
} ShutterType;

#define OBJY2SHUTTER_GET_SHUTTER_TYPE(thisx) (((thisx)->params >> 7) & 1)
#define OBJY2SHUTTER_GET_SWITCHFLAG(thisx) ((thisx)->params & 0x7F)

#endif // Z_OBJ_Y2SHUTTER_H
