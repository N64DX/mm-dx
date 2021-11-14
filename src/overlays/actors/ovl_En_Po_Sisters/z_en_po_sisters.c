/*
 * File: z_en_po_sisters.c
 * Overlay: ovl_En_Po_Sisters
 * Description: Poe Sisters
 */

#include "z_en_po_sisters.h"

#define FLAGS 0x00005015

#define THIS ((EnPoSisters*)thisx)

void EnPoSisters_Init(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Update(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80B1AA88(EnPoSisters* this);
void func_80B1AAE8(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1ABB8(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1AC40(EnPoSisters* this);
void func_80B1ACB8(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SetupIdleFlying(EnPoSisters* this);
void EnPoSisters_IdleFlying(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1AF8C(EnPoSisters* this);
void func_80B1B020(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SetupSpinAttack(EnPoSisters* this);
void EnPoSisters_SpinAttack(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_AttackConnectDrift(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_DamageFlinch(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B5B4(EnPoSisters* this);
void func_80B1B628(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SetupSpinToInvis(EnPoSisters* this);
void EnPoSisters_SpinToInvis(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SetupSpinBack(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SpinBack(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSister_SetupDeathStage1(EnPoSisters* this);
void EnPoSister_DeathStage1(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSister_SetupDeathStage2(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSister_DeathStage2(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SpawnMegClones(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1BE4C(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1BF2C(EnPoSisters* this, GlobalContext* globalCtx);
void EnPoSisters_SetupMegSurroundPlayer(EnPoSisters* this);
void EnPoSisters_MegSurroundPlayer(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1C2E8(EnPoSisters* this);
void func_80B1C340(EnPoSisters* this, GlobalContext* globalCtx);

extern AnimationHeader D_06000114;
extern AnimationHeader D_060008C0;
extern AnimationHeader D_06000A54;
extern AnimationHeader D_06000D40;
extern AnimationHeader D_0600119C;
extern AnimationHeader D_060014CC;
extern Gfx D_06001CB0[];
extern Gfx D_06001DE0[];
extern Gfx D_060027B0[];
extern Gfx D_06002EB8[];
extern Gfx D_06002F88[];
extern Gfx D_06003628[];
extern Gfx D_06003880[];
extern Gfx D_06003DC8[];
extern Gfx D_06004020[];
extern Gfx D_060046E0[];
extern SkeletonHeader D_060065C8;

static Color_RGBA8 D_80B1DA30[] = {
    { 255, 170, 255, 255 },
    { 255, 200, 0, 255 },
    { 0, 170, 255, 255 },
    { 170, 255, 0, 255 },
};

static Color_RGBA8 D_80B1DA40[] = {
    { 100, 0, 255, 255 },
    { 255, 0, 0, 255 },
    { 0, 0, 255, 255 },
    { 0, 150, 0, 255 },
};

const ActorInit En_Po_Sisters_InitVars = {
    ACTOR_EN_PO_SISTERS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_PO_SISTERS,
    sizeof(EnPoSisters),
    (ActorFunc)EnPoSisters_Init,
    (ActorFunc)EnPoSisters_Destroy,
    (ActorFunc)EnPoSisters_Update,
    (ActorFunc)EnPoSisters_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_HIT3,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0xF7CFFFFF, 0x00, 0x08 },
        { 0xF7CBFFFE, 0x00, 0x00 },
        TOUCH_ON | TOUCH_SFX_NORMAL,
        BUMP_ON | BUMP_HOOKABLE,
        OCELEM_ON,
    },
    { 18, 60, 15, { 0, 0, 0 } },
};

static CollisionCheckInfoInit sColChkInfoInit = { 6, 25, 60, 50 };

static DamageTable sDamageTable = {
    /* Deku Nut       */ DMG_ENTRY(0, 0xF),
    /* Deku Stick     */ DMG_ENTRY(1, 0x0),
    /* Horse trample  */ DMG_ENTRY(1, 0x0),
    /* Explosives     */ DMG_ENTRY(1, 0x0),
    /* Zora boomerang */ DMG_ENTRY(1, 0x0),
    /* Normal arrow   */ DMG_ENTRY(1, 0x0),
    /* UNK_DMG_0x06   */ DMG_ENTRY(0, 0x0),
    /* Hookshot       */ DMG_ENTRY(1, 0x0),
    /* Goron punch    */ DMG_ENTRY(1, 0x0),
    /* Sword          */ DMG_ENTRY(1, 0x0),
    /* Goron pound    */ DMG_ENTRY(0, 0x0),
    /* Fire arrow     */ DMG_ENTRY(1, 0x0),
    /* Ice arrow      */ DMG_ENTRY(1, 0x0),
    /* Light arrow    */ DMG_ENTRY(2, 0x4),
    /* Goron spikes   */ DMG_ENTRY(1, 0x0),
    /* Deku spin      */ DMG_ENTRY(1, 0x0),
    /* Deku bubble    */ DMG_ENTRY(1, 0x0),
    /* Deku launch    */ DMG_ENTRY(2, 0x0),
    /* UNK_DMG_0x12   */ DMG_ENTRY(0, 0x1),
    /* Zora barrier   */ DMG_ENTRY(0, 0x0),
    /* Normal shield  */ DMG_ENTRY(0, 0x0),
    /* Light ray      */ DMG_ENTRY(0, 0x0),
    /* Thrown object  */ DMG_ENTRY(1, 0x0),
    /* Zora punch     */ DMG_ENTRY(1, 0x0),
    /* Spin attack    */ DMG_ENTRY(1, 0xE),
    /* Sword beam     */ DMG_ENTRY(0, 0x0),
    /* Normal Roll    */ DMG_ENTRY(0, 0x0),
    /* UNK_DMG_0x1B   */ DMG_ENTRY(0, 0x0),
    /* UNK_DMG_0x1C   */ DMG_ENTRY(0, 0x0),
    /* Unblockable    */ DMG_ENTRY(0, 0x0),
    /* UNK_DMG_0x1E   */ DMG_ENTRY(0, 0x0),
    /* Powder Keg     */ DMG_ENTRY(1, 0x0),
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 7, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 6000, ICHAIN_STOP),
};

void EnPoSisters_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnPoSisters* this = THIS;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 50.0f);
    SkelAnime_Init(globalCtx, &this->skelAnime, &D_060065C8, &D_060014CC, this->jointTable, this->morphTable, 12);
    this->color.r = 255;
    this->color.g = 255;
    this->color.b = 210;
    this->color.a = 255;
    this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, &this->lightInfo);
    Lights_PointGlowSetInfo(&this->lightInfo, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, 0,
                            0, 0, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &sDamageTable, &sColChkInfoInit);
    this->sisterType = ENPOSISTERS_GET_TYPE(thisx);
    this->actor.hintId = this->sisterType + 80;
    this->megCloneNum = ENPOSISTERS_GET_MEG_CLONE(thisx);
    this->unk_18E = 32;
    this->zTimer = 20;
    this->fireCount = 1;
    this->flags191 = 0x20;
    this->megDistToPlayer = 110.0f;
    thisx->flags &= ~1; // targetable OFF

    if (ENPOSISTERS_GET_1000(&this->actor)) {
        func_80B1AA88(this);
    } else if (this->sisterType == POSISTER_TYPE_MEG) {
        if (this->megCloneNum == 0) {
            this->actor.colChkInfo.health = 8;
            this->collider.info.toucher.damage = 16;
            this->collider.base.ocFlags1 = (OC1_TYPE_PLAYER | OC1_ON);
            EnPoSisters_SpawnMegClones(this, globalCtx);
            func_80B1C2E8(this);
        } else {
            this->actor.flags &= ~(0x4000 | 0x200);
            this->collider.info.elemType = ELEMTYPE_UNK4;
            this->collider.info.bumper.dmgFlags |= (0x40000 | 0x1);
            this->collider.base.ocFlags1 = OC1_NONE;
            func_80B1BE4C(this, NULL);
        }
    } else {
        func_80B1C2E8(this);
    }
    this->actor.params &= 0xFF;
}

void EnPoSisters_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnPoSisters* this = THIS;

    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
    Collider_DestroyCylinder(globalCtx, &this->collider);
}

// update the fires as they spread away from the dying poe I think
// only used once, arg2 is this->stateTimer
void func_80B1A648(EnPoSisters* this, s32 timer, Vec3f* pos) {
    s32 i;
    Vec3f* ptr;
    f32 timerf = timer;

    for (i = 0; i < this->fireCount; i++) {
        ptr = &this->fireLoc[i];
        ptr->x = Math_SinS(this->actor.shape.rot.y + (this->stateTimer * 0x800) + (i * 0x2000)) * (SQ(timerf) * 0.1f) +
                 pos->x;
        ptr->z = Math_CosS(this->actor.shape.rot.y + (this->stateTimer * 0x800) + (i * 0x2000)) * (SQ(timerf) * 0.1f) +
                 pos->z;
        ptr->y = pos->y + timerf;
    }
}

void EnPoSisters_MatchPlayerXZ(EnPoSisters* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);
    f32 dist;

    if ((this->megCloneNum == REALMEG) || (this->actionFunc != EnPoSisters_DamageFlinch)) {
        if (((player->swordState == 0) || (player->swordAnimation >= 30)) &&
            ((player->actor.world.pos.y - player->actor.floorHeight) < 1.0f)) {
            Math_StepToF(&this->megDistToPlayer, 110.0f, 3.0f);
        } else {
            Math_StepToF(&this->megDistToPlayer, 170.0f, 10.0f);
        }
        dist = this->megDistToPlayer;
    } else if (this->megCloneNum != REALMEG) {
        dist = this->actor.parent->xzDistToPlayer;
    }

    this->actor.world.pos.x = (Math_SinS(BINANG_ROT180(this->actor.shape.rot.y)) * dist) + player->actor.world.pos.x;
    this->actor.world.pos.z = (Math_CosS(BINANG_ROT180(this->actor.shape.rot.y)) * dist) + player->actor.world.pos.z;
}

void EnPoSisters_MatchPlayerY(EnPoSisters* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);

    // rubber band to player height
    Math_ApproachF(&this->actor.world.pos.y, player->actor.world.pos.y + 5.0f, 0.5f, 3.0f);

    if (this->unk_18E == 0) {
        this->unk_18E = 32;
        if (this->unk_18E) {}
    }

    DECR(this->unk_18E);

    // random float/flying wobble
    this->actor.world.pos.y += (2.0f + (0.5f * Rand_ZeroOne())) * Math_SinS(this->unk_18E * 0x800);

    // fully opaque
    if ((this->color.a == 255) && (this->actionFunc != EnPoSisters_SpinAttack) && (this->actionFunc != func_80B1B020)) {
        if (this->actionFunc == func_80B1B628) {
            func_800B9010(&this->actor, NA_SE_EN_PO_AWAY - SFX_FLAG);
        } else {
            func_800B9010(&this->actor, NA_SE_EN_PO_FLY - SFX_FLAG);
        }
    }
}

// every frame of red
void func_80B1A9B0(EnPoSisters* this, GlobalContext* globalCtx) {
    if (this->actor.isTargeted && (this->color.a == 255)) {
        DECR(this->zTimer);
    } else {
        this->zTimer = 20;
    }

    if (this->color.a == 0) {
        DECR(this->inivisTimer);
    }

    if ((this->actionFunc != func_80B1B020) && (this->actionFunc != EnPoSisters_SpinAttack) &&
        (this->actionFunc != EnPoSisters_DamageFlinch)) {
        if (this->zTimer == 0) {
            EnPoSisters_SetupSpinToInvis(this);
        } else if ((this->inivisTimer == 0) && (this->color.a == 0)) {
            EnPoSisters_SetupSpinBack(this, globalCtx);
        }
    }
}

// does not go off in red
void func_80B1AA88(EnPoSisters* this) {
    Animation_MorphToLoop(&this->skelAnime, &D_060014CC, -3.0f);
    this->actor.speedXZ = 0.0f;
    this->stateTimer = Rand_S16Offset(100, 50);
    this->actionFunc = func_80B1AAE8;
}

// does not go off in red
void func_80B1AAE8(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    if (DECR(this->stateTimer) == 0) {
        this->stateTimer = Rand_S16Offset(100, 50);
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH2);
    }
}

// does not go off in red
void func_80B1AB5C(EnPoSisters* this) {
    Animation_MorphToLoop(&this->skelAnime, &D_060014CC, -3.0f);
    this->stateTimer = Rand_S16Offset(2, 3);
    this->actor.speedXZ = 0.0f;
    this->actionFunc = func_80B1ABB8;
}

// does not go off in red
void func_80B1ABB8(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    if (Animation_OnFrame(&this->skelAnime, 0.0f)) {
        if (this->stateTimer != 0) {
            this->stateTimer--;
        }
    }

    if ((this->stateTimer == 0) || (this->actor.xzDistToPlayer < 600.0f)) {
        func_80B1AC40(this);
    }
}

// goes off once after rolling attack
void func_80B1AC40(EnPoSisters* this) {
    if (this->actionFunc != EnPoSisters_IdleFlying) {
        Animation_MorphToLoop(&this->skelAnime, &D_06000D40, -3.0f);
    }
    this->stateTimer = Rand_S16Offset(15, 3);
    this->flags191 |= (0x6 | 0x1);
    this->actionFunc = func_80B1ACB8;
}

// sometimes goes off once behind the above
void func_80B1ACB8(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    Math_StepToF(&this->actor.speedXZ, 1.0f, 0.2f);
    if (Animation_OnFrame(&this->skelAnime, 0.0f)) {
        if (this->stateTimer != 0) {
            this->stateTimer--;
        }
    }

    if ((this->actor.xzDistToPlayer < 600.0f) && (fabsf(this->actor.yDistToPlayer + 5.0f) < 30.0f)) {
        EnPoSisters_SetupIdleFlying(this);
    } else if ((this->stateTimer == 0) && Math_StepToF(&this->actor.speedXZ, 0.0f, 0.2f)) {
        func_80B1AB5C(this);
    }

    if (this->actor.bgCheckFlags & 8) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Actor_YawToPoint(&this->actor, &this->actor.home.pos), 0x71C);
    } else if (Actor_XZDistanceToPoint(&this->actor, &this->actor.home.pos) > 600.0f) {
        Math_ScaledStepToS(&this->actor.world.rot.y, Actor_YawToPoint(&this->actor, &this->actor.home.pos), 0x71C);
    }
}

void EnPoSisters_SetupIdleFlying(EnPoSisters* this) {
    this->actionFunc = EnPoSisters_IdleFlying;
}

// idle, flying around aimlessly
void EnPoSisters_IdleFlying(EnPoSisters* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);
    s16 sp22;

    SkelAnime_Update(&this->skelAnime);
    sp22 = this->actor.yawTowardsPlayer - player->actor.shape.rot.y;
    Math_StepToF(&this->actor.speedXZ, 2.0f, 0.2f);

    if (sp22 > 0x3000) {
        Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer + 0x3000, 0x71C);
    } else if (sp22 < -0x3000) {
        Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer - 0x3000, 0x71C);
    } else {
        Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0x71C);
    }

    if ((this->actor.xzDistToPlayer < 320.0f) && (fabsf(this->actor.yDistToPlayer + 5.0f) < 30.0f)) {
        func_80B1AF8C(this);
    } else if (this->actor.xzDistToPlayer > 720.0f) {
        func_80B1AC40(this);
    }
}

void func_80B1AF8C(EnPoSisters* this) {
    if (this->color.a != 0) {
        this->collider.base.colType = COLTYPE_METAL;
        this->collider.base.acFlags |= AC_HARD;
    }

    Animation_MorphToLoop(&this->skelAnime, &D_06000114, -5.0f);
    this->actor.speedXZ = 0.0f;
    this->stateTimer = Animation_GetLastFrame(&D_06000114.common) * 3 + 3;
    this->flags191 &= ~2;
    this->actionFunc = func_80B1B020;
}

// gaining speed for spin attack
void func_80B1B020(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    if (this->stateTimer != 0) {
        this->stateTimer--;
    }

    this->actor.shape.rot.y += ((s32)((this->skelAnime.endFrame + 1.0f) * 3.0f) - this->stateTimer) * 0x180;

    if ((this->stateTimer == 18) || (this->stateTimer == 7)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_ROLL);
    } else if (this->stateTimer == 0) {
        EnPoSisters_SetupSpinAttack(this);
    }
}

// setup spin dive
void EnPoSisters_SetupSpinAttack(EnPoSisters* this) {
    this->actor.speedXZ = 5.0f;
    if (this->sisterType == POSISTER_TYPE_MEG) {
        this->collider.base.colType = COLTYPE_METAL;
        this->collider.base.acFlags |= AC_HARD;
        Animation_MorphToLoop(&this->skelAnime, &D_06000114, -5.0f);
    }
    this->stateTimer = 5;
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->flags191 |= 8;
    this->actionFunc = EnPoSisters_SpinAttack;
}

// action: spin attack dive at player
void EnPoSisters_SpinAttack(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    if (Animation_OnFrame(&this->skelAnime, 0.0f)) {
        if (this->stateTimer != 0) {
            this->stateTimer--;
        }
    }

    this->actor.shape.rot.y += (s32)(1152.0f * this->skelAnime.endFrame);

    if (this->stateTimer == 0) {
        s16 rotY = this->actor.shape.rot.y - this->actor.world.rot.y;

        if (ABS_ALT(rotY) < 0x1000) {
            if (this->sisterType != POSISTER_TYPE_MEG) {
                this->collider.base.colType = COLTYPE_HIT3;
                this->collider.base.acFlags &= ~AC_HARD;
                func_80B1AC40(this);
            } else {
                Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH2);
                func_80B1BE4C(this, globalCtx);
            }
        }
    }
    if (Animation_OnFrame(&this->skelAnime, 1.0f)) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_ROLL);
    }
}

