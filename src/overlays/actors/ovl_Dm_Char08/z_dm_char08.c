/*
 * File: z_dm_char08.c
 * Overlay: ovl_Dm_Char08
 * Description: Large Great Bay Turtle
 */

#include "z_dm_char08.h"
#include "objects/object_kamejima/object_kamejima.h"

#define FLAGS (ACTOR_FLAG_2000000)

#define THIS ((DmChar08*)thisx)

void DmChar08_Init(Actor* thisx, GlobalContext* globalCtx);
void DmChar08_Destroy(Actor* thisx, GlobalContext* globalCtx);
void DmChar08_Update(Actor* thisx, GlobalContext* globalCtx);
void DmChar08_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80AAFAC4(DmChar08* this, GlobalContext* globalCtx);
void func_80AAF610(DmChar08* this, GlobalContext* globalCtx);
void func_80AAF8F4(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFAE4(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFE78(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFA18(DmChar08* this, GlobalContext* globalCtx);
void func_80AAF79C(DmChar08* this, GlobalContext* globalCtx);
void func_80AAF884(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFB04(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFB94(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFE88(DmChar08* this, GlobalContext* globalCtx);
void func_80AB023C(DmChar08* this, GlobalContext* globalCtx);
void func_80AB01E8(DmChar08* this, GlobalContext* globalCtx);
void DmChar08_SpawnBubbles(DmChar08* this, GlobalContext* globalCtx);
void func_80AAFCCC(DmChar08* this, GlobalContext* globalCtx);

typedef enum {
    EYEMODE_0,
    EYEMODE_1,
    EYEMODE_2,
    EYEMODE_3,
    EYEMODE_4,
    EYEMODE_5,
} EyeMode;

const ActorInit Dm_Char08_InitVars = {
    ACTOR_DM_CHAR08,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_KAMEJIMA,
    sizeof(DmChar08),
    (ActorFunc)DmChar08_Init,
    (ActorFunc)DmChar08_Destroy,
    (ActorFunc)DmChar08_Update,
    (ActorFunc)DmChar08_Draw,
};

#include "overlays/ovl_Dm_Char08/ovl_Dm_Char08.c"

AnimationInfo sLargeTurtleAnimationInfo[7] = {
    { &object_kamejima_Anim_0048B0, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_006980, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_012260, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_0100CC, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_0047B8, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_0119D4, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
    { &object_kamejima_Anim_014E8C, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -24.0f },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(uncullZoneForward, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 4000, ICHAIN_STOP),
};

void DmChar08_UpdateEyes(DmChar08* this) {
    switch (this->eyeMode) {
        case EYEMODE_0:
            this->eyeIndex = 0;
            if (this->blinkTimer > 0) {
                this->blinkTimer--;
            } else {
                this->blinkTimer = 0;
            }
            if (this->blinkTimer < 4) {
                this->eyeIndex = this->blinkTimer;
            }
            if (this->blinkTimer == 0) {
                this->blinkTimer = Rand_S16Offset(30, 30);
            }
            break;
        default:
            break;
        case EYEMODE_1:
            this->eyeIndex = 4;
            if (this->blinkTimer > 0) {
                this->blinkTimer--;
            } else {
                this->blinkTimer = 0;
            }
            if (this->blinkTimer < 4) {
                this->eyeIndex = this->blinkTimer + 4;
            }
            if (this->blinkTimer == 0) {
                this->blinkTimer = Rand_S16Offset(30, 30);
            }
            break;
        case EYEMODE_2:
            this->eyeIndex = 2;
            break;
        case EYEMODE_3:
            this->eyeIndex = 4;
            break;
        case EYEMODE_5:
            this->eyeIndex = 8;
            break;
    }
}

void DmChar08_SetAnimation(SkelAnime* skelAnime, AnimationInfo* entry, u16 index) {
    f32 endFrame;

    entry += index;
    if (entry->frameCount < 0.0f) {
        endFrame = Animation_GetLastFrame(entry->animation);
    } else {
        endFrame = entry->frameCount;
    }
    Animation_Change(skelAnime, entry->animation, entry->playSpeed, entry->startFrame, endFrame, entry->mode,
                     entry->morphFrames);
}

void DmChar08_Init(Actor* thisx, GlobalContext* globalCtx2) {
    GlobalContext* globalCtx = globalCtx2;
    DmChar08* this = THIS;

    this->dyna.actor.targetMode = 5;
    this->eyeMode = EYEMODE_2;
    this->dyna.actor.targetArrowOffset = 120.0f;
    ActorShape_Init(&this->dyna.actor.shape, 0.0f, ActorShadow_DrawCircle, 24.0f);
    SkelAnime_InitFlex(globalCtx, &this->skelAnime, &gTurtleSkel, NULL, NULL, NULL, 0);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Actor_SetScale(&this->dyna.actor, 0.1f);
    this->unk_1F4 = 0;
    this->bubbleCount = 0;
    this->unk_1FF = 0;
    this->alpha = 0;
    this->animIndex = 0;
    this->unk_1FC = 0xFFFF;
    this->dynapolyInitialized = false;
    this->targetYPos = this->dyna.actor.world.pos.y;
    this->unk_1F0 = 0.0f;
    if (globalCtx->sceneNum == SCENE_31MISAKI) {
        if (gSaveContext.save.weekEventReg[53] & 0x20) {
            DynaPolyActor_Init(&this->dyna, 3);
            DynaPolyActor_LoadMesh(globalCtx, &this->dyna, &object_kamejima_Colheader_002470);
        } else {
            DynaPolyActor_Init(&this->dyna, 3);
            DynaPolyActor_LoadMesh(globalCtx, &this->dyna, &object_kamejima_Colheader_002328);
        }
        this->dynapolyInitialized = true;
    } else if (globalCtx->sceneNum == SCENE_SEA) {
        DynaPolyActor_Init(&this->dyna, 3);
        DynaPolyActor_LoadMesh(globalCtx, &this->dyna, &sTurtleCollision);
        this->dynapolyInitialized = true;
        if (this) {}
    }

    this->palmTree1 = Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_YASI, this->dyna.actor.world.pos.x + -80.0f,
                              this->dyna.actor.world.pos.y + 390.0f, this->dyna.actor.world.pos.z, 0, 0, 0, 1);
    this->palmTree2 =
        Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_YASI, this->dyna.actor.world.pos.x + 68.0f,
                    this->dyna.actor.world.pos.y + 368.0f, this->dyna.actor.world.pos.z - 174.0f, 0, 0x7530, 0, 1);
    switch (globalCtx->sceneNum) {
        case SCENE_31MISAKI:
            if (gSaveContext.save.weekEventReg[53] & 0x20) {
                this->dyna.actor.world.pos.x = -6480.0f;
                this->targetYPos = -120.0f;
                this->dyna.actor.world.pos.z = 1750.0f;
                this->dyna.actor.world.rot.x = 0;
                this->dyna.actor.world.rot.y = -0x7234;
                this->dyna.actor.world.rot.z = 0;
                this->dyna.actor.shape.rot.x = 0;
                this->dyna.actor.shape.rot.y = -0x7234;
                this->dyna.actor.shape.rot.z = 0;
                this->unk_1F0 = 1.0f;
                this->unk_1FF = 2;
                this->animIndex = 2;
                this->unk_203 = 0x63;
                this->eyeMode = EYEMODE_1;
                this->unk_207 = 0;
                this->unk_208 = 0;
                this->dyna.actor.flags |= ACTOR_FLAG_1;
                if (gSaveContext.save.entranceIndex == 0x6A80) {
                    this->eyeMode = EYEMODE_0;
                    this->actionFunc = func_80AAFAC4;
                } else {
                    this->actionFunc = func_80AAF8F4;
                }
            } else {
                this->actionFunc = func_80AAF610;
            }
            break;
        case SCENE_SEA:
            this->unk_1FF = 2;
            this->animIndex = 2;
            this->unk_203 = 0x63;
            this->eyeMode = EYEMODE_0;
            this->unk_207 = 0;
            this->unk_208 = 0;
            this->dyna.actor.flags |= ACTOR_FLAG_1;
            this->actionFunc = func_80AAFAE4;
            this->unk_1F0 = 1.0f;
            break;
        case SCENE_KONPEKI_ENT:
            this->unk_1FF = 2;
            this->animIndex = 2;
            this->unk_203 = 0x63;
            this->eyeMode = EYEMODE_0;
            this->unk_207 = 0;
            this->unk_208 = 0;
            this->actionFunc = func_80AAFE78;
            this->unk_1F0 = 1.0f;
            break;
    }
    DmChar08_SetAnimation(&this->skelAnime, &sLargeTurtleAnimationInfo[this->animIndex], 0);
}

void DmChar08_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    DmChar08* this = THIS;

    if (this->dynapolyInitialized) {
        DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
    }
}

s16 sBigTurtleOcarinaSoundLatch = false;

void func_80AAF610(DmChar08* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);
    Player* player2 = GET_PLAYER(globalCtx);

    if ((player2->stateFlags2 & 0x8000000) &&
        ((player2->actor.world.pos.x > -5780.0f) && (player2->actor.world.pos.x < -5385.0f) &&
         (player2->actor.world.pos.z > 1120.0f) && (player2->actor.world.pos.z < 2100.0f))) {
        if (!sBigTurtleOcarinaSoundLatch) {
            play_sound(NA_SE_SY_TRE_BOX_APPEAR);
            sBigTurtleOcarinaSoundLatch = true;
        }
    } else {
        sBigTurtleOcarinaSoundLatch = false;
    }
    if ((player->transformation == PLAYER_FORM_ZORA) && (globalCtx->msgCtx.ocarinaMode == 3) &&
        (globalCtx->msgCtx.unk1202E == 2)) {
        if ((player2->actor.world.pos.x > -5780.0f) && (player2->actor.world.pos.x < -5385.0f)) {
            if ((player2->actor.world.pos.z > 1120.0f) && (player2->actor.world.pos.z < 2100.0f)) {
                this->actionFunc = func_80AAF79C;
            }
        }
    }
}

void func_80AAF79C(DmChar08* this, GlobalContext* globalCtx) {
    s16 cs1 = this->dyna.actor.cutscene;
    s16 cs = ActorCutscene_GetAdditionalCutscene(
        ActorCutscene_GetAdditionalCutscene(ActorCutscene_GetAdditionalCutscene(cs1)));

    if (gSaveContext.save.weekEventReg[93] & 8) {
        cs1 = cs;
    }

    if (ActorCutscene_GetCanPlayNext(cs1)) {
        ActorCutscene_Start(cs1, &this->dyna.actor);
        gSaveContext.save.weekEventReg[53] |= 0x20;
        gSaveContext.save.weekEventReg[93] |= 8;
        DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        this->actionFunc = func_80AAF884;
    } else {
        ActorCutscene_SetIntentToPlay(cs1);
    }
}

void func_80AAF884(DmChar08* this, GlobalContext* globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        DynaPolyActor_Init(&this->dyna, 3);
        DynaPolyActor_LoadMesh(globalCtx, &this->dyna, &object_kamejima_Colheader_002470);
        this->dyna.actor.flags |= ACTOR_FLAG_1;
        this->actionFunc = func_80AAF8F4;
    }
}

void func_80AAF8F4(DmChar08* this, GlobalContext* globalCtx) {
    s32 pad;
    f32 yOffset;

    if (fabsf(this->dyna.actor.xzDistToPlayer) < 200.0f) {
        this->actionFunc = func_80AAFA18;
    }
    this->unk_1FA += 200;
    yOffset = 50.0f;
    yOffset *= Math_SinS(this->unk_1FA);
    Math_SmoothStepToF(&this->dyna.actor.world.pos.x, -6400.0f, 0.2f, 2.0f, 0.1f);
    Math_SmoothStepToF(&this->targetYPos, -180.0f + yOffset, 0.5f, 5.0f, 0.1f);
    Math_SmoothStepToF(&this->dyna.actor.world.pos.z, 1750.0f, 0.5f, 20.0f, 0.1f);
    Math_SmoothStepToS(&this->dyna.actor.world.rot.y, -0x7234, 0xA, 0xDC, 1);
    Math_SmoothStepToS(&this->dyna.actor.shape.rot.y, -0x7234, 0xA, 0xDC, 1);
}

void func_80AAFA18(DmChar08* this, GlobalContext* globalCtx) {
    s16 nextCs;
    s16 nextCs2;
    s16 nextCs1;

    nextCs1 = ActorCutscene_GetAdditionalCutscene(this->dyna.actor.cutscene);
    nextCs2 = nextCs1;
    nextCs1 = ActorCutscene_GetAdditionalCutscene(nextCs1);

    nextCs = ((void)0, gSaveContext.save.weekEventReg[53] & 0x40) ? nextCs1 : nextCs2;

    if (ActorCutscene_GetCanPlayNext(nextCs) != 0) {
        gSaveContext.save.weekEventReg[53] |= 0x40;
        ActorCutscene_Start(nextCs, &this->dyna.actor);
        this->actionFunc = func_80AAFE78;
    } else {
        ActorCutscene_SetIntentToPlay(nextCs);
    }
}

void func_80AAFAC4(DmChar08* this, GlobalContext* globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        this->actionFunc = func_80AAF8F4;
    }
}

void func_80AAFAE4(DmChar08* this, GlobalContext* globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        this->actionFunc = func_80AAFB04;
    }
}

