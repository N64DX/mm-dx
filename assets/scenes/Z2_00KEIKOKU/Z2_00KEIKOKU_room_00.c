#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/misc/scene_texture_08/scene_texture_08.h"
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU.h"

SceneCmd Z2_00KEIKOKU_room_00Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(Z2_00KEIKOKU_room_00AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 3),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(28, Z2_00KEIKOKU_room_00ObjectList_00006C),
    SCENE_CMD_ACTOR_LIST(221, Z2_00KEIKOKU_room_00ActorEntry_0000A4),
    SCENE_CMD_END(),
};

SceneCmd* Z2_00KEIKOKU_room_00AlternateHeaders0x000048[] = {
    Z2_00KEIKOKU_room_00Set_001200,
    Z2_00KEIKOKU_room_00Set_001340,
    Z2_00KEIKOKU_room_00Set_0014C0,
    Z2_00KEIKOKU_room_00Set_0015D0,
    Z2_00KEIKOKU_room_00Set_001750,
    Z2_00KEIKOKU_room_00Set_0019F0,
    Z2_00KEIKOKU_room_00Set_001B30,
    Z2_00KEIKOKU_room_00Set_001C90,
    Z2_00KEIKOKU_room_00Set_001E60,
};

s16 Z2_00KEIKOKU_room_00ObjectList_00006C[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_BAT,
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_WOOD02,
    OBJECT_BIGICICLE,
    OBJECT_ANI,
    OBJECT_BOMBIWA,
    OBJECT_DNT,
    OBJECT_CROW,
    OBJECT_DOR01,
    OBJECT_RAT,
    OBJECT_RB,
    OBJECT_SNOWMAN,
    OBJECT_DEKUBABA,
    OBJECT_BB,
    OBJECT_BOX,
    OBJECT_DODONGO,
    OBJECT_GI_RESERVE00,
    OBJECT_MOONSTON,
    OBJECT_YB,
    OBJECT_STH,
    OBJECT_THIEFBIRD,
    OBJECT_MAMENOKI,
    OBJECT_SLIME,
    OBJECT_GS,
    OBJECT_TSUBO,
    OBJECT_KANBAN,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_0000A4[] = {
    { ACTOR_ELF_MSG6 | 0xE000,      {  -5336,   -281,   -646 }, { SPAWN_ROT_FLAGS( 0X1E, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0E05 },
    { ACTOR_ELF_MSG6 | 0xE000,      {  -5381,   -281,   -486 }, { SPAWN_ROT_FLAGS( 0X1E, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0E05 },
    { ACTOR_ELF_MSG6 | 0xE000,      {  -5513,   -281,   -192 }, { SPAWN_ROT_FLAGS( 0X1E, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0E05 },
    { ACTOR_ELF_MSG6 | 0xE000,      {  -5442,   -281,   -309 }, { SPAWN_ROT_FLAGS( 0X1E, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0E05 },
    { ACTOR_EN_ITEM00,              {   3616,    325,   -893 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0202 },
    { ACTOR_OBJ_SWPRIZE,            {    360,   -222,   3882 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x000E },
    { ACTOR_OBJ_SWPRIZE,            {   3986,    254,   1965 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0205 },
    { ACTOR_OBJ_SWPRIZE,            {    614,     42,   1325 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0214 },
    { ACTOR_OBJ_SWPRIZE,            {   2364,     48,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x030B },
    { ACTOR_EN_SNOWMAN,             {  -3001,   -281,  -3437 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0000 },
    { ACTOR_EN_SNOWMAN,             {  -2811,   -281,  -2423 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFF00 },
    { ACTOR_EN_SNOWMAN,             {  -2489,   -281,  -4134 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0000 },
    { ACTOR_EN_SNOWMAN,             {  -1797,   -281,  -3512 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFF00 },
    { ACTOR_EN_SNOWMAN,             {   -864,   -281,  -4036 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0000 },
    { ACTOR_EN_SNOWMAN,             {   -358,   -281,  -3862 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFF00 },
    { ACTOR_EN_SNOWMAN,             {    176,   -255,  -3551 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0000 },
    { ACTOR_EN_SNOWMAN,             {   1138,   -206,  -3183 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0000 },
    { ACTOR_EN_SNOWMAN,             {   1291,   -178,  -3704 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFF00 },
    { ACTOR_BG_UMAJUMP,             {  -4150,   -222,   4018 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0402 },
    { ACTOR_EN_BAT,                 {  -2925,    226,   3437 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF02 },
    { ACTOR_EN_BAT,                 {   1168,    298,   4117 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF02 },
    { ACTOR_EN_GS,                  {  -2875,   -222,   3566 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X15,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3BE8 },
    { ACTOR_EN_GS,                  {  -2595,     48,  -2200 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X2C,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3BC9 },
    { ACTOR_EN_GS,                  {     59,   -276,  -4215 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0XE,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3BAA },
    { ACTOR_EN_GS,                  {   1080,   -222,   4198 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X137,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3B80 },
    { ACTOR_EN_GS,                  {   3217,     44,  -2551 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X149,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3B6B },
    { ACTOR_EN_GS,                  {   4479,    254,   1255 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X104,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3B51 },
    { ACTOR_DM_STK,                 {   -400,   1744,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0006),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_STH2,                {   1017,   -221,   3641 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X7B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE01 },
    { ACTOR_EN_STH2,                {   2365,    315,   -193 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE01 },
    { ACTOR_EN_SLIME | 0x4000,      {  -3076,   -230,   2608 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {  -2892,    -77,   1573 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {  -1445,     48,  -2607 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {  -1433,   -222,   3946 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {   1248,   -184,   3176 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {   1515,    -92,   2063 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {   2600,     22,    559 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {   2682,     78,   2412 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {   3808,    235,    729 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF03 },
    { ACTOR_EN_SLIME | 0x4000,      {  -3972,   -279,   2086 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF01 },
    { ACTOR_EN_SLIME | 0x4000,      {  -2698,     48,  -1139 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF01 },
    { ACTOR_EN_SLIME | 0x4000,      {   -297,   -222,   3243 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0xFF01 },
    { ACTOR_EN_SLIME | 0x4000,      {    902,     48,  -2536 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF01 },
    { ACTOR_EN_DEKUBABA,            {  -2208,   -222,   3498 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_DEKUBABA,            {  -1121,   -222,   4491 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_DEKUBABA,            {    673,   -222,   4562 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_DEKUBABA,            {   2000,   -222,   3989 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_OBJ_ETCETERA,           {   -625,   -222,   3550 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_OBJ_ETCETERA,           {   -175,   -222,   4000 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_OBJ_ETCETERA,           {   -175,   -222,   4900 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_OBJ_ETCETERA,           {   3613,    254,   2324 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_EN_FALL,                {   3660,    254,   1427 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0400 },
    { ACTOR_EN_DODONGO,             {  -2818,   -281,  -3543 }, { SPAWN_ROT_FLAGS(    0, 0x0001), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0028) }, 0x0000 },
    { ACTOR_EN_DODONGO,             {  -1135,   -281,  -4072 }, { SPAWN_ROT_FLAGS(    0, 0x0001), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0028) }, 0x0001 },
    { ACTOR_EN_DODONGO,             {    926,   -207,  -3562 }, { SPAWN_ROT_FLAGS(    0, 0x0001), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0028) }, 0x0001 },
    { ACTOR_EN_THIEFBIRD,           {  -2889,    -10,   4119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XD7,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_THIEFBIRD,           {   -398,   1505,   -398 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_EN_BB,                  {  -2501,   -150,   3756 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {     -8,   -180,   3426 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {   1600,   -155,   4341 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {   2059,    -20,  -2783 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {   2283,     20,    918 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {   2784,     90,   -375 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_EN_BB,                  {   3838,    100,   -979 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0xFFFF },
    { ACTOR_OBJ_TSUBO | 0x2000,     {   4171,    285,  -1012 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0XB,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x4110 },
    { ACTOR_EN_RAT,                 {   2822,     51,   -640 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x8023 },
    { ACTOR_EN_RAT,                 {   3488,     50,  -1624 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x8023 },
    { ACTOR_EN_RAT,                 {   3976,     43,   -134 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x8023 },
    { ACTOR_EN_RUPPECROW,           {  -2315,     50,   1815 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XED,
                                                                                                                  0x0012),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0C00 },
    { ACTOR_DOOR_ANA | 0x2000,      {  -5159,   -281,   -571 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x001D),
    SPAWN_ROT_FLAGS(  0XB, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {  -2782,     48,  -1654 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X149,
                                                                                                                  0x0013),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {  -2425,   -281,  -3291 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X3A,
                                                                                                                  0x001A),
    SPAWN_ROT_FLAGS(  0X7, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {  -2317,   -221,   3418 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X77,
                                                                                                                  0x0015),
    SPAWN_ROT_FLAGS(  0XD, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {  -1592,   -222,   4622 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XF4,
                                                                                                                  0x0014),
    SPAWN_ROT_FLAGS(  0X1, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {    192,     48,  -3138 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X12A,
                                                                                                                  0x0019),
    SPAWN_ROT_FLAGS(  0X3, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {   3223,    219,   1417 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XFD,
                                                                                                                  0x001C),
    SPAWN_ROT_FLAGS(  0X9, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {   4450,    254,    925 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XD3,
                                                                                                                  0x0018),
    SPAWN_ROT_FLAGS(  0X2, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,      {   2367,    315,   -192 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0016),
    SPAWN_ROT_FLAGS(  0X4, 0x007F) }, 0x009A },
    { ACTOR_DOOR_ANA | 0x2000,      {   1012,   -221,   3642 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XEF,
                                                                                                                  0x001B),
    SPAWN_ROT_FLAGS(  0X4, 0x007F) }, 0x003F },
    { ACTOR_DOOR_ANA | 0x2000,      {   -375,   -222,   3976 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4,
                                                                                                                  0x0017),
    SPAWN_ROT_FLAGS(  0XA, 0x007F) }, 0x021F },
    { ACTOR_OBJ_MURE,               {  -4546,   -421,   1817 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2322 },
    { ACTOR_EN_GAKUFU,              {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                                  0x0011),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI,           {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0020),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,           {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,           {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,           {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,           {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,           {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_OBJ_MOON_STONE,         {   3660,    254,   1427 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1000 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -2093,   -198,   3209 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x004C },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -2025,   -198,   3631 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x005C },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -1181,   -198,   4627 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0060 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {    979,   -198,   4560 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0064 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {   1652,   -198,   3800 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0068 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {   -371,     -5,   3978 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0045 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -3462,     90,   -840 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x006D },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -3461,     88,     29 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0071 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {   -369,    164,  -3819 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0075 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -3257,    129,   -549 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0079 },
    { ACTOR_EN_INVISIBLE_RUPPE,     {  -4070,   -229,   1724 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007D },
    { ACTOR_EN_HIT_TAG | 0xE000,    {  -2445,    333,   -406 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_EN_HIT_TAG | 0xE000,    {  -2402,    115,   -725 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_EN_HIT_TAG | 0xE000,    {   -458,   -213,   5162 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_ELF_MSG6 | 0xE000,      {   -438,   -222,   5545 }, { SPAWN_ROT_FLAGS( 0X96, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0009),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x08F1 },
    { ACTOR_EN_NEO_REEBA,           {  -5227,   -281,   -180 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4922,   -302,    937 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4911,   -281,    -43 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4797,   -292,   -585 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4695,   -281,    316 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4685,   -281,   -899 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4651,   -298,   -299 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4542,   -288,    592 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4517,   -281,     19 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4495,   -281,   -590 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4345,   -281,    325 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4322,   -284,   -289 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4320,   -281,   -912 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4274,   -281,  -1298 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4169,   -287,    618 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4167,   -281,   -588 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -4146,   -281,      1 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3990,   -305,   -285 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3985,   -281,    329 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3940,   -281,  -1633 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3866,   -281,   -613 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3843,   -281,     33 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_NEO_REEBA,           {  -3783,   -302,   1219 }, { SPAWN_ROT_FLAGS(    0, 0x0005), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x002A) }, 0x00FF },
    { ACTOR_EN_ISHI,                {  -6779,   -367,   -843 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01F2 },
    { ACTOR_EN_ISHI,                {  -2994,    -79,  -1924 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE1,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1A24 },
    { ACTOR_EN_ISHI,                {  -3133,   -149,   1538 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1C24 },
    { ACTOR_EN_ISHI,                {  -3002,   -160,  -1914 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE1,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1E14 },
    { ACTOR_EN_ISHI,                {  -2994,   -127,  -1924 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE1,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2014 },
    { ACTOR_EN_ISHI,                {  -3090,   -182,   1588 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2214 },
    { ACTOR_EN_ISHI,                {  -3066,   -131,   1618 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2414 },
    { ACTOR_EN_ISHI,                {  -3012,    -45,  -1901 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE1,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2C14 },
    { ACTOR_EN_ISHI,                {  -3020,   -206,  -1891 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE1,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE04 },
    { ACTOR_EN_ISHI,                {  -3009,     14,  -1905 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE6,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE04 },
    { ACTOR_EN_ISHI,                {  -3033,   -153,   1664 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2604 },
    { ACTOR_EN_ISHI,                {  -2992,   -122,   1713 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13B,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2844 },
    { ACTOR_EN_ISHI,                {  -2957,      6,  -1976 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XDC,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2A44 },
    { ACTOR_OBJ_MURE2,              {  -2532,     47,  -2977 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1F02 },
    { ACTOR_EN_KANBAN,              {  -3250,   -222,   4226 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x003C },
    { ACTOR_EN_SNOWMAN,             {  -3412,   -281,  -3014 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0001 },
    { ACTOR_EN_SNOWMAN,             {  -1632,   -281,  -4576 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0001 },
    { ACTOR_EN_SNOWMAN,             {    371,   -215,  -4001 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x0001 },
    { ACTOR_OBJ_BIGICICLE | 0x4000, {   -758,    727,  -5314 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0000),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF01 },
    { ACTOR_EN_NEO_REEBA,           {  -5157,   -281,    -80 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -5045,   -311,   1245 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4921,   -281,   -614 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4798,   -287,    462 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4733,   -281,   -236 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4717,   -281,  -1008 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4543,   -281,   -606 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4539,   -295,    166 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4409,   -322,   1016 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4337,   -281,  -1361 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4333,   -281,  -1009 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4332,   -284,    525 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4330,   -281,   -218 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4142,   -281,    176 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -4103,   -281,   -594 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3986,   -284,    543 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3923,   -281,   -197 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3917,   -281,   -996 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3846,   -281,  -1580 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3784,   -281,    210 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_NEO_REEBA,           {  -3554,   -295,   1096 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x80FF },
    { ACTOR_EN_WOOD02 | 0x2000,     {   3449,    232,   1940 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0005),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0A1A },
    { ACTOR_EN_WOOD02 | 0x2000,     {   2680,    121,   1739 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_EN_WOOD02 | 0x2000,     {   3249,    225,   1051 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE6,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_ELF_MSG2 | 0xE000,      {   -759,    697,  -5320 }, { SPAWN_ROT_FLAGS(  0X6, 0x0007), SPAWN_ROT_FLAGS(  0X2,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x7F39 },
    { ACTOR_OBJ_MURE,               {  -2319,   -150,   3434 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x2324 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -3972,   -279,   2086 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -3076,   -230,   2607 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -2892,    -77,   1579 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -2716,     48,  -1143 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -2685,   -222,   4297 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -1458,     48,  -2606 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {  -1423,   -222,   3954 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   -311,   -222,   3237 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {    914,     48,  -2555 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   1246,   -184,   3177 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   1514,    -92,   2047 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   1730,   -108,   2730 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   1967,     48,  -1301 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   2597,     21,    559 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   2678,     77,   2408 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   2893,    158,   1826 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   3807,    235,    736 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,         {   4415,    221,    412 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_BEAN,               {   3986,    254,   1965 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X13E,
                                                                                                                  0x0023),
    SPAWN_ROT_FLAGS(  0X1, 0x007F) }, 0x4305 },
    { ACTOR_OBJ_BEAN,               {   2364,     48,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0025),
    SPAWN_ROT_FLAGS(  0X1, 0x007F) }, 0x460B },
    { ACTOR_OBJ_BEAN,               {    360,   -222,   3882 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0XE,
                                                                                                                  0x0024),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x478E },
    { ACTOR_OBJ_BEAN,               {    614,     42,   1325 }, { SPAWN_ROT_FLAGS( 0X5A, 0x0007), SPAWN_ROT_FLAGS( 0X1E,
                                                                                                                  0x0022),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x4A94 },
    { ACTOR_OBJ_BEAN | 0x2000,      {   3986,    254,   1965 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0023),
    SPAWN_ROT_FLAGS(  0X1, 0x007F) }, 0x0506 },
    { ACTOR_OBJ_BEAN | 0x2000,      {   2364,     48,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0X5,
                                                                                                                  0x0025),
    SPAWN_ROT_FLAGS(  0X1, 0x007F) }, 0x070C },
    { ACTOR_OBJ_BEAN | 0x2000,      {    360,   -222,   3882 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0024),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x060F },
    { ACTOR_EN_TEST4,               {   -400,    628,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x0021),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0C20 },
    { ACTOR_OBJ_BOMBIWA,            {  -2782,     48,  -1654 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x8002 },
    { ACTOR_OBJ_BOMBIWA,            {  -5160,   -281,   -572 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x8003 },
    { ACTOR_OBJ_ICE_POLY,           {   -837,    170,  -5305 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0XD,
                                                                                                                  0x0026),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_OBJ_ICE_POLY,           {   -667,    184,  -5319 }, { SPAWN_ROT_FLAGS( 0XB4, 0x0007), SPAWN_ROT_FLAGS( 0XF0,
                                                                                                                  0x0026),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_BOX | 0x6000,        {  -4470,   -472,   1961 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X112,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x5080 },
    { ACTOR_EN_BOX | 0x6000,        {   2162,   -221,   4074 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XF9,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x5081 },
    { ACTOR_EN_BOX | 0x6000,        {    303,    -73,   3688 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0XC,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x5082 },
    { ACTOR_EN_SCOPECROW,           {    223,   1156,   4432 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x05A2 },
    { ACTOR_EN_SCOPECROW,           {   3611,    689,  -3167 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X121,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0922 },
    { ACTOR_EN_SCOPECOIN,           {   3616,    325,   -893 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0022 },
    { ACTOR_EN_SCOPECOIN,           {   3488,    463,   1909 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x00A2 },
    { ACTOR_EN_SCOPECOIN,           {   3508,    461,   1879 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x00A2 },
    { ACTOR_EN_SCOPENUTS,           {   -382,    522,    615 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x001F },
    { ACTOR_EN_A_OBJ,               {   -561,   -222,   4601 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3B0A },
    { ACTOR_EN_YB,                  {  -2533,     47,  -2978 }, { SPAWN_ROT_FLAGS(    0, 0x0002), SPAWN_ROT_FLAGS(0X13A,
                                                                                                                  0x0029),
    SPAWN_ROT_FLAGS(    0, 0x0055) }, 0x000F },
    { ACTOR_EN_FALL,                {   -402,  11700,   -401 }, { SPAWN_ROT_FLAGS( 0X3C, 0x0007), SPAWN_ROT_FLAGS(0X163,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_EN_FALL,                {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS( 0X32, 0x0007), SPAWN_ROT_FLAGS(  0XF,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,                {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS( 0X28, 0x0007), SPAWN_ROT_FLAGS( 0X1E,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,                {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
    { ACTOR_EN_FALL,                {   -400,   -100,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x05FF },
    { ACTOR_OBJ_SOUND,              {  -3459,     94,     96 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,              {  -3459,     98,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,              {   -375,   -222,   3976 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                                  0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x008F },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_000E74[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable Z2_00KEIKOKU_room_00RoomShapeCullable_000E80 = { 
    2, 55,
    Z2_00KEIKOKU_room_00RoomShapeCullableEntry_000E8C,
    Z2_00KEIKOKU_room_00RoomShapeCullableEntry_000E8C + ARRAY_COUNTU(Z2_00KEIKOKU_room_00RoomShapeCullableEntry_000E8C)
};

RoomShapeCullableEntry Z2_00KEIKOKU_room_00RoomShapeCullableEntry_000E8C[55] = {
    { {  -2438,   -107,   1692 },   2910, Z2_00KEIKOKU_room_00DL_023CA0, NULL },
    { {   -513,    487,   -425 },   2066, Z2_00KEIKOKU_room_00DL_00DA28, NULL },
    { {  -2851,   -107,   -711 },   1364, Z2_00KEIKOKU_room_00DL_008C38, NULL },
    { {   -383,     64,  -3792 },    526, Z2_00KEIKOKU_room_00DL_00A810, NULL },
    { {  -6512,   -277,     15 },   5300, Z2_00KEIKOKU_room_00DL_00F480, Z2_00KEIKOKU_room_00DL_026EB0 },
    { {   -667,    199,   4816 },   4284, Z2_00KEIKOKU_room_00DL_003AA8, Z2_00KEIKOKU_room_00DL_026C20 },
    { {   4089,    340,   -292 },   3792, Z2_00KEIKOKU_room_00DL_004BD0, NULL },
    { {  -2881,   -236,  -1388 },   5206, Z2_00KEIKOKU_room_00DL_007428, NULL },
    { {   -836,   -221,  -3475 },    138, NULL, Z2_00KEIKOKU_room_00DL_0285F8 },
    { {  -1365,     -5,   -400 },  -2264, Z2_00KEIKOKU_room_00DL_0248D8, NULL },
    { {   -129,   1421,  -5268 },   5498, Z2_00KEIKOKU_room_00DL_0244E8, Z2_00KEIKOKU_room_00DL_026C38 },
    { {    -37,    742,   3918 },   6358, Z2_00KEIKOKU_room_00DL_0241B0, Z2_00KEIKOKU_room_00DL_026C40 },
    { {   2956,    251,   -541 },   1468, Z2_00KEIKOKU_room_00DL_0202B8, Z2_00KEIKOKU_room_00DL_027BC0 },
    { {   4043,    254,   1539 },   -696, Z2_00KEIKOKU_room_00DL_024B88, NULL },
    { {   3855,    -73,  -1356 },   2866, Z2_00KEIKOKU_room_00DL_0054B8, NULL },
    { {   2981,     16,   1613 },   2378, Z2_00KEIKOKU_room_00DL_005808, NULL },
    { {  -1912,    -87,   -127 },   4958, Z2_00KEIKOKU_room_00DL_005EC8, NULL },
    { {    104,   -161,   2851 },  -1256, Z2_00KEIKOKU_room_00DL_024D70, NULL },
    { {   1636,   -150,  -2973 },   -278, Z2_00KEIKOKU_room_00DL_024F08, NULL },
    { {   3372,     47,   -717 },  -1492, Z2_00KEIKOKU_room_00DL_0251F8, NULL },
    { {  -1211,   -205,   4129 },   3906, Z2_00KEIKOKU_room_00DL_006628, NULL },
    { {   -426,    279,  -5136 },    894, Z2_00KEIKOKU_room_00DL_0069D8, NULL },
    { {  -3491,   -300,   1479 },   -300, Z2_00KEIKOKU_room_00DL_0253F0, NULL },
    { {  -3431,   -281,  -2073 },   -568, Z2_00KEIKOKU_room_00DL_0255A8, NULL },
    { {   4043,    254,   1539 },    696, Z2_00KEIKOKU_room_00DL_0075C8, NULL },
    { {   -631,    -15,   -680 },   3300, Z2_00KEIKOKU_room_00DL_0083F0, NULL },
    { {   -811,   -107,   -622 },   2926, Z2_00KEIKOKU_room_00DL_009908, NULL },
    { {  -1104,   -117,  -3415 },   2822, Z2_00KEIKOKU_room_00DL_00AC40, NULL },
    { {    431,   -117,  -4093 },  -1286, Z2_00KEIKOKU_room_00DL_025820, NULL },
    { {  -3189,   -281,  -3832 },  -1052, Z2_00KEIKOKU_room_00DL_025A10, NULL },
    { {  -1964,   -281,  -3306 },  -1552, Z2_00KEIKOKU_room_00DL_025CA0, NULL },
    { {   -342,     48,  -3153 },   -506, Z2_00KEIKOKU_room_00DL_025F50, NULL },
    { {   -400,   -101,   1879 },    552, Z2_00KEIKOKU_room_00DL_00AF40, NULL },
    { {  -1263,   1639,  -4484 },   4814, Z2_00KEIKOKU_room_00DL_002BA8, NULL },
    { {   -631,   -124,   -375 },   3426, Z2_00KEIKOKU_room_00DL_003250, NULL },
    { {   2355,     38,   1223 },   1684, Z2_00KEIKOKU_room_00DL_003BC0, NULL },
    { {  -6132,   -142,    729 },   4334, Z2_00KEIKOKU_room_00DL_004220, NULL },
    { {   1936,    322,  -3276 },   -466, Z2_00KEIKOKU_room_00DL_026140, NULL },
    { {  -1033,    195,   4104 },   3468, Z2_00KEIKOKU_room_00DL_017330, Z2_00KEIKOKU_room_00DL_0273B0 },
    { {   -380,    125,   -441 },   2054, Z2_00KEIKOKU_room_00DL_00DF78, NULL },
    { {   -400,    418,   -400 },   2072, Z2_00KEIKOKU_room_00DL_00E5A0, NULL },
    { {   -400,    165,   -400 },   2086, Z2_00KEIKOKU_room_00DL_00F288, NULL },
    { {   4043,    613,   1539 },    784, Z2_00KEIKOKU_room_00DL_023468, Z2_00KEIKOKU_room_00DL_028518 },
    { {   -467,   -169,   5158 },    -70, Z2_00KEIKOKU_room_00DL_0262C8, NULL },
    { {   1992,    -76,   1889 },   -972, Z2_00KEIKOKU_room_00DL_026428, NULL },
    { {   -708,   -125,  -3519 },     44, NULL, Z2_00KEIKOKU_room_00DL_028758 },
    { {   5105,     27,   -511 },  -1338, Z2_00KEIKOKU_room_00DL_0265C8, NULL },
    { {   3819,     53,   -703 },   -226, Z2_00KEIKOKU_room_00DL_026768, NULL },
    { {   8375,    724,   -862 },   2484, Z2_00KEIKOKU_room_00DL_0246B8, Z2_00KEIKOKU_room_00DL_026C30 },
    { {   8140,   1131,  -1221 },   1600, Z2_00KEIKOKU_room_00DL_005090, NULL },
    { {  -1360,   -128,   2259 },   3202, Z2_00KEIKOKU_room_00DL_00B920, Z2_00KEIKOKU_room_00DL_026C48 },
    { {  -1359,   -146,   2261 },   3186, Z2_00KEIKOKU_room_00DL_023E00, NULL },
    { {   3306,    152,   -580 },  -1050, Z2_00KEIKOKU_room_00DL_026978, NULL },
    { {  -3980,    117,    -29 },   1712, Z2_00KEIKOKU_room_00DL_01B280, Z2_00KEIKOKU_room_00DL_0277D0 },
    { {  -1094,     63,  -3178 },   2722, Z2_00KEIKOKU_room_00DL_01E2A8, NULL },
};

s32 Z2_00KEIKOKU_room_00_terminatorMaybe_0011FC = { 0x01000000 };

SceneCmd Z2_00KEIKOKU_room_00Set_001200[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(5, 29, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(5, Z2_00KEIKOKU_room_00ObjectList_001240),
    SCENE_CMD_ACTOR_LIST(15, Z2_00KEIKOKU_room_00ActorEntry_00124C),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001240[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_GIANT,
    OBJECT_DOR01,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_00124C[] = {
    { ACTOR_EN_GIANT,     {   -393,    511,    503 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_EN_GIANT,     {    519,    511,   -402 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE01 },
    { ACTOR_EN_GIANT,     {  -1355,    511,   -391 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE02 },
    { ACTOR_EN_GIANT,     {   -408,    511,  -1141 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE03 },
    { ACTOR_EN_GAKUFU,    {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI, {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI, {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI, {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI, {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI, {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL, {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_EN_FALL,      {   -402,  11000,   -401 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFFFF },
    { ACTOR_EN_FALL,      {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x0009),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,      {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,      {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_00133C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_001340[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(6, Z2_00KEIKOKU_room_00ObjectList_001380),
    SCENE_CMD_ACTOR_LIST(19, Z2_00KEIKOKU_room_00ActorEntry_00138C),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001380[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_WOOD02,
    OBJECT_BOMBIWA,
    OBJECT_DOR01,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_00138C[] = {
    { ACTOR_EN_GAKUFU,          {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_BOMBIWA,        {  -2558,    -77,   1946 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,       {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,       {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_EN_WOOD02 | 0x2000, {   3449,    232,   1940 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF1A },
    { ACTOR_EN_WOOD02 | 0x2000, {   3249,    225,   1051 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE6,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_EN_WOOD02 | 0x2000, {   3006,    197,    864 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_EN_WOOD02 | 0x2000, {   2680,    121,   1739 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_EN_FALL,            {   -402,  11000,   -401 }, { SPAWN_ROT_FLAGS( 0X3C, 0x0007), SPAWN_ROT_FLAGS(0X163,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_EN_FALL,            {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS( 0X32, 0x0007), SPAWN_ROT_FLAGS(  0XF,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,            {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS( 0X28, 0x0007), SPAWN_ROT_FLAGS( 0X1E,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,            {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
    { ACTOR_OBJ_SOUND,          {  -3459,     94,     96 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,          {  -3459,     98,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,          {   -375,   -222,   3976 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x008F },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_0014BC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_0014C0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_WIND_SETTINGS(178, 78, 211, 155),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(6, Z2_00KEIKOKU_room_00ObjectList_001508),
    SCENE_CMD_ACTOR_LIST(11, Z2_00KEIKOKU_room_00ActorEntry_001514),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001508[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_DOR01,
    OBJECT_STK,
    OBJECT_STK2,
    OBJECT_DELF,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_001514[] = {
    { ACTOR_DM_STK,        {   -853,   -222,   3685 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_OBJECT_KANKYO, {   -786,   -222,   3744 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_GAKUFU,     {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI,  {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,  {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,  {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,  {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,  {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,  {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_DM_CHAR00,     {   -786,   -222,   3685 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_DM_CHAR00,     {   -719,   -222,   3685 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_0015C4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_0015D0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 1),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(13, Z2_00KEIKOKU_room_00ObjectList_001610),
    SCENE_CMD_ACTOR_LIST(18, Z2_00KEIKOKU_room_00ActorEntry_00162C),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001610[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_HORSE_LINK_CHILD,
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_WOOD02,
    OBJECT_BIGICICLE,
    OBJECT_ANI,
    OBJECT_OS_ANIME,
    OBJECT_BOMBIWA,
    OBJECT_DOR01,
    OBJECT_MA2,
    OBJECT_UM,
    OBJECT_HA,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_00162C[] = {
    { ACTOR_EN_GAKUFU,      {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_EN_MA_YTO,      {   2066,     48,   -437 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XD2,
                                                                                                          0x0009),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x30FF },
    { ACTOR_EN_FR,          {   -756,    687,  -5316 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0781 },
    { ACTOR_OBJ_TOKEIDAI,   {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,   {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,   {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,   {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,   {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,   {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_EN_WEATHER_TAG, {   -400,    628,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0204 },
    { ACTOR_EN_FALL,        {   -402,  11000,   -401 }, { SPAWN_ROT_FLAGS( 0X3C, 0x0007), SPAWN_ROT_FLAGS(0X163,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_EN_FALL,        {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS( 0X32, 0x0007), SPAWN_ROT_FLAGS(  0XF,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,        {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS( 0X28, 0x0007), SPAWN_ROT_FLAGS( 0X1E,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,        {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
    { ACTOR_OBJ_UM,         {   2145,     48,   -374 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_OBJ_SOUND,      {  -3459,     94,     96 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,      {  -3459,     98,   -773 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0088 },
    { ACTOR_OBJ_SOUND,      {   -375,   -222,   3976 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                          0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x008F },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_00174C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_001750[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 1),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 3),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(25, Z2_00KEIKOKU_room_00ObjectList_001790),
    SCENE_CMD_ACTOR_LIST(34, Z2_00KEIKOKU_room_00ActorEntry_0017C4),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001790[] = {
    OBJECT_KEIKOKU_OBJ,
    OBJECT_HORSE_LINK_CHILD,
    OBJECT_BAT,
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_WOOD02,
    OBJECT_BIGICICLE,
    OBJECT_ANI,
    OBJECT_OS_ANIME,
    OBJECT_BOJ,
    OBJECT_BOMBIWA,
    OBJECT_DNT,
    OBJECT_CROW,
    OBJECT_DOR01,
    OBJECT_RAT,
    OBJECT_RB,
    OBJECT_SNOWMAN,
    OBJECT_DEKUBABA,
    OBJECT_BB,
    OBJECT_BOX,
    OBJECT_FIREFLY,
    OBJECT_DODONGO,
    OBJECT_GI_RESERVE00,
    OBJECT_MOONSTON,
    OBJECT_GS,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_0017C4[] = {
    { ACTOR_EN_GAKUFU,          {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,       {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,       {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_OBJ_MOON_STONE,     {   3660,    254,   1427 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x1000 },
    { ACTOR_DOOR_ANA | 0x2000,  {   3223,    219,   1417 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XFD,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(  0X9, 0x007F) }, 0x001F },
    { ACTOR_DOOR_ANA | 0x2000,  {   4450,    254,    925 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XD3,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(  0X2, 0x007F) }, 0x001F },
    { ACTOR_EN_WOOD02 | 0x2000, {   3449,    232,   1940 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF1A },
    { ACTOR_EN_WOOD02 | 0x2000, {   2680,    121,   1739 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_EN_WOOD02 | 0x2000, {   3249,    225,   1051 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XE6,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFF00 },
    { ACTOR_OBJ_GRASS_UNIT,     {  -3972,   -279,   2086 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {  -3076,   -230,   2607 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   1593,   -197,   3232 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {    548,   -150,   2572 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   1730,   -108,   2730 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {  -1908,    -84,   1815 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   2597,     21,    559 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {    557,     48,  -2783 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {  -1458,     48,  -2606 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   1967,     48,  -1301 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {  -2716,     48,  -1143 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   2678,     77,   2408 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   2893,    158,   1826 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   4415,    221,    412 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_OBJ_GRASS_UNIT,     {   3807,    235,    736 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_EN_FALL,            {   -402,  11000,   -401 }, { SPAWN_ROT_FLAGS( 0X3C, 0x0007), SPAWN_ROT_FLAGS(0X163,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x007F },
    { ACTOR_EN_FALL,            {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS( 0X32, 0x0007), SPAWN_ROT_FLAGS(  0XF,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,            {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS( 0X28, 0x0007), SPAWN_ROT_FLAGS( 0X1E,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,            {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
    { ACTOR_EN_TEST4,           {   -400,    628,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x0009),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0C20 },
    { ACTOR_EN_GS,              {   4479,    254,   1255 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X104,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x3B51 },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_0019E4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_0019F0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(6, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(3, Z2_00KEIKOKU_room_00ObjectList_001A30),
    SCENE_CMD_ACTOR_LIST(15, Z2_00KEIKOKU_room_00ActorEntry_001A38),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001A30[] = {
    OBJECT_FALL,
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_GIANT,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_001A38[] = {
    { ACTOR_EN_GAKUFU,    {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI, {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI, {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI, {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI, {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI, {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_EN_GIANT,     {   -393,    511,    503 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XB4, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE08 },
    { ACTOR_EN_GIANT,     {    519,    511,   -402 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE09 },
    { ACTOR_EN_GIANT,     {  -1355,    511,   -391 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0A },
    { ACTOR_EN_GIANT,     {   -408,    511,  -1141 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0B },
    { ACTOR_EN_FALL,      {   -402,  11000,   -401 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFFFF },
    { ACTOR_EN_FALL,      {   -400,   8000,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x017F },
    { ACTOR_EN_FALL,      {   -400,   3500,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x01FF },
    { ACTOR_EN_FALL,      {   -400,      0,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x027F },
    { ACTOR_BG_BREAKWALL, {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0, 0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_001B28[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd Z2_00KEIKOKU_room_00Set_001B30[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(8, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(8, Z2_00KEIKOKU_room_00ObjectList_001B70),
    SCENE_CMD_ACTOR_LIST(17, Z2_00KEIKOKU_room_00ActorEntry_001B80),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001B70[] = {
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_GIANT,
    OBJECT_DELF,
    OBJECT_HORSE_LINK_CHILD,
    OBJECT_OSN,
    OBJECT_STK,
    OBJECT_STK3,
    OBJECT_DMASK,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_001B80[] = {
    { ACTOR_EN_OSN,             {   1138,   -168,   3070 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X135,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0003 },
    { ACTOR_DM_STK,             {   1033,   -170,   3048 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XD2,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_HORSE,           {    917,   -197,   3244 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XA7,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x400E },
    { ACTOR_EN_GIANT,           {   -400,    500,    400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X16,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE08 },
    { ACTOR_EN_GIANT,           {    400,    500,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0X6,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE09 },
    { ACTOR_EN_GIANT,           {  -1400,    500,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X2B,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0A },
    { ACTOR_EN_GIANT,           {   -500,    500,  -1141 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X1C,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0B },
    { ACTOR_EN_GAKUFU,          {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,       {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,       {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_BG_BREAKWALL,       {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_DM_CHAR00,          {    931,   -110,   3145 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X10,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_DM_CHAR00,          {    894,    -96,   3161 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X3B,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_EN_HANABI | 0xE000, {   -400,   1450,   -390 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                              0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
};

SceneCmd Z2_00KEIKOKU_room_00Set_001C90[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(8, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(7, Z2_00KEIKOKU_room_00ObjectList_001CD0),
    SCENE_CMD_ACTOR_LIST(24, Z2_00KEIKOKU_room_00ActorEntry_001CE0),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001CD0[] = {
    OBJECT_OBJ_TOKEIDAI,
    OBJECT_GIANT,
    OBJECT_MOONEND,
    OBJECT_DAIKU,
    OBJECT_TORYO,
    OBJECT_BAI,
    OBJECT_SDN,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_001CE0[] = {
    { ACTOR_EN_GAKUFU,       {   -835,   -221,  -3474 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XC4,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE00 },
    { ACTOR_OBJ_TOKEIDAI,    {   -400,    628,   -119 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x507F },
    { ACTOR_OBJ_TOKEIDAI,    {    -82,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X5A,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,    {   -718,    628,   -388 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x407F },
    { ACTOR_OBJ_TOKEIDAI,    {   -400,   1450,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x607F },
    { ACTOR_OBJ_TOKEIDAI,    {   -400,    178,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x807F },
    { ACTOR_EN_GIANT,        {   -400,    500,    400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X16,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE08 },
    { ACTOR_EN_GIANT,        {    400,    500,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(  0X6,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE09 },
    { ACTOR_EN_GIANT,        {  -1400,    500,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X2B,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0A },
    { ACTOR_EN_GIANT,        {   -500,    500,  -1141 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X1C,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0xFE0B },
    { ACTOR_BG_BREAKWALL,    {   -400,     12,   -400 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_DEMO_MOONEND,    {      0,   4800,  -2000 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_DEMO_MOONEND,    {   8000,  -6000,      0 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(    0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(0X10E, 0x007F) }, 0x0001 },
    { ACTOR_EN_ENDING_HERO4, {   2741,     50,   -743 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10F,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO4, {   2893,     52,   -566 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X108,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO4, {   2784,     50,   -431 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X11C,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO4, {   3104,     48,  -1115 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X126,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO5, {   3172,     55,   -397 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X111,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO5, {   3130,     53,   -330 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X110,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_EN_ENDING_HERO5, {   3121,     55,   -457 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0002 },
    { ACTOR_EN_ENDING_HERO5, {   3231,     54,   -541 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X11B,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0003 },
    { ACTOR_EN_ENDING_HERO5, {   3391,     51,   -220 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X104,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0004 },
    { ACTOR_EN_ENDING_HERO2, {   2951,     52,   -481 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X109,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO3, {   3569,     48,   -960 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X124,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
};

SceneCmd Z2_00KEIKOKU_room_00Set_001E60[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, 0, 0, false, 0),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(8, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&Z2_00KEIKOKU_room_00RoomShapeCullable_000E80),
    SCENE_CMD_OBJECT_LIST(12, Z2_00KEIKOKU_room_00ObjectList_001EA0),
    SCENE_CMD_ACTOR_LIST(11, Z2_00KEIKOKU_room_00ActorEntry_001EB8),
    SCENE_CMD_END(),
};

s16 Z2_00KEIKOKU_room_00ObjectList_001EA0[] = {
    OBJECT_AND,
    OBJECT_DT,
    OBJECT_BAI,
    OBJECT_TORYO,
    OBJECT_AL,
    OBJECT_AH,
    OBJECT_NB,
    OBJECT_BAL,
    OBJECT_SDN,
    OBJECT_MA2,
    OBJECT_MM,
    OBJECT_FSN,
};

ActorEntry Z2_00KEIKOKU_room_00ActorEntry_001EB8[] = {
    { ACTOR_EN_FSN,          {  -2704,     48,   -468 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X1C,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0001 },
    { ACTOR_EN_AND,          {  -2536,     48,   -394 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X10E,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_MA_YTO,       {  -2667,     48,   -337 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X92,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x40FF },
    { ACTOR_DM_BAL,          {  -3201,    245,   -159 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X82,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x00FF },
    { ACTOR_DM_AL,           {  -2719,     48,   -326 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XA0,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_DM_AH,           {  -2670,     48,   -469 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X25,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_DM_NB,           {  -2638,     48,   -468 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X16,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO,  {  -2749,     48,   -320 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0XA4,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO2, {  -2643,     48,   -338 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X92,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_PM,           {   2907,     48,   -384 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS(0X149,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
    { ACTOR_EN_ENDING_HERO3, {  -2698,     48,   -330 }, { SPAWN_ROT_FLAGS(    0, 0x0007), SPAWN_ROT_FLAGS( 0X99,
                                                                                                           0x007F),
    SPAWN_ROT_FLAGS(    0, 0x007F) }, 0x0000 },
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_001F68[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Mtx Z2_00KEIKOKU_room_00DL_023028Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , 278266210  , 63111169   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Mtx Z2_00KEIKOKU_room_00DL_022B50Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , 240648546  , 119537665  , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx Z2_00KEIKOKU_room_00DL_001FF0[] = {
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_001FF8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_001FF8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_002BA8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[179], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x78, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_024C50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_001FF8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(19, 12, 21, 0, 19, 21, 20, 0),
    gsSP2Triangles(12, 22, 23, 0, 12, 23, 21, 0),
    gsSP2Triangles(23, 24, 21, 0, 24, 25, 21, 0),
    gsSP2Triangles(25, 20, 21, 0, 25, 17, 20, 0),
    gsSP2Triangles(25, 18, 17, 0, 22, 12, 15, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 18, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(13, 11, 8, 0, 13, 8, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 11, 0, 17, 11, 13, 0),
    gsSP2Triangles(16, 15, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 21, 23, 0),
    gsSP2Triangles(19, 24, 22, 0, 19, 25, 24, 0),
    gsSP2Triangles(19, 26, 25, 0, 19, 23, 27, 0),
    gsSP2Triangles(23, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 8, 13, 11, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 8, 7, 0),
    gsSP2Triangles(16, 13, 8, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 17, 21, 20, 0),
    gsSP2Triangles(17, 22, 21, 0, 22, 23, 21, 0),
    gsSP2Triangles(17, 19, 24, 0, 25, 26, 0, 0),
    gsSP2Triangles(27, 25, 28, 0, 25, 0, 28, 0),
    gsSP1Triangle(8, 15, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(16, 21, 17, 0, 2, 22, 23, 0),
    gsSP2Triangles(1, 22, 2, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 28, 24, 27, 0),
    gsSP1Triangle(27, 26, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[124], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 16, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(22, 19, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(18, 24, 23, 0, 18, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(30, 12, 31, 0, 12, 13, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_001FF8[156], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_002E70[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_002E70.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003250[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_002E70[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01CE50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_002E70, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 17, 25, 26, 0),
    gsSP2Triangles(17, 26, 27, 0, 24, 22, 28, 0),
    gsSP2Triangles(29, 16, 15, 0, 29, 15, 30, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_002E70[32], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 10, 0),
    gsSP1Triangle(20, 10, 9, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0033A0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0033A0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003500[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0033A0[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_002000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_002800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0033A0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(5, 1, 0, 0, 3, 9, 2, 0),
    gsSP2Triangles(9, 10, 2, 0, 10, 0, 2, 0),
    gsSP2Triangles(3, 6, 11, 0, 6, 12, 11, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 10, 9, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0035F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0035F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003608[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0035F8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_003500, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_003628[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_003628.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003928[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003628[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_005800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_005000, 0x0100, 1, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_003628, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(3, 11, 10, 0, 3, 10, 0, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 2, 1, 0, 26, 1, 27, 0),
    gsSP2Triangles(27, 25, 24, 0, 27, 24, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSP2Triangles(29, 16, 15, 0, 29, 15, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003628[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_003A78[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_003A78.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003A88[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_003A78, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_003928, 0, 0x000023F0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_003AA8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_003608),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_003A88),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_003AC0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_003AC0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_003BC0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003AC0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_027050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_002800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_003AC0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(1, 0, 3, 0, 1, 3, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_003CA0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_003CA0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_004220[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003CA0[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_027050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_026850, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_003CA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 16, 13, 0, 4, 17, 18, 0),
    gsSP2Triangles(4, 18, 5, 0, 18, 16, 5, 0),
    gsSP2Triangles(0, 19, 15, 0, 19, 12, 15, 0),
    gsSP2Triangles(0, 2, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 3, 0),
    gsSP2Triangles(24, 3, 1, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 29, 25, 28, 0),
    gsSP1Triangle(28, 25, 24, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003CA0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 11, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(19, 21, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_003CA0[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 8, 0),
    gsSP2Triangles(10, 8, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 11, 10, 17, 0),
    gsSP1Triangle(11, 17, 16, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0043D8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0043D8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0049D8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0043D8[88], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0043D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 21, 0),
    gsSP2Triangles(25, 21, 24, 0, 18, 17, 27, 0),
    gsSP2Triangles(18, 27, 23, 0, 17, 20, 25, 0),
    gsSP2Triangles(17, 25, 27, 0, 22, 28, 29, 0),
    gsSP1Triangle(22, 29, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0043D8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 13, 0),
    gsSP2Triangles(14, 13, 18, 0, 13, 19, 18, 0),
    gsSP2Triangles(13, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0043D8[63], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 5, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 10, 2, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(12, 15, 14, 0, 14, 16, 13, 0),
    gsSP2Triangles(14, 17, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 18, 0),
    gsSP1Triangle(22, 18, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_004BA0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_004BA0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_004BB0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_004BA0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0049D8, 0, 0x00004E20),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_004BD0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_004BB0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_004BE0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_004BE0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_005090[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_004BE0[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02DC50, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_004BE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 4, 0, 8, 9, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 9, 10, 3, 0),
    gsSP2Triangles(9, 3, 1, 0, 10, 11, 6, 0),
    gsSP2Triangles(10, 6, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 16, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 13, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 22, 15, 0, 23, 24, 17, 0),
    gsSP2Triangles(23, 17, 16, 0, 24, 25, 19, 0),
    gsSP2Triangles(24, 19, 17, 0, 26, 27, 0, 0),
    gsSP2Triangles(26, 0, 2, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_004BE0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 7, 6, 19, 0),
    gsSP2Triangles(6, 9, 20, 0, 6, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 22, 21, 0),
    gsSP2Triangles(30, 31, 25, 0, 30, 25, 22, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_004BE0[64], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_005238[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_005238.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0054B8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_005238[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02CC50, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_002000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 4, 4),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_005238, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 8, 0),
    gsSP2Triangles(3, 6, 8, 0, 9, 5, 10, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 4, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 17, 18, 0, 0, 2, 17, 0),
    gsSP2Triangles(19, 0, 18, 0, 19, 20, 0, 0),
    gsSP2Triangles(7, 1, 0, 0, 20, 4, 0, 0),
    gsSP2Triangles(4, 21, 0, 0, 21, 7, 0, 0),
    gsSP2Triangles(13, 22, 23, 0, 13, 24, 22, 0),
    gsSP2Triangles(24, 25, 22, 0, 23, 1, 7, 0),
    gsSP2Triangles(26, 13, 8, 0, 13, 7, 8, 0),
    gsSP2Triangles(13, 23, 7, 0, 4, 20, 11, 0),
    gsSP2Triangles(19, 18, 27, 0, 12, 28, 29, 0),
    gsSP2Triangles(12, 30, 28, 0, 12, 11, 30, 0),
    gsSP2Triangles(14, 5, 9, 0, 26, 8, 31, 0),
    gsSP1Triangle(26, 31, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_005608[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_005608.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_005808[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_005608[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01C650, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_005608, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 7, 0, 5, 0),
    gsSP2Triangles(8, 4, 9, 0, 3, 0, 7, 0),
    gsSP2Triangles(10, 7, 11, 0, 7, 6, 11, 0),
    gsSP2Triangles(6, 12, 11, 0, 12, 6, 13, 0),
    gsSP2Triangles(9, 2, 14, 0, 7, 10, 3, 0),
    gsSP2Triangles(10, 15, 3, 0, 10, 16, 15, 0),
    gsSP2Triangles(17, 14, 18, 0, 14, 2, 18, 0),
    gsSP2Triangles(19, 14, 20, 0, 19, 9, 14, 0),
    gsSP2Triangles(19, 8, 9, 0, 13, 21, 12, 0),
    gsSP2Triangles(13, 22, 21, 0, 12, 21, 23, 0),
    gsSP1Triangle(21, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_005938[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_005938.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_005EC8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_005938[81], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x8C, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01C650, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01DE50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_005938, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 4, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 10, 0),
    gsSP2Triangles(7, 11, 8, 0, 6, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 20, 21, 18, 0),
    gsSP2Triangles(21, 19, 18, 0, 20, 18, 22, 0),
    gsSP2Triangles(18, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 28, 29, 0, 0),
    gsSP2Triangles(29, 5, 0, 0, 22, 30, 20, 0),
    gsSP2Triangles(22, 29, 30, 0, 29, 28, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_005938[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 0, 15, 1, 0),
    gsSP2Triangles(0, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 13, 17, 0, 16, 18, 13, 0),
    gsSP2Triangles(18, 19, 13, 0, 19, 14, 13, 0),
    gsSP2Triangles(7, 20, 21, 0, 7, 21, 22, 0),
    gsSP2Triangles(7, 22, 8, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 25, 0),
    gsSP2Triangles(27, 25, 30, 0, 27, 30, 28, 0),
    gsSP1Triangle(24, 23, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_005938[63], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 4, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_006088[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_006088.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_006628[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_006088[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01C650, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_006088, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 11, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 13, 14, 0, 12, 0, 15, 0),
    gsSP2Triangles(12, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 26, 0, 21, 26, 27, 0),
    gsSP1Triangle(16, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_006088[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 0, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 18, 0),
    gsSP2Triangles(14, 16, 18, 0, 17, 19, 12, 0),
    gsSP2Triangles(20, 3, 21, 0, 3, 22, 21, 0),
    gsSP2Triangles(3, 23, 24, 0, 3, 20, 8, 0),
    gsSP2Triangles(20, 25, 8, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 23, 28, 0, 29, 21, 30, 0),
    gsSP1Triangle(7, 31, 0, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_006088[62], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 9, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 15, 0, 17, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0067E8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0067E8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0069D8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0067E8[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0067E8, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 1, 6, 0),
    gsSP2Triangles(5, 4, 7, 0, 7, 8, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(13, 12, 11, 0, 13, 11, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 17, 0),
    gsSP2Triangles(16, 13, 14, 0, 18, 15, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 5, 21, 0),
    gsSP2Triangles(5, 8, 21, 0, 10, 20, 21, 0),
    gsSP2Triangles(10, 22, 20, 0, 10, 9, 22, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_006AF0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_006AF0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_006CC0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_006AF0[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_006AF0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 9, 4, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 7, 11, 8, 0),
    gsSP2Triangles(11, 10, 8, 0, 11, 12, 10, 0),
    gsSP2Triangles(3, 0, 13, 0, 14, 15, 6, 0),
    gsSP2Triangles(14, 6, 5, 0, 16, 17, 3, 0),
    gsSP2Triangles(16, 3, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 3, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_006DD8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_006DD8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_006DE8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_006DD8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_006CC0, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_006E08[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_006E08.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_006F38[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_006E08[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_006E08, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 8, 3, 9, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 0, 0),
    gsSP2Triangles(3, 10, 4, 0, 6, 10, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_007028[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_007028.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_007038[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_007028, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_006F38, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_007058[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_007058.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0072A8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_007058[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01F650, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01FE50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_007058, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 5, 8, 7, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(3, 12, 11, 0, 12, 8, 11, 0),
    gsSP2Triangles(12, 7, 8, 0, 3, 13, 12, 0),
    gsSP2Triangles(13, 6, 12, 0, 6, 7, 12, 0),
    gsSP2Triangles(3, 4, 13, 0, 4, 6, 13, 0),
    gsSP2Triangles(14, 15, 0, 0, 15, 1, 0, 0),
    gsSP2Triangles(16, 17, 14, 0, 17, 15, 14, 0),
    gsSP2Triangles(16, 14, 0, 0, 16, 18, 17, 0),
    gsSP2Triangles(16, 19, 18, 0, 1, 20, 21, 0),
    gsSP2Triangles(1, 21, 2, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(20, 26, 21, 0, 20, 25, 26, 0),
    gsSP2Triangles(3, 27, 16, 0, 3, 16, 0, 0),
    gsSP2Triangles(27, 3, 11, 0, 27, 11, 28, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0073F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0073F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_007408[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0073F8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0072A8, 0, 0x00002710),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_007428[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_006DE8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_007038),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_007408),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_007448[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_007448.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0075C8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_007448[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x87, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02CC50, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_002000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_007448, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(2, 10, 3, 0, 2, 11, 12, 0),
    gsSP2Triangles(2, 12, 10, 0, 13, 14, 8, 0),
    gsSP2Triangles(14, 9, 8, 0, 12, 15, 13, 0),
    gsSP2Triangles(12, 11, 15, 0, 15, 14, 13, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0076D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0076D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0083F0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[202], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030A98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0076D0, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_031B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[22], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038318),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_033898, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 205, 205, 185, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[36], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[42], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[74], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[106], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[138], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[170], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[178], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 205, 205, 185, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0076D0[186], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0088D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0088D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_008A90[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0088D0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE,
                       0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_028250, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028250, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028050, 0x0100, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028050, 0x0100, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPSetPrimColor(0, 0x80, 223, 223, 232, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0088D0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_008C08[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_008C08.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_008C18[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_008C08, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_008A90, 0, 0x000023F0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_008C38[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_008C18),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_008C48[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_008C48.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_009908[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[196], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02EE58, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 163, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_008C48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_0382B8),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02F258, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[52], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030098, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[55], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_0382D8),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_030298, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[67], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030A98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[72], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_031B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[76], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038318),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_033898, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[100], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038338),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_034C98, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[157], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 13, 0, 20, 13, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038358),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_036798, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_008C48[180], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 2, 1, 0, 11, 1, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_009F48[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_009F48.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00A638[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_009F48[103], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x64, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_027850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_009F48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_009F48[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 7, 0, 24, 7, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_009F48[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_009F48[91], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00A7E0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00A7E0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00A7F0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00A7E0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00A638, 0, 0x00001450),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00A810[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00A7F0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00A820[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00A820.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00AC40[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00A820[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00A820, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 13, 0),
    gsSP2Triangles(16, 17, 13, 0, 17, 14, 13, 0),
    gsSP2Triangles(15, 18, 16, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 14, 0, 14, 21, 22, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 22, 23, 0),
    gsSP2Triangles(15, 24, 18, 0, 24, 25, 18, 0),
    gsSP2Triangles(24, 15, 26, 0, 26, 15, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 30, 31, 27, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00A820[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(13, 18, 19, 0, 13, 19, 15, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 14, 22, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 24, 25, 0),
    gsSP1Triangle(23, 25, 21, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00ADC0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00ADC0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00AF40[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00ADC0[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE,
                       0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_024450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_024250, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0241D0, 0x0140, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0241D0, 0x0140, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPSetPrimColor(0, 0x80, 213, 228, 223, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00ADC0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00ADC0[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00B0C0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00B0C0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00B920[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00B0C0[126], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036598, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00B0C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00B0C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00B0C0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00B0C0[96], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 14, 10, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 19, 15, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(23, 24, 22, 0, 24, 20, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 25, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00BB90[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00BB90.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00BE50[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00BB90[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FA58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00BB90, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_032F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00BB90[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_032F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00BB90[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_032F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00BB90[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00BB90[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00C168[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00C168.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00C178[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00C168, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00BE50, 0, 0x00001770),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00C198[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00C198.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00C3F8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C198[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FA58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00C198, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C198[12], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 14, 12, 0),
    gsSP2Triangles(16, 15, 12, 0, 11, 16, 12, 0),
    gsSP2Triangles(5, 17, 2, 0, 17, 0, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00C590[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00C590.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00C5A0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00C590, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00C3F8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00C5C0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00C5C0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00CB60[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C5C0[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FA58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00C5C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 14, 13, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 20, 19, 0, 22, 19, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 26, 25, 0, 28, 25, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C5C0[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C5C0[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00C5C0[78], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00CD60[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00CD60.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00CD70[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00CD60, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000960),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00CB60, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00CDA0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00CDA0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00D220[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00CDA0[64], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FA58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00CDA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 14, 13, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 20, 19, 0, 22, 19, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 26, 25, 0, 28, 25, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00CDA0[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_032F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00CDA0[34], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00CDA0[50], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 5, 0),
    gsSP2Triangles(4, 7, 5, 0, 8, 9, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00D480[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00D480.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00D490[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00D480, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000960),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00D220, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00D4C0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00D4C0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00D880[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00D4C0[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035998, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00D4C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00D4C0[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00D9B8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00D9B8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00D9C8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00D9B8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000960),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00D880, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00D9F8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00C178),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00C5A0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00CD70),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00D490),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00D9C8),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00DA28[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00D9F8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00DA38[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00DA38.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00DF78[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00DA38[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_0382B8),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02F258, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00DA38, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_0382D8),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_030298, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00DA38[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_0382F8),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_031398, G_IM_FMT_CI, 128, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00DA38[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00DA38[40], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00DA38[60], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00E1E0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00E1E0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00E5A0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00E1E0[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FA58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00E1E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00E1E0[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00E6D8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00E6D8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00E9F8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00E6D8[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01EE50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_01E650, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00E6D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 8, 0, 11, 8, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00E6D8[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00EB28[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00EB28.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00EC28[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00EB28[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0238D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_01E650, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00EB28, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00ED00[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00ED00.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00EE00[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00ED00[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0230D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_01E650, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00ED00, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00EED8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00EED8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00EFD8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00EED8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0228D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_01E650, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00EED8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F0B0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F0B0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00F1B0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F0B0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0220D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_01E650, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F0B0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00F288[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00E9F8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00EC28),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00EE00),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00EFD8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F1B0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F2B8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F2B8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00F378[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F2B8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02B050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02B050, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F2B8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F450[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F450.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00F460[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F450, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00F378, 0, 0x00002260),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00F480[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F460),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F490[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F490.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00F690[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F490[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 205, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F490, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(1, 5, 9, 0, 10, 2, 7, 0),
    gsSP2Triangles(7, 6, 11, 0, 12, 5, 4, 0),
    gsSP2Triangles(0, 2, 13, 0, 14, 0, 13, 0),
    gsSP2Triangles(10, 14, 13, 0, 10, 13, 2, 0),
    gsSP2Triangles(10, 7, 15, 0, 16, 10, 15, 0),
    gsSP2Triangles(11, 16, 15, 0, 11, 15, 7, 0),
    gsSP2Triangles(17, 11, 6, 0, 18, 17, 6, 0),
    gsSP2Triangles(4, 0, 19, 0, 19, 12, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F490[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F828[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F828.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00F838[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F828, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00F690, 0, 0x00001130),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_00F858[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F838),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_00F868[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_00F868.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_00FFD8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F868[111], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 89, 89, 58, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_00F868, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 4, 0, 8, 0),
    gsSP2Triangles(9, 5, 4, 0, 8, 9, 4, 0),
    gsSP2Triangles(3, 5, 10, 0, 11, 6, 7, 0),
    gsSP2Triangles(6, 12, 1, 0, 12, 2, 1, 0),
    gsSP2Triangles(2, 13, 0, 0, 0, 13, 8, 0),
    gsSP2Triangles(14, 1, 0, 0, 15, 4, 3, 0),
    gsSP2Triangles(7, 1, 16, 0, 17, 0, 4, 0),
    gsSP2Triangles(4, 15, 18, 0, 4, 18, 17, 0),
    gsSP2Triangles(19, 15, 3, 0, 7, 16, 20, 0),
    gsSP2Triangles(1, 21, 16, 0, 1, 14, 21, 0),
    gsSP2Triangles(0, 22, 14, 0, 17, 22, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F868[23], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(6, 12, 13, 0, 6, 13, 7, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 7, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 13, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 14, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(21, 20, 16, 0, 21, 16, 15, 0),
    gsSP2Triangles(20, 23, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 31, 27, 30, 0),
    gsSP1Triangle(31, 30, 14, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F868[55], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 4, 0),
    gsSP2Triangles(11, 4, 3, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 17, 18, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 19, 20, 18, 0),
    gsSP2Triangles(19, 18, 17, 0, 9, 8, 21, 0),
    gsSP2Triangles(9, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 26, 25, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_00F868[87], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 18, 17, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 17, 20, 23, 0),
    gsSP1Triangle(17, 23, 21, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0102B0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0102B0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0102C0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0102B0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_00FFD8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0102E0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0102C0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0102F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0102F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_010710[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0102F0[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0102F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 9, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 9, 12, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 9, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 15, 20, 0, 15, 21, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 19, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 17, 21, 0),
    gsSP2Triangles(7, 9, 16, 0, 24, 16, 15, 0),
    gsSP2Triangles(15, 19, 25, 0, 26, 19, 18, 0),
    gsSP2Triangles(7, 16, 27, 0, 28, 7, 27, 0),
    gsSP2Triangles(24, 28, 27, 0, 24, 27, 16, 0),
    gsSP2Triangles(24, 15, 29, 0, 30, 24, 29, 0),
    gsSP2Triangles(25, 30, 29, 0, 25, 29, 15, 0),
    gsSP2Triangles(31, 25, 19, 0, 26, 31, 19, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0102F0[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 6, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 13, 12, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 23, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 20, 23, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0108C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0108C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0108D8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0108C8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_010710, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0108F8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0108D8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_010908[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_010908.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_010D28[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_010908[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 142, 152, 102, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_010908, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 9, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 9, 12, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 9, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 15, 20, 0, 15, 21, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 19, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 17, 21, 0),
    gsSP2Triangles(7, 9, 16, 0, 24, 16, 15, 0),
    gsSP2Triangles(15, 19, 25, 0, 26, 19, 18, 0),
    gsSP2Triangles(7, 16, 27, 0, 28, 7, 27, 0),
    gsSP2Triangles(24, 28, 27, 0, 24, 27, 16, 0),
    gsSP2Triangles(24, 15, 29, 0, 30, 24, 29, 0),
    gsSP2Triangles(25, 30, 29, 0, 25, 29, 15, 0),
    gsSP2Triangles(31, 25, 19, 0, 26, 31, 19, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_010908[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 6, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 13, 12, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 23, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 20, 23, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_010EE0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_010EE0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_010EF0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_010EE0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_010D28, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_010F10[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_010EF0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_010F20[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_010F20.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_011340[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_010F20[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 142, 152, 102, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_010F20, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 9, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 9, 12, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 9, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 15, 20, 0, 15, 21, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 19, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 17, 21, 0),
    gsSP2Triangles(7, 9, 16, 0, 24, 16, 15, 0),
    gsSP2Triangles(15, 19, 25, 0, 26, 19, 18, 0),
    gsSP2Triangles(7, 16, 27, 0, 28, 7, 27, 0),
    gsSP2Triangles(24, 28, 27, 0, 24, 27, 16, 0),
    gsSP2Triangles(24, 15, 29, 0, 30, 24, 29, 0),
    gsSP2Triangles(25, 30, 29, 0, 25, 29, 15, 0),
    gsSP2Triangles(31, 25, 19, 0, 26, 31, 19, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_010F20[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 6, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 13, 12, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 23, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 20, 23, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0114F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0114F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_011508[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0114F8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_011340, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_011528[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_011508),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_011538[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_011538.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_011958[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_011538[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_011538, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 9, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 9, 12, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 9, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 15, 20, 0, 15, 21, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 19, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 17, 21, 0),
    gsSP2Triangles(7, 9, 16, 0, 24, 16, 15, 0),
    gsSP2Triangles(15, 19, 25, 0, 26, 19, 18, 0),
    gsSP2Triangles(7, 16, 27, 0, 28, 7, 27, 0),
    gsSP2Triangles(24, 28, 27, 0, 24, 27, 16, 0),
    gsSP2Triangles(24, 15, 29, 0, 30, 24, 29, 0),
    gsSP2Triangles(25, 30, 29, 0, 25, 29, 15, 0),
    gsSP2Triangles(31, 25, 19, 0, 26, 31, 19, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_011538[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 6, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 13, 12, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 23, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 20, 23, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_011B10[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_011B10.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_011B20[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_011B10, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_011958, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_011B40[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_011B20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_011B50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_011B50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_011F70[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_011B50[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 205, 220, 70, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033498, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_011B50, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 9, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 9, 12, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 9, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 15, 20, 0, 15, 21, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 19, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 23, 17, 21, 0),
    gsSP2Triangles(7, 9, 16, 0, 24, 16, 15, 0),
    gsSP2Triangles(15, 19, 25, 0, 26, 19, 18, 0),
    gsSP2Triangles(7, 16, 27, 0, 28, 7, 27, 0),
    gsSP2Triangles(24, 28, 27, 0, 24, 27, 16, 0),
    gsSP2Triangles(24, 15, 29, 0, 30, 24, 29, 0),
    gsSP2Triangles(25, 30, 29, 0, 25, 29, 15, 0),
    gsSP2Triangles(31, 25, 19, 0, 26, 31, 19, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_011B50[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 6, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 13, 12, 0),
    gsSP2Triangles(17, 12, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 23, 20, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 20, 23, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_012128[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_012128.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_012138[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_012128, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_011F70, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_012158[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_012138),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_012168[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_012168.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_012568[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012168[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_012168, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012168[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012168[44], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_012790[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_012790.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0127A0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_012790, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_012568, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0127C0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0127C0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_012BC0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0127C0[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0127C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0127C0[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0127C0[44], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_012DE8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_012DE8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_012DF8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_012DE8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_012BC0, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_012E18[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_012E18.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_013218[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012E18[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_012E18, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012E18[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_012E18[44], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_013440[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_013440.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_013450[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_013440, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_013218, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_013470[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_013470.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_013870[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013470[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_013470, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013470[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013470[44], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_013A98[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_013A98.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_013AA8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_013A98, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_013870, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_013AC8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0127A0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_012DF8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_013450),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_013AA8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_013AF0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_013AF0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0148A0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[211], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_024450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_013AF0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030A98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[56], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[60], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[92], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[120], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[123], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[138], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 51, 203, 81, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[146], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[161], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[164], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[168], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[186], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 42, 42, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[190], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[196], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[202], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037998, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_013AF0[208], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0151D8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0151D8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0151E8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0151D8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0148A0, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_015208[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0151E8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015218[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015218.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0153A8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015218[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE,
                       0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0218D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0216D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015218, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 12, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 15, 0, 16, 2, 15, 0),
    gsSP1Triangle(2, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015538[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015538.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015548[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015538, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0153A8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015568[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015568.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0158E8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015568[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_034898, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015568, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015568[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015A20[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015A20.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015A30[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015A20, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0158E8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015A50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015A50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015BD0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015A50[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01C650, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015A50, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 0, 9, 1, 0),
    gsSP2Triangles(9, 10, 1, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015CD0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015CD0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015CE0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015CD0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000FA0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_015BD0, 0, 0x00002EE0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015D10[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015D10.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015DF0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015D10[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE,
                       0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0218D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0216D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015D10, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015F50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015F50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_015F60[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015F50, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_015DF0, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_015F80[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_015F80.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016180[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_015F80[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_034898, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_015F80, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016278[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016278.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016288[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016278, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_016180, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0162A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0162A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016368[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0162A8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01C650, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0162A8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016438[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016438.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016448[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016438, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000FA0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_016368, 0, 0x00002EE0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016478[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016478.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016598[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016478[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE,
                       0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0218D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0216D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_021650, 0x0140, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 3, 2, 2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016478, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 3, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016708[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016708.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016718[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016708, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_016598, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016738[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016738.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016A38[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016738[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_034898, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016738, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016738[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016B58[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016B58.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016B68[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016B58, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_016A38, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016B88[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016B88.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016C68[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016B88[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01C650, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016B88, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016D40[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016D40.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_016D50[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016D40, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_001FF0, 0, 0x00000FA0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_016C68, 0, 0x00002EE0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_016D80[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_015548),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_015A30),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_015CE0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_015F60),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016288),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016448),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016718),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016B68),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016D50),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_016DD0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_016DD0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_017140[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016DD0[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_032D98, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_016DD0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033098, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016DD0[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_016DD0[40], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0172F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0172F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_017300[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0172F0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_017140, 0, 0x00001770),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_017320[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_017300),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_017330[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F858),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0102E0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0108F8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_010F10),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_011528),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_011B40),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_012158),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_013AC8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_015208),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_016D80),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_017320),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_017390[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_017390.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_017CB0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_017390[138], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02E258, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_017390, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(6, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(1, 3, 2, 0, 0, 1, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 9, 2, 0),
    gsSP2Triangles(10, 11, 2, 0, 12, 10, 2, 0),
    gsSP2Triangles(12, 10, 2, 0, 10, 11, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 7, 8, 2, 0),
    gsSP2Triangles(13, 14, 2, 0, 14, 15, 2, 0),
    gsSP2Triangles(14, 15, 2, 0, 13, 14, 2, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 16, 17, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 22, 0, 26, 24, 22, 0),
    gsSP2Triangles(26, 24, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 20, 21, 22, 0),
    gsSP2Triangles(27, 28, 18, 0, 28, 29, 18, 0),
    gsSP1Triangle(30, 31, 18, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_017390[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 1, 2, 0),
    gsSP2Triangles(1, 3, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 4, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 9, 0),
    gsSP2Triangles(13, 11, 9, 0, 13, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(7, 8, 9, 0, 14, 15, 9, 0),
    gsSP2Triangles(15, 16, 9, 0, 17, 18, 9, 0),
    gsSP2Triangles(19, 17, 9, 0, 19, 17, 9, 0),
    gsSP2Triangles(17, 18, 9, 0, 15, 16, 9, 0),
    gsSP2Triangles(14, 15, 9, 0, 20, 21, 9, 0),
    gsSP2Triangles(21, 22, 9, 0, 21, 22, 9, 0),
    gsSP2Triangles(20, 21, 9, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(23, 24, 25, 0, 27, 28, 25, 0),
    gsSP2Triangles(28, 29, 25, 0, 30, 31, 25, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_017390[64], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 1, 2, 0),
    gsSP2Triangles(1, 3, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 4, 2, 0, 7, 8, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 2, 0),
    gsSP2Triangles(12, 10, 2, 0, 12, 10, 2, 0),
    gsSP2Triangles(10, 11, 2, 0, 8, 9, 2, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02E458, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_017390[77], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 2, 6, 5, 0),
    gsSP2Triangles(2, 6, 5, 0, 4, 2, 5, 0),
    gsSP2Triangles(0, 2, 3, 0, 0, 1, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 30, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 27, 28, 29, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 24, 25, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_017390[108], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 10, 13, 0, 10, 14, 13, 0),
    gsSP2Triangles(10, 14, 13, 0, 12, 10, 13, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 9, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 17, 20, 0, 17, 21, 20, 0),
    gsSP2Triangles(17, 21, 20, 0, 19, 17, 20, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 16, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 22, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_018010[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_018010.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_018020[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_018010, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_017CB0, 0, 0x00000C80),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_018040[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_018040.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_018370[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_018040[43], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xA0, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025C50, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02B850, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_018040, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 3, 0),
    gsSP2Triangles(8, 9, 3, 0, 8, 3, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 11, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 11, 0, 17, 18, 14, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 20, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 24, 0),
    gsSP2Triangles(28, 24, 23, 0, 28, 23, 29, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_018040[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 1, 0, 0),
    gsSP2Triangles(7, 0, 8, 0, 9, 6, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0184C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0184C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0184D8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0184C8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_018370, 0, 0x00000C80),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0184F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0184F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_018978[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0184F8[64], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FF58, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0184F8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0184F8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_018AC8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_018AC8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_018AD8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_018AC8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_018978, 0, 0x00000C80),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_018AF8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_018AF8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_019118[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_018AF8[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x82, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025C50, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A850, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_018AF8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 19, 0, 23, 19, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 7, 28, 29, 0),
    gsSP1Triangle(7, 29, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_018AF8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 7, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 7, 0),
    gsSP2Triangles(18, 16, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 16, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 25, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_018AF8[62], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 16, 17, 14, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0192C0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0192C0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0192D0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0192C0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_019118, 0, 0x00000C80),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0192F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0192F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_019710[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0192F0[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 155, 205, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02DF50, G_IM_FMT_IA, 16, 33, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0192F0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_031D98, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0192F0[14], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(24, 28, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0192F0[46], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_019880[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_019880.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_019890[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_019880, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_019710, 0, 0x00000C80),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0198B0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_018020),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0184D8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_018AD8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0192D0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_019890),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0198E0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0198E0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_019E50[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[79], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_031B98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0198E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 193, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 104, 140, 150, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[48], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 193, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[53], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[57], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 193, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[62], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[70], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 193, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0198E0[75], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A1F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A1F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01A200[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A1F0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_019E50, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A220[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A220.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01A3C0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01A220[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 178, 224, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A220, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 0, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(13, 12, 11, 0, 14, 13, 11, 0),
    gsSP2Triangles(15, 14, 11, 0, 16, 15, 11, 0),
    gsSP2Triangles(17, 16, 11, 0, 10, 17, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A498[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A498.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01A4A8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A498, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01A3C0, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01A4C8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01A200),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01A4A8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A4E0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A4E0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01A7E0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01A4E0[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02FB58, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A4E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01A4E0[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 193, 193, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01A4E0[36], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A958[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A958.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01A968[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A958, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01A7E0, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01A988[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01A988.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01AA68[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01A988[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, TEXEL0, COMBINED, 0, SHADE, 0,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x64, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_029850, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028A50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01A988, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01AB40[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01AB40.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01AB50[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01AB40, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01AA68, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01AB70[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01AB70.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01AC70[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01AB70[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, TEXEL0, COMBINED, 0, SHADE, 0,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xA5, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_029050, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028C50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01AB70, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01AD48[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01AD48.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01AD58[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01AD48, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01AC70, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01AD78[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01AD78.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B0F8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01AD78[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, TEXEL0, COMBINED, 0, SHADE, 0,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5F, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_029850, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028A50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01AD78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 8, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01AD78[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B228[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B228.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B238[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B228, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01B0F8, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01B258[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01A968),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01AB50),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01AD58),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B238),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01B280[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0198B0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01A4C8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B258),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B2A0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B2A0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B490[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01B2A0[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B2A0, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B5A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B5A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B5B8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B5A8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01B490, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B5D8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B5D8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B828[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01B5D8[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B5D8, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B980[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B980.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01B990[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B980, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01B828, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01B9B0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B5B8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B990),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01B9C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01B9C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01BBB8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01B9C8[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01B9C8, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01BCD0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01BCD0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01BCE0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01BCD0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01BBB8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01BD00[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01BD00.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01BF50[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01BD00[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01BD00, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C0A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C0A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01C0B8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C0A8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01BF50, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01C0D8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01BCE0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01C0B8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C0F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C0F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01C2E0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01C0F0[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C0F0, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C3F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C3F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01C408[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C3F8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01C2E0, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C428[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C428.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01C678[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01C428[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C428, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C7D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C7D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01C7E0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C7D0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01C678, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01C800[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01C408),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01C7E0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01C818[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01C818.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01CA08[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01C818[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01C818, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01CB20[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01CB20.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01CB30[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01CB20, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01CA08, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01CB50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01CB50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01CDA0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01CB50[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01CB50, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01CEF8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01CEF8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01CF08[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01CEF8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01CDA0, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01CF28[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01CB30),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01CF08),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01CF40[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01CF40.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D130[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01CF40[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01CF40, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D248[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D248.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D258[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D248, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01D130, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D278[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D278.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D4C8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01D278[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D278, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D620[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D620.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D630[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D620, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01D4C8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01D650[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01D258),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01D630),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D668[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D668.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D858[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01D668[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_025450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(Z2_00KEIKOKUTex_02CC50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D668, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 17, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D970[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D970.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01D980[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D970, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01D858, 0, 0x00001130),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01D9A0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01D9A0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01DBF0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01D9A0[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_01DA50, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025450, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01D9A0, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 3, 2, 9, 0),
    gsSP2Triangles(3, 9, 10, 0, 2, 5, 11, 0),
    gsSP2Triangles(2, 11, 9, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 8, 12, 0, 12, 13, 11, 0),
    gsSP2Triangles(10, 9, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(9, 11, 16, 0, 9, 16, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 15, 14, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 14, 16, 21, 0),
    gsSP2Triangles(14, 21, 19, 0, 16, 22, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 1, 0, 24, 1, 0, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 1, 0),
    gsSP2Triangles(26, 27, 4, 0, 27, 7, 4, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01DD48[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01DD48.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01DD58[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01DD48, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01DBF0, 0, 0x00001130),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01DD78[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01D980),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01DD58),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01DD90[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01DD90.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01E110[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01DD90[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x64, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_027850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01DD90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
    gsSP2Triangles(7, 10, 9, 0, 7, 11, 12, 0),
    gsSP2Triangles(7, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 21, 0, 27, 28, 26, 0),
    gsSP1Triangle(27, 26, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01DD90[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01E268[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01E268.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01E278[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01E268, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01E110, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01E298[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01E278),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01E2A8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B9B0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01C0D8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01C800),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01CF28),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01D650),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01DD78),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01E298),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01E2E8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01E2E8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01E948[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01E2E8[94], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020650, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01E2E8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 15, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01E2E8[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01E2E8[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01EAE0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01EAE0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01EAF0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01EAE0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01E948, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01EB10[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01EB10.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01F010[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01EB10[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020650, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01EB10, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01EB10[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01EB10[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01F178[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01F178.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01F188[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01F178, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01F010, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01F1A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01F1A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01F6A8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F1A8[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020650, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01F1A8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F1A8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F1A8[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01F810[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01F810.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01F820[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01F810, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01F6A8, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01F840[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01F840.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01FD40[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F840[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020650, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01F840, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F840[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01F840[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01FEA8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01FEA8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_01FEB8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01FEA8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_01FD40, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_01FED8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01EAF0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01F188),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01F820),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01FEB8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_01FF00[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_01FF00.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_020160[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_01FF00[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020650, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0230D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_01FF00, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 13, 16, 0),
    gsSP2Triangles(3, 2, 17, 0, 3, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_020278[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_020278.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_020288[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_020278, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_020160, 0, 0x00002710),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0202A8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_020288),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0202B8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01FED8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0202A8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0202D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0202D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_020AF0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[122], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02E058, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0202D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 3, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 10, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 14, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 17, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 20, 0, 6, 26, 27, 0),
    gsSP2Triangles(6, 27, 23, 0, 2, 28, 0, 0),
    gsSP2Triangles(29, 30, 2, 0, 2, 31, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 2, 6, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 10, 7, 0),
    gsSP2Triangles(11, 12, 9, 0, 9, 13, 11, 0),
    gsSP2Triangles(14, 15, 9, 0, 9, 16, 14, 0),
    gsSP2Triangles(17, 18, 9, 0, 9, 19, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038298),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02E658, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 109, 109, 247, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[52], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
    gsSP2Triangles(6, 1, 5, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 8, 7, 0, 2, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035898, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[62], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 16, 17, 0, 3, 17, 14, 0),
    gsSP2Triangles(3, 2, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[82], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetPrimColor(0, 0x80, 30, 39, 71, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[86], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 1, 5, 0),
    gsSP2Triangles(1, 0, 6, 0, 1, 6, 7, 0),
    gsSP2Triangles(1, 7, 8, 0, 5, 1, 8, 0),
    gsDPSetPrimColor(0, 0x80, 255, 69, 106, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[95], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPSetPrimColor(0, 0x80, 255, 217, 69, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[107], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPSetPrimColor(0, 0x80, 96, 223, 255, 255),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0202D0[119], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_020E50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_020E50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_020E60[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_020E50, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_020AF0, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_020E80[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_020E80.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0215D0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_020E80[109], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, Z2_00KEIKOKUTLUT_038298),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02E658, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_020E80, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_020E80[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_020E80[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 7, 0, 20, 7, 22, 0),
    gsSP2Triangles(15, 14, 23, 0, 15, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_020E80[96], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_021798[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_021798.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0217A8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_021798, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0215D0, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0217C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0217C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_021EB8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0217C8[103], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0x1F40, 0x2328, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED,
                       0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01D650, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01D650, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0217C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 11, 14, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(18, 6, 8, 0, 18, 8, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 21, 20, 0, 27, 26, 20, 0),
    gsSP2Triangles(26, 24, 21, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 27, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0217C8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(9, 8, 12, 0, 12, 7, 11, 0),
    gsSP2Triangles(7, 10, 11, 0, 13, 14, 8, 0),
    gsSP2Triangles(13, 8, 7, 0, 12, 8, 15, 0),
    gsSP2Triangles(8, 14, 15, 0, 15, 13, 12, 0),
    gsSP2Triangles(13, 7, 12, 0, 16, 4, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 19, 17, 0),
    gsSP2Triangles(21, 17, 22, 0, 17, 4, 23, 0),
    gsSP2Triangles(17, 23, 22, 0, 23, 16, 18, 0),
    gsSP2Triangles(23, 18, 22, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 24, 1, 5, 0),
    gsSP2Triangles(24, 5, 25, 0, 5, 4, 26, 0),
    gsSP2Triangles(5, 26, 25, 0, 27, 4, 6, 0),
    gsSP2Triangles(27, 6, 28, 0, 6, 0, 29, 0),
    gsSP2Triangles(6, 29, 28, 0, 29, 24, 25, 0),
    gsSP2Triangles(29, 25, 28, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 30, 2, 1, 0),
    gsSP2Triangles(30, 1, 24, 0, 29, 0, 3, 0),
    gsSP2Triangles(29, 3, 31, 0, 31, 30, 24, 0),
    gsSP1Triangle(31, 24, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0217C8[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 0, 3, 0, 7, 3, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 0, 0),
    gsSP2Triangles(7, 6, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(12, 13, 0, 0, 12, 0, 7, 0),
    gsSP2Triangles(13, 8, 0, 0, 14, 15, 9, 0),
    gsSP2Triangles(14, 9, 8, 0, 12, 11, 16, 0),
    gsSP2Triangles(12, 16, 17, 0, 17, 18, 13, 0),
    gsSP2Triangles(17, 13, 12, 0, 18, 14, 8, 0),
    gsSP2Triangles(18, 8, 13, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 21, 23, 19, 0),
    gsSP2Triangles(23, 24, 19, 0, 20, 24, 23, 0),
    gsSP2Triangles(20, 23, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 28, 29, 25, 0),
    gsSP2Triangles(29, 30, 25, 0, 26, 30, 29, 0),
    gsSP1Triangle(26, 29, 27, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0217C8[94], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(1, 5, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 3, 0),
    gsSP2Triangles(2, 4, 8, 0, 2, 8, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_022188[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_022188.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_022198[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_022188, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_021EB8, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0221B8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0221B8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0225D8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0221B8[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02E058, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0221B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 1, 0, 20, 1, 0, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0221B8[30], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_035898, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0221B8[46], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0227A0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0227A0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0227B0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0227A0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0225D8, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0227D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0227D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_022B50[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0227D0[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPMatrix(&Z2_00KEIKOKU_room_00DL_022B50Mtx_000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPMatrix(0x01000040, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01D650, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01D650, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0227D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0227D0[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_022C78[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_022C78.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_022C88[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_022C78, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_022B50, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_022CA8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_022CA8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023028[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_022CA8[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPMatrix(&Z2_00KEIKOKU_room_00DL_023028Mtx_000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01D650, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01D650, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_022CA8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_022CA8[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023150[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023150.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023160[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023150, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_023028, 0, 0x17D78400),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023180[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023180.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023340[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023180[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037A98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023180, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(11, 10, 16, 0, 11, 16, 17, 0),
    gsSP2Triangles(18, 3, 2, 0, 18, 2, 19, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023438[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023438.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023448[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023438, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_023340, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_023468[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_020E60),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0217A8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_022198),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0227B0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_022C88),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023160),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023448),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0234A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0234A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023608[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0234A8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02D450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0234A8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0234A8[8], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023738[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023738.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023748[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023738, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_023608, 0, 0x00000960),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023768[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023768.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0238C8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023768[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02D450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023768, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023768[8], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0239F8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0239F8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023A08[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0239F8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_0238C8, 0, 0x00000640),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023A28[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023A28.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023B48[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023A28[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02D450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023A28, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_036F98, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023A28[4], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023C70[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023C70.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023C80[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023C70, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_023B48, 0, 0x00000640),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_023CA0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023748),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023A08),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023C80),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023CC0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023CC0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_023E00[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023CC0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_033098, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023CC0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_023EE0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_023EE0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0241B0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023EE0[37], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_034098, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_023EE0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037098, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_023EE0[21], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024348[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024348.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0244E8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024348[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_035D98, G_IM_FMT_IA, 128, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 163, 163, 193, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024348, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0245A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0245A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0246B8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0245A8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02DD50, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0245A8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024798[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024798.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0248D8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024798[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_037898, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024798, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024988[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024988.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_024B88[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024988[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, TEXEL0, COMBINED, 0, SHADE, 0,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x91, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01BE50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02C050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024988, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024C80[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024C80.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_024D70[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024C80[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x78, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01C650, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01DE50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024C80, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 4, 6, 5, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024E48[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024E48.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_024F08[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024E48[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0xD7, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02CC50, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_002000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 4, 4),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024E48, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_024FD8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_024FD8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0251F8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_024FD8[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_02CC50, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_002000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 4, 4),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_024FD8, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 8, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 11, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 13, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(19, 23, 24, 0, 19, 24, 22, 0),
    gsSP1Triangle(23, 25, 24, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_025310[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_025310.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0253F0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_025310[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01F650, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01FE50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_025310, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 0, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0254C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0254C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0255A8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0254C8[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_01F650, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_01FE50, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0254C8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_025680[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_025680.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_025820[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_025680[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_025680, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_025910[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_025910.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_025A10[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_025910[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_025910, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_025AF0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_025AF0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_025CA0[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_025AF0[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_025AF0, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 10, 8, 0),
    gsSP2Triangles(9, 8, 6, 0, 2, 11, 12, 0),
    gsSP2Triangles(2, 12, 3, 0, 9, 13, 14, 0),
    gsSP2Triangles(9, 14, 10, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 15, 17, 18, 0),
    gsSP1Triangle(15, 18, 16, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_025DB0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_025DB0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_025F50[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_025DB0[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_026050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_025C50, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_025DB0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 8, 5, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 8, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026050[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026050.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026140[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026050[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, 0, TEXEL0, 0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 249),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02A050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026050, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026218[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026218.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0262C8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026218[3], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 235),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_032598, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026218, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026368[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026368.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026428[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026368[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIM_LOD_FRAC, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x69, 10, 90, 20, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_032598, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026368, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0264C8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0264C8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0265C8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0264C8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xC3, 255, 255, 255, 180),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_003000, G_IM_FMT_IA, 64, 32, 15, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_000800, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0264C8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 0, 6, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0266A8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0266A8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026768[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0266A8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xC3, 255, 255, 255, 180),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_003C00, G_IM_FMT_IA, 64, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR
                            | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_000800, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0266A8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026838[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026838.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026978[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026838[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 120),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(Z2_00KEIKOKUTLUT_038378),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02DC50, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026838, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026A58[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_002BA8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_003250),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_003AA8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_003BC0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_004220),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_004BD0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_005090),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0054B8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_005808),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_005EC8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_006628),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0069D8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_007428),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0075C8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0083F0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_008C38),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_009908),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00A810),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00AC40),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00AF40),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00B920),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00DA28),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00DF78),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00E5A0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F288),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_00F480),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_017330),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01B280),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_01E2A8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0202B8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023468),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023CA0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_023E00),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0241B0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0244E8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0246B8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0248D8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_024B88),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_024D70),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_024F08),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0251F8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0253F0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0255A8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_025820),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_025A10),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_025CA0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_025F50),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026140),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0262C8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026428),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0265C8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026768),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026978),
    gsSPEndDisplayList(),
};

u8 Z2_00KEIKOKU_room_00_possiblePadding_026C08[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Gfx Z2_00KEIKOKU_room_00DL_026C10[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C18[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C20[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C18),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C30[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C38[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C40[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026C48[] = {
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026C50[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026C50.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026D90[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026C50[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 130),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02B050, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02B050, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026C50, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026E80[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026E80.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_026E90[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026E80, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_026D90, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026EB0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026E90),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026EC0[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_026EC8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026EC0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_026ED8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_026ED8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027238[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026ED8[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_007800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_006800, 0x0100, 1, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_026ED8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_026ED8[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 12, 9, 13, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_027370[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_027370.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027380[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_027370, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_027238, 0, 0x00001F40),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0273A0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027380),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0273B0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026EC8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0273A0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0273C8[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0273D0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0273C8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0273E0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0273E0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027620[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0273E0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, SHADE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetEnvColor(100, 130, 160, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_02C850, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02C850, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 15),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0273E0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 7, 0),
    gsSP2Triangles(11, 12, 7, 0, 10, 0, 3, 0),
    gsSP2Triangles(10, 3, 11, 0, 3, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 14, 0),
    gsSP2Triangles(17, 14, 16, 0, 16, 19, 20, 0),
    gsSP2Triangles(21, 17, 16, 0, 21, 16, 20, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 21, 20, 0),
    gsSP2Triangles(24, 20, 23, 0, 25, 26, 14, 0),
    gsSP2Triangles(18, 27, 25, 0, 18, 25, 14, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_027758[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_027758.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027768[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_027758, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_027620, 0, 0x00000FA0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_027788[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027768),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_027798[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0277A0[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0277A8[] = {
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0277B0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027798),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0277A0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0277A8),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0277D0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0273D0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027788),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0277B0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0277F0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0277F0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027A70[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_0277F0[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_020E50, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_02A050, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0277F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 0, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_027B80[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_027B80.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_027B90[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_027B80, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_027A70, 0, 0x00002710),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_027BB0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027B90),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_027BC0[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027BB0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_027BD0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_027BD0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_028150[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_027BD0[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0,
                       PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0240D0, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_028A50, 0x0020, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_027BD0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_027BD0[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_027BD0[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_027BD0[56], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0282D0[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0282D0.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0282E0[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0282D0, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_028150, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_028300[] = {
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_028308[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_028308.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_028408[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_028308[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_0240D0, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(Z2_00KEIKOKUTex_0240D0, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0B000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_028308, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_0284E8[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_0284E8.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0284F8[] = {
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_0284E8, 1, 0),
    gsSPBranchLessZraw(Z2_00KEIKOKU_room_00DL_028408, 0, 0x00001C20),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_028518[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0282E0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_028300),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0284F8),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_028538[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_028538.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_0285F8[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_028538[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 155, 155, 155, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(Z2_00KEIKOKUTex_030058, G_IM_FMT_IA, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_028538, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx Z2_00KEIKOKU_room_00Vtx_028698[] = {
#include "assets/scenes/Z2_00KEIKOKU/Z2_00KEIKOKU_room_00Vtx_028698.vtx.inc"
};

Gfx Z2_00KEIKOKU_room_00DL_028758[] = {
    gsSPVertex(&Z2_00KEIKOKU_room_00Vtx_028698[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 130, 55, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(Z2_00KEIKOKUTex_032598, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(Z2_00KEIKOKU_room_00Vtx_028698, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx Z2_00KEIKOKU_room_00DL_0287F8[] = {
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C20),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C30),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C38),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C40),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026C48),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_026EB0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0273B0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0277D0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_027BC0),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_028518),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_0285F8),
    gsSPDisplayList(Z2_00KEIKOKU_room_00DL_028758),
    gsSPEndDisplayList(),
};

