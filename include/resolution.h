#ifndef RESOLUTION_H
#define RESOLUTION_H

// @setting: SCREEN_MODE
// 0: DEFAULT, 1: WIDE
#define SCREEN_MODE 1

// Derived from SCREEN_MODE
#define DEFAULT    (SCREEN_MODE == 0 ? 1 : 0) // SCREEN_DEFAULT   (320x240)
#define WIDESCREEN (SCREEN_MODE == 1 ? 1 : 0) // SCREEN_WIDE      (424x240)

// Values
#if WIDESCREEN
    #define SCREEN_WIDTH 424
    #define ASPECT_RATIO (16.0f / 9.0f)
    #define BUFFER_INCREASE ((SCREEN_WIDTH - 320) * 240 * 2)
    #define C_BUTTON_EQUIP_1 ((SCREEN_WIDTH - 320) * 5 + 660)
    #define C_BUTTON_EQUIP_2 ((SCREEN_WIDTH - 320) * 5 + 900)
    #define C_BUTTON_EQUIP_3 ((SCREEN_WIDTH - 320) * 5 + 1140)
    #define FBDEMO_SHIFT (SCREEN_WIDTH - 320)
    #define GFXPRINT_SHIFT 6
    #define OCEFF_SHIFT 40
    #define SONG_OF_TIME_SHIFT 56
    #define TITLE_SHIFT ((SCREEN_WIDTH - 320) / 3 * 2)
    #define WS_MIRROR_SHIFT 16
    #define WS_PX_SHIFT 1
    #define WS_SHIFT_FULL (SCREEN_WIDTH - 320)
    #define WS_SHIFT_HALF (WS_SHIFT_FULL / 2)
    #define WS_SHIFT_QUARTER (WS_SHIFT_FULL / 4)
#else
    #define SCREEN_WIDTH 320
    #define ASPECT_RATIO (4.0f / 3.0f)
    #define BUFFER_INCREASE 0
    #define C_BUTTON_EQUIP_1 660
    #define C_BUTTON_EQUIP_2 900
    #define C_BUTTON_EQUIP_3 1140
    #define FBDEMO_SHIFT 18
    #define GFXPRINT_SHIFT 0
    #define OCEFF_SHIFT 0
    #define SONG_OF_TIME_SHIFT 0
    #define TITLE_SHIFT 0
    #define WS_MIRROR_SHIFT 0
    #define WS_PX_SHIFT 0
    #define WS_SHIFT_FULL 0
    #define WS_SHIFT_HALF 0
    #define WS_SHIFT_QUARTER 0
#endif

// Render notebook screen in 240p instead of 574x454
// Gets rid of the resolution jump and corruption in HLE video plugins
// Decreases the rendering quality for native res (original hardware, LLE plugins)
// Required for Widescreen, but can be used with the default video mode
#if WIDESCREEN
    #define NOTEBOOK_LORES true
#else
    #define NOTEBOOK_LORES false
#endif

#endif
