#ifndef Z64_FILE_CHOOSE_H
#define Z64_FILE_CHOOSE_H

#include "global.h"

#define GET_NEWF(sramCtx, slotNum, index) \
    (sramCtx->readBuff[gSramSlotOffsets[slotNum] + offsetof(SaveContext, save.playerData.newf[index])])
#define SLOT_OCCUPIED(sramCtx, slotNum)                                                  \
    ((GET_NEWF(sramCtx, slotNum, 0) == 'Z') || (GET_NEWF(sramCtx, slotNum, 1) == 'E') || \
     (GET_NEWF(sramCtx, slotNum, 2) == 'L') || (GET_NEWF(sramCtx, slotNum, 3) == 'D') || \
     (GET_NEWF(sramCtx, slotNum, 4) == 'A') || (GET_NEWF(sramCtx, slotNum, 5) == '3'))

#define GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, index) (fileSelect->newf[slotNum][index])
#define FILE_CHOOSE_SLOT_OCCUPIED(fileSelect, slotNum)                                                                 \
    ((GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 0) == 'Z') && (GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 1) == 'E') && \
     (GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 2) == 'L') && (GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 3) == 'D') && \
     (GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 4) == 'A') && (GET_FILE_CHOOSE_NEWF(fileSelect, slotNum, 5) == '3'))

typedef enum {
    /* 00 */ CM_FADE_IN_START,
    /* 01 */ CM_FADE_IN_END,
    /* 02 */ CM_MAIN_MENU,
    /* 03 */ CM_SETUP_COPY_SOURCE,
    /* 04 */ CM_SELECT_COPY_SOURCE,
    /* 05 */ CM_SETUP_COPY_DEST_1,
    /* 06 */ CM_SETUP_COPY_DEST_2,
    /* 07 */ CM_SELECT_COPY_DEST,
    /* 08 */ CM_EXIT_TO_COPY_SOURCE_1,
    /* 09 */ CM_EXIT_TO_COPY_SOURCE_2,
    /* 10 */ CM_SETUP_COPY_CONFIRM_1,
    /* 11 */ CM_SETUP_COPY_CONFIRM_2,
    /* 12 */ CM_COPY_CONFIRM,
    /* 13 */ CM_UNK_D,
    /* 14 */ CM_RETURN_TO_COPY_DEST,
    /* 15 */ CM_COPY_ANIM_1,
    /* 16 */ CM_COPY_ANIM_2,
    /* 17 */ CM_COPY_ANIM_3,
    /* 18 */ CM_COPY_ANIM_4,
    /* 19 */ CM_COPY_ANIM_5,
    /* 20 */ CM_COPY_RETURN_MAIN,
    /* 21 */ CM_SETUP_ERASE_SELECT,
    /* 22 */ CM_ERASE_SELECT,
    /* 23 */ CM_SETUP_ERASE_CONFIRM_1,
    /* 24 */ CM_SETUP_ERASE_CONFIRM_2,
    /* 25 */ CM_ERASE_CONFIRM,
    /* 26 */ CM_EXIT_TO_ERASE_SELECT_1,
    /* 27 */ CM_EXIT_TO_ERASE_SELECT_2,
    /* 28 */ CM_ERASE_ANIM_1,
    /* 29 */ CM_UNK_1D,
    /* 30 */ CM_ERASE_ANIM_2,
    /* 31 */ CM_ERASE_ANIM_3,
    /* 32 */ CM_EXIT_ERASE_TO_MAIN,
    /* 33 */ CM_UNUSED_31,
    /* 34 */ CM_ROTATE_TO_NAME_ENTRY,
    /* 35 */ CM_START_NAME_ENTRY,
    /* 36 */ CM_NAME_ENTRY,
    /* 37 */ CM_UNK_23,
    /* 38 */ CM_NAME_ENTRY_TO_MAIN,
    /* 39 */ CM_MAIN_TO_OPTIONS,
    /* 40 */ CM_START_OPTIONS,
    /* 41 */ CM_OPTIONS_MENU,
    /* 42 */ CM_UNK_28,
    /* 43 */ CM_OPTIONS_TO_MAIN,
    /* 44 */ CM_UNUSED_DELAY
} ConfigMode;

typedef enum {
    /* 0 */ SM_FADE_MAIN_TO_SELECT,
    /* 1 */ SM_MOVE_FILE_TO_TOP,
    /* 2 */ SM_FADE_IN_FILE_INFO,
    /* 3 */ SM_CONFIRM_FILE,
    /* 4 */ SM_FADE_OUT_FILE_INFO,
    /* 5 */ SM_MOVE_FILE_TO_SLOT,
    /* 6 */ SM_FADE_OUT,
    /* 7 */ SM_LOAD_GAME
} SelectMode;