void EnPoSisters_SetupAttackConnect(EnPoSisters* this) {
    Animation_MorphToLoop(&this->skelAnime, &D_06000D40, -3.0f);
    this->actor.world.rot.y = BINANG_ROT180(this->actor.yawTowardsPlayer);
    if (this->sisterType != POSISTER_TYPE_MEG) {
        this->collider.base.colType = COLTYPE_HIT3;
        this->collider.base.acFlags &= ~AC_HARD;
    }
    this->actionFunc = EnPoSisters_AttackConnectDrift;
}

void EnPoSisters_AttackConnectDrift(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    this->actor.shape.rot.y -= (s16)(this->actor.speedXZ * 10.0f * 128.0f);

    if (Math_StepToF(&this->actor.speedXZ, 0.0f, 0.1f)) { // wait to stop moving
        this->actor.world.rot.y = this->actor.shape.rot.y;
        if (this->sisterType != POSISTER_TYPE_MEG) {
            func_80B1AC40(this);
        } else {
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH2);
            func_80B1BE4C(this, globalCtx);
        }
    }
}

void EnPoSisters_SetupDamageFlinch(EnPoSisters* this) {
    Animation_MorphToPlayOnce(&this->skelAnime, &D_060008C0, -3.0f);
    if (this->collider.base.ac != NULL) {
        func_800BE504(&this->actor, &this->collider); // ?
    }

    if (this->sisterType != POSISTER_TYPE_MEG) {
        this->actor.speedXZ = 10.0f;
    }

    this->flags191 &= ~(0x8 | 0x2 | 0x1);
    func_800BCB70(&this->actor, 0x4000, 255, 0, 16);
    this->actionFunc = EnPoSisters_DamageFlinch;
}

