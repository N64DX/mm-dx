#include "z_en_wiz_fire.h"

#define FLAGS 0x08000015

#define THIS ((EnWizFire*)thisx)

void EnWizFire_Init(Actor* thisx, GlobalContext* globalCtx);
void EnWizFire_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnWizFire_Update(Actor* thisx, GlobalContext* globalCtx);
void EnWizFire_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Wiz_Fire_InitVars = {
    ACTOR_EN_WIZ_FIRE,
    ACTORTYPE_ENEMY,
    FLAGS,
    OBJECT_WIZ,
    sizeof(EnWizFire),
    (ActorFunc)EnWizFire_Init,
    (ActorFunc)EnWizFire_Destroy,
    (ActorFunc)EnWizFire_Update,
    (ActorFunc)EnWizFire_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/EnWizFire_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/EnWizFire_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4984C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A49A44.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A49F38.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A49FD8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4A11C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4A608.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/EnWizFire_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4B0C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4B33C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/EnWizFire_Draw.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4BAB4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4BC74.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4BDDC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Wiz_Fire_0x80A496A0/func_80A4BF78.asm")
