#ifndef Z64_SKIN_H
#define Z64_SKIN_H

#include "z64animation.h"

/**
 * Holds a compact version of a vertex used in the Skin system
 * It is used to initialise the Vtx used by an animated limb
 */
typedef struct {
    /* 0x00 */ u16 vtxIndex;
    /* 0x02 */ s16 u; // u and v are texture coordinates
    /* 0x04 */ s16 v;
    /* 0x06 */ s8 x;
    /* 0x07 */ s8 y;
    /* 0x08 */ s8 z;
    /* 0x09 */ u8 alpha;
} SkinVtx; // size = 0xA

/**
 * Describes a position displacement and a scale to be applied to a limb at index `limbIndex`
 */
typedef struct {
    /* 0x00 */ u8 limbIndex; // the limb to apply this modifications
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 z;
    /* 0x08 */ u8 scale;
} SkinLimbModif; // size = 0xA

typedef struct {
    /* 0x00 */ u16 skinVerticesCount; // count of skinVertices
    /* 0x02 */ u16 limbsModificationsCount; // count of limbsModifications
    /* 0x04 */ u16 unk_4; // index of limbsModifications?
    /* 0x08 */ SkinVtx* skinVertices;
    /* 0x0C */ SkinLimbModif* limbsModifications;
} Struct_800A598C; // size = 0x10

typedef struct {
    /* 0x00 */ u16 vtxCount;
    /* 0x02 */ u16 unk_2; // count of unk_4
    /* 0x04 */ Struct_800A598C* unk_4;
    /* 0x08 */ Gfx* dlist;
} SkinAnimatedLimbData; // size = 0xC

// ZAPD compatibility typedefs
// TODO: Remove when ZAPD adds support for them
typedef SkinVtx Struct_800A57C0;
typedef SkinLimbModif Struct_800A598C_2;
typedef SkinAnimatedLimbData Struct_800A5E28;

typedef enum {
    /* 04 */ SKIN_LIMB_TYPE_ANIMATED = 4,
    /* 11 */ SKIN_LIMB_TYPE_NORMAL = 11
} SkinLimbType;

typedef struct {
    /* 0x00 */ Vec3s jointPos; // Root is position in model space, children are relative to parent
    /* 0x06 */ u8 child;
    /* 0x07 */ u8 sibling;
    /* 0x08 */ s32 segmentType; // Type of data contained in segment
    /* 0x0C */ void* segment; // Gfx* if segmentType is SKIN_LIMB_TYPE_NORMAL, SkinAnimatedLimbData if segmentType is SKIN_LIMB_TYPE_NORMAL, NULL otherwise
} SkinLimb; // size = 0x10


typedef struct {
    /* 0x000 */ u8 index;
    /* 0x004 */ Vtx* buf[2];
} SkinAvb; // size = 0xC

typedef struct {
    /* 0x000 */ SkeletonHeader* skeletonHeader;
    /* 0x004 */ MtxF mtx;
    /* 0x044 */ s32 avbCount;
    /* 0x048 */ SkinAvb* avbTbl;
    /* 0x04C */ SkelAnime skelAnime;
} PSkinAwb; // size = 0x90

typedef void (*SkinPostLimbDraw)(struct Actor*, struct GlobalContext*, PSkinAwb*);
typedef s32 (*SkinOverrideLimbDraw)(struct Actor*, struct GlobalContext*, s32, PSkinAwb*);

#define SKIN_DRAW_FLAG_NONE          0
#define SKIN_DRAW_FLAG_1             (1 << 0)
#define SKIN_DRAW_FLAG_CUSTOM_MATRIX (1 << 1)

#endif