void func_80AAFB04(DmChar08* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);

    if ((fabsf(this->dyna.actor.xzDistToPlayer) < 200.0f) && (player->actor.world.pos.y > 0.0f)) {
        globalCtx->nextEntranceIndex = 0x6A70;
        globalCtx->sceneLoadFlag = 0x14;
        Scene_SetExitFade(globalCtx);
        this->actionFunc = func_80AAFB94;
    }
}

void func_80AAFB94(DmChar08* this, GlobalContext* globalCtx) {
}

Color_RGBA8 sLargeTurtleBubblePrimColor = { 250, 200, 250, 100 };
Color_RGBA8 sLargeTurtleBubbleEnvColor = { 80, 80, 80, 0 };
Vec3f sLargeTurtleBubbelAccel = { 0.0f, -0.8f, 0.0f };

void DmChar08_SpawnBubbles(DmChar08* this, GlobalContext* globalCtx) {
    s32 i;
    Vec3f velocity;

    velocity.x = (Rand_ZeroOne() - 0.5f) * 24.0f;
    velocity.y = -5.2f;
    velocity.z = 4.0f;
    sLargeTurtleBubbelAccel.x = 0.0f;
    sLargeTurtleBubbelAccel.y = 1.18f;
    sLargeTurtleBubbelAccel.z = 0.0f;
    for (i = 0; i < this->bubbleCount; i++) {
        EffectSsDtBubble_SpawnCustomColor(globalCtx, &this->bubblePos, &velocity, &sLargeTurtleBubbelAccel,
                                          &sLargeTurtleBubblePrimColor, &sLargeTurtleBubbleEnvColor,
                                          Rand_S16Offset(80, 130), 30, 0);
    }
}