void EnPoSisters_DamageFlinch(EnPoSisters* this, GlobalContext* globalCtx) {

    if (SkelAnime_Update(&this->skelAnime) && !(this->actor.flags & 0x8000)) {
        if (this->actor.colChkInfo.health != 0) {
            if (this->sisterType != POSISTER_TYPE_MEG) {
                func_80B1B5B4(this);
            } else if (this->megCloneNum != REALMEG) {
                func_80B1BE4C(this, NULL);
            } else {
                func_80B1BE4C(this, globalCtx);
            }
        } else {
            EnPoSister_SetupDeathStage1(this);
        }
    }

    if (this->megCloneNum != REALMEG) {
        s32 alpha;
        Math_ScaledStepToS(&this->actor.shape.rot.y, this->actor.parent->shape.rot.y,
                           (this->megCloneNum == 2) ? 0x800 : 0x400);
        alpha = ((this->skelAnime.endFrame - this->skelAnime.curFrame) * 255.0f) / this->skelAnime.endFrame;
        this->color.a = CLAMP(alpha, 0, 255);
        this->actor.world.pos.y = this->actor.parent->world.pos.y;
        EnPoSisters_MatchPlayerXZ(this, globalCtx);
    } else if (this->sisterType != POSISTER_TYPE_MEG) {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.5f);
    }
}

