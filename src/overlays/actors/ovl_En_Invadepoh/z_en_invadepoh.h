#ifndef Z_EN_INVADEPOH_H
#define Z_EN_INVADEPOH_H

#include "global.h"
#include "assets/objects/object_uch/object_uch.h"
#include "assets/objects/object_ma1/object_ma1.h"
#include "assets/objects/object_ma2/object_ma2.h"
#include "assets/objects/object_cow/object_cow.h"
#include "assets/objects/object_dog/object_dog.h"

struct EnInvadepoh;

typedef void (*EnInvadepohActionFunc)(struct EnInvadepoh* this, PlayState* play);
typedef void (*EnInvadepohMainFunc)(Actor* thisx, PlayState* play); // PlayState, not GameState

typedef struct {
    /* 0x0 */ f32 unk0;
    /* 0x4 */ s16 unk4;
    /* 0x6 */ s16 unk6;
} EnInvadepohUnkStruct1; // size = 0x8

typedef struct {
    /* 0x0 */ s8 unk_0;
    /* 0x1 */ s8 timer;
    /* 0x2 */ u8 alpha;
    /* 0x4 */ Vec3f pos;
} EnInvadepohWarpEffect; // size = 0x10

typedef struct {
    /* 0x0 */ s8* index;
    /* 0x1 */ s8 count;
} EnInvadepohFaceFrame; // size = 0x2

typedef struct {
    /* 0x0 */ s8 type;
    /* 0x4 */ EnInvadepohFaceFrame* frames;
} EnInvadepohFaceAnim; // size = 0x8

typedef struct {
    /* 0x0 */ s8 index;
    /* 0x4 */ f32 chance;
} EnInvadepohFaceAnimNext; // size = 0x8

typedef struct {
    /* 0x0 */ EnInvadepohFaceAnim anim;
    /* 0x8 */ s8 nextCount;
    /* 0xC */ EnInvadepohFaceAnimNext* nextAnims;
} EnInvadepohFaceAnimLoop; // size = 0x10

typedef struct {
    /* 0x00 */ EnInvadepohFaceAnimLoop loop;
    /* 0x10 */ s16 minDelay;
    /* 0x12 */ s16 maxDelay;
} EnInvadepohFaceAnimLoopDelayed; // size = 0x14

typedef struct {
    /* 0x0 */ EnInvadepohFaceAnim** animSet;
    /* 0x4 */ s8 curAnimType;
    /* 0x8 */ EnInvadepohFaceAnim* curAnim;
    /* 0xC */ s16 delayTimer;
    /* 0xE */ s8 curFrame;
    /* 0xF */ s8 curIndex;
} EnInvadePohFaceInfo; // size = 0x10

typedef struct {
    /* 0x00 */ EnInvadePohFaceInfo eyeAnim;
    /* 0x10 */ EnInvadePohFaceInfo mouthAnim;
    /* 0x20 */ Vec3s unk_20;
    /* 0x26 */ Vec3s unk_26;
    /* 0x2C */ s16 unk_2C;
    /* 0x30 */ f32 unk_30;
    /* 0x34 */ f32 unk_34;
    /* 0x38 */ f32 unk_38;
    /* 0x3c */ f32 unk_3C;
    /* 0x40 */ s16 unk_40;
    /* 0x42 */ s16 unk_42;
    /* 0x44 */ f32 unk_44;
    /* 0x48 */ s16 unk_48;
} EnInvadePohUnkStruct_324; // size = 0x4C

typedef void (*EnInvadepohFaceFunc) (EnInvadePohFaceInfo*, EnInvadepohFaceAnim**);

#define EN_INVADEPOH_LIMB_MAX 23
// #define EN_INVADEPOH_LIMB_MAX MAX(MAX(MAX(MAX(MAX(ALIEN_LIMB_MAX, ROMANI_LIMB_MAX), CREMIA_LIMB_MAX), DOG_LIMB_MAX), COW_LIMB_MAX), COW_TAIL_LIMB_MAX)