void func_80AAFCCC(DmChar08* this, GlobalContext* globalCtx) {
    switch (globalCtx->sceneNum) {
        case SCENE_31MISAKI:
            if (!(gSaveContext.save.weekEventReg[55] & 0x80)) {
                switch (this->unk_206) {
                    case 0:
                        return;
                    case 1:
                        Message_StartTextbox(globalCtx, 0x102A, &this->dyna.actor);
                        this->unk_206++;
                        return;
                    case 2:
                        if (Message_GetState(&globalCtx->msgCtx) == 2) {
                            Message_StartTextbox(globalCtx, 0x102B, &this->dyna.actor);
                            this->unk_206 = 0;
                        }
                        return;
                }
            } else {
                switch (this->unk_206) {
                    case 0:
                        return;
                    case 1:
                        Message_StartTextbox(globalCtx, 0x103B, &this->dyna.actor);
                        this->unk_206++;
                        return;
                    case 2:
                        if (Message_GetState(&globalCtx->msgCtx) == 2) {
                            func_801477B4(globalCtx);
                            this->unk_206 = 0;
                        }
                        return;
                }
            }
            return;
        case SCENE_SEA:
            switch (this->unk_206) {
                case 0:
                    return;
                case 1:
                    Message_StartTextbox(globalCtx, 0x102E, &this->dyna.actor);
                    this->unk_206++;
                    return;
                case 2:
                    if (Message_GetState(&globalCtx->msgCtx) == 2) {
                        Message_StartTextbox(globalCtx, 0x102F, &this->dyna.actor);
                        this->unk_206 = 0;
                    }
                    return;
            }
            return;
    }
}

