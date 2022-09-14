/*
 * File: z_kaleido_map.c
 * Overlay: ovl_kaleido_scope
 * Description: Pause Menu: Map Page
 */

#include "z_kaleido_scope.h"
#include "interface/parameter_static/parameter_static.h"
#include "interface/icon_item_field_static/icon_item_field_static.h"
#include "interface/icon_item_dungeon_static/icon_item_dungeon_static.h"
#include "interface/icon_item_jpn_static/icon_item_jpn_static.h"

extern s16 D_8082B7F0[];
extern s16 D_8082B838[];

extern TexturePtr D_09007500;

void KaleidoScope_DrawDungeonStrayFairyCount(PlayState* play) {
    s16 counterDigits[2];
    s16 rectLeft;
    s16 digitIndex;

    OPEN_DISPS(play->state.gfxCtx);

    // Get digits for max number of stray faries
    counterDigits[1] = 15;
    counterDigits[0] = counterDigits[1] / 10;
    counterDigits[1] -= (s16)(counterDigits[0] * 10);

    // Draw max number of stray faries
    for (rectLeft = 116, digitIndex = 0; digitIndex < 2; digitIndex++, rectLeft += 8) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 255);

        POLY_OPA_DISP = func_8010D7D0(POLY_OPA_DISP, (u8*)gCounterDigit0Tex + (8 * 16 * counterDigits[digitIndex]), 8,
                                      16, rectLeft + 1, 146, 8, 16, 1 << 10, 1 << 10);

        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);

        gSPTextureRectangle(POLY_OPA_DISP++, rectLeft * 4, 580, (rectLeft * 4) + 32, 644, G_TX_RENDERTILE, 0, 0,
                            1 << 10, 1 << 10);
    }

    // Draw Counter slash
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 255);

    POLY_OPA_DISP =
        func_8010D7D0(POLY_OPA_DISP, gStrayFairyMapCounterSlashTex, 8, 16, 107, 146, 8, 16, 1 << 10, 1 << 10);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);

    gSPTextureRectangle(POLY_OPA_DISP++, 424, 580, 456, 644, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    // Get digits for current number of stray faries collected
    counterDigits[1] = gSaveContext.save.inventory.strayFairies[(void)0, gSaveContext.dungeonIndex];
    counterDigits[0] = counterDigits[1] / 10;
    counterDigits[1] -= (s16)(counterDigits[0] * 10);

    // Draw digits for current number of stray faries collected
    for (rectLeft = 88, digitIndex = 0; digitIndex < 2; digitIndex++, rectLeft += 8) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 255);

        POLY_OPA_DISP = func_8010D7D0(POLY_OPA_DISP, (u8*)gCounterDigit0Tex + (8 * 16 * counterDigits[digitIndex]), 8,
                                      16, rectLeft + 1, 146, 8, 16, 1 << 10, 1 << 10);

        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);

        gSPTextureRectangle(POLY_OPA_DISP++, rectLeft * 4, 580, (rectLeft * 4) + 32, 644, G_TX_RENDERTILE, 0, 0,
                            1 << 10, 1 << 10);
    }

    CLOSE_DISPS(play->state.gfxCtx);
}