typedef enum {
    /* 0 */ FS_TITLE_SELECT_FILE,   // "Please select a file."
    /* 1 */ FS_TITLE_OPEN_FILE,     // "Open this file?"
    /* 2 */ FS_TITLE_COPY_FROM,     // "Copy which file?"
    /* 3 */ FS_TITLE_COPY_TO,       // "Copy to which file?"
    /* 4 */ FS_TITLE_COPY_CONFIRM,  // "Are you sure?"
    /* 5 */ FS_TITLE_COPY_COMPLETE, // "File copied."
    /* 6 */ FS_TITLE_ERASE_FILE,    // "Erase which file?"
    /* 7 */ FS_TITLE_ERASE_CONFIRM, // "Are you sure?"
    /* 8 */ FS_TITLE_ERASE_COMPLETE // "File erased."
} TitleLabel;

typedef enum {
    /* -1 */ FS_WARNING_NONE = -1,
    /*  0 */ FS_WARNING_NO_FILE_COPY,   // "No file to copy."
    /*  1 */ FS_WARNING_NO_FILE_ERASE,  // "No file to erase."
    /*  2 */ FS_WARNING_NO_EMPTY_FILES, // "There is no empty file."
    /*  3 */ FS_WARNING_FILE_EMPTY,     // "This is an empty file."
    /*  4 */ FS_WARNING_FILE_IN_USE     // "This file is in use."
} WarningLabel;

typedef enum {
    /* 0 */ FS_BTN_MAIN_FILE_1,
    /* 1 */ FS_BTN_MAIN_FILE_2,
    /* 2 */ FS_BTN_MAIN_FILE_3,
    /* 3 */ FS_BTN_MAIN_COPY,
    /* 4 */ FS_BTN_MAIN_ERASE,
    /* 5 */ FS_BTN_MAIN_OPTIONS
} MainMenuButtonIndex;

typedef enum {
    /* 0 */ FS_BTN_COPY_FILE_1,
    /* 1 */ FS_BTN_COPY_FILE_2,
    /* 2 */ FS_BTN_COPY_FILE_3,
    /* 3 */ FS_BTN_COPY_QUIT
} CopyMenuButtonIndex;

typedef enum {
    /* 0 */ FS_BTN_ERASE_FILE_1,
    /* 1 */ FS_BTN_ERASE_FILE_2,
    /* 2 */ FS_BTN_ERASE_FILE_3,
    /* 3 */ FS_BTN_ERASE_QUIT
} EraseMenuButtonIndex;

typedef enum {
    /* 0 */ FS_BTN_SELECT_FILE_1,
    /* 1 */ FS_BTN_SELECT_FILE_2,
    /* 2 */ FS_BTN_SELECT_FILE_3,
    /* 3 */ FS_BTN_SELECT_YES,
    /* 4 */ FS_BTN_SELECT_QUIT
} SelectMenuButtonIndex;

typedef enum {
    /* 0 */ FS_BTN_CONFIRM_YES,
    /* 1 */ FS_BTN_CONFIRM_QUIT
} ConfirmButtonIndex;

typedef enum {
    /* 0 */ FS_BTN_ACTION_COPY,
    /* 1 */ FS_BTN_ACTION_ERASE
} ActionButtonIndex;

