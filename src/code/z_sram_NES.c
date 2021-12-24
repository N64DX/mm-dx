#include "global.h"
#include "overlays/gamestates/ovl_file_choose/z_file_choose.h"

#define CHECK_NEWF(newf)                                                                                 \
    ((newf)[0] != 'Z' || (newf)[1] != 'E' || (newf)[2] != 'L' || (newf)[3] != 'D' || (newf)[4] != 'A' || \
     (newf)[5] != '3')

u32 D_801C5FC0[][4] = {
    { 0xC00, 0, 0, 0x40000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0xC04 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0x100000, 0, 0, 0x40000002 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0x4000000, 0, 0, 0 },
    { 2, 0, 0, 0 },
    { 0x4000000, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0xF, 0, 0, 0 },
    { 0x70B000, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0x80000000, 0, 0x400 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0 },
    { 0x1A00020, 0, 0, 0 },
    { 0x400, 0, 0, 0 },
    { 0, 0, 0, 0x1000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 2 },
    { 0x400, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 2 },
    { 0, 0, 0, 0x40000000 },
    { 0, 0, 0, 0 },
    { 0x10, 0, 0, 0 },
    { 3, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0x100400, 0, 0, 0x22 },
    { 0x400, 0, 0, 0x80 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0x400, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 2 },
    { 0, 0, 0, 0x80000002 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x80000000 },
    { 0xC00, 0, 0, 0x40000000 },
    { 0x102, 0, 0, 0x400 },
    { 0, 0, 0, 2 },
    { 0, 0, 0, 0x40000000 },
    { 0x70, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x40000000 },
    { 0, 0, 0, 0x40000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0x100000, 0, 0, 0x80000000 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0x400, 0, 0, 0 },
    { 0x400, 0, 0, 0 },
    { 0x100000, 0, 0, 0x80000000 },
    { 0, 0, 0, 0x100 },
    { 0x400, 0, 0, 0 },
    { 0, 0, 0, 0x80 },
    { 0, 0, 0, 0x80 },
    { 0, 0, 0, 0x80000000 },
    { 0, 0, 0, 0x400 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 1, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 2 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 1, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0x400 },
    { 0x100000, 0, 0, 0x400 },
    { 0, 0, 1, 0 },
};

// gDefaultWeekEventReg?
u16 D_801C66D0[100] = {
    0xFFFC, 0xFFFF, 0xFFFF, 0xFFFF, 0,      0,      0,      0xC000, 0xC00,  0,      0xC0,   0,      0x300,
    0x3000, 0xC000, 0xC00,  0,      0,      0,      0,      0,      0,      0xC00C, 0xC00C, 0xC008, 3,
    0x3000, 0,      0,      0,      0xFF00, 0xC3F,  0x3F,   0,      0,      0xCFFF, 0,      0,      0xC00,
    0xC00,  0,      0xC0,   0,      0,      0,      0,      0,      0,      0,      0,      0x3C,   0x20,
    0,      0x300C, 0x3000, 0,      0xC,    0xC0,   0,      0xFF0,  0x300,  0,      0,      0xC00,  0,
    0,      0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xC0,   0,      0xC000, 0,      3,
    0,      0xC000, 0,      0xC0,   0x300,  0,      0,      0,      0xC000, 0xFFF0, 0,      0,      0x300,
    0,      0xC000, 0xF0,   0,      0,      0,      0,      0,      0,
};

// used in other files
s32 D_801C6798[] = {
    0x00000020, 0x00001470, 0x000028C0, 0x00003D10, 0x00005160, 0x000065B0,
};

u8 D_801C67B0[24] = {
    ITEM_NONE,  ITEM_BOW,  ITEM_NONE,        ITEM_NONE, ITEM_NONE,       ITEM_NONE,      ITEM_BOMB, ITEM_BOMBCHU,
    ITEM_STICK, ITEM_NUT,  ITEM_MAGIC_BEANS, ITEM_NONE, ITEM_POWDER_KEG, ITEM_PICTO_BOX, ITEM_NONE, ITEM_NONE,
    ITEM_NONE,  ITEM_NONE, ITEM_NONE,        ITEM_NONE, ITEM_NONE,       ITEM_NONE,      ITEM_NONE, ITEM_NONE,
};

s32 D_801C67C8[] = { 0, 0x40, 0x80, 0xC0, 0x100, 0x180, 0x200, 0x280 };

s32 D_801C67E8[] = { 0x300, 0x380 };

s32 D_801C67F0[8] = { 0x40, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x80 };

s32 D_801C6810[] = { 1, 1 };

s32 D_801C6818[8] = { 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80 };

s32 D_801C6838[] = { 1, 1 };

s32 D_801C6840[4] = { 0x100, 0x180, 0x200, 0x280 };

s32 D_801C6850[8] = { 0x80, 0x80, 0x80, 0x80, 0x300, 0x380, 1, 1 };

s32 D_801C6870[8] = {
    sizeof(Save),
    sizeof(Save),
    sizeof(Save),
    sizeof(Save),
    offsetof(SaveContext, fileNum),
    offsetof(SaveContext, fileNum),
    offsetof(SaveContext, fileNum),
    offsetof(SaveContext, fileNum),
};

u8 D_801C6890[8] = { 1, 2, 4, 8, 0x10, 0x20, 0x40, 0x80 };

u16 D_801F6AF0;
u8 D_801F6AF2;

void Sram_ActivateOwl(u8 owlId) {
    gSaveContext.save.playerData.owlActivationFlags =
        ((void)0, gSaveContext.save.playerData.owlActivationFlags) | (u16)gBitFlags[owlId];
    if (gSaveContext.save.playerData.unk_20 == 0xFF) {
        gSaveContext.save.playerData.unk_20 = owlId;
    }
}

void func_80143A54(void) {
    gSaveContext.save.unk_EE8 = (gSaveContext.save.unk_EE8 & 0xFFFF) | 0x130000;
    gSaveContext.save.unk_EE8 = (gSaveContext.save.unk_EE8 & 0xFFFF0000) | 0xA;
    gSaveContext.save.horseBackBalloonHighScore = 6000; // 60 seconds
    gSaveContext.save.unk_EF4 = (gSaveContext.save.unk_EF4 & 0xFFFF0000) | 0x27;
    gSaveContext.save.unk_EF4 = (gSaveContext.save.unk_EF4 & 0xFFFF) | 0xA0000;
    gSaveContext.save.dekuPlaygroundHighScores[0] = 7500; // 75 seconds
    gSaveContext.save.dekuPlaygroundHighScores[1] = 7500; // 75 seconds
    gSaveContext.save.dekuPlaygroundHighScores[2] = 7600; // 76 seconds
}

void func_80143AC4(void) {
    // Unconfirmed: "Link the Goron Claims His Reservation: 4:30 PM"
    gSaveContext.save.weekEventReg[55] &= (u8)~0x02;
    // Unconfirmed: "Postman fleeing town"
    gSaveContext.save.weekEventReg[90] &= (u8)~0x01;
    // Unconfirmed: "Postman is about to flee"
    gSaveContext.save.weekEventReg[89] &= (u8)~0x40;
    // Unconfirmed: "Postman has delivered priority mail"
    gSaveContext.save.weekEventReg[89] &= (u8)~0x08;
    // Unconfirmed: "Postman showing priority mail to Madame"
    gSaveContext.save.weekEventReg[85] &= (u8)~0x80;
}

extern s32 fake_D_801C5FD0[][5];

