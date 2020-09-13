#include "z_mir_ray.h"

#define FLAGS 0x00000030

#define THIS ((MirRay*)thisx)

void MirRay_Init(Actor* thisx, GlobalContext* globalCtx);
void MirRay_Destroy(Actor* thisx, GlobalContext* globalCtx);
void MirRay_Update(Actor* thisx, GlobalContext* globalCtx);
void MirRay_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Mir_Ray_InitVars = {
    ACTOR_MIR_RAY,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    OBJECT_MIR_RAY,
    sizeof(MirRay),
    (ActorFunc)MirRay_Init,
    (ActorFunc)MirRay_Destroy,
    (ActorFunc)MirRay_Update,
    (ActorFunc)MirRay_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E2600.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E26C8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/MirRay_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/MirRay_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/MirRay_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E2C68.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E2E1C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E2FF8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E30FC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/MirRay_Draw.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Mir_Ray_0x808E2600/func_808E3984.asm")