TexturePtr sDungeonItemTextures[] = {
    0x09003600, // `gBossKeyIconTex`: DUNGEON_BOSS_KEY
    0x09003F00, // `gCompassIconTex`: DUNGEON_COMPASS
    0x09004800, // `gDungeonMapIconTex`: DUNGEON_MAP
};
TexturePtr sDungeonTitleTextures[] = {
    gPauseWoodfallTitleENGTex,   // DUNGEON_INDEX_WOODFALL_TEMPLE
    gPauseSnowheadTitleENGTex,   // DUNGEON_INDEX_SNOWHEAD_TEMPLE
    gPauseGreatBayTitleENGTex,   // DUNGEON_INDEX_GREAT_BAY_TEMPLE
    gPauseStoneTowerTitleENGTex, // DUNGEON_INDEX_STONE_TOWER_TEMPLE
};
s16 D_8082B4BC[] = { 67, 81, 95, 109 };
void KaleidoScope_DrawDungeonMap(PlayState* play) {
    static s16 D_8082B4C4 = 123;
    static s16 sStrayFairyIconTimer = 30;
    static s16 sStrayFairyIconIndex = 0;
    static s16 sStrayFairyIconAlphaScaleTimer = 15;
    static s16 sStrayFairyIconAlphaScaleState = 0;
    static s16 sStrayFairyIconAlpha = 255;
    static f32 sStrayFairyIconScale = 100.0f;
    static TexturePtr D_8082B4E0[][4] = {
        // DUNGEON_INDEX_WOODFALL_TEMPLE
        { gStrayFairyWoodfallIconTex, gDungeonStrayFairyWoodfallIconTex, gStrayFairyWoodfallIconTex,
          gDungeonStrayFairyWoodfallIconTex },
        // DUNGEON_INDEX_SNOWHEAD_TEMPLE
        { gStrayFairySnowheadIconTex, gDungeonStrayFairySnowheadIconTex, gStrayFairySnowheadIconTex,
          gDungeonStrayFairySnowheadIconTex },
        // DUNGEON_INDEX_GREAT_BAY_TEMPLE
        { gStrayFairyGreatBayIconTex, gDungeonStrayFairyGreatBayIconTex, gStrayFairyGreatBayIconTex,
          gDungeonStrayFairyGreatBayIconTex },
        // DUNGEON_INDEX_STONE_TOWER_TEMPLE
        { gStrayFairyStoneTowerIconTex, gDungeonStrayFairyStoneTowerIconTex, gStrayFairyStoneTowerIconTex,
          gDungeonStrayFairyStoneTowerIconTex },
    };
    static u8 sStrayFairyIconPrimColors[][3] = {
        { 255, 110, 160 }, // DUNGEON_INDEX_WOODFALL_TEMPLE
        { 90, 255, 100 },  // DUNGEON_INDEX_SNOWHEAD_TEMPLE
        { 120, 255, 255 }, // DUNGEON_INDEX_GREAT_BAY_TEMPLE
        { 245, 245, 90 },  // DUNGEON_INDEX_STONE_TOWER_TEMPLE
    };
    static u8 sStrayFairyIconEnvColors[][3] = {
        { 255, 255, 255 }, // DUNGEON_INDEX_WOODFALL_TEMPLE
        { 255, 255, 255 }, // DUNGEON_INDEX_SNOWHEAD_TEMPLE
        { 255, 255, 255 }, // DUNGEON_INDEX_GREAT_BAY_TEMPLE
        { 225, 170, 0 },   // DUNGEON_INDEX_STONE_TOWER_TEMPLE
    };
    static s32 D_8082B538[] = { 1 << 10, 0, 0, 0 };
    PauseContext* pauseCtx = &play->pauseCtx;
    s16 i;
    s16 j;
    f32 scale;

    OPEN_DISPS(play->state.gfxCtx);

    j = 72 + (pauseCtx->cursorSlot[PAUSE_MAP] * 4);
    KaleidoScope_SetCursorVtx(pauseCtx, j, pauseCtx->mapPageVtx);

    pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
    if (pauseCtx->cursorSpecialPos == 0) {
        if (pauseCtx->cursorPoint[PAUSE_MAP] <= DUNGEON_STRAY_FAIRIES) {
            pauseCtx->cursorItem[PAUSE_MAP] = ITEM_KEY_BOSS + pauseCtx->cursorPoint[PAUSE_MAP];
        }
        pauseCtx->cursorSlot[PAUSE_MAP] = pauseCtx->cursorPoint[PAUSE_MAP];
    }

    gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[60], 16, 0);
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA, G_CC_MODULATEIA);

    POLY_OPA_DISP =
        func_8010DC58(POLY_OPA_DISP, sDungeonTitleTextures[((void)0, gSaveContext.dungeonIndex)], 128, 16, 0);

    gDPPipeSync(POLY_OPA_DISP++);

    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

    // Loop over dungeonItems (i) and vtxIndex (j)
    for (i = DUNGEON_BOSS_KEY, j = 4; i <= DUNGEON_STRAY_FAIRIES; i++, j += 4) {
        if (i == DUNGEON_STRAY_FAIRIES) {
            if ((pauseCtx->pageIndex == PAUSE_MAP) && (pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE)) {
                // If (pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN), then the other conditions are redundant and
                // always return true
                if ((pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) &&
                    (pauseCtx->state != PAUSE_STATE_DEFAULT_SAVE_PROMPT) &&
                    !((pauseCtx->state >= PAUSE_STATE_GAMEOVER_0) && (pauseCtx->state <= PAUSE_STATE_GAMEOVER_10))) {
                    KaleidoScope_SetView(pauseCtx, 0.0f, 0.0f, 64.0f);

                    if (!sStrayFairyIconAlphaScaleState) {
                        sStrayFairyIconAlpha -= 6;
                        sStrayFairyIconScale -= 1.0f;
                    } else {
                        sStrayFairyIconAlpha += 6;
                        sStrayFairyIconScale += 1.0f;
                    }

                    sStrayFairyIconAlphaScaleTimer--;
                    if (sStrayFairyIconAlphaScaleTimer == 0) {
                        sStrayFairyIconAlphaScaleState ^= 1;
                        sStrayFairyIconAlphaScaleTimer = 15;
                    }

                    func_8012C8AC(play->state.gfxCtx);

                    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0,
                                      PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE,
                                      0);

                    gDPSetPrimColor(
                        POLY_OPA_DISP++, 0, 0, sStrayFairyIconPrimColors[((void)0, gSaveContext.dungeonIndex)][0],
                        sStrayFairyIconPrimColors[((void)0, gSaveContext.dungeonIndex)][1],
                        sStrayFairyIconPrimColors[((void)0, gSaveContext.dungeonIndex)][2], sStrayFairyIconAlpha);
                    gDPSetEnvColor(POLY_OPA_DISP++, sStrayFairyIconEnvColors[((void)0, gSaveContext.dungeonIndex)][0],
                                   sStrayFairyIconEnvColors[((void)0, gSaveContext.dungeonIndex)][1],
                                   sStrayFairyIconEnvColors[((void)0, gSaveContext.dungeonIndex)][2], 0);

                    scale = sStrayFairyIconScale / 100.0f;

                    Matrix_Translate(-83.0f, -29.0f, -128.0f, MTXMODE_NEW);
                    Matrix_Scale(scale, scale, scale, MTXMODE_APPLY);

                    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(play->state.gfxCtx),
                              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

                    pauseCtx->mapPageVtx[76].v.ob[0] = pauseCtx->mapPageVtx[78].v.ob[0] = -16;

                    pauseCtx->mapPageVtx[77].v.ob[0] = pauseCtx->mapPageVtx[79].v.ob[0] =
                        pauseCtx->mapPageVtx[76].v.ob[0] + 32;

                    pauseCtx->mapPageVtx[76].v.ob[1] = pauseCtx->mapPageVtx[77].v.ob[1] = 12;

                    pauseCtx->mapPageVtx[78].v.ob[1] = pauseCtx->mapPageVtx[79].v.ob[1] =
                        pauseCtx->mapPageVtx[76].v.ob[1] - 24;

                    gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[76], 4, 0);

                    POLY_OPA_DISP =
                        func_8010DE38(POLY_OPA_DISP, gStrayFairyGlowingCircleIconTex, G_IM_FMT_I, 32, 24, 0);
                    KaleidoScope_SetView(pauseCtx, pauseCtx->eye.x, pauseCtx->eye.y, pauseCtx->eye.z);
                    func_8012C628(play->state.gfxCtx);

                    gDPPipeSync(POLY_OPA_DISP++);

                    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

                    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, sStrayFairyIconAlpha);

                    sStrayFairyIconTimer--;

                    if (sStrayFairyIconTimer == 0) {
                        sStrayFairyIconIndex = (sStrayFairyIconIndex + 1) & 3;
                        sStrayFairyIconTimer = 34;
                    }

                    gDPLoadTextureBlock(POLY_OPA_DISP++,
                                        D_8082B4E0[((void)0, gSaveContext.dungeonIndex)][sStrayFairyIconIndex],
                                        G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 24, 0, G_TX_MIRROR | G_TX_WRAP,
                                        G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                    gSPTextureRectangle(POLY_OPA_DISP++, 216, 560, 344, 656, G_TX_RENDERTILE,
                                        D_8082B538[sStrayFairyIconIndex], 0, 1 << 10, 1 << 10);

                    KaleidoScope_DrawDungeonStrayFairyCount(play);
                    func_8012C8AC(play->state.gfxCtx);
                }
            }
        } else if (CHECK_DUNGEON_ITEM(i, gSaveContext.dungeonIndex)) {
            gDPLoadTextureBlock(POLY_OPA_DISP++, sDungeonItemTextures[i], G_IM_FMT_RGBA, G_IM_SIZ_32b, 24, 24, 0,
                                G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);

            gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
        }
    }

    func_80108AF8(play);

    if ((pauseCtx->pageIndex == PAUSE_MAP) && (pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE)) {
        // If (pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN), then the other conditions are redundant and always return
        // true
        if ((pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) && (pauseCtx->state != PAUSE_STATE_DEFAULT_SAVE_PROMPT) &&
            !((pauseCtx->state >= PAUSE_STATE_GAMEOVER_0) && (pauseCtx->state <= PAUSE_STATE_GAMEOVER_10))) {

            func_8012C628(play->state.gfxCtx);

            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

            POLY_OPA_DISP = func_8010CB80(POLY_OPA_DISP, &D_09007500, 16, 16, 62, D_8082B4BC[R_REVERSE_FLOOR_INDEX], 16,
                                          16, 1 << 10, 1 << 10);

            if (CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.dungeonIndex)) {
                POLY_OPA_DISP = func_8010CB80(POLY_OPA_DISP, gDungeonMapSkullTex, 16, 16, 108,
                                              D_8082B4BC[FLOOR_INDEX_MAX - func_80105318()], 16, 16, 1 << 10, 1 << 10);
            }

            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

            func_8012C8AC(play->state.gfxCtx);
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);

    gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_BILERP);

    CLOSE_DISPS(play->state.gfxCtx);
}