void func_80AAFE78(DmChar08* this, GlobalContext* globalCtx) {
}

void func_80AAFE88(DmChar08* this, GlobalContext* globalCtx) {
    s32 actorActionIndex;
    CsCmdActorAction* csAction;
    f32 phi_f12;

    if (Cutscene_CheckActorAction(globalCtx, 474)) {
        actorActionIndex = Cutscene_GetActorActionIndex(globalCtx, 474);
        if (this->unk_1F6 != globalCtx->csCtx.actorActions[actorActionIndex]->action) {
            this->unk_1F6 = globalCtx->csCtx.actorActions[actorActionIndex]->action;
            switch (globalCtx->csCtx.actorActions[actorActionIndex]->action) {
                case 1:
                    this->animIndex = 0;
                    break;
                case 3:
                    this->bubbleCount = 2;
                    break;
                case 4:
                    this->animIndex = 2;
                    break;
                case 5:
                    this->animIndex = 1;
                    break;
                case 6:
                    this->eyeMode = EYEMODE_0;
                    break;
                case 7:
                    this->eyeMode = EYEMODE_2;
                    break;
                case 8:
                    this->animIndex = 6;
                    break;
                case 9:
                    this->animIndex = 2;
                    break;
                case 10:
                    this->animIndex = 4;
                    break;
                case 12:
                    this->animIndex = 5;
                    break;
                case 13:
                    this->bubbleCount = 0;
                    break;
                case 14:
                    Actor_PlaySfxAtPos(&this->dyna.actor, NA_SE_EV_BIG_TORTOISE_ROLL);
                    this->animIndex = 2;
                    break;
            }
        }
        switch (globalCtx->csCtx.actorActions[actorActionIndex]->action) {
            case 2:
                this->unk_1FF = 1;
                phi_f12 = 2.0f * Environment_LerpWeight(globalCtx->csCtx.actorActions[actorActionIndex]->endFrame,
                                                        globalCtx->csCtx.actorActions[actorActionIndex]->startFrame,
                                                        globalCtx->csCtx.frames);
                if (phi_f12 > 1.0f) {
                    phi_f12 = 1.0f;
                }

                this->alpha = (1.0f - phi_f12) * 255.0f;
                if (this->alpha < 6) {
                    this->unk_1FF = 2;
                }

                Cutscene_ActorTranslateAndYaw(&this->dyna.actor, globalCtx, actorActionIndex);
                break;
            case 5:
                Cutscene_ActorTranslateAndYawSmooth(&this->dyna.actor, globalCtx, actorActionIndex);
                break;
            case 14:
                Cutscene_ActorTranslate(&this->dyna.actor, globalCtx, actorActionIndex);
                Math_SmoothStepToS(&this->dyna.actor.world.rot.y,
                                   globalCtx->csCtx.actorActions[actorActionIndex]->rot.y, 0xA, 0xDC, 1);
                this->dyna.actor.shape.rot.y = this->dyna.actor.world.rot.y;
                break;
            default:
                Cutscene_ActorTranslateAndYaw(&this->dyna.actor, globalCtx, actorActionIndex);
                break;
        }
        this->targetYPos = this->dyna.actor.world.pos.y;
        if ((this->unk_1FF >= 2) || (globalCtx->csCtx.actorActions[actorActionIndex]->action == 2)) {
            Math_SmoothStepToF(&this->unk_1F0, 1.0f, 0.02f, 0.1f, 0.00001f);
        }
    } else {
        this->unk_1F6 = 0x63;
    }
}