#ifdef NON_EQUIVALENT
void func_80143B0C(GameState* gameState) {
    GlobalContext* globalCtx = (GlobalContext*)gameState;
    s16 temp_s0;
    u16 phi_v1_3;
    s32 j;
    s32 phi_s1_2;
    s32 phi_v0;
    s32 i;

    gSaveContext.save.daySpeed = 0;
    gSaveContext.save.daysElapsed = 0;
    gSaveContext.save.day = 0;
    gSaveContext.save.time = 0x3FFF;
    gSaveContext.save.playerData.deaths++;

    if (gSaveContext.save.playerData.deaths > 999) {
        gSaveContext.save.playerData.deaths = 999;
    }

    temp_s0 = convert_scene_number_among_shared_scenes(globalCtx->sceneNum);
    func_80169D40(globalCtx);

    globalCtx->actorCtx.chestFlags &= D_801C5FC0[temp_s0][2];
    globalCtx->actorCtx.switchFlags[0] &= D_801C5FC0[temp_s0][0];
    globalCtx->actorCtx.switchFlags[1] &= D_801C5FC0[temp_s0][1];
    globalCtx->actorCtx.collectibleFlags[0] &= D_801C5FC0[temp_s0][3];
    globalCtx->actorCtx.clearedRooms = 0;

    for (i = 0; i < 113; i++) {
        gSaveContext.cycleSceneFlags[i].swch0 &= D_801C5FC0[i][0];
        gSaveContext.cycleSceneFlags[i].swch1 &= D_801C5FC0[i][1];
        gSaveContext.cycleSceneFlags[i].chest &= D_801C5FC0[i][2];
        if (&gSaveContext && &gSaveContext && &gSaveContext) {} // TODO: Needed?
        gSaveContext.cycleSceneFlags[i].collectible &= D_801C5FC0[i][3];
        gSaveContext.cycleSceneFlags[i].clearedRoom = 0;
        gSaveContext.save.permanentSceneFlags[i].unk_14 = 0;
        gSaveContext.save.permanentSceneFlags[i].unk_18 = 0;
    }

    if (phi_s1_2) {} // TODO: N eededd?

    for (; i < 120; i++) {
        gSaveContext.cycleSceneFlags[i].chest = 0;
        gSaveContext.cycleSceneFlags[i].swch0 = 0;
        gSaveContext.cycleSceneFlags[i].swch1 = 0;
        gSaveContext.cycleSceneFlags[i].clearedRoom = 0;
        gSaveContext.cycleSceneFlags[i].collectible = 0;
    }

    for (i = 0; i < 3; i++) {
        gSaveContext.maskMaskBit[i] = 0;
    }

    if (gSaveContext.save.weekEventReg[0x54] & 0x20) {
        func_801149A0(0x35, gItemSlots[0x35]);
    }

    for (i = 0; i < ARRAY_COUNT(D_801C66D0); i++) {
        phi_v1_3 = D_801C66D0[i];

        for (j = 0; j < 8; j++) {
            if ((phi_v1_3 & 3) == 0) {
                // TODO: Needed? (no &=)
                gSaveContext.save.weekEventReg[i] = gSaveContext.save.weekEventReg[i] & (D_801C6890[j] ^ 0xFF) & 0xFF;
            }
            phi_v1_3 >>= 2;
        }
    }

    for (i = 0; i < ARRAY_COUNT(gSaveContext.eventInf); i++) {
        gSaveContext.eventInf[i] = 0;
    }

    gSaveContext.eventInf[7] &= (u8)~1;
    gSaveContext.eventInf[7] &= (u8)~2;
    gSaveContext.eventInf[7] &= (u8)~4;
    gSaveContext.eventInf[7] &= (u8)~8;
    gSaveContext.eventInf[7] &= (u8)~0x10;

    if (gSaveContext.save.playerData.rupees != 0) {
        gSaveContext.eventInf[7] |= 1;
    }

    if ((INV_CONTENT(ITEM_BOMB) == ITEM_BOMB) && (AMMO(INV_CONTENT(ITEM_BOMB)) != 0)) {
        gSaveContext.eventInf[7] |= 2;
    }
    if ((INV_CONTENT(ITEM_NUT) == ITEM_NUT) && (AMMO(INV_CONTENT(ITEM_NUT)) != 0)) {
        gSaveContext.eventInf[7] |= 4;
    }
    if ((INV_CONTENT(ITEM_STICK) == ITEM_STICK) && (AMMO(INV_CONTENT(ITEM_STICK)) != 0)) {
        gSaveContext.eventInf[7] |= 8;
    }
    if ((INV_CONTENT(ITEM_BOW) == ITEM_BOW) && (AMMO(INV_CONTENT(ITEM_BOW)) != 0)) {
        gSaveContext.eventInf[7] |= 0x10;
    }

    for (i = 0; i < ARRAY_COUNT(D_801C67B0); i++) {
        if (D_801C67B0[i] != 0xFF) {
            if ((gSaveContext.save.inventory.items[i] != ITEM_NONE) && (i != 0xD)) {
                AMMO(gSaveContext.save.inventory.items[i]) = 0;
            }
        }
    }

    for (i = 0; i < 6; i++) {
        // Check for all bottled items
        if (gSaveContext.save.inventory.items[i] > ITEM_BOTTLE) {
            if (gSaveContext.save.inventory.items[i] <= ITEM_OBABA_DRINK) {

                for (phi_s1_2 = 1; phi_s1_2 != 4; phi_s1_2++) {
                    if (phi_s1_2 == 0) {
                        phi_v0 = gSaveContext.save.equips.buttonItems[CUR_FORM][phi_s1_2];
                    } else {
                        phi_v0 = gSaveContext.save.equips.buttonItems[0][phi_s1_2];
                    }

                    if ((phi_v0 & 0xFF) == gSaveContext.save.inventory.items[i]) {
                        if (phi_s1_2 == 0) {
                            gSaveContext.save.equips.buttonItems[CUR_FORM][phi_s1_2] = ITEM_BOTTLE;
                        } else {
                            gSaveContext.save.equips.buttonItems[0][phi_s1_2] = ITEM_BOTTLE;
                        }
                        func_80112B40(globalCtx, phi_s1_2 & 0xFF);
                    }
                }
                gSaveContext.save.inventory.items[i] = ITEM_BOTTLE;
            }
        }
    }

    REMOVE_QUEST_ITEM(25);

    if (gSaveContext.save.playerData.health < 0x30) {
        gSaveContext.save.playerData.health = 0x30;
    }

    if (CUR_EQUIP_VALUE_VOID(0) < 3) {
        gSaveContext.save.equips.equipment =
            (1 << gEquipShifts[0]) | (gSaveContext.save.equips.equipment & gEquipNegMasks[0]);

        if (CUR_FORM == 0) {
            if ((((gSaveContext.save.stolenItems & 0xFF000000) >> 0x18) >= ITEM_SWORD_GILDED) ||
                (((gSaveContext.save.stolenItems & 0xFF0000) >> 0x10) >= ITEM_SWORD_GILDED)) {

                gSaveContext.save.equips.buttonItems[CUR_FORM][0] = ITEM_SWORD_GILDED;
                gSaveContext.save.equips.equipment =
                    (3 << gEquipShifts[0]) | (gSaveContext.save.equips.equipment & gEquipNegMasks[0]);
            } else {
                gSaveContext.save.equips.buttonItems[CUR_FORM][0] = 0x4D;
            }
        } else {
            if ((((gSaveContext.save.stolenItems & 0xFF000000) >> 0x18) >= ITEM_SWORD_GILDED) ||
                (((gSaveContext.save.stolenItems & 0xFF0000) >> 0x10) >= ITEM_SWORD_GILDED)) {
                gSaveContext.save.equips.buttonItems[0][0] = ITEM_SWORD_GILDED;
                gSaveContext.save.equips.equipment =
                    (3 << gEquipShifts[0]) | (gSaveContext.save.equips.equipment & gEquipNegMasks[0]);
            } else {
                gSaveContext.save.equips.buttonItems[0][0] = ITEM_SWORD_KOKIRI;
            }
        }
    }

    if ((((gSaveContext.save.stolenItems & 0xFF000000) >> 0x18) == ITEM_SWORD_GREAT_FAIRY) ||
        (((gSaveContext.save.stolenItems & 0xFF0000) >> 0x10) == ITEM_SWORD_GREAT_FAIRY)) {
        gSaveContext.save.inventory.items[gItemSlots[0x10]] = ITEM_SWORD_GREAT_FAIRY;
    }

    if (((gSaveContext.save.stolenItems & 0xFF000000) >> 0x18) == ITEM_BOTTLE) {
        for (i = 0; i < 6; i++) {
            if (gSaveContext.save.inventory.items[gItemSlots[ITEM_BOTTLE] + i] == ITEM_NONE) {
                gSaveContext.save.inventory.items[gItemSlots[ITEM_BOTTLE] + i] = ITEM_BOTTLE;
                break;
            }
        }
    }

    if (((gSaveContext.save.stolenItems & 0xFF0000) >> 0x10) == ITEM_BOTTLE) {
        for (i = 0; i < 6; i++) {
            if (gSaveContext.save.inventory.items[gItemSlots[ITEM_BOTTLE] + i] == ITEM_NONE) {
                gSaveContext.save.inventory.items[gItemSlots[ITEM_BOTTLE] + i] = ITEM_BOTTLE;
                break;
            }
        }
    }

    gSaveContext.save.stolenItems &= 0xFFFFFF;
    gSaveContext.save.stolenItems &= 0xFF00FFFF;

    func_801149A0(5, 5);
    func_801149A0(0xB, 0xB);
    func_801149A0(0x11, 0x11);

    for (i = 1; i != 4; i++) {
        if (i == 0) {
            phi_v0 = gSaveContext.save.equips.buttonItems[CUR_FORM][i];
        } else {
            phi_v0 = gSaveContext.save.equips.buttonItems[0][i];
        }

        if ((phi_v0 & 0xFF) >= 40) {
            if (i == 0) {
                if (phi_v0) {} // TODO: Needed?
                phi_v0 = gSaveContext.save.equips.buttonItems[CUR_FORM][i];
            } else {
                phi_v0 = gSaveContext.save.equips.buttonItems[0][i];
            }

            if ((phi_v0 & 0xFF) < 49) {
                if (i == 0) {
                    gSaveContext.save.equips.buttonItems[CUR_FORM][i] = ITEM_NONE;
                } else {
                    gSaveContext.save.equips.buttonItems[0][i] = ITEM_NONE;
                }
                func_80112B40(globalCtx, i & 0xFF);
            }
        }
    }

    gSaveContext.save.skullTokenCount &= 0xFFFF;
    gSaveContext.save.skullTokenCount &= 0xFFFF0000;
    gSaveContext.save.unk_EC4 = 0;

    gSaveContext.save.unk_E88[0] = 0;
    gSaveContext.save.unk_E88[1] = 0;
    gSaveContext.save.unk_E88[2] = 0;
    gSaveContext.save.unk_E88[3] = 0;
    gSaveContext.save.unk_E88[4] = 0;
    gSaveContext.save.unk_E88[5] = 0;
    gSaveContext.save.unk_E88[6] = 0;

    func_80143A54();

    for (i = 0; i < 8; i++) {
        gSaveContext.save.inventory.dungeonItems[i] &= (u8)~1;
        gSaveContext.save.inventory.dungeonKeys[i] = 0;
        gSaveContext.save.inventory.strayFairies[i] = 0;
    }

    gSaveContext.save.playerData.rupees = 0;
    gSaveContext.save.unk_F65 = 0;
    gSaveContext.powderKegTimer = 0;
    gSaveContext.unk_1014 = 0;
    gSaveContext.jinxTimer = 0;
    gSaveContext.rupeeAccumulator = 0;

    func_800F3B2C(globalCtx);
}
#else
void func_80143B0C(GameState* gameState);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_sram_NES/func_80143B0C.s")
#endif

