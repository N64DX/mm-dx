#include "z_en_po_sisters.h"

#define FLAGS 0x00005015

#define THIS ((EnPoSisters*)thisx)

void EnPoSisters_Init(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Update(Actor* thisx, GlobalContext* globalCtx);
void EnPoSisters_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80B1AAE8(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1ABB8(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1ACB8(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1AE3C(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B020(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B168(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B2F0(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B444(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B628(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B7BC(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1B940(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1BA90(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1BCA0(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1BF2C(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1C0A4(EnPoSisters* this, GlobalContext* globalCtx);
void func_80B1C340(EnPoSisters* this, GlobalContext* globalCtx);

#if 0
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

// static ColliderCylinderInit sCylinderInit = {
static ColliderCylinderInit D_80B1DA70 = {
    { COLTYPE_HIT3, AT_ON | AT_TYPE_ENEMY, AC_ON | AC_TYPE_PLAYER, OC1_ON | OC1_TYPE_ALL, OC2_TYPE_1, COLSHAPE_CYLINDER, },
    { ELEMTYPE_UNK0, { 0xF7CFFFFF, 0x00, 0x08 }, { 0xF7CBFFFE, 0x00, 0x00 }, TOUCH_ON | TOUCH_SFX_NORMAL, BUMP_ON | BUMP_HOOKABLE, OCELEM_ON, },
    { 18, 60, 15, { 0, 0, 0 } },
};

// sColChkInfoInit
static CollisionCheckInfoInit D_80B1DA9C = { 6, 25, 60, 50 };

// static DamageTable sDamageTable = {
static DamageTable D_80B1DAA4 = {
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

// static InitChainEntry sInitChain[] = {
static InitChainEntry D_80B1DAC4[] = {
    ICHAIN_VEC3F_DIV1000(scale, 7, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 6000, ICHAIN_STOP),
};

#endif

extern ColliderCylinderInit D_80B1DA70;
extern CollisionCheckInfoInit D_80B1DA9C;
extern DamageTable D_80B1DAA4;
extern InitChainEntry D_80B1DAC4[];

extern UNK_TYPE D_06000114;
extern UNK_TYPE D_060008C0;
extern UNK_TYPE D_06000A54;
extern UNK_TYPE D_06000D40;
extern UNK_TYPE D_0600119C;
extern UNK_TYPE D_060014CC;
extern UNK_TYPE D_060027B0;
extern UNK_TYPE D_060046E0;

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/EnPoSisters_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/EnPoSisters_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1A648.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1A768.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1A894.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1A9B0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AA88.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AAE8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AB5C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1ABB8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AC40.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1ACB8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AE28.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AE3C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1AF8C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B020.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B0E0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B168.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B280.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B2F0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B3A8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B444.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B5B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B628.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B70C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B7BC.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B860.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1B940.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BA3C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BA90.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BC4C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BCA0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BCF0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BE4C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1BF2C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C030.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C0A4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C2E8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C340.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C408.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/EnPoSisters_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1C974.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1CB44.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/func_80B1CD34.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Po_Sisters/EnPoSisters_Draw.s")