void KaleidoScope_UpdateDungeonCursor(PlayState* play) {
    s32 pad;
    PauseContext* pauseCtx = &play->pauseCtx;
    MessageContext* msgCtx = &play->msgCtx;
    s16 i;
    s16 oldCursorPoint;

    if (pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) {
        if ((pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE) && (pauseCtx->pageIndex == PAUSE_MAP)) {
            pauseCtx->cursorColorSet = 0;
            oldCursorPoint = pauseCtx->cursorPoint[PAUSE_MAP];
            if (pauseCtx->stickAdjX > 30) {
                pauseCtx->cursorShrinkRate = 4.0f;
                if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) {
                    func_80821A04(play);
                    pauseCtx->cursorXIndex[PAUSE_MAP] = 0;
                    pauseCtx->cursorSlot[PAUSE_MAP] = pauseCtx->unk_256;
                    pauseCtx->cursorPoint[PAUSE_MAP] = pauseCtx->unk_256;
                } else if (pauseCtx->cursorSpecialPos == 0) {
                    if (pauseCtx->cursorXIndex[PAUSE_MAP] == 0) {
                        pauseCtx->cursorXIndex[PAUSE_MAP] = 1;
                        pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                    } else {
                        if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES) {
                            pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_NONE;
                        }

                        while (true) {
                            pauseCtx->cursorPoint[PAUSE_MAP]++;
                            if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES) {
                                KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_RIGHT);
                                break;
                            }
                            if (CHECK_DUNGEON_ITEM(pauseCtx->cursorPoint[PAUSE_MAP], gSaveContext.dungeonIndex)) {
                                break;
                            }
                        }
                    }
                }
            } else if (pauseCtx->stickAdjX < -30) {
                pauseCtx->cursorShrinkRate = 4.0f;
                if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_RIGHT) {
                    func_80821A04(play);
                    pauseCtx->cursorXIndex[PAUSE_MAP] = 1;
                    pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_MAP;
                    if (!CHECK_DUNGEON_ITEM(DUNGEON_MAP, gSaveContext.dungeonIndex)) {
                        pauseCtx->cursorPoint[PAUSE_MAP]--; // DUNGEON_COMPASS
                        if (!CHECK_DUNGEON_ITEM(DUNGEON_COMPASS, gSaveContext.dungeonIndex)) {
                            pauseCtx->cursorPoint[PAUSE_MAP]--; // DUNGEON_BOSS_KEY
                            if (!CHECK_DUNGEON_ITEM(DUNGEON_BOSS_KEY, gSaveContext.dungeonIndex)) {
                                pauseCtx->cursorSlot[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                                pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                            }
                        }
                    } else {
                        pauseCtx->cursorSlot[PAUSE_MAP] = pauseCtx->cursorPoint[PAUSE_MAP];
                    }
                } else if (pauseCtx->cursorSpecialPos == 0) {
                    if (pauseCtx->cursorXIndex[PAUSE_MAP] == 0) {
                        KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_LEFT);
                    } else if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES) {
                        pauseCtx->cursorXIndex[PAUSE_MAP] = 0;
                        pauseCtx->cursorSlot[PAUSE_MAP] = pauseCtx->unk_256;
                        pauseCtx->cursorPoint[PAUSE_MAP] = pauseCtx->unk_256;
                    } else {
                        while (true) {
                            pauseCtx->cursorPoint[PAUSE_MAP]--;
                            if (pauseCtx->cursorPoint[PAUSE_MAP] <= DUNGEON_NONE) {
                                pauseCtx->cursorSlot[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                                pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                                break;
                            }
                            if (CHECK_DUNGEON_ITEM(pauseCtx->cursorPoint[PAUSE_MAP], gSaveContext.dungeonIndex)) {
                                break;
                            }
                        }
                    }
                }
            } else if ((pauseCtx->cursorSpecialPos == 0) && (pauseCtx->stickAdjY > 30)) {
                if (pauseCtx->cursorPoint[PAUSE_MAP] >= DUNGEON_FLOOR_INDEX_4) {
                    for (i = pauseCtx->cursorPoint[PAUSE_MAP] - (DUNGEON_FLOOR_INDEX_4 + 1); i >= 0; i--) {
                        if ((gSaveContext.save.permanentSceneFlags[(void)0, gSaveContext.dungeonIndex].unk_14 &
                             gBitFlags[i]) ||
                            func_801090B0(FLOOR_INDEX_MAX - i)) {
                            pauseCtx->cursorPoint[PAUSE_MAP] = i + DUNGEON_FLOOR_INDEX_4;
                            pauseCtx->cursorShrinkRate = 4.0f;
                            break;
                        }
                    }
                } else if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES) {
                    pauseCtx->cursorXIndex[PAUSE_MAP] = 0;
                    pauseCtx->cursorSlot[PAUSE_MAP] = pauseCtx->unk_256;
                    pauseCtx->cursorPoint[PAUSE_MAP] = pauseCtx->unk_256;
                } else {
                    pauseCtx->cursorSlot[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                    pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                }
            } else if ((pauseCtx->cursorSpecialPos == 0) && (pauseCtx->stickAdjY < -30)) {
                if ((pauseCtx->cursorPoint[PAUSE_MAP] >= DUNGEON_FLOOR_INDEX_4) &&
                    (pauseCtx->cursorPoint[PAUSE_MAP] <= DUNGEON_FLOOR_INDEX_1)) {
                    for (i = pauseCtx->cursorPoint[PAUSE_MAP] - (DUNGEON_FLOOR_INDEX_4 - 1); i <= DUNGEON_FLOOR_INDEX_0;
                         i++) {
                        if ((gSaveContext.save.permanentSceneFlags[(void)0, gSaveContext.dungeonIndex].unk_14 &
                             gBitFlags[i]) ||
                            func_801090B0(FLOOR_INDEX_MAX - i)) {
                            pauseCtx->cursorPoint[PAUSE_MAP] = i + DUNGEON_FLOOR_INDEX_4;
                            pauseCtx->cursorShrinkRate = 4.0f;
                            break;
                        }
                    }

                } else if (pauseCtx->cursorXIndex[PAUSE_MAP] == 0) {
                    pauseCtx->cursorXIndex[PAUSE_MAP] = 1;
                    pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_STRAY_FAIRIES;
                } else {
                    if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES) {
                        pauseCtx->cursorPoint[PAUSE_MAP] = DUNGEON_NONE;
                    }

                    while (true) {
                        pauseCtx->cursorPoint[PAUSE_MAP]++;
                        if (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_FLOOR_INDEX_4) {
                            KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_RIGHT);
                            break;
                        }
                        if (CHECK_DUNGEON_ITEM(pauseCtx->cursorPoint[PAUSE_MAP], gSaveContext.dungeonIndex)) {
                            break;
                        }
                    }
                }
            }
            if ((pauseCtx->cursorPoint[PAUSE_MAP] <= DUNGEON_STRAY_FAIRIES) && (pauseCtx->cursorSpecialPos == 0)) {
                if (gSaveContext.buttonStatus[EQUIP_SLOT_A] == BTN_DISABLED) {
                    gSaveContext.buttonStatus[EQUIP_SLOT_A] = BTN_ENABLED;
                    gSaveContext.unk_3F22 = 0;
                    Interface_ChangeAlpha(50);
                }
            } else if (gSaveContext.buttonStatus[EQUIP_SLOT_A] != BTN_DISABLED) {
                gSaveContext.buttonStatus[EQUIP_SLOT_A] = BTN_DISABLED;
                gSaveContext.unk_3F22 = 0;
                Interface_ChangeAlpha(50);
            }

            if ((pauseCtx->cursorXIndex[PAUSE_MAP] == 0) && (pauseCtx->cursorSpecialPos == 0)) {
                pauseCtx->unk_256 = pauseCtx->cursorPoint[PAUSE_MAP];
            }

            if (pauseCtx->cursorSpecialPos == 0) {
                if (CHECK_BTN_ALL(CONTROLLER1(&play->state)->press.button, BTN_A) && (msgCtx->msgLength == 0) &&
                    (pauseCtx->cursorPoint[PAUSE_MAP] == DUNGEON_STRAY_FAIRIES)) {
                    pauseCtx->itemDescriptionOn = true;
                    func_801514B0(play, 0x17AF, 1);
                } else if (CHECK_BTN_ALL(CONTROLLER1(&play->state)->press.button, BTN_A) && (msgCtx->msgLength == 0) &&
                           CHECK_DUNGEON_ITEM(pauseCtx->cursorPoint[PAUSE_MAP], gSaveContext.dungeonIndex)) {
                    pauseCtx->itemDescriptionOn = true;
                    func_801514B0(play, 0x17AC + pauseCtx->cursorPoint[PAUSE_MAP], 1);
                }
            }

            if (oldCursorPoint != pauseCtx->cursorPoint[PAUSE_MAP]) {
                play_sound(NA_SE_SY_CURSOR);
            }
        }
    }
}