void Sram_IncrementDay(void) {
    if (CURRENT_DAY <= 3) {
        gSaveContext.save.day++;
        gSaveContext.save.daysElapsed++;
    }

    gSaveContext.save.bombersCaughtNum = 0;
    gSaveContext.save.bombersCaughtOrder[0] = 0;
    gSaveContext.save.bombersCaughtOrder[1] = 0;
    gSaveContext.save.bombersCaughtOrder[2] = 0;
    gSaveContext.save.bombersCaughtOrder[3] = 0;
    gSaveContext.save.bombersCaughtOrder[4] = 0;
    // Unconfirmed: "Bombers Hide & Seek started on Day 1???"
    gSaveContext.save.weekEventReg[0x49] &= (u8)~0x10;
    // Unconfirmed: "Bombers Hide & Seek in Progress"
    gSaveContext.save.weekEventReg[0x55] &= (u8)~0x02;
}

u16 Sram_CalcChecksum(void* data, size_t count) {
    u8* dataPtr = data;
    u16 chkSum = 0;

    while (count-- > 0) {
        chkSum += *dataPtr;
        dataPtr++;
    }
    return chkSum;
}

// Resets `Save` substruct
void func_80144628(void) {
    gSaveContext.save.entranceIndex = 0x1C00;
    gSaveContext.save.equippedMask = 0;
    gSaveContext.save.isFirstCycle = false;
    gSaveContext.save.unk_06 = 0;
    gSaveContext.save.linkAge = 0;
    gSaveContext.save.isNight = false;
    gSaveContext.save.daySpeed = 0;
    gSaveContext.save.snowheadCleared = 0;
    gSaveContext.save.hasTatl = false;
    gSaveContext.save.isOwlSave = false;

    // Instead of bloating all save context accesses with an extra sub-struct, the size of the would-be sub-struct
    // is calculated manually
    bzero(&gSaveContext.save.playerData, sizeof(Save) - offsetof(Save, playerData));
}

void Sram_GenerateRandomSaveFields(void) {
    s32 randBombers;
    s16 sp2A;
    s16 pad;
    s16 i;
    s16 j;
    s32 k;
    s16 randSpiderHouse;

    func_80143A54();

    gSaveContext.save.lotteryCodes[0][0] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[0][1] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[0][2] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[1][0] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[1][1] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[1][2] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[2][0] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[2][1] = Rand_S16Offset(0, 10);
    gSaveContext.save.lotteryCodes[2][2] = Rand_S16Offset(0, 10);

    // Needed to match...
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {}
    }

    i = 0;
    sp2A = Rand_S16Offset(0, 16) & 3;
    k = 6;
    while (i != k) {
        randSpiderHouse = Rand_S16Offset(0, 16) & 3;
        if (sp2A != randSpiderHouse) {
            gSaveContext.save.spiderHouseMaskOrder[i] = randSpiderHouse;
            i++;
            sp2A = randSpiderHouse;
        }
    }

    do {
        randBombers = Rand_S16Offset(0, 6);
    } while (randBombers <= 0 || randBombers >= 6);

    gSaveContext.save.bomberCode[0] = randBombers;

    i = 1;
    while (i != 5) {
        k = false;

        do {
            randBombers = Rand_S16Offset(0, 6);
        } while (randBombers <= 0 || randBombers >= 6);

        sp2A = 0;
        do {
            if (randBombers == gSaveContext.save.bomberCode[sp2A]) {
                k = true;
            }
            sp2A++;
        } while (sp2A < i);

        if (k == false) {
            gSaveContext.save.bomberCode[i] = randBombers;
            i++;
        }
    }
}

SavePlayerData sSaveDefaultPlayerData = {
    { '\0', '\0', '\0', '\0', '\0', '\0' },             // newf
    0,                                                  // deaths
    { 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E }, // playerName
    0x0030,                                             // healthCapacity
    0x0030,                                             // health
    0x00,                                               // magicLevel
    0x30,                                               // magic
    0x0000,                                             // rupees
    0x0000,                                             // swordHealth
    0x0000,                                             // tatlTimer
    0x00,                                               // magicAcquired
    0x00,                                               // doubleMagic
    0x00,                                               // doubleDefense
    0x00,                                               // unk_1F
    0xFF,                                               // unk_20
    0x0000,                                             // owlActivationFlags
    0xFF,                                               // unk_24
    0x0008,                                             // savedSceneNum
};

ItemEquips sSaveDefaultItemEquips = {
    {
        { 0x4D, 0xFF, 0xFF, 0xFF },
        { 0x4D, 0xFF, 0xFF, 0xFF },
        { 0x4D, 0xFF, 0xFF, 0xFF },
        { 0xFD, 0xFF, 0xFF, 0xFF },
    },
    {
        { 0x00, 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF, 0xFF },
        { 0xFF, 0xFF, 0xFF, 0xFF },
    },
    0x11,
};

Inventory sSaveDefaultInventory = {
    // items
    {
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
    },
    // masks
    {
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
        ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE,
    },
    // ammo
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    // upgrades
    0x120000,
    // questItems
    0,
    // dungeonItems
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    // dungeonKeys
    { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0 },
    // strayFairies
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    // dekuPlaygroundPlayerName
    {
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
    },
};

u16 sSaveDefaultChecksum = 0;

/**
 *  Initialize new save.
 *  This save has an empty inventory with 3 hearts, sword and shield.
 */
void Sram_InitNewSave(void) {
    gSaveContext.save.playerForm = PLAYER_FORM_HUMAN;
    gSaveContext.save.daysElapsed = 0;
    gSaveContext.save.day = 0;
    gSaveContext.save.time = CLOCK_TIME(6, 0) - 1;
    func_80144628();

    Lib_MemCpy(&gSaveContext.save.playerData, &sSaveDefaultPlayerData, sizeof(SavePlayerData));
    Lib_MemCpy(&gSaveContext.save.equips, &sSaveDefaultItemEquips, sizeof(ItemEquips));
    Lib_MemCpy(&gSaveContext.save.inventory, &sSaveDefaultInventory, sizeof(Inventory));
    Lib_MemCpy(&gSaveContext.save.checksum, &sSaveDefaultChecksum, sizeof(gSaveContext.save.checksum));

    gSaveContext.save.horseData.scene = SCENE_F01;
    gSaveContext.save.horseData.pos.x = -1420;
    gSaveContext.save.horseData.pos.y = 257;
    gSaveContext.save.horseData.pos.z = -1285;
    gSaveContext.save.horseData.angle = -0x7554;

    gSaveContext.nextCutsceneIndex = 0;
    gSaveContext.save.playerData.magicLevel = 0;
    Sram_GenerateRandomSaveFields();
}

