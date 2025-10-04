#ifndef RESOLUTION_H
#define RESOLUTION_H

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: WIDE, 2: ULTRAWIDE
#define SCREEN_MODE 1

// Derived from SCREEN_MODE
#define DEFAULT    (SCREEN_MODE == 0 ? 1 : 0) // SCREEN_DEFAULT   (320x240)
#define WIDESCREEN (SCREEN_MODE == 1 ? 1 : 0) // SCREEN_WIDE      (424x240)
#define ULTRA_WS   (SCREEN_MODE == 2 ? 1 : 0) // SCREEN_ULTRAWIDE (576x240)

// Values
#if WIDESCREEN
    #define SCREEN_WIDTH 424
    #define ASPECT_RATIO (16.0f / 9.0f)
    #define C_BUTTON_EQUIP_1 ((SCREEN_WIDTH - 320) * 5 + 660)
    #define C_BUTTON_EQUIP_2 ((SCREEN_WIDTH - 320) * 5 + 900)
    #define C_BUTTON_EQUIP_3 ((SCREEN_WIDTH - 320) * 5 + 1140)
    #define FBDEMO_SHIFT (SCREEN_WIDTH - 320)
    #define GFXPRINT_SHIFT 6
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 80
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
    #define WS_MIRROR_SHIFT 16
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL (SCREEN_WIDTH - 320)
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#elif ULTRA_WS
    #define SCREEN_WIDTH 576
    #define ASPECT_RATIO 2.4f
    #define C_BUTTON_EQUIP_1 ((SCREEN_WIDTH - 320) * 5 + 660)
    #define C_BUTTON_EQUIP_2 ((SCREEN_WIDTH - 320) * 5 + 900)
    #define C_BUTTON_EQUIP_3 ((SCREEN_WIDTH - 320) * 5 + 1140)
    #define FBDEMO_SHIFT (SCREEN_WIDTH - 320)
    #define GFXPRINT_SHIFT 13
    #define LULLABY_SHIFT 70
    #define OCEFF_SHIFT 155
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
    #define WS_MIRROR_SHIFT 8
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL (SCREEN_WIDTH - 320)
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#else
    #define SCREEN_WIDTH 320
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define C_BUTTON_EQUIP_1 660
    #define C_BUTTON_EQUIP_2 900
    #define C_BUTTON_EQUIP_3 1140
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define LULLABY_SHIFT 0
    #define OCEFF_SHIFT 18
    #define TITLE_SHIFT 0
    #define WS_MIRROR_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

// Beating heart position
#define BEATING_HEART_PULSING_SIZE_X ((-130.0f) - WS_SHIFT_HALF)
#define BEATING_HEART_PULSING_SIZE_Y 94.5f

#endif