typedef struct EnInvadepoh {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s unk_188[EN_INVADEPOH_LIMB_MAX];
    /* 0x212 */ Vec3s unk_212[EN_INVADEPOH_LIMB_MAX];
    /* 0x29C */ s8 unk_29C;
    /* 0x2A0 */ ColliderCylinder unk_2A0;
    /* 0x2EC */ EnInvadepohActionFunc actionFunc;
    /* 0x2F0 */ s16 unk_2F0;
    /* 0x2F2 */ s16 unk_2F2;
    /* 0x2F4 */ s8 unk_2F4;
    /* 0x2F8 */ f32 unk_2F8;
    /* 0x2FC */ char unk_2FC[4]; // unused? f32?
    /* 0x300 */ f32 unk_300;
    /* 0x304 */ s16 unk_304;
    /* 0x306 */ s16 unk_306;
    /* 0x308 */ s8 unk_308;
    /* 0x309 */ s8 unk_309;
    /* 0x30A */ s8 unk_30A;
    /* 0x30C */ Vec3s *unk_30C;
    /* 0x310 */ f32 unk_310;
    /* 0x314 */ Vec3f unk_314;
    /* 0x320 */ f32 unk_320;
    /* 0x324 */ EnInvadePohUnkStruct_324 unk_324;
    /* 0x370 */ s16 unk_370;
    /* 0x372 */ s16 unk_372;
    /* 0x374 */ s8 unk_374;
    /* 0x376 */ u16 unk_376;
    /* 0x378 */ s8 unk_378;
    /* 0x379 */ s8 unk_379;
    /* 0x37C */ f32 unk_37C[3];
    /* 0x388 */ char unk_388; // unused?
    /* 0x389 */ u8 unk_389;
    /* 0x38A */ s8 unk_38A;
    /* 0x38B */ s8 unk_38B;
    /* 0x38C */ s8 unk_38C;
    /* 0x38D */ u8 unk_38D;
    /* 0x390 */ Vec3f unk_390;
    /* 0x39C */ f32 unk_39C;
    /* 0x3A0 */ f32 unk_3A0;
    /* 0x3A4 */ f32 unk_3A4;
    /* 0x3A8 */ s16 unk_3A8;
    /* 0x3AA */ s16 unk_3AA;
    /* 0x3AC */ s8 unk_3AC;
    /* 0x3AD */ char pad3AD[3];
    /* 0x3B0 */ char pad3B0[0xC]; // unused? Vec3f?
    /* 0x3BC */ s8 unk_3BC;
} EnInvadepoh; // size = 0x3C0

typedef enum {
    ENINVADEPOH_HANDLER,         // Invasion event handler   
    ENINVADEPOH_ALIEN_INVADER,   // Alien invader
    ENINVADEPOH_COW,             // Abudcted cow, spawned by unused alien abductor   
    ENINVADEPOH_COW_TAIL,        // Abducted cow tail, spawned by abducted cow   
    ENINVADEPOH_ROMANI_ABDUCTED, // Abducted Romani, spawned by unused alien abductor       
    ENINVADEPOH_ROMANI_CONFUSED, // Returned, confused Romani   
    ENINVADEPOH_LIGHT_BALL,      // Light ball spaceship   
    ENINVADEPOH_ROMANI_NIGHT_1,  // Romani running to barn on night 1
    ENINVADEPOH_ROMANI_UNKNOWN,  // Unknown, possible duplicate of previous
    ENINVADEPOH_ROMANI_REWARD,   // Romani rewarding you for defeating invasion
    ENINVADEPOH_DOG,             // Dog during alien invasion   
    ENINVADEPOH_CREMIA_NIGHT_3,  // Cremia walking from barn to house on night 3
    ENINVADEPOH_ROMANI_NIGHT_3,  // Romnani walking from barn to house on night 3
    ENINVADEPOH_ALIEN_ABDUCTOR,  // Alien abductor, unused, carries cow or Romani
} EnInvadepohParamsTypes;

#define ENINVADEPOH_GET_PARAM_7(thisx) ((thisx)->params & 7)
#define ENINVADEPOH_GET_PARAM_F0(thisx) ((thisx)->params >> 4 & 0xF)
#define ENINVADEPOH_GET_PARAM_7F00(thisx) ((thisx)->params >> 8 & 0x7F)

#define ENINVADEPOH_SET_PARAMS(p7F00, pF0, p7) (((p7) & 7) | (((p7F00) << 8) & 0x7F00) | (((pF0) << 4) & 0xF0))

#endif // Z_EN_INVADEPOH_H