SavePlayerData sSaveDebugPlayerData = {
    { 'Z', 'E', 'L', 'D', 'A', '3' },
    0x0000,
    { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
    0x0080,
    0x0080,
    0x00,
    0x30,
    0x0032,
    0x0064,
    0x0000,
    0x01,
    0x00,
    0x00,
    0x00,
    0xFF,
    0x0000,
    0xFF,
    0x0008,
};

ItemEquips sSaveDebugItemEquips = {
    { { 0x4D, 0x01, 0x13, 0x00 }, { 0x4D, 0x01, 0x33, 0x00 }, { 0x4D, 0x01, 0x34, 0x00 }, { 0x09, 0x09, 0x32, 0x00 } },
    { { 0x00, 0x01, 0x13, 0x00 }, { 0x00, 0x0A, 0x23, 0x07 }, { 0x00, 0x0C, 0x29, 0x07 }, { 0x00, 0x01, 0x1D, 0x07 } },
    0x0011,
};

Inventory sSaveDebugInventory = {
    {
        ITEM_OCARINA,
        ITEM_BOW,
        ITEM_ARROW_FIRE,
        ITEM_ARROW_ICE,
        ITEM_ARROW_LIGHT,
        ITEM_MOON_TEAR,
        ITEM_BOMB,
        ITEM_BOMBCHU,
        ITEM_STICK,
        ITEM_NUT,
        ITEM_MAGIC_BEANS,
        ITEM_ROOM_KEY,
        ITEM_POWDER_KEG,
        ITEM_PICTO_BOX,
        ITEM_LENS,
        ITEM_HOOKSHOT,
        ITEM_SWORD_GREAT_FAIRY,
        ITEM_LETTER_TO_KAFEI,
        ITEM_BOTTLE,
        ITEM_POTION_RED,
        ITEM_POTION_GREEN,
        ITEM_POTION_BLUE,
        ITEM_NONE,
        ITEM_NONE,
    },
    {
        0x3E, 0x38, 0x47, 0x45, 0x40, 0x32, 0x3A, 0x46, 0x39, 0x42, 0x48, 0x33,
        0x3C, 0x3D, 0x37, 0x3F, 0x36, 0x34, 0x43, 0x41, 0x3B, 0x44, 0x49, 0x35,
    },
    {
        1, 0x1E, 1, 1, 1, 1, 0x1E, 0x1E, 0x1E, 0x1E, 1, 1, 1, 1, 0x1E, 1, 1, 1, 1, 1, 1, 1, 0, 0,
    },
    0x120009,
    0x105F7C0,
    { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 },
    { 8, 8, 8, 8, 8, 8, 8, 8, 8, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    {
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
        // "LINK    "
        { 0x15, 0x12, 0x17, 0x14, 0x3E, 0x3E, 0x3E, 0x3E },
    },
};

u16 sSaveDebugChecksum = 0;

u8 D_801C6A48[] = {
    0x35, 0x33, 0x34, 0x32, 0x35,
};

u8 D_801C6A50[] = {
    0x2F, 0x23, 0x29, 0x1D, 0x2F,
};

/**
 *  Initialize debug save. This is also used on the Title Screen
 *  This save has a mostly full inventory, every mask and 10 hearts.
 *
 *  Some noteable flags that are set:
 *  TODO: Investigate the flags
 */
void Sram_InitDebugSave(void) {
    func_80144628();

    Lib_MemCpy(&gSaveContext.save.playerData, &sSaveDebugPlayerData, sizeof(SavePlayerData));
    Lib_MemCpy(&gSaveContext.save.equips, &sSaveDebugItemEquips, sizeof(ItemEquips));
    Lib_MemCpy(&gSaveContext.save.inventory, &sSaveDebugInventory, sizeof(Inventory));
    Lib_MemCpy(&gSaveContext.save.checksum, &sSaveDebugChecksum, sizeof(gSaveContext.save.checksum));

    if (gSaveContext.save.playerForm != PLAYER_FORM_HUMAN) {
        gSaveContext.save.equips.buttonItems[0][2] = D_801C6A48[((void)0, gSaveContext.save.playerForm & 0xFF)];
        gSaveContext.save.equips.cButtonSlots[0][2] = D_801C6A50[((void)0, gSaveContext.save.playerForm & 0xFF)];
    }

    gSaveContext.save.hasTatl = true;

    gSaveContext.save.horseData.scene = SCENE_F01;
    gSaveContext.save.horseData.pos.x = -1420;
    gSaveContext.save.horseData.pos.y = 257;
    gSaveContext.save.horseData.pos.z = -1285;
    gSaveContext.save.horseData.angle = -0x7554;

    gSaveContext.save.entranceIndex = 0x1C00;
    gSaveContext.save.isFirstCycle = true;

    //
    gSaveContext.save.weekEventReg[0x0F] |= 0x20;
    // Unconfirmed: "Entered South Clock Town"
    gSaveContext.save.weekEventReg[0x3B] |= 0x04;
    // Unconfirmed: "Tatl's Second Cycle Text?"
    gSaveContext.save.weekEventReg[0x1F] |= 0x04;

    gSaveContext.cycleSceneFlags[SCENE_INSIDETOWER].swch0 = 1;
    gSaveContext.save.permanentSceneFlags[SCENE_INSIDETOWER].swch0 = 1;
    gSaveContext.save.playerData.magicLevel = 0;

    Sram_GenerateRandomSaveFields();
}

void func_80144A94(SramContext* sramCtx) {
    s32 i;
    s32 cutscene = gSaveContext.save.cutscene;

    bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));

    if (func_80185968(*sramCtx->saveBuf, D_801C67C8[gSaveContext.fileNum * 2], D_801C67F0[gSaveContext.fileNum * 2]) !=
        0) {
        func_80185968(*sramCtx->saveBuf, D_801C67C8[gSaveContext.fileNum * 2 + 1],
                      D_801C67F0[gSaveContext.fileNum * 2 + 1]);
    }
    Lib_MemCpy(&gSaveContext.save, sramCtx->saveBuf, sizeof(Save));
    if (CHECK_NEWF(gSaveContext.save.playerData.newf)) {
        func_80185968(*sramCtx->saveBuf, D_801C67C8[gSaveContext.fileNum * 2 + 1],
                      D_801C67F0[gSaveContext.fileNum * 2 + 1]);
        Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, sizeof(Save));
    }
    gSaveContext.save.cutscene = cutscene;

    for (i = 0; i < ARRAY_COUNT(gSaveContext.eventInf); i++) {
        gSaveContext.eventInf[i] = 0;
    }

    for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
        gSaveContext.cycleSceneFlags[i].chest = gSaveContext.save.permanentSceneFlags[i].chest;
        gSaveContext.cycleSceneFlags[i].swch0 = gSaveContext.save.permanentSceneFlags[i].swch0;
        gSaveContext.cycleSceneFlags[i].swch1 = gSaveContext.save.permanentSceneFlags[i].swch1;
        gSaveContext.cycleSceneFlags[i].clearedRoom = gSaveContext.save.permanentSceneFlags[i].clearedRoom;
        gSaveContext.cycleSceneFlags[i].collectible = gSaveContext.save.permanentSceneFlags[i].collectible;
    }

    for (i = 0; i < ARRAY_COUNT(gSaveContext.unk_3DD0); i++) {
        gSaveContext.unk_3DD0[i] = 0;
        gSaveContext.unk_3DE0[i] = 0;
        gSaveContext.unk_3E18[i] = 0;
        gSaveContext.unk_3E50[i] = 0;
        gSaveContext.unk_3E88[i] = 0;
        gSaveContext.unk_3EC0[i] = 0;
    }

    D_801BDAA0 = 1;
    D_801BDA9C = 0;
    gSaveContext.powderKegTimer = 0;
    gSaveContext.unk_1014 = 0;
    gSaveContext.jinxTimer = 0;
}

u16 D_801C6A58[] = { 0x68B0, 0x6A60, 0xB230, 0x9A80, 0xD890, 0x3E40, 0x8640, 0x84A0, 0x2040, 0xAA30 };

