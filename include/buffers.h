#ifndef BUFFERS_H
#define BUFFERS_H

#include "assert.h"
#include "gfx.h"
#include "macros.h"
#include "stack.h"
#include "z64save.h"

typedef union {
    u16 framebufferHiRes[HIRES_BUFFER_HEIGHT][HIRES_BUFFER_WIDTH] ALIGNED(64); // size = 0x7FB00 (minimum size of the union)
    struct {
        u16 framebuffer[SCREEN_HEIGHT][SCREEN_WIDTH] ALIGNED(64); // DEFAULT: 0x25800, WIDESCREEN: 0x31B00
        u8 skyboxBuffer[0x5A360 - BUFFER_INCREASE] ALIGNED(16); // The minimum needed here is only 0x18000, but minimum gLoBuffer size is determined by framebufferHiRes size
    };
} BufferLow; // framebuffer + skyboxBuffer combined can't be larger than the original 0x7FB60 (boot address is at 0x80000500 + 0x7FB60 = 0x80080060)

extern BufferLow gLoBuffer; // 0x80000500 - framebuffer_lo


extern u64 gGfxSPTaskYieldBuffer[OS_YIELD_DATA_SIZE / sizeof(u64)];
extern STACK(gGfxSPTaskStack, SP_DRAM_STACK_SIZE8);
extern GfxPool gGfxPools[2];
extern u8 gAudioHeap[0x138000];


typedef union {
    u16 framebufferHiRes[HIRES_BUFFER_HEIGHT][HIRES_BUFFER_WIDTH] ALIGNED(64); // size = 0x7FB00 (minimum size of the union)
    struct {
        u8 pictoPhotoI8[PICTO_PHOTO_SIZE] ALIGNED(64); // 0x4600
        u8 D_80784600[0x56200] ALIGNED(64); // 0x56200 - Lens, pause background, shrinking screen
        u16 framebuffer[SCREEN_HEIGHT][SCREEN_WIDTH] ALIGNED(64); // DEFAULT: 0x25800, WIDESCREEN: 0x31B00
    };
} BufferHigh; // DEFAULT: 0x8000, WIDESCREEN: 0x8C300

extern BufferHigh gHiBuffer; // DEFAULT: 0x80780000, WIDESCREEN: 0x80773D00 - framebuffer_hi

#ifndef FRAMEBUFFERS_START_ADDR
/**
 * The `framebuffers` segment is located at a fixed location in RAM and has a
 * fixed size.
 * Those framebuffers are placed at the end of the RAM space.
 * This address is calculated by doing `0x80800000 - (size of framebuffers)`,
 * where 0x80800000 is the end of the Expansion Pak address range.
 * In the vanilla game this value expands to `0x80780000`.
 *
 * Since the start of the `framebuffers` segment is the end of the not-fixed
 * available RAM, then the `system_heap` covers all the remaining RAM that is
 * not used by the non-relocatable code/data (i.e. `boot`, `code`, and other
 * buffers) up to the start of the `framebuffers` segmemt.
 * @see `Main`
 */
#define FRAMEBUFFERS_START_ADDR (PHYS_TO_K0(0x800000) - sizeof(BufferHigh))

#endif


#endif