void func_80AB01E8(DmChar08* this, GlobalContext* globalCtx) {
    if (this->animIndex != this->unk_203) {
        this->unk_203 = this->animIndex;
        DmChar08_SetAnimation(&this->skelAnime, &sLargeTurtleAnimationInfo[this->animIndex], 0);
    }
}

void func_80AB023C(DmChar08* this, GlobalContext* globalCtx) {
    if ((globalCtx->msgCtx.currentTextId != this->unk_1FC) && (globalCtx->msgCtx.currentTextId != 0)) {
        this->unk_1FC = globalCtx->msgCtx.currentTextId;
        this->unk_208 = 0;
        switch (globalCtx->msgCtx.currentTextId) {
            case 0x1025:
                this->unk_207 = 1;
                return;
            case 0x1026:
                this->unk_207 = 2;
                return;
            case 0x1027:
                this->unk_207 = 3;
                return;
            case 0x1028:
                this->unk_207 = 4;
                return;
            case 0x1029:
                this->unk_207 = 10;
                return;
            case 0x102C:
                this->unk_207 = 5;
                return;
            case 0x102D:
                this->unk_207 = 8;
                return;
            case 0x102A:
                this->unk_207 = 6;
                return;
            case 0x102B:
                this->unk_207 = 2;
                return;
            case 0x102E:
                this->unk_207 = 9;
                return;
            case 0x102F:
                this->unk_207 = 7;
                return;
            case 0x103B:
                this->unk_207 = 6;
                return;
            case 0x1030:
                this->unk_207 = 4;
                break;
        }
    }
}

