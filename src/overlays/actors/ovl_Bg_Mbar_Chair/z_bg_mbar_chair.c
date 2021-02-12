#include "z_bg_mbar_chair.h"

#define FLAGS 0x00000000

#define THIS ((BgMbarChair*)thisx)

void BgMbarChair_Init(Actor* thisx, GlobalContext* globalCtx);
void BgMbarChair_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgMbarChair_Update(Actor* thisx, GlobalContext* globalCtx);
void BgMbarChair_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Bg_Mbar_Chair_InitVars = {
    ACTOR_BG_MBAR_CHAIR,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_MBAR_OBJ,
    sizeof(BgMbarChair),
    (ActorFunc)BgMbarChair_Init,
    (ActorFunc)BgMbarChair_Destroy,
    (ActorFunc)BgMbarChair_Update,
    (ActorFunc)BgMbarChair_Draw
};

static InitChainEntry bgMbarChairInitVars[] = {
    ICHAIN_F32(unkFC, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(unk100, 60, ICHAIN_CONTINUE),
    ICHAIN_F32(unk104, 80, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

extern BgMeshHeader D_060019B4;
extern UNK_TYPE D_06000288;

void BgMbarChair_Init(Actor* thisx, GlobalContext* globalCtx) {
    BgMbarChair* this = THIS;

    Actor_ProcessInitChain(&this->dyna.actor, bgMbarChairInitVars);
    BcCheck3_BgActorInit(&this->dyna, 0);
    BgCheck3_LoadMesh(globalCtx, &this->dyna, &D_060019B4);
}

void BgMbarChair_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgMbarChair* this = THIS;

    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->dyna.dynaPolyId);
}

void BgMbarChair_Update(Actor* thisx, GlobalContext* globalCtx) {
}

void BgMbarChair_Draw(Actor* thisx, GlobalContext* globalCtx) {
    func_800BDFC0(globalCtx, &D_06000288);
}
