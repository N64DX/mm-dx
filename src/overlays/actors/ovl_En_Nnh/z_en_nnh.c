#include "z_en_nnh.h"

#define FLAGS 0x00000019

#define THIS ((EnNnh*)thisx)

void EnNnh_Init(Actor* thisx, GlobalContext* globalCtx);
void EnNnh_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnNnh_Update(Actor* thisx, GlobalContext* globalCtx);
void EnNnh_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80C08828(EnNnh* this);
void func_80C0883C(EnNnh* this, GlobalContext* globalCtx);
void func_80C088A4(EnNnh* this);
void func_80C088B8(EnNnh* this, GlobalContext* globalCtx);

const ActorInit En_Nnh_InitVars = {
    ACTOR_EN_NNH,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_NNH,
    sizeof(EnNnh),
    (ActorFunc)EnNnh_Init,
    (ActorFunc)EnNnh_Destroy,
    (ActorFunc)EnNnh_Update,
    (ActorFunc)EnNnh_Draw
};

ColCylinderInit D_80C08A00 =
{
    { 0x0D, 0x00, 0x09, 0x39, 0x10, 0x01 },
    { 0x01, { 0x00000000, 0x00, 0x00 }, { 0xF7CFFFFF, 0x00, 0x00 }, 0x00, 0x01, 0x01 },
    { 20, 50, 0, { 0, 0, 0 } },
};

extern Gfx D_06001510[];

void EnNnh_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh* this = THIS;

    Actor_SetScale(&this->actor, 0.01f);
    Collision_InitCylinderDefault(globalCtx, &this->collider);
    Collision_InitCylinderWithData(globalCtx, &this->collider, &this->actor, &D_80C08A00);
    this->actor.unk1F = 1;
    this->actor.topPosRot.pos = this->actor.currPosRot.pos;
    this->actor.topPosRot.pos.y += 30.0f;
    func_80C08828(this);
}

void EnNnh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh* this = THIS;

    Collision_FiniCylinder(globalCtx, &this->collider);
}

void func_80C08828(EnNnh* this) {
    this->actionFunc = func_80C0883C;
}

void func_80C0883C(EnNnh* this, GlobalContext* globalCtx) {
    if (func_800B84D0(&this->actor, globalCtx)) {
        func_801518B0(globalCtx, 0x228U, &this->actor);
        func_80C088A4(this);
        return;
    }
    func_800B8614(&this->actor, globalCtx, 100.0f);
}

void func_80C088A4(EnNnh* this) {
    this->actionFunc = func_80C088B8;
}

void func_80C088B8(EnNnh* this, GlobalContext* globalCtx) {
    if (func_800B867C(&this->actor, globalCtx)) {
        func_80C08828(this);
    }
}

void EnNnh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnNnh* this = THIS;
    s32 pad;

    this->actionFunc(this, globalCtx);
    Collision_CylinderMoveToActor(&this->actor, &this->collider);
    Collision_AddOT(globalCtx, &globalCtx->colCheckCtx, &this->collider.base);
}

void EnNnh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext* gfxCtx = globalCtx->state.gfxCtx;
    s32 pad;

    func_8012C28C(gfxCtx);
    gSPMatrix(gfxCtx->polyOpa.p++, SysMatrix_AppendStateToPolyOpaDisp(globalCtx->state.gfxCtx),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(gfxCtx->polyOpa.p++, D_06001510);
}