// still alive, after flinch
void func_80B1B5B4(EnPoSisters* this) {
    Animation_MorphToLoop(&this->skelAnime, &D_06000A54, -3.0f);
    this->actor.world.rot.y = BINANG_ROT180(this->actor.shape.rot.y);
    this->stateTimer = 5;
    this->flags191 |= (0x8 | 0x2 | 0x1);
    this->actor.speedXZ = 5.0f;
    this->actionFunc = func_80B1B628;
}

// post flinch shake? a few frames of shock
void func_80B1B628(EnPoSisters* this, GlobalContext* globalCtx) {
    SkelAnime_Update(&this->skelAnime);
    Math_ScaledStepToS(&this->actor.world.rot.y, BINANG_ROT180(this->actor.yawTowardsPlayer), 0x71C);
    if (Animation_OnFrame(&this->skelAnime, 0.0f)) {
        if (this->stateTimer != 0) {
            this->stateTimer--;
        }
    }

    if (this->actor.bgCheckFlags & 8) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        this->flags191 |= 2;
        EnPoSisters_SetupSpinToInvis(this);
    } else if ((this->stateTimer == 0) && (this->actor.xzDistToPlayer > 480.0f)) {
        this->actor.world.rot.y = this->actor.shape.rot.y;
        func_80B1AC40(this);
    }
}

void EnPoSisters_SetupSpinToInvis(EnPoSisters* this) {
    Animation_Change(&this->skelAnime, &D_0600119C, 1.5f, 0.0f, Animation_GetLastFrame(&D_0600119C.common), 2, -3.0f);
    this->inivisTimer = 100;
    this->actor.speedXZ = 0.0f;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->flags191 &= ~(0x4 | 0x1);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_DISAPPEAR);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH2);
    this->actionFunc = EnPoSisters_SpinToInvis;
}

void EnPoSisters_SpinToInvis(EnPoSisters* this, GlobalContext* globalCtx) {
    if (SkelAnime_Update(&this->skelAnime)) {
        this->color.a = 0;
        this->collider.info.bumper.dmgFlags = (0x40000 | 0x1);
        func_80B1AC40(this);
    } else {
        s32 alpha = ((this->skelAnime.endFrame - this->skelAnime.curFrame) * 255.0f) / this->skelAnime.endFrame;
        this->color.a = CLAMP(alpha, 0, 255);
    }
}

void EnPoSisters_SetupSpinBack(EnPoSisters* this, GlobalContext* globalCtx) {
    Animation_Change(&this->skelAnime, &D_0600119C, 1.5f, 0.0f, Animation_GetLastFrame(&D_0600119C.common), 2, -3.0f);
    if (this->sisterType == POSISTER_TYPE_MEG) {
        this->megDistToPlayer = 110.0f;
        EnPoSisters_MatchPlayerXZ(this, globalCtx);
        this->color.a = 0;
        this->actor.draw = EnPoSisters_Draw;
    } else {
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }

    this->stateTimer = 15;
    this->actor.speedXZ = 0.0f;
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_STALKIDS_APPEAR);
    this->flags191 &= ~0x1;
    this->actionFunc = EnPoSisters_SpinBack;
}