#ifdef NON_MATCHING
void Sram_OpenSave(GameState* gameState, SramContext* sramCtx) {
    s32 i;
    FileChooseContext* fileChooseCtx = (FileChooseContext*)gameState;
    s32 phi_t1;
    s32 pad1[2];
    s32 fileNum;

    if (gSaveContext.unk_3F3F) {
        bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));

        if (gSaveContext.fileNum == 0xFF) {
            func_80185968(*sramCtx->saveBuf, D_801C67C8[0], D_801C67F0[0]);
        } else if (fileChooseCtx->unk_2446A[gSaveContext.fileNum] != 0) {
            phi_t1 = gSaveContext.fileNum + 2;
            phi_t1 *= 2;

            if (func_80185968(*sramCtx->saveBuf, D_801C67C8[phi_t1], D_801C67F0[phi_t1]) != 0) {
                func_80185968(*sramCtx->saveBuf, D_801C67C8[phi_t1 + 1], D_801C67F0[phi_t1 + 1]);
            }
        } else {
            phi_t1 = gSaveContext.fileNum;
            phi_t1 *= 2;

            if (func_80185968(*sramCtx->saveBuf, D_801C67C8[phi_t1], D_801C67F0[phi_t1]) != 0) {
                func_80185968(*sramCtx->saveBuf, D_801C67C8[phi_t1 + 1], D_801C67F0[phi_t1 + 1]);
            }
        }

        Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, D_801C6870[phi_t1]);

        if (CHECK_NEWF(gSaveContext.save.playerData.newf)) {
            func_80185968(*sramCtx->saveBuf, D_801C67C8[phi_t1 + 1], D_801C67F0[phi_t1 + 1]);
            Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, D_801C6870[phi_t1]);
        }
    }

    gSaveContext.save.playerData.magicLevel = 0;

    if (!gSaveContext.save.isOwlSave) {
        for (i = 0; i < ARRAY_COUNT(gSaveContext.eventInf); i++) {
            gSaveContext.eventInf[i] = 0;
        }

        for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
            gSaveContext.cycleSceneFlags[i].chest = gSaveContext.save.permanentSceneFlags[i].chest;
            gSaveContext.cycleSceneFlags[i].swch0 = gSaveContext.save.permanentSceneFlags[i].swch0;
            gSaveContext.cycleSceneFlags[i].swch1 = gSaveContext.save.permanentSceneFlags[i].swch1;
            gSaveContext.cycleSceneFlags[i].clearedRoom = gSaveContext.save.permanentSceneFlags[i].clearedRoom;
            gSaveContext.cycleSceneFlags[i].collectible = gSaveContext.save.permanentSceneFlags[i].collectible;
        }

        for (i = 0; i < ARRAY_COUNT(gSaveContext.unk_3DD0); i++) {
            gSaveContext.unk_3DD0[i] = 0;
            gSaveContext.unk_3DE0[i] = 0;
            gSaveContext.unk_3E18[i] = 0;
            gSaveContext.unk_3E50[i] = 0;
            gSaveContext.unk_3E88[i] = 0;
            gSaveContext.unk_3EC0[i] = 0;
        }

        if (gSaveContext.save.isFirstCycle) {
            gSaveContext.save.entranceIndex = 0xD800;
            gSaveContext.save.day = 0;
            gSaveContext.save.time = 0x3FFF;
        } else {
            gSaveContext.save.entranceIndex = 0x1C00;
            gSaveContext.nextCutsceneIndex = 0;
            gSaveContext.save.playerForm = PLAYER_FORM_HUMAN;
        }
    } else {
        gSaveContext.save.entranceIndex = D_801C6A58[gSaveContext.save.owlSaveLocation];
        if (D_801C6A58[gSaveContext.save.owlSaveLocation] == 0x84A0 && (gSaveContext.save.weekEventReg[20] & 2)) {
            // Unconfirmed weekEventReg: "Woodfall Temple Prison Entrance raised / Water cleansed"
            gSaveContext.save.entranceIndex = 0xCA0;
        } else if (D_801C6A58[gSaveContext.save.owlSaveLocation] == 0x9A80 &&
                   (gSaveContext.save.weekEventReg[33] & 0x80)) {
            // Unconfirmed weekEventReg: "Mountain Village Unfrozen"
            gSaveContext.save.entranceIndex = 0xAE80;
        }

        for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
            gSaveContext.cycleSceneFlags[i].chest = gSaveContext.save.permanentSceneFlags[i].chest;
            gSaveContext.cycleSceneFlags[i].swch0 = gSaveContext.save.permanentSceneFlags[i].swch0;
            gSaveContext.cycleSceneFlags[i].swch1 = gSaveContext.save.permanentSceneFlags[i].swch1;
            gSaveContext.cycleSceneFlags[i].clearedRoom = gSaveContext.save.permanentSceneFlags[i].clearedRoom;
            gSaveContext.cycleSceneFlags[i].collectible = gSaveContext.save.permanentSceneFlags[i].collectible;
        }

        if (gSaveContext.save.unk_F65) {
            Lib_MemCpy(D_801D88A0, gSaveContext.save.scarecrowsSong, sizeof(gSaveContext.save.scarecrowsSong));

            for (i = 0; i != ARRAY_COUNT(gSaveContext.save.scarecrowsSong); i++) {}
        }

        fileNum = gSaveContext.fileNum;
        func_80147314(sramCtx, fileNum);
    }
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_sram_NES/Sram_OpenSave.s")
#endif

void func_8014546C(SramContext* sramCtx) {
    s32 i;

    if (gSaveContext.save.isOwlSave) {
        for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
            gSaveContext.save.permanentSceneFlags[i].chest = gSaveContext.cycleSceneFlags[i].chest;
            gSaveContext.save.permanentSceneFlags[i].swch0 = gSaveContext.cycleSceneFlags[i].swch0;
            gSaveContext.save.permanentSceneFlags[i].swch1 = gSaveContext.cycleSceneFlags[i].swch1;
            gSaveContext.save.permanentSceneFlags[i].clearedRoom = gSaveContext.cycleSceneFlags[i].clearedRoom;
            gSaveContext.save.permanentSceneFlags[i].collectible = gSaveContext.cycleSceneFlags[i].collectible;
        }

        gSaveContext.save.checksum = 0;
        gSaveContext.save.checksum = Sram_CalcChecksum(&gSaveContext, offsetof(SaveContext, fileNum));

        Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext, offsetof(SaveContext, fileNum));
    } else {
        for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
            gSaveContext.save.permanentSceneFlags[i].chest = gSaveContext.cycleSceneFlags[i].chest;
            gSaveContext.save.permanentSceneFlags[i].swch0 = gSaveContext.cycleSceneFlags[i].swch0;
            gSaveContext.save.permanentSceneFlags[i].swch1 = gSaveContext.cycleSceneFlags[i].swch1;
            gSaveContext.save.permanentSceneFlags[i].clearedRoom = gSaveContext.cycleSceneFlags[i].clearedRoom;
            gSaveContext.save.permanentSceneFlags[i].collectible = gSaveContext.cycleSceneFlags[i].collectible;
        }

        gSaveContext.save.checksum = 0;
        gSaveContext.save.checksum = Sram_CalcChecksum(&gSaveContext.save, sizeof(Save));

        if (gSaveContext.unk_3F3F) {
            Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext, sizeof(Save));
            Lib_MemCpy(&(*sramCtx->saveBuf)[0x2000], &gSaveContext.save, sizeof(Save));
        }
    }
}

/**
 * Save permanent scene flags, calculate checksum, copy save context to the save buffer
 */
void func_80145698(SramContext* sramCtx) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gSaveContext.cycleSceneFlags); i++) {
        gSaveContext.save.permanentSceneFlags[i].chest = gSaveContext.cycleSceneFlags[i].chest;
        gSaveContext.save.permanentSceneFlags[i].swch0 = gSaveContext.cycleSceneFlags[i].swch0;
        gSaveContext.save.permanentSceneFlags[i].swch1 = gSaveContext.cycleSceneFlags[i].swch1;
        gSaveContext.save.permanentSceneFlags[i].clearedRoom = gSaveContext.cycleSceneFlags[i].clearedRoom;
        gSaveContext.save.permanentSceneFlags[i].collectible = gSaveContext.cycleSceneFlags[i].collectible;
    }

    gSaveContext.save.checksum = 0;
    gSaveContext.save.checksum = Sram_CalcChecksum(&gSaveContext.save, sizeof(Save));
    if (gSaveContext.unk_3F3F != 0) {
        Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext, sizeof(Save));
        Lib_MemCpy(&(*sramCtx->saveBuf)[0x2000], &gSaveContext.save, sizeof(Save));
    }
}

