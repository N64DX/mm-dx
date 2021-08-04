#include "z_en_giant.h"

#define FLAGS 0x00000030

#define THIS ((EnGiant*)thisx)

void EnGiant_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGiant_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGiant_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGiant_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_80B023D0(EnGiant* this, GlobalContext* globalCtx);
void func_80B024AC(EnGiant* this, GlobalContext* globalCtx);
void func_80B024D8(EnGiant* this, GlobalContext* globalCtx);

#if 0
const ActorInit En_Giant_InitVars = {
    ACTOR_EN_GIANT,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GIANT,
    sizeof(EnGiant),
    (ActorFunc)EnGiant_Init,
    (ActorFunc)EnGiant_Destroy,
    (ActorFunc)EnGiant_Update,
    (ActorFunc)EnGiant_Draw,
};

#endif

extern UNK_TYPE D_06002168;
extern UNK_TYPE D_06007610;
extern UNK_TYPE D_060116E4;

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B01990.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B01A74.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/EnGiant_Init.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/EnGiant_Destroy.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B01E84.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B01EE8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B020A0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B0211C.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B02234.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B02354.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B023D0.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B024AC.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B024D8.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/EnGiant_Update.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B02688.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/func_80B026C4.s")

#pragma GLOBAL_ASM("asm/non_matchings/overlays/ovl_En_Giant/EnGiant_Draw.s")