void EnPoSisters_SpinBack(EnPoSisters* this, GlobalContext* globalCtx) {
    if (SkelAnime_Update(&this->skelAnime)) {
        this->color.a = 255; // fully visible
        if (this->sisterType != POSISTER_TYPE_MEG) {
            this->flags191 |= 1;
            this->collider.info.bumper.dmgFlags = ~(0x8000000 | 0x200000 | 0x100000 | 0x40000 | 0x1);

            DECR(this->stateTimer);

            if (this->stateTimer == 0) {
                this->zTimer = 20;
                func_80B1AC40(this);
            }
        } else {
            EnPoSisters_SetupMegSurroundPlayer(this);
        }
    } else {
        s32 alpha = (this->skelAnime.curFrame * 255.0f) / this->skelAnime.endFrame;

        this->color.a = CLAMP(alpha, 0, 255);
        if (this->sisterType == POSISTER_TYPE_MEG) {
            EnPoSisters_MatchPlayerXZ(this, globalCtx);
        }
    }
}

void EnPoSister_SetupDeathStage1(EnPoSisters* this) {
    this->stateTimer = 0;
    this->actor.speedXZ = 0.0f;
    this->actor.world.pos.y += 42.0f;
    this->actor.shape.yOffset = -6000.0f;
    this->actor.flags &= ~1; // targetable OFF
    this->flags191 = 0;
    this->actionFunc = EnPoSister_DeathStage1;
}

// first half, stunned 
void EnPoSister_DeathStage1(EnPoSisters* this, GlobalContext* globalCtx) {
    s32 i;
    s32 end = this->fireCount;

    this->stateTimer++;
    end++;
    if (end > ARRAY_COUNT(this->fireLoc)) {
        this->fireCount = 8;
    } else {
        this->fireCount = end;
    }

    for (end = this->fireCount - 1; end > 0; end--) {
        this->fireLoc[end] = this->fireLoc[end - 1];
    }

    this->fireLoc[0].x =
        (Math_SinS((this->actor.shape.rot.y + (this->stateTimer * 0x3000)) - 0x4000) * (3000.0f * this->actor.scale.x)) +
        this->actor.world.pos.x;
    this->fireLoc[0].z =
        (Math_CosS((this->actor.shape.rot.y + (this->stateTimer * 0x3000)) - 0x4000) * (3000.0f * this->actor.scale.x)) +
        this->actor.world.pos.z;

    if (this->stateTimer < 8) {
        this->fireLoc[0].y = this->fireLoc[1].y - 9.0f;
    } else {
        this->fireLoc[0].y = this->fireLoc[1].y + 2.0f;
        if (this->stateTimer >= 16) {
            if (Math_StepToF(&this->actor.scale.x, 0.0f, 0.001f)) {
                EnPoSister_SetupDeathStage2(this, globalCtx);
            }
            this->actor.scale.z = this->actor.scale.x;
            this->actor.scale.y = this->actor.scale.x;
        }
    }

    if (this->stateTimer == 16) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_WIZ_DISAPPEAR);
    }
}

// fading away, the fire has split and circles outward and away
void EnPoSister_SetupDeathStage2(EnPoSisters* this, GlobalContext* globalCtx) {
    this->stateTimer = 0;
    this->actor.world.pos.y = this->fireLoc[0].y;
    Item_DropCollectibleRandom(globalCtx, &this->actor, &this->actor.world.pos, 0x80);
    this->actionFunc = EnPoSister_DeathStage2;
}

// might be where meg never dissapears, she might start with stateTimer > 32
void EnPoSister_DeathStage2(EnPoSisters* this, GlobalContext* globalCtx) {
    this->stateTimer++;

    if (this->stateTimer == 32) { // waiting for death animation to finish
        Actor_MarkForDeath(&this->actor);
    } else {
        func_80B1A648(this, this->stateTimer, &this->actor.world.pos);
    }
}

void EnPoSisters_SpawnMegClones(EnPoSisters* this, GlobalContext* globalCtx) {
    Actor* clone1 =
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_PO_SISTERS, this->actor.world.pos.x,
                           this->actor.world.pos.y, this->actor.world.pos.z, 0, 0, 0, 0x400);
    Actor* clone2 =
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_PO_SISTERS, this->actor.world.pos.x,
                           this->actor.world.pos.y, this->actor.world.pos.z, 0, 0, 0, 0x800);
    Actor* clone3 =
        Actor_SpawnAsChild(&globalCtx->actorCtx, &this->actor, globalCtx, ACTOR_EN_PO_SISTERS, this->actor.world.pos.x,
                           this->actor.world.pos.y, this->actor.world.pos.z, 0, 0, 0, 0xC00);

    // if we cannot spawn all clones, abort
    if ((clone1 == NULL) || (clone2 == NULL) || (clone3 == NULL)) {
        if (clone1 != NULL) {
            Actor_MarkForDeath(clone1);
        }

        if (clone2 != NULL) {
            Actor_MarkForDeath(clone2);
        }

        if (clone3 != NULL) {
            Actor_MarkForDeath(clone3);
        }
        Actor_MarkForDeath(&this->actor);
    }
}

/**
  * globalCtx is optional, passed only when spawning an Effect
  * meg function, where NULL is passed in at least one spot when NOT real meg
  *  think this is meg dissapearing into invisible
  */
void func_80B1BE4C(EnPoSisters* this, GlobalContext* globalCtx) {
    Vec3f effectLoc;

    this->actor.draw = NULL;
    this->actor.flags &= ~1; // targetable OFF
    this->inivisTimer = 100;
    this->flags191 = 0x20;
    this->collider.base.colType = COLTYPE_HIT3;
    this->collider.base.acFlags &= ~AC_HARD;

    if (globalCtx) {
        effectLoc.x = this->actor.world.pos.x;
        effectLoc.y = this->actor.world.pos.y + 45.0f;
        effectLoc.z = this->actor.world.pos.z;
        // spawns EffectSsDeadDb
        func_800B3030(globalCtx, &effectLoc, &D_801D15B0, &D_801D15B0, 150, 0, 3);
    }

    Lights_PointSetColorAndRadius(&this->lightInfo, 0, 0, 0, 0);
    this->actionFunc = func_80B1BF2C;
}