// Verifies save and use backup if corrupted?
#ifdef NON_EQUIVALENT
void func_801457CC(GameState* gameState, SramContext* sramCtx) {
    FileChooseContext* fileChooseCtx = (FileChooseContext*)gameState;
    u16 sp7A;
    // u16 sp78;
    u16 sp76;
    // u16 sp74;
    u16 sp6E; //!
    // s32 sp68;
    // u16 sp66;
    u16 phi_s2; //!
    u16 sp64;
    // s32 sp60;
    // s32 sp5C;
    // s32 sp58;
    // u32 new_var;
    u16 phi_s2_3;
    // s16 fakevar;

    u16 temp_s2;
    u16 temp_v0_2;
    u16 phi_a0;

    if (gSaveContext.unk_3F3F) {
        D_801F6AF0 = gSaveContext.save.time;
        D_801F6AF2 = gSaveContext.unk_3F3F;
        sp64 = 0;

        for (sp76 = 0; sp76 < 5; sp76++) {
            bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));

            phi_s2 = false;
            sp6E = 0;
            if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64], D_801C67F0[sp64])) {
                sp6E = 1;
                if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1])) {
                    phi_s2 = true;
                }
            }

            if (sp76 < 2) {
                fileChooseCtx->unk_24468[sp76] = 0;
                if (phi_s2) {
                    bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
                    Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64 & 0xFFu]); // TODO: Needed?
                } else {
                    Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                    temp_s2 = gSaveContext.save.checksum;
                    gSaveContext.save.checksum = 0;
                    temp_v0_2 = Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64]);
                    if (sramCtx && sramCtx && sramCtx) {} // TODO: Needed?
                    gSaveContext.save.checksum = temp_s2;

                    if (CHECK_NEWF(gSaveContext.save.playerData.newf) || (temp_s2 != temp_v0_2)) {
                        sp6E = 1;
                        if ((gSaveContext.save.playerData.newf[0] == 'Z') &&
                            (gSaveContext.save.playerData.newf[1] == 'E')) {
                            if (temp_v0_2) {} // TODO: Needed?
                            phi_s2 = false;
                        }

                        if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1])) {
                            phi_s2 = true;
                        }

                        Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                        temp_s2 = gSaveContext.save.checksum;
                        gSaveContext.save.checksum = 0;
                        if (phi_s2 || CHECK_NEWF(gSaveContext.save.playerData.newf) ||
                            (temp_s2 != Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64]))) {
                            bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
                            Lib_MemCpy(&gSaveContext.save, *sramCtx->saveBuf, sizeof(Save));
                            sp6E = 999;
                        }
                    }
                }

                gSaveContext.save.checksum = 0;
                gSaveContext.save.checksum =
                    Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64 & 0xFFFFFFFF]); // TODO: Needed?

                for (sp7A = 0; sp7A < ARRAY_COUNT(gSaveContext.save.playerData.newf); sp7A++) {
                    fileChooseCtx->newf[sp76][sp7A] = gSaveContext.save.playerData.newf[sp7A];
                }

                if (!CHECK_NEWF(fileChooseCtx->newf[sp76])) {
                    fileChooseCtx->unk_2440C[sp76] = gSaveContext.save.playerData.deaths;

                    for (sp7A = 0; sp7A < ARRAY_COUNT(gSaveContext.save.playerData.playerName); sp7A++) {
                        fileChooseCtx->unk_24414[sp76][sp7A] = gSaveContext.save.playerData.playerName[sp7A];
                    }

                    fileChooseCtx->healthCapacity[sp76] = gSaveContext.save.playerData.healthCapacity;
                    fileChooseCtx->health[sp76] = gSaveContext.save.playerData.health;
                    fileChooseCtx->unk_24454[sp76] = gSaveContext.save.inventory.dungeonKeys[9];
                    fileChooseCtx->unk_24444[sp76] = gSaveContext.save.inventory.questItems;
                    fileChooseCtx->unk_24458[sp76] = gSaveContext.save.time;
                    fileChooseCtx->unk_24460[sp76] = gSaveContext.save.day;
                    fileChooseCtx->unk_24468[sp76] = gSaveContext.save.isOwlSave;
                    fileChooseCtx->rupees[sp76] = gSaveContext.save.playerData.rupees;
                    fileChooseCtx->unk_24474[sp76] = CUR_UPG_VALUE(4);

                    for (sp7A = 0, phi_a0 = 0; sp7A < ARRAY_COUNT(gSaveContext.save.inventory.masks); sp7A++) {
                        if (gSaveContext.save.inventory.masks[(s32)sp7A] != 0xFF) {
                            phi_a0++;
                        }
                    }
                    fileChooseCtx->unk_24478[sp76] = phi_a0;
                    fileChooseCtx->unk_2447C[sp76] = ((gSaveContext.save.inventory.questItems & 0xF0000000) >> 0x1C);
                }

                if (sp6E == 1) {
                    Lib_MemCpy(&(*sramCtx->saveBuf)[0x2000], &gSaveContext.save, sizeof(Save));
                    func_80146EBC(sramCtx, D_801C67C8[sp64], D_801C6818[sp64]);
                } else if (!sp6E) { // TODO: == 0?
                    temp_s2 = gSaveContext.save.checksum;
                    if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1])) {
                        phi_s2_3 = 1;
                    } else {
                        Lib_MemCpy(&gSaveContext.save, *sramCtx->saveBuf, sizeof(Save));
                        phi_s2_3 = gSaveContext.save.checksum;
                        gSaveContext.save.checksum = 0;
                        sp7A = Sram_CalcChecksum(&gSaveContext.save, sizeof(Save));
                    }

                    if (CHECK_NEWF(gSaveContext.save.playerData.newf) || (phi_s2_3 != sp7A) || (phi_s2_3 != temp_s2)) {
                        func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64], D_801C67F0[sp64]);
                        Lib_MemCpy(&gSaveContext.save, *sramCtx->saveBuf, sizeof(Save));
                        Lib_MemCpy(&(*sramCtx->saveBuf)[0x2000], &gSaveContext.save, sizeof(Save));
                        func_80146EBC(sramCtx, D_801C67C8[sp64], D_801C6818[sp64]);
                    }
                }
            } else if (sp76 < 4) {
                fileChooseCtx->unk_24468[sp76] = 0;

                if (!CHECK_NEWF(fileChooseCtx->newf2[(s32)sp76])) { // TODO: Needed?
                    if (phi_s2) {
                        bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
                        Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf,
                                   D_801C6870[sp64] & 0xFFFFFFFFFFFFFFFF); // TODO: Needed?
                    } else {
                        Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                        temp_s2 = gSaveContext.save.checksum;

                        gSaveContext.save.checksum = 0;
                        temp_v0_2 = Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64]);
                        gSaveContext.save.checksum = temp_s2;
                        if (CHECK_NEWF(gSaveContext.save.playerData.newf) || (temp_s2 != temp_v0_2)) {
                            sp6E = 1;
                            if ((gSaveContext.save.playerData.newf[0] == 'Z') &&
                                (gSaveContext.save.playerData.newf[1] == 'E')) {
                                phi_s2 = false;
                            }

                            if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1])) {
                                phi_s2 = true;
                            }

                            Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                            temp_s2 = gSaveContext.save.checksum;
                            gSaveContext.save.checksum = 0;
                            if (phi_s2 || CHECK_NEWF(gSaveContext.save.playerData.newf) ||
                                (temp_s2 != Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64]))) {
                                bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
                                Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                                sp6E = 999;
                            }
                        }
                    }

                    gSaveContext.save.checksum = 0;
                    gSaveContext.save.checksum =
                        Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64 & 0xFFFFFFFF]); // TODO: Needed?

                    for (sp7A = 0; sp7A < ARRAY_COUNT(gSaveContext.save.playerData.newf); sp7A++) {
                        fileChooseCtx->newf[sp76][sp7A] = gSaveContext.save.playerData.newf[sp7A];
                    }

                    if (!CHECK_NEWF(fileChooseCtx->newf[sp76])) {
                        fileChooseCtx->unk_2440C[sp76] = gSaveContext.save.playerData.deaths;

                        for (sp7A = 0; sp7A < ARRAY_COUNT(gSaveContext.save.playerData.playerName); sp7A++) {
                            phi_s2 += 0; // TODO: Needed?
                            fileChooseCtx->unk_24414[sp76][sp7A] = gSaveContext.save.playerData.playerName[sp7A];
                        }

                        fileChooseCtx->healthCapacity[sp76] = gSaveContext.save.playerData.healthCapacity;
                        fileChooseCtx->health[sp76] = gSaveContext.save.playerData.health;
                        fileChooseCtx->unk_24454[sp76] = gSaveContext.save.inventory.dungeonKeys[9];
                        fileChooseCtx->unk_24444[sp76] = gSaveContext.save.inventory.questItems;
                        fileChooseCtx->unk_24458[sp76] = gSaveContext.save.time;
                        fileChooseCtx->unk_24460[sp76] = gSaveContext.save.day;
                        fileChooseCtx->unk_24468[sp76] = gSaveContext.save.isOwlSave;
                        fileChooseCtx->rupees[sp76] = gSaveContext.save.playerData.rupees;
                        fileChooseCtx->unk_24474[sp76] = CUR_UPG_VALUE(4);

                        for (sp7A = 0, phi_a0 = 0; sp7A < ARRAY_COUNT(gSaveContext.save.inventory.masks); sp7A++) {
                            if (gSaveContext.save.inventory.masks[(s32)sp7A] != 0xFF) {
                                phi_a0++;
                            }
                        }
                        fileChooseCtx->unk_24478[sp76] = phi_a0;
                        fileChooseCtx->unk_2447C[sp76] =
                            ((gSaveContext.save.inventory.questItems & 0xF0000000) >> 0x1C);
                    }

                    if (sp6E == 1) {
                        func_80146EBC(sramCtx, D_801C67C8[sp64], D_801C67F0[sp64]);
                        func_80146EBC(sramCtx, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1]);
                    } else if (!sp6E) { // TODO: == 0?
                        temp_s2 = gSaveContext.save.checksum;
                        if (func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1])) {
                            phi_s2_3 = 1;
                        } else {
                            Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                            gSaveContext.save.checksum = 0;
                            phi_s2_3 = gSaveContext.save.checksum;
                            sp7A = Sram_CalcChecksum(&gSaveContext, D_801C6870[sp64]);
                        }

                        if (CHECK_NEWF(gSaveContext.save.playerData.newf) || (phi_s2_3 != sp7A) ||
                            (phi_s2_3 != temp_s2)) {
                            func_80185968(*sramCtx->saveBuf, D_801C67C8[sp64], D_801C67F0[sp64]);
                            Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                            func_80146EBC(sramCtx, D_801C67C8[sp64], D_801C67F0[sp64]);
                            func_80146EBC(sramCtx, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1]);
                        }
                    }
                } else {
                    bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
                    Lib_MemCpy(&gSaveContext, *sramCtx->saveBuf, D_801C6870[sp64]);
                    func_80146EBC(sramCtx, D_801C67C8[sp64], D_801C67F0[sp64]);
                    func_80146EBC(sramCtx, D_801C67C8[sp64 + 1], D_801C67F0[sp64 + 1]);
                }
            } else {
                if (phi_s2) {
                    gSaveContext.options.optionId = 0xA51D;
                    gSaveContext.options.language = 1;
                    gSaveContext.options.audioSetting = 0;
                    gSaveContext.options.languageSetting = 0;
                    gSaveContext.options.zTargetSetting = 0;
                } else {
                    Lib_MemCpy(&gSaveContext.options, *sramCtx->saveBuf, sizeof(SaveOptions));
                    if (gSaveContext.options.optionId != 0xA51D) {
                        gSaveContext.options.optionId = 0xA51D;
                        gSaveContext.options.language = 1;
                        gSaveContext.options.audioSetting = 0;
                        gSaveContext.options.languageSetting = 0;
                        gSaveContext.options.zTargetSetting = 0;
                    }
                }
                func_801A3D98(gSaveContext.options.audioSetting);
            }

            sp64 += 2;
        }

        gSaveContext.save.time = D_801F6AF0;
        gSaveContext.unk_3F3F = D_801F6AF2;
    }

    gSaveContext.options.language = 1;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_sram_NES/func_801457CC.s")
