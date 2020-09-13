#include "z_obj_wturn.h"

#define FLAGS 0x02100010

#define THIS ((ObjWturn*)thisx)

void ObjWturn_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjWturn_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Wturn_InitVars = {
    ACTOR_OBJ_WTURN,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(ObjWturn),
    (ActorFunc)ObjWturn_Init,
    (ActorFunc)func_800BDFB0,
    (ActorFunc)ObjWturn_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/ObjWturn_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7954.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7968.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7A24.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7A5C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7AAC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7BA0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7C04.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/func_808A7C78.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Wturn_0x808A7930/ObjWturn_Update.asm")