// uses parent assume meg
// 
void func_80B1BF2C(EnPoSisters* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);
    EnPoSisters* parent = (EnPoSisters*)this->actor.parent;

    if (this->megCloneNum == REALMEG) {
        DECR(this->inivisTimer);

        if (this->inivisTimer == 0) {
            s32 rand = Rand_ZeroFloat(4.0f);

            this->actor.shape.rot.y = (rand * 0x4000) + this->actor.yawTowardsPlayer;
            this->actor.world.pos.y = player->actor.world.pos.y + 5.0f;
            EnPoSisters_SetupSpinBack(this, globalCtx);
        }
    
    } else if (parent->actionFunc == EnPoSisters_SpinBack) {
        this->actor.shape.rot.y = this->actor.parent->shape.rot.y + (this->megCloneNum * 0x4000);
        this->actor.world.pos.y = player->actor.world.pos.y + 5.0f;
        EnPoSisters_SetupSpinBack(this, globalCtx);

    } else if (parent->actionFunc == EnPoSister_DeathStage1) {
        Actor_MarkForDeath(&this->actor);
    }
}

void EnPoSisters_SetupMegSurroundPlayer(EnPoSisters* this) {
    Animation_MorphToLoop(&this->skelAnime, &D_06000D40, -3.0f);
    this->color.a = 255;
    this->stateTimer = 300;
    this->inivisTimer = 3;
    this->flags191 |= (0x8 | 0x1);
    this->actor.flags |= 1; // targetable ON
    this->actionFunc = EnPoSisters_MegSurroundPlayer;
}

void EnPoSisters_MegSurroundPlayer(EnPoSisters* this, GlobalContext* globalCtx) {
    EnPoSisters* parent;

    DECR(this->stateTimer);

    if (this->inivisTimer > 0) {
        if (this->stateTimer >= 16) {
            SkelAnime_Update(&this->skelAnime);
            if (this->megCloneNum == 0) {
                // spin real meg?
                if (ABS_ALT(16 - this->unk_18E) < 14) {
                    this->actor.shape.rot.y +=
                        (s16)((0x580 - (this->inivisTimer * 0x180)) * fabsf(Math_SinS(this->unk_18E * 0x800)));
                }

                if ((this->stateTimer >= 284) || (this->stateTimer < 31)) {
                    this->flags191 |= 0x40;
                } else {
                    this->flags191 &= ~0x40;
                }
            } else {
                this->actor.shape.rot.y = this->actor.parent->shape.rot.y + (this->megCloneNum * 0x4000);
            }
        }
    }

    if (this->megCloneNum == 0) {
        if ((this->stateTimer >= 284) || ((this->stateTimer < 31) && (this->stateTimer >= 16))) {
            this->flags191 |= 0x40;
        } else {
            this->flags191 &= ~0x40;
        }
    }

    if (this->stateTimer == 0) {
        if (this->megCloneNum == 0) {
            EnPoSisters_SetupSpinAttack(this);
        } else {
            func_80B1BE4C(this, globalCtx);
        }
    } else if (this->megCloneNum != 0) {
        parent = (EnPoSisters*)this->actor.parent;
        if (parent->actionFunc == EnPoSisters_DamageFlinch) {
            EnPoSisters_SetupDamageFlinch(this);
        }
    } else if (this->inivisTimer == 0) {
        this->inivisTimer = -15;
    } else if (this->inivisTimer < 0) {
        this->inivisTimer++;
        if (this->inivisTimer == 0) {
            EnPoSisters_SetupSpinAttack(this);
        }
    }
    EnPoSisters_MatchPlayerXZ(this, globalCtx);
}

// called from init
void func_80B1C2E8(EnPoSisters* this) {
    Animation_PlayOnce(&this->skelAnime, &D_0600119C);
    Audio_PlayActorSound2(&this->actor, NA_SE_EN_STALKIDS_APPEAR);
    this->color.a = 0;
    this->flags191 = 0x20;
    this->actionFunc = func_80B1C340;
}


void func_80B1C340(EnPoSisters* this, GlobalContext* globalCtx) {
    if (SkelAnime_Update(&this->skelAnime)) {
        this->color.a = 255;
        this->actor.flags |= 1; // targetable ON
        this->flags191 |= (0x10 | 0x8);
        if (this->sisterType == POSISTER_TYPE_MEG) {
            func_80B1BE4C(this, globalCtx);
        } else {
            func_80B1AC40(this);
        }
    } else {
        f32 alphaPercent = this->skelAnime.curFrame / this->skelAnime.endFrame;
        s32 alpha = 255.0f * alphaPercent;

        this->color.a = CLAMP(alpha, 0, 255);
    }
}

// combat collider? laughs and drops arrows for meg clone
void func_80B1C408(EnPoSisters* this, GlobalContext* globalCtx) {
    Vec3f pos;

    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        func_800BE258(&this->actor, &this->collider.info);

        if (this->megCloneNum != 0) {
            ((EnPoSisters*)this->actor.parent)->inivisTimer--;
            Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_LAUGH2);
            func_80B1BE4C(this, globalCtx);
            if (Rand_ZeroOne() < 0.2f) {
                pos.x = this->actor.world.pos.x;
                pos.y = this->actor.world.pos.y;
                pos.z = this->actor.world.pos.z;
                Item_DropCollectible(globalCtx, &pos, ITEM00_ARROWS_10);
            }
        } else if (this->collider.base.colType != 9) {
            if (this->actor.colChkInfo.damageEffect == 0xF) {
                this->actor.world.rot.y = this->actor.shape.rot.y;
                this->flags191 |= 2;
                EnPoSisters_SetupSpinBack(this, globalCtx);
            } else if ((this->sisterType == POSISTER_TYPE_MEG) && (this->actor.colChkInfo.damageEffect == 0xE) &&
                       (this->actionFunc == EnPoSisters_MegSurroundPlayer)) {
                if (this->inivisTimer == 0) {
                    this->inivisTimer = -45;
                }
            } else {
                if (Actor_ApplyDamage(&this->actor)) {
                    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_DAMAGE);
                } else {
                    Enemy_StartFinishingBlow(globalCtx, &this->actor);
                    Audio_PlayActorSound2(&this->actor, NA_SE_EN_PO_SISTER_DEAD);
                }

                if (this->actor.colChkInfo.damageEffect == 4) {
                    this->unk_2F0 = 4.0f;
                    this->unk_2F4 = 0.5f;
                    Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_CLEAR_TAG,
                                this->collider.info.bumper.hitPos.x, this->collider.info.bumper.hitPos.y,
                                this->collider.info.bumper.hitPos.z, 0, 0, 0, CLEAR_TAG_LARGE_LIGHT_RAYS);
                }
                EnPoSisters_SetupDamageFlinch(this);
            }
        }
    }
}