TexturePtr sCloudTextures[] = {
    gWorldMapCloud1Tex,  // TINGLE_MAP_CLOCK_TOWN
    gWorldMapCloud2Tex,  // TINGLE_MAP_CLOCK_TOWN
    gWorldMapCloud13Tex, // TINGLE_MAP_WOODFALL
    gWorldMapCloud14Tex, // TINGLE_MAP_WOODFALL
    gWorldMapCloud15Tex, // TINGLE_MAP_WOODFALL
    gWorldMapCloud8Tex,  // TINGLE_MAP_SNOWHEAD
    gWorldMapCloud9Tex,  // TINGLE_MAP_SNOWHEAD
    gWorldMapCloud10Tex, // TINGLE_MAP_SNOWHEAD
    gWorldMapCloud3Tex,  // TINGLE_MAP_ROMANI_RANCH
    gWorldMapCloud4Tex,  // TINGLE_MAP_GREAT_BAY
    gWorldMapCloud5Tex,  // TINGLE_MAP_GREAT_BAY
    gWorldMapCloud6Tex,  // TINGLE_MAP_GREAT_BAY
    gWorldMapCloud7Tex,  // TINGLE_MAP_GREAT_BAY
    gWorldMapCloud11Tex, // TINGLE_MAP_STONE_TOWER
    gWorldMapCloud12Tex, // TINGLE_MAP_STONE_TOWER
};
s16 D_8082B584[] = {
    0, 0, 255, 255, 255, 0,
};
s16 D_8082B590[] = {
    255, 255, 0, 0, 0, 255,
};
// TODO: Test names
s16 sWorldMapCursorsRectLeft[REGION_MAX] = {
    86,  // REGION_GREAT_BAY
    104, // REGION_ZORA_HALL
    145, // REGION_ROMANI_RANCH
    153, // REGION_DEKU_PALACE
    163, // REGION_WOODFALL
    159, // REGION_CLOCK_TOWN
    157, // REGION_SNOWHEAD
    199, // REGION_IKANA_GRAVEYARD
    208, // REGION_IKANA_CANYON
    210, // REGION_GORON_VILLAGE
    218, // REGION_STONE_TOWER
};
s16 sWorldMapCursorsRectTop[REGION_MAX] = {
    127, // REGION_GREAT_BAY
    153, // REGION_ZORA_HALL
    138, // REGION_ROMANI_RANCH
    171, // REGION_DEKU_PALACE
    146, // REGION_WOODFALL
    119, // REGION_CLOCK_TOWN
    77,  // REGION_SNOWHEAD
    106, // REGION_IKANA_GRAVEYARD
    120, // REGION_IKANA_CANYON
    73,  // REGION_GORON_VILLAGE
    99,  // REGION_STONE_TOWER
};
s16 sGreatFairySpawnRegions[] = {
    REGION_CLOCK_TOWN, REGION_WOODFALL, REGION_SNOWHEAD, REGION_GREAT_BAY, REGION_IKANA_CANYON,
    REGION_CLOCK_TOWN, REGION_WOODFALL, REGION_SNOWHEAD, REGION_GREAT_BAY, REGION_IKANA_CANYON,
};

