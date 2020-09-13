#include "z_obj_tokei_turret.h"

#define FLAGS 0x00000000

#define THIS ((ObjTokeiTurret*)thisx)

void ObjTokeiTurret_Init(Actor* thisx, GlobalContext* globalCtx);
void ObjTokeiTurret_Destroy(Actor* thisx, GlobalContext* globalCtx);
void ObjTokeiTurret_Update(Actor* thisx, GlobalContext* globalCtx);
void ObjTokeiTurret_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Obj_Tokei_Turret_InitVars = {
    ACTOR_OBJ_TOKEI_TURRET,
    ACTORTYPE_BG,
    FLAGS,
    OBJECT_TOKEI_TURRET,
    sizeof(ObjTokeiTurret),
    (ActorFunc)ObjTokeiTurret_Init,
    (ActorFunc)ObjTokeiTurret_Destroy,
    (ActorFunc)ObjTokeiTurret_Update,
    (ActorFunc)ObjTokeiTurret_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Tokei_Turret_0x80B91CC0/ObjTokeiTurret_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Tokei_Turret_0x80B91CC0/ObjTokeiTurret_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Tokei_Turret_0x80B91CC0/ObjTokeiTurret_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Obj_Tokei_Turret_0x80B91CC0/ObjTokeiTurret_Draw.asm")