void EnPoSisters_Update(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnPoSisters* this = THIS;
    f32 alpha;
    Vec3f pos;
    s32 unusedArg; // func needs a pointer to value, but posister ignores it

    if (this->collider.base.atFlags & AT_HIT) { // collided with player
        this->collider.base.atFlags &= ~AT_HIT;
        EnPoSisters_SetupAttackConnect(this);
    }

    func_80B1C408(this, globalCtx);
    if (this->flags191 & 0x4) {
        func_80B1A9B0(this, globalCtx);
    }

    this->actionFunc(this, globalCtx);

    if (this->flags191 & 0x8) {
        EnPoSisters_MatchPlayerY(this, globalCtx);
    }

    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);

    if (this->flags191 & 0x10) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 0.0f, 5);
    } else {
        pos.x = this->actor.world.pos.x;
        pos.y = this->actor.world.pos.y + 10.0f;
        pos.z = this->actor.world.pos.z;
        this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &unusedArg, &this->actor, &pos);
    }

    this->actor.shape.shadowAlpha = this->color.a;
    Actor_SetHeight(&this->actor, 40.0f);

    // ??
    if (this->unk_2F0 > 0.0f) {
        Math_StepToF(&this->unk_2F0, 0.0f, 0.05f);
        if (this->color.a != 255) {
            alpha = this->color.a * (1.0f / 255);
            if (alpha < this->color.a) {
                this->unk_2F0 = alpha;
            }
        }

        this->unk_2F4 = (this->unk_2F0 + 1.0f) * 0.25f;
        this->unk_2F4 = CLAMP_MAX(this->unk_2F4, 0.5f);
    }

    if (this->flags191 & (0x10 | 0x8 | 0x4 | 0x2 | 0x1)) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if ((this->actionFunc == EnPoSisters_SpinAttack) || (this->actionFunc == func_80B1B020)) {
            this->fireCount++;
            this->fireCount = CLAMP_MAX(this->fireCount, ARRAY_COUNT(this->fireLoc));
        } else if (this->actionFunc != EnPoSister_DeathStage1) {
            this->fireCount = CLAMP_MIN(this->fireCount - 1, 1);
        }

        if (this->actionFunc == EnPoSisters_SpinAttack) {
            this->actor.flags |= 0x1000000;
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }

        if (this->flags191 & 0x1) {
            CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }

        if (this->actionFunc != func_80B1BF2C) {
            CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
        }

        if (this->actionFunc == func_80B1B628) {
            this->actor.shape.rot.y = BINANG_ROT180(this->actor.world.rot.y);
        } else if (this->flags191 & 0x2) {
            this->actor.shape.rot.y = this->actor.world.rot.y;
        }
    }
}

// adjust colors?
void func_80B1C974(EnPoSisters* this) {
    if (this->skelAnime.animation == &D_06000114) {
        this->color.r = CLAMP_MAX(this->color.r + 5, 255);
        this->color.g = CLAMP_MIN(this->color.g - 5, 50);
        this->color.b = CLAMP_MIN(this->color.b - 5, 0);
    } else if (this->skelAnime.animation == &D_06000A54) {
        this->color.r = CLAMP_MAX(this->color.r + 5, 80);
        this->color.g = CLAMP_MAX(this->color.g + 5, 255);
        this->color.b = CLAMP_MAX(this->color.b + 5, 225);
    } else if (this->skelAnime.animation == &D_060008C0) {
        if (this->actor.colorFilterTimer & 0x2) {
            this->color.r = 0;
            this->color.g = 0;
            this->color.b = 0;
        } else {
            this->color.r = 80;
            this->color.g = 255;
            this->color.b = 225;
        }
    } else {
        this->color.r = CLAMP_MAX(this->color.r + 5, 255);
        this->color.g = CLAMP_MAX(this->color.g + 5, 255);

        if (this->color.b > 210) {
            if (this->color.b && this->color.b && this->color.b) {}
            this->color.b = CLAMP_MIN(this->color.b - 5, 210);
        } else {
            this->color.b = CLAMP_MAX(this->color.b + 5, 210);
        }
    }
}

s32 EnPoSisters_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                                 Actor* thisx, Gfx** gfx) {
    static Gfx* D_80B1DACC[] = {
        D_06001DE0,
        D_06002F88,
        D_06003628,
        D_06003DC8,
    };
    static Gfx* D_80B1DADC[] = {
        D_06001CB0,
        D_06002EB8,
        D_06003880,
        D_06004020,
    };
    static Color_RGBA8 D_80B1DAEC[] = {
        { 80, 0, 100, 0 },
        { 80, 15, 0, 0 },
        { 0, 70, 50, 0 },
        { 70, 70, 0, 0 },
    };
    EnPoSisters* this = THIS;

    if ((limbIndex == 1) && (this->flags191 & 0x40)) {
        if (this->stateTimer >= 284) {
            rot->x += (this->stateTimer - 284) * 0x1000;
        } else {
            rot->x += (this->stateTimer - 15) * 0x1000;
        }
    }

    if ((this->color.a == 0) || (limbIndex == 8) || ((this->actionFunc == EnPoSister_DeathStage1) && (this->stateTimer >= 8))) {
        *dList = NULL;
    } else if (limbIndex == 9) {
        *dList = D_80B1DACC[this->sisterType];
    } else if (limbIndex == 10) {
        *dList = D_80B1DADC[this->sisterType];

        gDPPipeSync((*gfx)++);
        gDPSetEnvColor((*gfx)++, this->color.r, this->color.g, this->color.b, this->color.a);
    } else if (limbIndex == 11) {
        Color_RGBA8* colour = &D_80B1DAEC[this->sisterType];

        gDPPipeSync((*gfx)++);
        gDPSetEnvColor((*gfx)++, colour->r, colour->g, colour->b, this->color.a);
    }

    return false;
}