void KaleidoScope_DrawWorldMap(PlayState* play) {
    s16 sceneId;
    s16 t;
    s16 n;
    s16 j;
    s16 k;
    s16 i;
    PauseContext* pauseCtx = &play->pauseCtx;
    s16 rectLeft;
    s16 rectRight;

    OPEN_DISPS(play->state.gfxCtx);

    KaleidoScope_SetCursorVtx(pauseCtx, pauseCtx->cursorSlot[PAUSE_MAP] * 4, pauseCtx->mapPageVtx);

    if ((pauseCtx->pageIndex == PAUSE_MAP) && (pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) &&
        ((pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE) || (pauseCtx->mainState == PAUSE_MAIN_STATE_EQUIP_ITEM)) &&
        YREG(6) && (pauseCtx->state != PAUSE_STATE_DEFAULT_SAVE_PROMPT) &&
        !((pauseCtx->state >= PAUSE_STATE_GAMEOVER_0) && (pauseCtx->state <= PAUSE_STATE_GAMEOVER_10))) {

        func_8012C628(play->state.gfxCtx);

        gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_POINT);
        gDPLoadTLUT_pal256(POLY_OPA_DISP++, gWorldMapImageTLUT);
        gDPSetTextureLUT(POLY_OPA_DISP++, G_TT_RGBA16);

        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

        // Loop over yPos (t), textureIndex (j)
        for (t = 62, j = 0; j < 16; j++, t += 8) {
            gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + j * (216 * 8), G_IM_FMT_CI, G_IM_SIZ_8b, 216,
                                8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);

            rectLeft = 204;
            rectRight = rectLeft + (216 << 2);
            gSPTextureRectangle(POLY_OPA_DISP++, rectLeft, t << 2, rectRight, (t << 2) + (8 << 2), G_TX_RENDERTILE, 0,
                                0, 1 << 10, 1 << 10);
        }

        func_8012C8AC(play->state.gfxCtx);

    } else {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_POINT);
        gDPLoadTLUT_pal256(POLY_OPA_DISP++, gWorldMapImageTLUT);
        gDPSetTextureLUT(POLY_OPA_DISP++, G_TT_RGBA16);

        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
        gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[204], 32, 0);

        // Loop over textureIndex (i, k), vtxIndex (j)
        for (i = 0, k = 0, j = 0; i < 8; i++, k++, j += 4) {
            gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + k * (216 * 9), G_IM_FMT_CI, G_IM_SIZ_8b, 216,
                                9, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);

            gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
        }

        gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[236], 28, 0);

        // Loop over textureIndex (i, k), vtxIndex (j)
        for (i = 0, j = 0; i < 6; i++, k++, j += 4) {
            gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + k * (216 * 9), G_IM_FMT_CI, G_IM_SIZ_8b, 216,
                                9, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                G_TX_NOLOD, G_TX_NOLOD);

            gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
        }

        gDPLoadTextureBlock(POLY_OPA_DISP++, (u8*)gWorldMapImageTex + k * (216 * 9), G_IM_FMT_CI, G_IM_SIZ_8b, 216, 2,
                            0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                            G_TX_NOLOD, G_TX_NOLOD);

        gSP1Quadrangle(POLY_OPA_DISP++, j, j + 2, j + 3, j + 1, 0);
    }

    func_8012C8AC(play->state.gfxCtx);

    gDPPipeSync(POLY_OPA_DISP++);

    gDPSetTextureFilter(POLY_OPA_DISP++, G_TF_BILERP);

    gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE,
                      ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 215, 235, 235, pauseCtx->alpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 40, 60, 100, 0);

    // Draw clouds over the world map
    // Iterate over cloud bits (n)
    for (n = 0; n < 15; n++) {
        if (!(((void)0, gSaveContext.save.worldMapCloudVisibility) & gBitFlags[n])) {

            gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[60 + n * 4], 4, 0);

            POLY_OPA_DISP = func_8010DC58(POLY_OPA_DISP, sCloudTextures[n], D_8082B7F0[n], D_8082B838[n], 0);
        }
    }

    if ((pauseCtx->state >= PAUSE_STATE_OWLWARP_2) && (pauseCtx->state <= PAUSE_STATE_OWLWARP_6)) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetRenderMode(POLY_OPA_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, R_PAUSE_OWLWARP_ALPHA);
        gDPFillRectangle(POLY_OPA_DISP++, 50, 62, 270, 190);
    }

    func_8012C8AC(play->state.gfxCtx);

    if (!((pauseCtx->state >= PAUSE_STATE_OWLWARP_2) && (pauseCtx->state <= PAUSE_STATE_OWLWARP_6))) {
        gDPLoadTextureBlock(POLY_OPA_DISP++, gWorldMapDotTex, G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);
        gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, D_8082B584[0], D_8082B584[1], D_8082B584[2], pauseCtx->alpha);

        gDPSetEnvColor(POLY_OPA_DISP++, D_8082B590[0], D_8082B590[1], D_8082B590[2], 0);

        if (R_PAUSE_DBG_MAP_CLOUD_ON) {
            gSaveContext.save.worldMapCloudVisibility |= (u16)~0x8000;

            pauseCtx->mapPageVtx[120].v.ob[0] = pauseCtx->mapPageVtx[122].v.ob[0] = R_PAUSE_DBG_MAP_CLOUD_X;

            pauseCtx->mapPageVtx[121].v.ob[0] = pauseCtx->mapPageVtx[123].v.ob[0] =
                pauseCtx->mapPageVtx[120].v.ob[0] + 8;

            pauseCtx->mapPageVtx[120].v.ob[1] = pauseCtx->mapPageVtx[121].v.ob[1] = R_PAUSE_DBG_MAP_CLOUD_Y;

            pauseCtx->mapPageVtx[122].v.ob[1] = pauseCtx->mapPageVtx[123].v.ob[1] =
                pauseCtx->mapPageVtx[120].v.ob[1] - 8;
        }

        // Loop over RegionId (i), unused vtxIndex (j), unused (k)
        for (i = 0, j = 0; i < REGION_MAX; i++, k++, j += 4) {
            if (pauseCtx->worldMapPoints[i]) {
                gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[120 + i * 4], 4, 0);
                gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
            }
        }

    } else {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
        gDPLoadTextureBlock(POLY_OPA_DISP++, gWorldMapOwlFaceTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, 24, 12, 0,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                            G_TX_NOLOD);

        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

        if (R_PAUSE_DBG_MAP_CLOUD_ON) {
            gSaveContext.save.worldMapCloudVisibility |= (u16)~0x8000;

            pauseCtx->mapPageVtx[164].v.ob[0] = pauseCtx->mapPageVtx[166].v.ob[0] = R_PAUSE_DBG_MAP_CLOUD_X;

            pauseCtx->mapPageVtx[165].v.ob[0] = pauseCtx->mapPageVtx[167].v.ob[0] =
                pauseCtx->mapPageVtx[164].v.ob[0] + 24;

            pauseCtx->mapPageVtx[164].v.ob[1] = pauseCtx->mapPageVtx[165].v.ob[1] = R_PAUSE_DBG_MAP_CLOUD_Y;

            pauseCtx->mapPageVtx[166].v.ob[1] = pauseCtx->mapPageVtx[167].v.ob[1] =
                pauseCtx->mapPageVtx[164].v.ob[1] - 12;
        }

        // Loop over OwlStatueId (i), unused vtxIndex (j), unused (k)
        for (i = 0, j = 0; i < OWL_STATUE_MAX; i++, k++, j += 4) {
            if (pauseCtx->worldMapPoints[i]) {
                gSPVertex(POLY_OPA_DISP++, &pauseCtx->mapPageVtx[164 + i * 4], 4, 0);
                gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
            }
        }
    }

    if ((pauseCtx->pageIndex == PAUSE_MAP) && (pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE) &&
        (pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) && (pauseCtx->state != PAUSE_STATE_DEFAULT_SAVE_PROMPT) &&
        !((pauseCtx->state >= PAUSE_STATE_GAMEOVER_0) && (pauseCtx->state <= PAUSE_STATE_GAMEOVER_10))) {
        j = 0;
        n = 0;
        sceneId = play->sceneNum;
        if (sceneId == SCENE_KAKUSIANA) { // Lone Peak Shrine & Grottos
            if (play->roomCtx.currRoom.num == 5) {
                sceneId = SCENE_11GORONNOSATO; // Goron Village (winter)
            } else if ((play->roomCtx.currRoom.num == 6) || (play->roomCtx.currRoom.num == 8) ||
                       (play->roomCtx.currRoom.num == 12)) {
                sceneId = SCENE_22DEKUCITY; // Deku Palace
            } else {
                sceneId = Entrance_GetSceneNumAbsolute(((void)0, gSaveContext.respawn[RESPAWN_MODE_UNK_3].entrance));
            }
        }

        // Loop over regionId (n) and regionIdIndex (j)
        while (true) {
            if ((gSceneIdsPerRegion[n][j] == 0xFFFF)) {
                n++;
                j = 0;
                if (n == REGION_MAX) {
                    n = 0;

                    // Special case for fairy fountains
                    if (sceneId == SCENE_YOUSEI_IZUMI) {
                        j = play->curSpawn;
                        n = sGreatFairySpawnRegions[j];
                        break;
                    }

                    while (true) {
                        if (gSceneIdsPerRegion[n][j] == 0xFFFF) {
                            n++;
                            if (n == REGION_MAX) {
                                break;
                            }
                            j = 0;
                            if (Entrance_GetSceneNumAbsolute(
                                    ((void)0, gSaveContext.respawn[RESPAWN_MODE_UNK_3].entrance)) ==
                                gSceneIdsPerRegion[n][j]) {
                                break;
                            }
                        }
                        j++;
                    }
                    break;
                }
            }

            if (sceneId == gSceneIdsPerRegion[n][j]) {
                break;
            }
            j++;
        }

        if (n != REGION_MAX) {
            KaleidoScope_SetView(pauseCtx, pauseCtx->eye.x, pauseCtx->eye.y, pauseCtx->eye.z);
            func_8012C628(play->state.gfxCtx);

            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

            POLY_OPA_DISP = func_8010CB80(POLY_OPA_DISP, &D_09007500, 16, 16, sWorldMapCursorsRectLeft[n],
                                          sWorldMapCursorsRectTop[n], 16, 16, 1 << 10, 1 << 10);
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);

    CLOSE_DISPS(play->state.gfxCtx);
}