void func_80AB032C(DmChar08* this, GlobalContext* globalCtx) {
    switch (this->unk_207) {
        case 1:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 6;
                    this->eyeMode = EYEMODE_2;
                    this->unk_208++;
                    break;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 2:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 4;
                    this->eyeMode = EYEMODE_2;
                    this->unk_208++;
                    break;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 3;
                        this->eyeMode = EYEMODE_0;
                        this->unk_208++;
                    }
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 3:
        case 4:
        case 8:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 3;
                    if (this->unk_207 >= 5) {
                        this->eyeMode = EYEMODE_2;
                    } else {
                        this->eyeMode = EYEMODE_0;
                    }
                    this->unk_208 = 2;
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 5;
                        this->eyeMode = EYEMODE_2;
                        this->unk_208++;
                    }
                    break;
                case 3:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        if (this->unk_207 != 4) {
                            this->animIndex = 2;
                            this->eyeMode = EYEMODE_0;
                            this->unk_207 = 0;
                            this->unk_208 = 0;
                            break;
                        }
                        this->animIndex = 3;
                        this->eyeMode = EYEMODE_0;
                        this->unk_208++;
                    }
                    break;
                case 4:
                case 5:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->unk_208++;
                    }
                    break;
                case 6:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 5:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 3;
                    this->eyeMode = EYEMODE_0;
                    this->unk_208++;
                    break;
                case 2:
                case 3:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->unk_208++;
                    }
                    break;
                case 4:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 5;
                        this->eyeMode = EYEMODE_2;
                        this->unk_208++;
                    }
                    break;
                case 5:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 6:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 3;
                    this->eyeMode = EYEMODE_5;
                    this->unk_208++;
                    return;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->unk_208++;
                    }
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 7:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 5;
                    this->eyeMode = EYEMODE_2;
                    this->unk_208++;
                    return;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 3;
                        this->eyeMode = EYEMODE_2;
                        this->unk_208++;
                    }
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 9:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 3;
                    this->eyeMode = EYEMODE_0;
                    this->unk_208++;
                    return;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->unk_208++;
                    }
                    if ((Message_GetState(&globalCtx->msgCtx) == 6) && Message_ShouldAdvance(globalCtx)) {
                        this->unk_208 = 3;
                    }
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_208++;
                    }
                    if ((Message_GetState(&globalCtx->msgCtx) == 6) && Message_ShouldAdvance(globalCtx)) {
                        this->unk_208 = 3;
                    }
                    break;
                case 3:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 4;
                        this->eyeMode = EYEMODE_2;
                        this->unk_208++;
                    }
                    break;
                case 4:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
        case 10:
            switch (this->unk_208) {
                case 0:
                    this->animIndex = 3;
                    this->eyeMode = EYEMODE_0;
                    this->unk_208++;
                    break;
                case 1:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 5;
                        this->eyeMode = EYEMODE_2;
                        this->unk_208++;
                    }
                    break;
                case 2:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 3;
                        this->eyeMode = EYEMODE_0;
                        this->unk_208++;
                    }
                    break;
                case 3:
                    if (Animation_OnFrame(&this->skelAnime, this->skelAnime.endFrame)) {
                        this->animIndex = 2;
                        this->eyeMode = EYEMODE_0;
                        this->unk_207 = 0;
                        this->unk_208 = 0;
                    }
                    break;
            }
            break;
    }
}

void func_80AB096C(DmChar08* this, GlobalContext* globalCtx) {
    if ((globalCtx->csCtx.state != 0) && (globalCtx->sceneNum == SCENE_31MISAKI) &&
        (gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.currentCsIndex == 0)) {
        if ((globalCtx->csCtx.frames >= 890) && (globalCtx->csCtx.frames < 922)) {
            Actor_PlaySfxAtPos(&this->dyna.actor, NA_SE_EV_EARTHQUAKE_LAST2 - SFX_FLAG);
        }
    }
    if ((this->animIndex == 1) && Animation_OnFrame(&this->skelAnime, 16.0f)) {
        Actor_PlaySfxAtPos(&this->dyna.actor, NA_SE_EV_BIG_TORTOISE_SWIM);
    }
}