#endif

void func_80146580(GameState* gameState, SramContext* sramCtx, s32 fileNum) {
    FileChooseContext* fileChooseCtx = (FileChooseContext*)gameState;
    s32 pad;

    if (gSaveContext.unk_3F3F) {
        if (fileChooseCtx->unk_2446A[fileNum]) {
            func_80147314(sramCtx, fileNum);
            fileChooseCtx->unk_2446A[fileNum] = 0;
        }
        bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
        Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, sizeof(Save));
    }
    gSaveContext.save.time = D_801F6AF0;
    gSaveContext.unk_3F3F = D_801F6AF2;
}

#ifdef NON_MATCHING
// v0/v1
void func_80146628(GameState* gameState, SramContext* sramCtx) {
    FileChooseContext* fileChooseCtx = (FileChooseContext*)gameState;
    u16 i;
    s16 maskCount;

    if (gSaveContext.unk_3F3F) {
        if (fileChooseCtx->unk_2446A[fileChooseCtx->unk_2448E]) {
            func_80147414(sramCtx, fileChooseCtx->unk_2448E, fileChooseCtx->unk_244A6);
            fileChooseCtx->unk_24410[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.deaths;

            for (i = 0; i < ARRAY_COUNT(gSaveContext.save.playerData.playerName); i++) {
                fileChooseCtx->unk_24424[fileChooseCtx->unk_244A6][i] = gSaveContext.save.playerData.playerName[i];
            }

            fileChooseCtx->unk_24438[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.healthCapacity;
            fileChooseCtx->unk_24440[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.health;
            fileChooseCtx->unk_24456[fileChooseCtx->unk_244A6] = gSaveContext.save.inventory.dungeonKeys[9];
            fileChooseCtx->unk_2444C[fileChooseCtx->unk_244A6] = gSaveContext.save.inventory.questItems;
            fileChooseCtx->unk_2445C[fileChooseCtx->unk_244A6] = gSaveContext.save.time;
            fileChooseCtx->unk_24464[fileChooseCtx->unk_244A6] = gSaveContext.save.day;
            fileChooseCtx->unk_2446A[fileChooseCtx->unk_244A6] = gSaveContext.save.isOwlSave;
            fileChooseCtx->unk_24470[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.rupees;
            fileChooseCtx->unk_24476[fileChooseCtx->unk_244A6] =
                (gSaveContext.save.inventory.upgrades & gUpgradeMasks[4]) >> gUpgradeShifts[4];

            for (maskCount = i = 0; i < ARRAY_COUNT(gSaveContext.save.inventory.masks); i++) {
                if (gSaveContext.save.inventory.masks[(s32)i] != 0xFF) {
                    maskCount++;
                }
            }

            fileChooseCtx->unk_2447A[fileChooseCtx->unk_244A6] = maskCount;
            fileChooseCtx->unk_2447E[fileChooseCtx->unk_244A6] =
                (gSaveContext.save.inventory.questItems & 0xF0000000) >> 0x1C;
        }

        // clear buffer
        bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
        // read to buffer
        func_80185968(*sramCtx->saveBuf, D_801C67C8[fileChooseCtx->unk_2448E * 2],
                      D_801C67F0[fileChooseCtx->unk_2448E * 2]);

        if (1) {}
        func_80185968(&(*sramCtx->saveBuf)[0x2000], D_801C67C8[fileChooseCtx->unk_2448E * 2 + 1],
                      D_801C67F0[fileChooseCtx->unk_2448E * 2 + 1]);
        if (1) {}

        // copy buffer to save context
        Lib_MemCpy(&gSaveContext.save, sramCtx->saveBuf, sizeof(Save));

        fileChooseCtx->unk_2440C[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.deaths;

        for (i = 0; i < ARRAY_COUNT(gSaveContext.save.playerData.playerName); i++) {
            fileChooseCtx->unk_24414[fileChooseCtx->unk_244A6][i] = gSaveContext.save.playerData.playerName[i];
        }

        fileChooseCtx->healthCapacity[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.healthCapacity;
        fileChooseCtx->health[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.health;
        fileChooseCtx->unk_24454[fileChooseCtx->unk_244A6] = gSaveContext.save.inventory.dungeonKeys[9];
        fileChooseCtx->unk_24444[fileChooseCtx->unk_244A6] = gSaveContext.save.inventory.questItems;
        fileChooseCtx->unk_24458[fileChooseCtx->unk_244A6] = gSaveContext.save.time;
        fileChooseCtx->unk_24460[fileChooseCtx->unk_244A6] = gSaveContext.save.day;
        fileChooseCtx->unk_24468[fileChooseCtx->unk_244A6] = gSaveContext.save.isOwlSave;
        fileChooseCtx->rupees[fileChooseCtx->unk_244A6] = gSaveContext.save.playerData.rupees;
        fileChooseCtx->unk_24474[fileChooseCtx->unk_244A6] =
            (gSaveContext.save.inventory.upgrades & gUpgradeMasks[4]) >> gUpgradeShifts[4];

        for (maskCount = i = 0; i < ARRAY_COUNT(gSaveContext.save.inventory.masks); i++) {
            if (gSaveContext.save.inventory.masks[(s32)i] != 0xFF) {
                maskCount++;
            }
        }

        fileChooseCtx->unk_24478[fileChooseCtx->unk_244A6] = maskCount;
        fileChooseCtx->unk_2447C[fileChooseCtx->unk_244A6] =
            (gSaveContext.save.inventory.questItems & 0xF0000000) >> 0x1C;
    }

    gSaveContext.save.time = D_801F6AF0;
    gSaveContext.unk_3F3F = D_801F6AF2;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_sram_NES/func_80146628.s")
#endif

void func_80146AA0(GameState* gameState, SramContext* sramCtx) {
    s32 phi_v0;
    u16 i;
    FileChooseContext* fileChooseCtx = (FileChooseContext*)gameState;
    s16 phi_a0;

    if (gSaveContext.unk_3F3F) {
        Sram_InitNewSave();
        if (fileChooseCtx->unk_24480 == 0) {
            gSaveContext.save.cutscene = 0xFFF0;
        }

        for (phi_v0 = 0; phi_v0 != ARRAY_COUNT(gSaveContext.save.playerData.playerName); phi_v0++) {
            gSaveContext.save.playerData.playerName[phi_v0] =
                fileChooseCtx->unk_24414[fileChooseCtx->unk_24480][phi_v0];
        }

        gSaveContext.save.playerData.newf[0] = 'Z';
        gSaveContext.save.playerData.newf[1] = 'E';
        gSaveContext.save.playerData.newf[2] = 'L';
        gSaveContext.save.playerData.newf[3] = 'D';
        gSaveContext.save.playerData.newf[4] = 'A';
        gSaveContext.save.playerData.newf[5] = '3';

        gSaveContext.save.checksum = Sram_CalcChecksum(&gSaveContext.save, sizeof(Save));

        Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext.save, sizeof(Save));
        Lib_MemCpy(&(*sramCtx->saveBuf)[0x2000], &gSaveContext.save, sizeof(Save));

        for (i = 0; i < ARRAY_COUNT(gSaveContext.save.playerData.newf); i++) {
            fileChooseCtx->newf[fileChooseCtx->unk_24480][i] = gSaveContext.save.playerData.newf[i];
        }

        fileChooseCtx->unk_2440C[fileChooseCtx->unk_24480] = gSaveContext.save.playerData.deaths;

        for (i = 0; i < ARRAY_COUNT(gSaveContext.save.playerData.playerName); i++) {
            fileChooseCtx->unk_24414[fileChooseCtx->unk_24480][i] = gSaveContext.save.playerData.playerName[i];
        }

        fileChooseCtx->healthCapacity[fileChooseCtx->unk_24480] = gSaveContext.save.playerData.healthCapacity;
        fileChooseCtx->health[fileChooseCtx->unk_24480] = gSaveContext.save.playerData.health;
        fileChooseCtx->unk_24454[fileChooseCtx->unk_24480] = gSaveContext.save.inventory.dungeonKeys[9];
        fileChooseCtx->unk_24444[fileChooseCtx->unk_24480] = gSaveContext.save.inventory.questItems;
        fileChooseCtx->unk_24458[fileChooseCtx->unk_24480] = gSaveContext.save.time;
        fileChooseCtx->unk_24460[fileChooseCtx->unk_24480] = gSaveContext.save.day;
        fileChooseCtx->unk_24468[fileChooseCtx->unk_24480] = gSaveContext.save.isOwlSave;
        fileChooseCtx->rupees[fileChooseCtx->unk_24480] = gSaveContext.save.playerData.rupees;
        fileChooseCtx->unk_24474[fileChooseCtx->unk_24480] =
            (gSaveContext.save.inventory.upgrades & gUpgradeMasks[4]) >> gUpgradeShifts[4];

        for (i = 0, phi_a0 = 0; i < ARRAY_COUNT(gSaveContext.save.inventory.masks); i++) {
            if (gSaveContext.save.inventory.masks[(s32)i] != 0xFF) {
                phi_a0++;
            }
        }

        fileChooseCtx->unk_24478[fileChooseCtx->unk_24480] = phi_a0;
        fileChooseCtx->unk_2447C[fileChooseCtx->unk_24480] =
            (gSaveContext.save.inventory.questItems & 0xF0000000) >> 0x1C;
    }
    gSaveContext.save.time = D_801F6AF0;
    gSaveContext.unk_3F3F = D_801F6AF2;
}

void func_80146DF8(SramContext* sramCtx) {
    if (gSaveContext.unk_3F3F) {
        gSaveContext.options.language = 1;
        Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext.options, sizeof(SaveOptions));
    }
}

void func_80146E40(GameState* gameState, SramContext* sramCtx) {
    if (&gSaveContext.save) {}

    func_801A3D98(gSaveContext.options.audioSetting);
}

void Sram_Alloc(GameState* gamestate, SramContext* sramCtx) {
    if (gSaveContext.unk_3F3F != 0) {
        sramCtx->saveBuf = THA_AllocEndAlign16(&gamestate->heap, sizeof(*sramCtx->saveBuf));
        sramCtx->status = 0;
    }
}

/**
 * Synchronous flash write
 */
void func_80146EBC(SramContext* sramCtx, s32 curPage, s32 numPages) {
    sramCtx->curPage = curPage;
    sramCtx->numPages = numPages;
    func_80185F64(*sramCtx->saveBuf, curPage, numPages);
}

void func_80146EE8(GameState* gameState) {
    s32 pad;
    GlobalContext* globalCtx = (GlobalContext*)gameState;
    SramContext* sramCtx = &globalCtx->sramCtx;

    gSaveContext.save.isFirstCycle = true;
    gSaveContext.save.isOwlSave = false;
    func_80145698(sramCtx);
    func_80185F64(*sramCtx->saveBuf, D_801C67C8[gSaveContext.fileNum * 2], D_801C6818[gSaveContext.fileNum * 2]);
}

/**
 * Save the game
 */
void func_80146F5C(GameState* gameState) {
    s32 cutscene;
    s32 day;
    u16 time;
    GlobalContext* globalCtx = (GlobalContext*)gameState;

    cutscene = gSaveContext.save.cutscene;
    time = gSaveContext.save.time;
    day = gSaveContext.save.day;
    // Unconfirmed: "Obtained Fierce Deity Mask?"
    gSaveContext.save.weekEventReg[0x54] &= (u8)~0x20;

    func_80143B0C(gameState);
    func_8014546C(&globalCtx->sramCtx);

    gSaveContext.save.day = day;
    gSaveContext.save.time = time;
    gSaveContext.save.cutscene = cutscene;
    func_80185F64(globalCtx->sramCtx.saveBuf, D_801C67C8[gSaveContext.fileNum * 2],
                  D_801C67F0[gSaveContext.fileNum * 2]);
}

void func_80147008(SramContext* sramCtx, u32 curPage, u32 numPages) {
    sramCtx->curPage = curPage;
    sramCtx->numPages = numPages;
    sramCtx->status = 1;
}

void func_80147020(SramContext* sramCtx) {
    // async flash write
    func_80185DDC(*sramCtx->saveBuf, sramCtx->curPage, sramCtx->numPages);

    sramCtx->unk_18 = osGetTime();
    sramCtx->status = 2;
}

void func_80147068(SramContext* sramCtx) {
    if (sramCtx->status == 2) {
        if (func_80185EC4() != 0) {     // if task running
            if (func_80185F04() == 0) { // wait for task done
                // task success
                sramCtx->status = 4;
            } else {
                // task failure
                sramCtx->status = 4;
            }
        }
    } else if (((osGetTime() - sramCtx->unk_18) * 0x40) / 3000 / 10000 >= 200) {
        sramCtx->status = 0;
    }
}

void func_80147138(SramContext* sramCtx, s32 curPage, s32 numPages) {
    sramCtx->curPage = curPage;
    sramCtx->numPages = numPages;
    sramCtx->status = 6;
}

void func_80147150(SramContext* sramCtx) {
    func_80185DDC(*sramCtx->saveBuf, sramCtx->curPage, sramCtx->numPages);

    sramCtx->unk_18 = osGetTime();
    sramCtx->status = 7;
}

void func_80147198(SramContext* sramCtx) {
    if (sramCtx->status == 7) {
        if (func_80185EC4() != 0) {     // Is task running
            if (func_80185F04() == 0) { // Wait for task done
                func_80185DDC(*sramCtx->saveBuf, sramCtx->curPage + 0x80, sramCtx->numPages);
                sramCtx->status = 8;
            } else {
                func_80185DDC(*sramCtx->saveBuf, sramCtx->curPage + 0x80, sramCtx->numPages);
                sramCtx->status = 8;
            }
        }
    } else if (sramCtx->status == 8) {
        if (func_80185EC4() != 0) {     // Is task running
            if (func_80185F04() == 0) { // Wait for task done
                sramCtx->status = 4;
            } else {
                sramCtx->status = 4;
            }
        }
    } else if (((osGetTime() - sramCtx->unk_18) * 0x40) / 3000 / 10000 >= 200) {
        sramCtx->status = 0;
        bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));
        gSaveContext.save.isOwlSave = 0;
        gSaveContext.save.checksum = 0;
        // flash read to buffer then copy to save context
        func_80185968(*sramCtx->saveBuf, sramCtx->curPage, sramCtx->numPages);
        Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, 0x3CA0);
    }
}

void func_80147314(SramContext* sramCtx, s32 fileNum) {
    s32 pad;

    gSaveContext.save.isOwlSave = false;

    gSaveContext.save.playerData.newf[0] = '\0';
    gSaveContext.save.playerData.newf[1] = '\0';
    gSaveContext.save.playerData.newf[2] = '\0';
    gSaveContext.save.playerData.newf[3] = '\0';
    gSaveContext.save.playerData.newf[4] = '\0';
    gSaveContext.save.playerData.newf[5] = '\0';

    gSaveContext.save.checksum = 0;
    gSaveContext.save.checksum = Sram_CalcChecksum(&gSaveContext, 0x3CA0);

    Lib_MemCpy(*sramCtx->saveBuf, &gSaveContext, 0x3CA0);
    func_80146EBC(sramCtx, D_801C6840[fileNum * 2], D_801C6850[fileNum * 2]);
    func_80146EBC(sramCtx, D_801C6840[fileNum * 2 + 1], D_801C6850[fileNum * 2]);

    gSaveContext.save.isOwlSave = true;

    gSaveContext.save.playerData.newf[0] = 'Z';
    gSaveContext.save.playerData.newf[1] = 'E';
    gSaveContext.save.playerData.newf[2] = 'L';
    gSaveContext.save.playerData.newf[3] = 'D';
    gSaveContext.save.playerData.newf[4] = 'A';
    gSaveContext.save.playerData.newf[5] = '3';
}

void func_80147414(SramContext* sramCtx, s32 fileNum, s32 arg2) {
    s32 pad;

    // Clear save buffer
    bzero(*sramCtx->saveBuf, sizeof(*sramCtx->saveBuf));

    // Read save file
    if (func_80185968(*sramCtx->saveBuf, D_801C6840[fileNum * 2], D_801C6850[fileNum * 2]) != 0) {
        // If failed, read backup save file
        func_80185968(*sramCtx->saveBuf, D_801C6840[fileNum * 2 + 1], D_801C6850[fileNum * 2 + 1]);
    }

    // Copy buffer to save context
    Lib_MemCpy(&gSaveContext, sramCtx->saveBuf, 0x3CA0);

    func_80146EBC(sramCtx, D_801C6840[arg2 * 2], D_801C6850[arg2 * 2]);
    func_80146EBC(sramCtx, D_801C6840[arg2 * 2 + 1], D_801C6850[arg2 * 2]);
}

void Sram_nop8014750C(UNK_TYPE4 arg0) {
}