typedef struct FileSelectState {
    /* 0x00000 */ GameState state;
    /* 0x000A4 */ Vtx* windowVtx;
    /* 0x000A8 */ u8* staticSegment;
    /* 0x000AC */ u8* parameterSegment;
    /* 0x000B0 */ u8* titleSegment;
    /* 0x000B8 */ View view;
    /* 0x00220 */ SramContext sramCtx;
    /* 0x00248 */ SkyboxContext skyboxCtx;
    /* 0x00470 */ MessageContext msgCtx;
    /* 0x12550 */ Font font;
    /* 0x242E0 */ EnvironmentContext envCtx;
    /* 0x243E0 */ Vtx* unk_243E0;
    /* 0x243E4 */ Vtx* windowContentVtx;
    /* 0x243E8 */ Vtx* keyboardVtx;
    /* 0x243EC */ Vtx* nameEntryVtx;
    /* 0x243F0 */ Vtx* keyboard2Vtx;
    /* 0x243F4 */ u8 newf[4][6];
    /* 0x2440C */ u16 deaths[2]; // sotCount?
    /* 0x24410 */ u16 deaths2[2]; // sotCount?
    /* 0x24414 */ char playerName[2][8];
    /* 0x24424 */ char playerName2[2][8];
    /* 0x24434 */ s16 healthCapacity[2];
    /* 0x24438 */ u16 healthCapacity2[2];
    /* 0x2443C */ s16 health[2];
    /* 0x24440 */ u16 health2[2];
    /* 0x24444 */ u32 questItems[2];
    /* 0x2444C */ u32 questItems2[2];
    /* 0x24454 */ s8 defenseHearts[2];
    /* 0x24456 */ u8 defenseHearts2[2];
    /* 0x24458 */ u16 time[2];
    /* 0x2445C */ u16 time2[2];
    /* 0x24460 */ s16 day[2];
    /* 0x24464 */ s16 day2[2];
    /* 0x24468 */ u8 isOwlSave[2];
    /* 0x2446A */ u8 isOwlSave2[2];
    /* 0x2446C */ s16 rupees[2];
    /* 0x24470 */ s16 rupees2[2];
    /* 0x24474 */ u8 upgrades[2];
    /* 0x24476 */ s8 upgrades2[2];
    /* 0x24478 */ u8 maskCount[2];
    /* 0x2447A */ s8 maskCount2[2];
    /* 0x2447C */ s8 heartPieceCount[2];
    /* 0x2447E */ s8 heartPieceCount2[2];
    /* 0x24480 */ s16 buttonIndex;
    /* 0x24482 */ s16 confirmButtonIndex;
    /* 0x24484 */ s16 menuMode;
    /* 0x24486 */ s16 configMode;
    /* 0x24488 */ s16 prevConfigMode;
    /* 0x2448A */ s16 nextConfigMode;
    /* 0x2448C */ s16 selectMode;
    /* 0x2448E */ s16 selectedFileIndex;
    /* 0x24490 */ s16 unk_24490;
    /* 0x24492 */ s16 fileNamesY[3];
    /* 0x24498 */ s16 actionTimer;
    /* 0x2449A */ s16 buttonYOffsets[6];
    /* 0x244A6 */ s16 fileNum;
    /* 0x244A8 */ s16 warningLabel;
    /* 0x244AA */ s16 warningButtonIndex;
    /* 0x244AC */ s16 titleLabel;
    /* 0x244AE */ s16 nextTitleLabel;
    /* 0x244B0 */ s16 windowColor[3];
    /* 0x244B6 */ s16 titleAlpha[2];
    /* 0x244BA */ s16 windowAlpha;
    /* 0x244BC */ s16 fileButtonAlpha[3];
    /* 0x244C2 */ s16 nameBoxAlpha[3];
    /* 0x244C8 */ s16 nameAlpha[3];
    /* 0x244CE */ s16 connectorAlpha[3];
    /* 0x244D4 */ s16 fileInfoAlpha[3];
    /* 0x244DA */ s16 actionButtonAlpha[2];
    /* 0x244DA */ s16 confirmButtonAlpha[2];
    /* 0x244E2 */ s16 optionButtonAlpha;
    /* 0x244E4 */ s16 nameEntryBoxAlpha;
    /* 0x244E6 */ s16 controlsAlpha;
    /* 0x244E8 */ s16 emptyFileTextAlpha;
    /* 0x244EA */ s16 highlightColor[4]; // last elt may be separate
    /* 0x244F2 */ s16 highlightPulseDir;
    /* 0x244F4 */ s16 unk_244F4;
    /* 0x244F6 */ s16 confirmButtonTexIndices[2];
    /* 0x244FA */ s16 inputTimerX;
    /* 0x244FC */ s16 inputTimerY;
    /* 0x244FE */ s16 stickXDir;
    /* 0x24500 */ s16 stickYDir;
    /* 0x24502 */ s16 stickAdjX;
    /* 0x24504 */ s16 stickAdjY;
    /* 0x24506 */ s16 nameEntryBoxPosX;
    /* 0x24508 */ s16 windowPosX;
    /* 0x2450A */ s16 screenFillAlpha;
    /* 0x2450C */ f32 windowRot;
    /* 0x24510 */ s16 kbdButton;
    /* 0x24512 */ s16 unk_24512;
    /* 0x24514 */ s16 unk_24514;
    /* 0x24516 */ s16 unk_24516;
    /* 0x24518 */ s16 kbdX;
    /* 0x2451A */ s16 kbdY;
    /* 0x2451C */ s16 unk_2451C;
    /* 0x2451E */ s16 unk_2451E[5];
    /* 0x24528 */ s16 highlightTimer;
    /* 0x2452A */ s16 unk_2452A;
    /* 0x2452C */ s16 unk_2452C[4];
    /* 0x24534 */ s16 unk_24534[4];
    /* 0x2453C */ s16 unk_2453C[4];
    /* 0x24544 */ s16 unk_24544[4];
    /* 0x2454C */ s16 unk_2454C;
    /* 0x2454E */ s16 unk_2454E;
    /* 0x24550 */ s16 unk_24550;
} FileSelectState; // size = 0x24558

void FileSelect_Init(GameState* thisx);
void FileSelect_Destroy(GameState* thisx);

void FileSelect_DrawTexQuadI4(GraphicsContext* gfxCtx, TexturePtr texture, s16 vtx);

#endif