void DmChar08_UpdateCollision(DmChar08* this, GlobalContext* globalCtx) {
    Player* player = GET_PLAYER(globalCtx);
    f32 curFrame;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f12;
    s32 i;

    if (player->actor.world.pos.x > 0.0f) {
        curFrame = this->skelAnime.curFrame;
        if (curFrame <= 19.0f) {
            phi_f12 = 19.0f;
            phi_f2 = curFrame / 19.0f;
        } else {
            phi_f2 = (29.0f - curFrame) / 9.0f;
            phi_f12 = 29.0f;
        }

        sTurtleCollision.polyList = sTurtleCollisionPolygons;

        for (i = 0; i < ARRAY_COUNT(sTurtleCollisionVertices); i++) {
            sTurtleCollisionVertices[i].x = D_80AB1648[i].x;
        }

        sTurtleCollisionVertices[0].y = (100.0f * phi_f2) + 900.0f;
        sTurtleCollisionVertices[1].y = (100.0f * phi_f2) + 900.0f;
        sTurtleCollisionVertices[2].y = (500.0f * phi_f2) + -200.0f;
        sTurtleCollisionVertices[3].y = (900.0f * phi_f2) + -800.0f;
        sTurtleCollisionVertices[5].y = 0x4B0;
        sTurtleCollisionVertices[9].y = 0x6A4;
    } else {
        phi_f0 = this->skelAnime.curFrame + 26.0f;
        if (phi_f0 > 29.0f) {
            phi_f12 = 29.0f;
            phi_f0 -= 29.0f;
        }

        if (phi_f0 <= 18.0f) {
            phi_f2 = phi_f0 / 18.0f;
        } else {
            phi_f2 = (29.0f - phi_f0) / 10.0f;
        }

        sTurtleCollision.polyList = D_80AB14D0;

        for (i = 0; i < ARRAY_COUNT(sTurtleCollisionVertices); i++) {
            sTurtleCollisionVertices[i].x = -D_80AB1648[i].x;
        }

        sTurtleCollisionVertices[0].y = (500.0f * phi_f2) + 720.0f;
        sTurtleCollisionVertices[1].y = (660.0f * phi_f2) + 420.0f;
        sTurtleCollisionVertices[2].y = (1130.0f * phi_f2) + -430.0f;
        sTurtleCollisionVertices[3].y = (1430.0f * phi_f2) + -1060.0f;
        sTurtleCollisionVertices[5].y = 0x4B0;
        sTurtleCollisionVertices[9].y = 0x6A4;
    }
    func_800C6554(globalCtx, &globalCtx->colCtx.dyna);
}

void DmChar08_Update(Actor* thisx, GlobalContext* globalCtx) {
    DmChar08* this = THIS;

    this->dyna.actor.focus.pos.x = this->focusPos.x;
    this->dyna.actor.focus.pos.y = this->focusPos.y + this->dyna.actor.targetArrowOffset;
    this->dyna.actor.focus.pos.z = this->focusPos.z;
    this->dyna.actor.focus.rot.x = this->dyna.actor.world.rot.x;
    this->dyna.actor.focus.rot.y = this->dyna.actor.world.rot.y;
    this->dyna.actor.focus.rot.z = this->dyna.actor.world.rot.z;

    if (Actor_ProcessTalkRequest(&this->dyna.actor, &globalCtx->state)) {
        this->unk_206 = 1;
    }

    DmChar08_UpdateEyes(this);
    this->actionFunc(this, globalCtx);
    func_80AAFE88(this, globalCtx);
    func_80AB023C(this, globalCtx);
    func_80AB032C(this, globalCtx);
    func_80AB01E8(this, globalCtx);
    SkelAnime_Update(&this->skelAnime);
    DmChar08_SpawnBubbles(this, globalCtx);
    this->dyna.actor.world.pos.y = this->targetYPos;
    if (globalCtx->sceneNum == SCENE_31MISAKI) {
        if (this->dyna.actor.xzDistToPlayer > 1300.0f) {
            func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        } else {
            func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
        }
    }
    if (this->unk_1FF != 0) {
        func_80AAFCCC(this, globalCtx);
        func_800B8614(&this->dyna.actor, globalCtx, 400.0f);
    }
    func_80AB096C(this, globalCtx);
    DmChar08_UpdateCollision(this, globalCtx);
}

s32 DmChar08_OverrideLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot,
                              Actor* thisx) {
    if ((globalCtx->csCtx.state == 0) && (globalCtx->sceneNum == SCENE_31MISAKI) &&
        (limbIndex == TURTLE_LIMB_FRONT_RIGHT_FLIPPER_CONTROL)) {
        rot->z = -0x5E24;
    }
    return false;
}

void DmChar08_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    DmChar08* this = THIS;
    Vec3f src;

    if (limbIndex == TURTLE_LIMB_SHELL) {
        src.x = 800.0f;
        src.y = 2600.0f;
        src.z = -800.0f;
        Matrix_MultVec3f(&src, &this->tree1Pos);
        src.x = 2600.0f;
        src.y = 2500.0f;
        src.z = 700.0f;
        Matrix_MultVec3f(&src, &this->tree2Pos);
    } else if (limbIndex == TURTLE_LIMB_LOWER_MOUTH) {
        src.x = 1600.0f;
        src.y = -200.0f;
        src.z = 0.0f;
        Matrix_MultVec3f(&src, &this->bubblePos);
    } else if (limbIndex == TURTLE_LIMB_UPPER_MOUTH) {
        src.x = 600.0f;
        src.y = 700.0f;
        src.z = 0.0f;
        Matrix_MultVec3f(&src, &this->focusPos);
    }
}