u16 sOwlStatuePauseItems[] = {
    0xB + 0xA4, // OWL_STATUE_GREAT_BAY_COAST
    0xF + 0xA4, // OWL_STATUE_ZORA_CAPE
    0x6 + 0xA4, // OWL_STATUE_SNOWHEAD
    0xD + 0xA4, // OWL_STATUE_MOUNTAIN_VILLAGE
    0x5 + 0xA4, // OWL_STATUE_CLOCK_TOWN
    0xE + 0xA4, // OWL_STATUE_MILK_ROAD
    0x4 + 0xA4, // OWL_STATUE_WOODFALL
    0xC + 0xA4, // OWL_STATUE_SOUTHERN_SWAMP
    0x8 + 0xA4, // OWL_STATUE_IKANA_CANYON
    0xA + 0xA4, // OWL_STATUE_STONE_TOWER
};
void KaleidoScope_UpdateWorldMapCursor(PlayState* play) {
    static u16 sStickAdjTimer = 0; // unused timer that counts up every frame. Resets on reading a stickAdj.
    PauseContext* pauseCtx = &play->pauseCtx;
    s16 oldCursorPoint;

    if ((pauseCtx->state == PAUSE_STATE_DEFAULT_MAIN) && (pauseCtx->mainState == PAUSE_MAIN_STATE_IDLE) &&
        (pauseCtx->pageIndex == PAUSE_MAP)) {
        pauseCtx->cursorColorSet = 0;
        oldCursorPoint = pauseCtx->cursorPoint[PAUSE_WORLD_MAP];

        if (gSaveContext.buttonStatus[EQUIP_SLOT_A] != BTN_DISABLED) {
            gSaveContext.buttonStatus[EQUIP_SLOT_A] = BTN_DISABLED;
            gSaveContext.unk_3F22 = 0;
            Interface_ChangeAlpha(50);
        }

        if (pauseCtx->cursorSpecialPos == 0) {
            if (pauseCtx->stickAdjX > 30) {
                pauseCtx->cursorShrinkRate = 4.0f;
                sStickAdjTimer = 0;

                while (true) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP]++;
                    if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] >= REGION_MAX) {
                        KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_RIGHT);
                        pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
                        break;
                    }
                    if (pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]) {
                        break;
                    }
                }
            } else if (pauseCtx->stickAdjX < -30) {
                pauseCtx->cursorShrinkRate = 4.0f;
                sStickAdjTimer = 0;

                while (true) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP]--;
                    if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] < REGION_GREAT_BAY) {
                        KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_LEFT);
                        pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
                        break;
                    }
                    if (pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]) {
                        break;
                    }
                }
            } else {
                sStickAdjTimer++;
            }

            if (pauseCtx->cursorSpecialPos == 0) {
                pauseCtx->cursorItem[PAUSE_MAP] = pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
                // Used as cursor vtxIndex
                pauseCtx->cursorSlot[PAUSE_MAP] = 31 + pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
            }
        } else {
            pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
            if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) {
                if (pauseCtx->stickAdjX > 30) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = -1;
                    pauseCtx->cursorSpecialPos = 0;
                    pauseCtx->cursorShrinkRate = 4.0f;

                    while (true) {
                        pauseCtx->cursorPoint[PAUSE_WORLD_MAP]++;
                        if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] > REGION_STONE_TOWER) {
                            KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_RIGHT);
                            pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
                            break;
                        }
                        if (pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]) {
                            break;
                        }
                    }

                    if (pauseCtx->cursorSpecialPos == 0) {
                        pauseCtx->cursorItem[PAUSE_MAP] = pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
                        // Used as cursor vtxIndex
                        pauseCtx->cursorSlot[PAUSE_MAP] = 31 + pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
                    }
                    play_sound(NA_SE_SY_CURSOR);
                    sStickAdjTimer = 0;
                }
            } else if (pauseCtx->stickAdjX < -30) {
                pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = 11;
                pauseCtx->cursorSpecialPos = 0;
                pauseCtx->cursorShrinkRate = 4.0f;

                while (true) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP]--;
                    if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] < 0) {
                        KaleidoScope_MoveCursorToSpecialPos(play, PAUSE_CURSOR_PAGE_LEFT);
                        pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
                        break;
                    }
                    if (pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]) {
                        break;
                    }
                }

                if (pauseCtx->cursorSpecialPos == 0) {
                    pauseCtx->cursorItem[PAUSE_MAP] = pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
                    // Used as cursor vtxIndex
                    pauseCtx->cursorSlot[PAUSE_MAP] = 31 + pauseCtx->cursorPoint[PAUSE_WORLD_MAP];
                }
                play_sound(NA_SE_SY_CURSOR);
                sStickAdjTimer = 0;
            }
        }

        if (!pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]) {
            pauseCtx->cursorItem[PAUSE_MAP] = PAUSE_ITEM_NONE;
        }
        if (oldCursorPoint != pauseCtx->cursorPoint[PAUSE_WORLD_MAP]) {
            play_sound(NA_SE_SY_CURSOR);
        }
    } else if (pauseCtx->state == PAUSE_STATE_OWLWARP_SELECT) {
        pauseCtx->cursorColorSet = 4;
        oldCursorPoint = pauseCtx->cursorPoint[PAUSE_WORLD_MAP];

        if (pauseCtx->stickAdjX > 30) {
            pauseCtx->cursorShrinkRate = 4.0f;
            sStickAdjTimer = 0;
            do {
                pauseCtx->cursorPoint[PAUSE_WORLD_MAP]++;
                if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] > OWL_STATUE_STONE_TOWER) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = OWL_STATUE_GREAT_BAY_COAST;
                }
            } while (!pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]);
        } else if (pauseCtx->stickAdjX < -30) {
            pauseCtx->cursorShrinkRate = 4.0f;
            sStickAdjTimer = 0;
            do {
                pauseCtx->cursorPoint[PAUSE_WORLD_MAP]--;
                if (pauseCtx->cursorPoint[PAUSE_WORLD_MAP] < OWL_STATUE_GREAT_BAY_COAST) {
                    pauseCtx->cursorPoint[PAUSE_WORLD_MAP] = OWL_STATUE_STONE_TOWER;
                }
            } while (!pauseCtx->worldMapPoints[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]]);
        } else {
            sStickAdjTimer++;
        }

        //! TODO: Is the `0xA4` here related to `0xA3` being the last recored item in the `ItemId` enum?
        pauseCtx->cursorItem[PAUSE_MAP] = sOwlStatuePauseItems[pauseCtx->cursorPoint[PAUSE_WORLD_MAP]] - 0xA4;
        // Used as cursor vtxIndex
        pauseCtx->cursorSlot[PAUSE_MAP] = 31 + pauseCtx->cursorPoint[PAUSE_WORLD_MAP];

        if (oldCursorPoint != pauseCtx->cursorPoint[PAUSE_WORLD_MAP]) {
            play_sound(NA_SE_SY_CURSOR);
        }
    }
}