void EnPoSisters_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx,
                              Gfx** gfx) {
    static Vec3f D_80B1DAFC = { 1000.0f, -1700.0f, 0.0f };
    static s8 D_80B1DB08[] = {
        -1, -1, 0, 1, 2, -1, 3, -1, -1, -1, -1, -1,
    };
    EnPoSisters* this = THIS;
    s32 end;
    f32 brightness;

    if (D_80B1DB08[limbIndex] != -1) {
        Matrix_GetStateTranslation(&this->unk_28C[D_80B1DB08[limbIndex]]);
    } else if (limbIndex == 9) {
        Matrix_GetStateTranslationAndScaledY(-2500.0f, &this->unk_28C[4]);
        Matrix_GetStateTranslationAndScaledY(3000.0f, &this->unk_28C[5]);
    } else if (limbIndex == 10) {
        Matrix_GetStateTranslationAndScaledY(-4000.0f, &this->unk_28C[6]);
    } else if (limbIndex == 11) {
        Matrix_GetStateTranslationAndScaledX(3000.0f, &this->unk_28C[7]);
    }

    if ((this->actionFunc == EnPoSister_DeathStage1) && (this->stateTimer >= 8) && (limbIndex == 9)) {
        gSPMatrix((*gfx)++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList((*gfx)++, D_060046E0);
    }

    if (limbIndex == 8) {
        if (this->flags191 & 0x20) {
            for (end = this->fireCount - 1; end > 0; end--) {
                this->fireLoc[end] = this->fireLoc[end - 1];
            }

            Matrix_MultiplyVector3fByState(&D_80B1DAFC, this->fireLoc);
        }

        if (this->fireCount > 0) {
            Color_RGBA8* sp38 = &D_80B1DA30[this->sisterType];

            brightness = Rand_ZeroFloat(0.3f) + 0.7f; // flickering light level

            if (this->actionFunc == EnPoSister_DeathStage2) {
                Lights_PointNoGlowSetInfo(&this->lightInfo, this->fireLoc[0].x, this->fireLoc[0].y + 15.0f,
                                          this->fireLoc[0].z, sp38->r * brightness, sp38->g * brightness, sp38->b * brightness,
                                          200);
            } else {
                Lights_PointGlowSetInfo(&this->lightInfo, this->fireLoc[0].x, this->fireLoc[0].y + 15.0f,
                                        this->fireLoc[0].z, sp38->r * brightness, sp38->g * brightness, sp38->b * brightness,
                                        200);
            }
        } else {
            Lights_PointSetColorAndRadius(&this->lightInfo, 0, 0, 0, 0);
        }

        if (!(this->flags191 & 0x80)) {
            Matrix_CopyCurrentState(&this->mtxf);
        }
    }
}

void EnPoSisters_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnPoSisters* this = THIS;
    Color_RGBA8* temp_s1 = &D_80B1DA40[this->sisterType];
    Color_RGBA8* temp_s7 = &D_80B1DA30[this->sisterType];
    s32 pad;
    s32 i;
    s32 phi_s5;
    f32 phi_f20;
    s32 pad2;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80B1C974(this);
    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);

    if ((this->color.a == 255) || (this->color.a == 0)) {
        gDPSetEnvColor(POLY_OPA_DISP++, this->color.r, this->color.g, this->color.b, this->color.a);
        gSPSegment(POLY_OPA_DISP++, 0x09, D_801AEFA0);
        POLY_OPA_DISP =
            SkelAnime_Draw(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable,
                           EnPoSisters_OverrideLimbDraw, EnPoSisters_PostLimbDraw, &this->actor, POLY_OPA_DISP);
    } else {
        gDPSetEnvColor(POLY_XLU_DISP++, 255, 255, 255, this->color.a);
        gSPSegment(POLY_XLU_DISP++, 0x09, D_801AEF88);
        POLY_XLU_DISP =
            SkelAnime_Draw(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable,
                           EnPoSisters_OverrideLimbDraw, EnPoSisters_PostLimbDraw, &this->actor, POLY_XLU_DISP);
    }

    if (!(this->flags191 & 0x80)) {
        Matrix_SetCurrentState(&this->mtxf);

        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, D_060027B0);
    }

    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 64, 1, 0, (globalCtx->gameplayFrames * -20) % 512,
                                32, 128));
    gDPSetEnvColor(POLY_XLU_DISP++, temp_s1->r, temp_s1->g, temp_s1->b, temp_s1->a);

    if (this->actionFunc == EnPoSister_DeathStage2) {
        phi_s5 = (((-this->stateTimer * 255) + 0x1FE0) / 32) & 0xFF;
        phi_f20 = 0.0056000003f;
    } else {
        phi_s5 = 0;
        phi_f20 = this->actor.scale.x * 0.5f;
    }

    for (i = 0; i < this->fireCount; i++) {
        if (this->actionFunc != EnPoSister_DeathStage2) {
            phi_s5 = ((-i * 31) + 248) & 0xFF;
        }

        gDPPipeSync(POLY_XLU_DISP++);
        gDPSetPrimColor(POLY_XLU_DISP++, 0x80, 0x80, temp_s7->r, temp_s7->g, temp_s7->b, phi_s5);

        Matrix_InsertTranslation(this->fireLoc[i].x, this->fireLoc[i].y, this->fireLoc[i].z, MTXMODE_NEW);
        Matrix_InsertRotation(0, BINANG_ROT180(func_800DFCDC(GET_ACTIVE_CAM(globalCtx))), 0, MTXMODE_APPLY);

        if (this->actionFunc == EnPoSister_DeathStage1) {
            f32 phi_f0;

            phi_f20 = ((this->stateTimer - i) * 0.025f) + 0.5f;
            phi_f0 = CLAMP(phi_f20, 0.5f, 0.8f);
            phi_f20 = phi_f0 * 0.007f;
        }
        Matrix_Scale(phi_f20, phi_f20, phi_f20, MTXMODE_APPLY);

        gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_XLU_DISP++, D_0407D590);
    }

    func_800BE680(globalCtx, &this->actor, this->unk_28C, ARRAY_COUNT(this->unk_28C),
                  this->actor.scale.x * 142.857131958f * this->unk_2F4, 0.0f, this->unk_2F0, 20);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