void DmChar08_TransformLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Actor* thisx) {
    DmChar08* this = THIS;
    f32 one;

    switch (limbIndex) {
        case TURTLE_LIMB_SHELL:
            break;
        case TURTLE_LIMB_NECK:
            Matrix_Pop();
            one = 1.0f;
            Matrix_Scale(((one - 0.7f) * this->unk_1F0) + 0.7f, ((one - 0.7f) * this->unk_1F0) + 0.7f, 1.0f,
                         MTXMODE_APPLY);
            Matrix_Push();
            break;
        case TURTLE_LIMB_FRONT_LEFT_FLIPPER_CONTROL:
        case TURTLE_LIMB_FRONT_LEFT_INNTER_FLIPPER:
        case TURTLE_LIMB_FRONT_RIGHT_FLIPPER_CONTROL:
        case TURTLE_LIMB_FRONT_RIGHT_INNTER_FLIPPER:
            Matrix_Pop();
            Matrix_Scale((this->unk_1F0 * 0.4f) + 0.6f, (this->unk_1F0 * 0.4f) + 0.6f, (this->unk_1F0 * 0.4f) + 0.6f,
                         MTXMODE_APPLY);
            Matrix_Push();
            break;
        case TURTLE_LIMB_FRONT_LEFT_OUTER_FLIPPER:
        case TURTLE_LIMB_FRONT_RIGHT_OUTER_FLIPPER:
            Matrix_Scale((this->unk_1F0 * 0.4f) + 0.6f, (this->unk_1F0 * 0.4f) + 0.6f, (this->unk_1F0 * 0.4f) + 0.6f,
                         MTXMODE_APPLY);
            break;
        case TURTLE_TAIL_LIMB:
            Matrix_Pop();
            Matrix_Scale((this->unk_1F0 * 0.52f) + 0.48f, (this->unk_1F0 * 0.52f) + 0.48f,
                         (this->unk_1F0 * 0.52f) + 0.48f, MTXMODE_APPLY);
            Matrix_Push();
            break;
        case TURTLE_LIMB_BACK_LEFT_FLIPPER:
        case TURTLE_LIMB_BACK_RIGHT_FLIPPER:
            Matrix_Scale((this->unk_1F0 * 0.55f) + 0.45f, (this->unk_1F0 * 0.2f) + 0.8f,
                         (this->unk_1F0 * 0.55f) + 0.45f, MTXMODE_APPLY);
            break;
    }
}

TexturePtr sBigTurtleEyeTextures[] = {
    gTurtleEyeHalfLeft2Tex, gTurtleEyeHalfLeftTex,     gTurtleEyeClosedTex,
    gTurtleEyeHalfLeftTex,  gTurtleEyeOpenStraightTex, gTurtleEyeHalfStraightTex,
    gTurtleEyeClosedTex,    gTurtleEyeHalfStraightTex, gTurtleEyeHalfRightTex,
};

void DmChar08_Draw(Actor* thisx, GlobalContext* globalCtx) {
    DmChar08* this = THIS;
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x08, Lib_SegmentedToVirtual(sBigTurtleEyeTextures[this->eyeIndex]));
    gSPSegment(POLY_OPA_DISP++, 0x09, Lib_SegmentedToVirtual(sBigTurtleEyeTextures[this->eyeIndex]));
    if ((this->unk_1FF > 0) || (globalCtx->csCtx.state != 0)) {
        SkelAnime_DrawTransformFlexOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable,
                                       this->skelAnime.dListCount, DmChar08_OverrideLimbDraw, DmChar08_PostLimbDraw,
                                       DmChar08_TransformLimbDraw, &this->dyna.actor);
        this->palmTree1->world.pos.x = this->tree1Pos.x;
        this->palmTree1->world.pos.y = this->tree1Pos.y;
        this->palmTree1->world.pos.z = this->tree1Pos.z;
        this->palmTree2->world.pos.x = this->tree2Pos.x;
        this->palmTree2->world.pos.y = this->tree2Pos.y;
        this->palmTree2->world.pos.z = this->tree2Pos.z;
    }
    if (this->unk_1FF == 0) {
        Scene_SetRenderModeXlu(globalCtx, 0, 1);
        gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, gTurtleShell2DL);
    } else if (this->unk_1FF == 1) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        Scene_SetRenderModeXlu(globalCtx, 2, 2);
        gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 0, this->alpha);
        gSPMatrix(POLY_XLU_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_XLU_DISP++, gTurtleShell2DL);
    }
    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
