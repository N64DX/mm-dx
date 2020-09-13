#include "z_bg_lbfshot.h"

#define FLAGS 0x00000000

#define THIS ((BgLbfshot*)thisx)

void BgLbfshot_Init(Actor* thisx, GlobalContext* globalCtx);
void BgLbfshot_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgLbfshot_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Bg_Lbfshot_InitVars = {
    ACTOR_BG_LBFSHOT,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_LBFSHOT,
    sizeof(BgLbfshot),
    (ActorFunc)BgLbfshot_Init,
    (ActorFunc)BgLbfshot_Destroy,
    (ActorFunc)func_800BDFB0,
    (ActorFunc)BgLbfshot_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Lbfshot_0x80C18120/BgLbfshot_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Lbfshot_0x80C18120/BgLbfshot_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Bg_Lbfshot_0x80C18120/BgLbfshot_Draw.asm")
