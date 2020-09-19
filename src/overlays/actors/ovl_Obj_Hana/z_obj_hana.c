/*
 * File: z_obj_hana.c
 * Description: Orange Graveyard Flower
 */

#include "z_obj_hana.h"

#define FLAGS 0x00000000

#define THIS ((ObjHana*)thisx)

void ObjHana_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjHana_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjHana_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjHana_Draw(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Obj_Hana_InitVars = {
    ACTOR_OBJ_HANA,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_HANA,
    sizeof(ObjHana),
    (ActorFunc)ObjHana_Init,
    (ActorFunc)ObjHana_Destroy,
    (ActorFunc)ObjHana_Update,
    (ActorFunc)ObjHana_Draw
};

extern UNK_TYPE D_06000500;

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 10, ICHAIN_CONTINUE),
    ICHAIN_F32(unkFC, 900, ICHAIN_CONTINUE),
    ICHAIN_F32(unk100, 40, ICHAIN_CONTINUE),
    ICHAIN_F32(unk104, 40, ICHAIN_STOP),
};

void ObjHana_Init(Actor* thisx, GlobalContext* globalCtx) {
    ObjHana* this = THIS;
    
    Actor_ProcessInitChain(&this->actor, sInitChain);
}

void ObjHana_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void ObjHana_Update(Actor* thisx, GlobalContext* globalCtx) {
}

void ObjHana_Draw(Actor* thisx, GlobalContext* globalCtx) {
    func_800BDFC0(globalCtx, &D_06000500);
}
