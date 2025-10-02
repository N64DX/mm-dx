#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "assets/misc/link_animetion/link_animetion.h"

u64 gBottleTex[] = {
#include "assets/objects/gameplay_keep/bottle.i4.inc.c"
};

Vtx gameplay_keepVtx_000080[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_000080.vtx.inc"
};

Gfx gBottleContentsDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gBottleContentsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_000080, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(4, 0, 2, 0, 6, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 4, 2, 6, 0),
    gsSP2Triangles(9, 7, 6, 0, 9, 10, 7, 0),
    gsSP2Triangles(2, 10, 9, 0, 2, 11, 10, 0),
    gsSP2Triangles(2, 9, 6, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 8, 7, 0, 11, 12, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gBottleGlassDL[] = {
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, SHADE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, PRIMITIVE, SHADE,
                       COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 170, 240, 255, 255),
    gsDPSetEnvColor(128, 128, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000080[13], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 9, 5, 0, 9, 4, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 7, 6, 9, 0),
    gsSPTexture(0x0640, 0x08FC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsSPVertex(&gameplay_keepVtx_000080[23], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 10, 8, 0),
    gsSP2Triangles(2, 10, 9, 0, 2, 1, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 16, 11, 0, 16, 14, 11, 0),
    gsSP2Triangles(8, 17, 15, 0, 17, 16, 15, 0),
    gsSP2Triangles(10, 18, 8, 0, 18, 17, 8, 0),
    gsSP2Triangles(13, 18, 10, 0, 13, 12, 18, 0),
    gsSP2Triangles(12, 16, 18, 0, 12, 14, 16, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPEndDisplayList(),
};

u64 gBottleContentsTex[] = {
#include "assets/objects/gameplay_keep/bottle_contents.i8.inc.c"
};

u64 gBottleGlassTex[] = {
#include "assets/objects/gameplay_keep/bottle_glass.i8.inc.c"
};

u8 gameplay_keep_possiblePadding_000748[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_000750[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_000750.vtx.inc"
};

Gfx gHookshotChainDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHookshotChainLinkTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_000750, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

u64 gHookshotChainLinkTex[] = {
#include "assets/objects/gameplay_keep/hookshot_chain_link.rgba16.inc.c"
};

u8 gameplay_keep_possiblePadding_000D88[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_000D90[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_000D90.vtx.inc"
};

Gfx gRazorSwordHandlePart4DL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[145], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 4, 6, 0),
    gsSP2Triangles(5, 4, 10, 0, 2, 9, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 17, 16, 0, 18, 20, 16, 0),
    gsSP2Triangles(21, 17, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 18, 22, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSPVertex(&gameplay_keepVtx_000D90[176], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 6, 11, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_000D90[188], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 2, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordHandlePart3DL[] = {
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[133], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 0, 0, 3, 9, 8, 0),
    gsSP2Triangles(10, 11, 6, 0, 7, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordHandlePart2DL[] = {
    gsSPTexture(0x0384, 0x1068, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[123], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordHandlePart1DL[] = {
    gsSPTexture(0x0708, 0x0C80, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[116], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 2, 0),
    gsSP2Triangles(0, 5, 2, 0, 0, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordHandleDL[] = {
    gsSPDisplayList(gRazorSwordHandlePart1DL),
    gsSPDisplayList(gRazorSwordHandlePart2DL),
    gsSPDisplayList(gRazorSwordHandlePart3DL),
    gsSPDisplayList(gRazorSwordHandlePart4DL),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart7DL[] = {
    gsSPTexture(0x0A8C, 0x0640, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[104], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart6DL[] = {
    gsSPTexture(0x05DC, 0x0834, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[101], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart5DL[] = {
    gsSPTexture(0x0320, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[89], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(9, 10, 0, 0, 5, 11, 8, 0),
    gsSP2Triangles(5, 8, 3, 0, 8, 11, 5, 0),
    gsSP1Triangle(8, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart4DL[] = {
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[82], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 3, 4, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart3DL[] = {
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[78], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart2DL[] = {
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[74], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladePart1DL[] = {
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[67], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 4, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gRazorSwordBladeDL[] = {
    gsSPDisplayList(gRazorSwordBladePart1DL),
    gsSPDisplayList(gRazorSwordBladePart2DL),
    gsSPDisplayList(gRazorSwordBladePart3DL),
    gsSPDisplayList(gRazorSwordBladePart4DL),
    gsSPDisplayList(gRazorSwordBladePart5DL),
    gsSPDisplayList(gRazorSwordBladePart6DL),
    gsSPDisplayList(gRazorSwordBladePart7DL),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordHandleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gKokiriSwordHandleGripTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[28], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 7, 8, 0),
    gsSP2Triangles(10, 11, 0, 0, 11, 3, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gKokiriSwordHandleTLUT),
    gsDPLoadTextureBlock(gKokiriSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_000D90[40], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gKokiriSwordHandleTLUT),
    gsDPLoadTextureBlock(gKokiriSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 160, 160, 160, 255),
    gsSPVertex(&gameplay_keepVtx_000D90[46], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gKokiriSwordHandleTLUT),
    gsDPLoadTextureBlock(gKokiriSwordHandleCrossGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_000D90[50], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gKokiriSwordHandlePommelTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_000D90[58], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 0, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 4, 3, 0),
    gsSP2Triangles(2, 1, 7, 0, 1, 8, 7, 0),
    gsSP2Triangles(7, 6, 5, 0, 7, 8, 6, 0),
    gsSP2Triangles(8, 4, 6, 0, 1, 4, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart8DL[] = {
    gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart7DL[] = {
    gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart6DL[] = {
    gsSPTexture(0x0578, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart5DL[] = {
    gsSPTexture(0x0960, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart4DL[] = {
    gsSPTexture(0x0640, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[9], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart3DL[] = {
    gsSPTexture(0x04B0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[6], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart2DL[] = {
    gsSPTexture(0x07D0, 0x0DAC, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_000D90[3], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladePart1DL[] = {
    gsSPTexture(0x06A4, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 3, 2, 3),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_000D90, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gKokiriSwordBladeDL[] = {
    gsSPDisplayList(gKokiriSwordBladePart1DL),
    gsSPDisplayList(gKokiriSwordBladePart2DL),
    gsSPDisplayList(gKokiriSwordBladePart3DL),
    gsSPDisplayList(gKokiriSwordBladePart4DL),
    gsSPDisplayList(gKokiriSwordBladePart5DL),
    gsSPDisplayList(gKokiriSwordBladePart6DL),
    gsSPDisplayList(gKokiriSwordBladePart7DL),
    gsSPDisplayList(gKokiriSwordBladePart8DL),
    gsSPEndDisplayList(),
};

u64 gKokiriSwordHandleTLUT[] = {
#include "assets/objects/gameplay_keep/kokiri_sword_handle_tlut.rgba16.inc.c"
};

u64 gKokiriSwordHandlePommelTex[] = {
#include "assets/objects/gameplay_keep/kokiri_sword_handle_pommel.rgba16.inc.c"
};

u64 gRazorSwordHandleGripTex[] = {
#include "assets/objects/gameplay_keep/razor_sword_handle_grip.rgba16.inc.c"
};

u64 gKokiriSwordHandleCrossGuardTex[] = {
#include "assets/objects/gameplay_keep/kokiri_sword_handle_cross_gaurd.ci8.inc.c"
};

u64 gKokiriSwordHandleGripTex[] = {
#include "assets/objects/gameplay_keep/kokiri_sword_handle_grip.i8.inc.c"
};

u64 gRazorSwordHandleDesignTex[] = {
#include "assets/objects/gameplay_keep/razor_sword_handle_design.rgba16.inc.c"
};

u64 gSwordMetalTex[] = {
#include "assets/objects/gameplay_keep/sword_metal.i8.inc.c"
};

u8 gameplay_keep_possiblePadding_003048[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Gfx gKokiriSwordDL[] = {
    gsSPDisplayList(gKokiriSwordHandleDL),
    gsSPBranchList(gKokiriSwordBladeDL),
};

Gfx gRazorSwordDL[] = {
    gsSPDisplayList(gRazorSwordHandleDL),
    gsSPBranchList(gRazorSwordBladeDL),
};

Vtx gameplay_keepVtx_003070[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_003070.vtx.inc"
};

Gfx gDekuStickDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuStickTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 247, 164, 109, 255),
    gsSPVertex(gameplay_keepVtx_003070, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(7, 3, 5, 0, 0, 8, 1, 0),
    gsSP2Triangles(5, 4, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 11, 7, 0),
    gsSP2Triangles(12, 0, 2, 0, 12, 11, 0, 0),
    gsSP2Triangles(13, 6, 14, 0, 15, 2, 6, 0),
    gsSP2Triangles(16, 3, 7, 0, 14, 3, 16, 0),
    gsSP2Triangles(17, 4, 6, 0, 2, 1, 17, 0),
    gsSP2Triangles(1, 8, 18, 0, 18, 8, 5, 0),
    gsSP2Triangles(18, 5, 10, 0, 19, 20, 4, 0),
    gsSP2Triangles(19, 4, 17, 0, 17, 21, 19, 0),
    gsSP2Triangles(1, 18, 22, 0, 17, 1, 21, 0),
    gsSP2Triangles(17, 6, 2, 0, 6, 3, 14, 0),
    gsSP2Triangles(15, 12, 2, 0, 7, 11, 16, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&gameplay_keepVtx_003070[23], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 11, 12, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_0033F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gLinkMaskVtx[] = {
#include "assets/objects/gameplay_keep/gLinkMaskVtx.vtx.inc"
};

Vtx gameplay_keepVtx_003DD0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_003DD0.vtx.inc"
};

Gfx gZoraMaskDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZoraMaskTLUT),
    gsDPLoadTextureBlock(gZoraMaskInsideEyeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_003DD0[282], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 3, 5, 6, 0),
    gsSP2Triangles(2, 7, 0, 0, 8, 9, 10, 0),
    gsSP2Triangles(4, 10, 1, 0, 11, 10, 4, 0),
    gsSP2Triangles(8, 12, 9, 0, 10, 11, 8, 0),
    gsSP2Triangles(13, 9, 14, 0, 14, 9, 12, 0),
    gsSP2Triangles(10, 9, 3, 0, 3, 1, 10, 0),
    gsSP2Triangles(9, 5, 3, 0, 14, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 20, 0),
    gsSP2Triangles(21, 22, 3, 0, 3, 20, 21, 0),
    gsSP2Triangles(23, 20, 24, 0, 24, 20, 13, 0),
    gsSP2Triangles(25, 26, 21, 0, 20, 23, 25, 0),
    gsSP2Triangles(27, 21, 26, 0, 22, 21, 27, 0),
    gsSP2Triangles(21, 20, 25, 0, 28, 7, 2, 0),
    gsSP2Triangles(29, 19, 3, 0, 28, 22, 27, 0),
    gsSP2Triangles(3, 22, 2, 0, 2, 22, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gZoraMaskTLUT),
    gsDPLoadTextureBlock(gZoraMaskMouthTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[312], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gZoraMaskTLUT),
    gsDPLoadTextureBlock(gZoraMaskNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[318], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gZoraMaskTLUT),
    gsDPLoadTextureBlock(gZoraMaskSpotsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[322], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 12, 13, 0),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gZoraMaskEyeTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_003DD0[336], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 8, 2, 0, 2, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gDekuMaskDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gDekuMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_003DD0[99], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 5, 2, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 8, 7, 0, 7, 10, 9, 0),
    gsSP2Triangles(7, 11, 10, 0, 7, 1, 11, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTextureBlock(gDekuMaskFaceTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_003DD0[111], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 3, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 0, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(10, 16, 17, 0, 10, 11, 16, 0),
    gsSP2Triangles(16, 18, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 18, 21, 0, 20, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 23, 24, 0),
    gsSP2Triangles(24, 13, 25, 0, 13, 15, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
    gsSPVertex(&gameplay_keepVtx_003DD0[141], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 5, 7, 0),
    gsSP2Triangles(7, 14, 13, 0, 12, 2, 10, 0),
    gsSP2Triangles(10, 15, 11, 0, 14, 16, 13, 0),
    gsSP2Triangles(17, 10, 2, 0, 18, 5, 13, 0),
    gsSP2Triangles(19, 18, 13, 0, 17, 20, 10, 0),
    gsSP2Triangles(10, 20, 15, 0, 21, 15, 22, 0),
    gsSP2Triangles(23, 16, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 15, 21, 0, 26, 16, 23, 0),
    gsSP2Triangles(22, 28, 21, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_003DD0[173], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 3, 5, 0),
    gsSP2Triangles(0, 14, 1, 0, 9, 8, 15, 0),
    gsSP2Triangles(15, 16, 17, 0, 9, 1, 7, 0),
    gsSP2Triangles(1, 14, 7, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 19, 30, 27, 0),
    gsSP2Triangles(23, 19, 27, 0, 19, 18, 30, 0),
    gsSPVertex(&gameplay_keepVtx_003DD0[204], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(15, 19, 20, 0, 16, 21, 13, 0),
    gsSP2Triangles(13, 15, 20, 0, 21, 14, 13, 0),
    gsSP2Triangles(0, 2, 22, 0, 23, 24, 8, 0),
    gsSP2Triangles(25, 17, 16, 0, 10, 12, 26, 0),
    gsSP1Triangle(27, 20, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gDekuMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[232], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(16, 11, 14, 0, 15, 14, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 22, 0),
    gsSP2Triangles(19, 23, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(24, 12, 25, 0, 26, 10, 27, 0),
    gsSP2Triangles(28, 26, 27, 0, 28, 27, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPVertex(&gameplay_keepVtx_003DD0[264], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 12, 14, 0),
    gsSP2Triangles(16, 13, 15, 0, 17, 16, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gGoronMaskDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGoronMaskTLUT),
    gsDPLoadTextureBlock(gGoronMaskMouthTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_003DD0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 8, 9, 10, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 13, 11, 0),
    gsSP2Triangles(8, 14, 9, 0, 15, 16, 8, 0),
    gsSP2Triangles(8, 16, 14, 0, 17, 5, 9, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 15, 20, 0),
    gsSP2Triangles(3, 21, 22, 0, 13, 5, 4, 0),
    gsSP2Triangles(5, 17, 3, 0, 23, 22, 24, 0),
    gsSP2Triangles(2, 1, 25, 0, 2, 7, 0, 0),
    gsSP2Triangles(24, 22, 21, 0, 23, 24, 26, 0),
    gsSP2Triangles(27, 9, 14, 0, 28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_003DD0[31], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(5, 4, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 4, 3, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 14, 13, 0, 22, 23, 24, 0),
    gsSP2Triangles(24, 23, 18, 0, 21, 22, 24, 0),
    gsSP2Triangles(25, 16, 14, 0, 26, 25, 14, 0),
    gsSP2Triangles(27, 21, 24, 0, 8, 7, 28, 0),
    gsSP2Triangles(14, 15, 12, 0, 8, 10, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gGoronMaskTLUT),
    gsDPLoadTextureBlock(gGoronMaskInsideEyeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[60], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 0, 0, 5, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gGoronMaskTLUT),
    gsDPLoadTextureBlock(gGoronMaskNoseEyebrowTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[69], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gGoronMaskTLUT),
    gsDPLoadTextureBlock(gGoronMaskHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_003DD0[78], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 4, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 2, 10, 9, 0),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoronMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_003DD0[90], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 0, 0, 5, 7, 0, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

u64 gLinkMaskTLUT[] = {
#include "assets/objects/gameplay_keep/link_mask_tlut.rgba16.inc.c"
};

u64 gGoronMaskTLUT[] = {
#include "assets/objects/gameplay_keep/goron_mask_tlut.rgba16.inc.c"
};

u64 gZoraMaskTLUT[] = {
#include "assets/objects/gameplay_keep/zora_mask_tlut.rgba16.inc.c"
};

u64 gGoronMaskMouthTex[] = {
#include "assets/objects/gameplay_keep/goron_mask_mouth.ci8.inc.c"
};

u64 gGoronMaskInsideEyeTex[] = {
#include "assets/objects/gameplay_keep/goron_mask_inside_eye.ci8.inc.c"
};

u64 gGoronMaskNoseEyebrowTex[] = {
#include "assets/objects/gameplay_keep/goron_mask_nose_eyebrow.ci8.inc.c"
};

u64 gGoronMaskHairTex[] = {
#include "assets/objects/gameplay_keep/goron_mask_hair.ci8.inc.c"
};

u64 gGoronMaskEyeTex[] = {
#include "assets/objects/gameplay_keep/goron_mask_eye.rgba32.inc.c"
};

u64 gDekuMaskEyeTex[] = {
#include "assets/objects/gameplay_keep/deku_mask_eye.rgba16.inc.c"
};

u64 gDekuMaskFaceTex[] = {
#include "assets/objects/gameplay_keep/deku_mask_face.rgba16.inc.c"
};

u64 gDekuMaskHairTex[] = {
#include "assets/objects/gameplay_keep/deku_mask_hair.rgba16.inc.c"
};

u64 gZoraMaskInsideEyeTex[] = {
#include "assets/objects/gameplay_keep/zora_mask_inside_eye.ci8.inc.c"
};

u64 gZoraMaskMouthTex[] = {
#include "assets/objects/gameplay_keep/zora_mask_mouth.ci8.inc.c"
};

u64 gZoraMaskNoseTex[] = {
#include "assets/objects/gameplay_keep/zora_mask_nose.ci8.inc.c"
};

u64 gZoraMaskSpotsTex[] = {
#include "assets/objects/gameplay_keep/zora_mask_spots.ci8.inc.c"
};

u64 gZoraMaskEyeTex[] = {
#include "assets/objects/gameplay_keep/zora_mask_eye.i8.inc.c"
};

u8 gameplay_keep_possiblePadding_00A938[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_00A940[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_00A940.vtx.inc"
};

Gfx gFierceDeityMaskDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gFierceDeityMaskTLUT),
    gsDPLoadTextureBlock(gFierceDeityMaskHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_00A940, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 3, 5, 0),
    gsSP2Triangles(7, 8, 3, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 15, 18, 16, 0),
    gsSP2Triangles(15, 8, 20, 0, 21, 8, 15, 0),
    gsSP2Triangles(22, 4, 6, 0, 13, 23, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(27, 28, 25, 0, 20, 8, 7, 0),
    gsSP2Triangles(29, 9, 30, 0, 31, 14, 23, 0),
    gsSPVertex(&gameplay_keepVtx_00A940[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(9, 8, 7, 0, 13, 9, 7, 0),
    gsSP2Triangles(14, 3, 15, 0, 4, 16, 17, 0),
    gsSP2Triangles(18, 16, 4, 0, 18, 19, 16, 0),
    gsSP2Triangles(15, 3, 1, 0, 20, 3, 14, 0),
    gsSP2Triangles(11, 21, 9, 0, 22, 23, 15, 0),
    gsSP2Triangles(13, 10, 9, 0, 5, 24, 2, 0),
    gsSP1Triangle(9, 25, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gFierceDeityMaskTLUT),
    gsDPLoadTextureBlock(gFierceDeityMaskEyesTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00A940[58], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(9, 10, 1, 0, 1, 11, 9, 0),
    gsSP2Triangles(1, 4, 11, 0, 4, 12, 11, 0),
    gsSP2Triangles(1, 13, 14, 0, 15, 13, 1, 0),
    gsSP2Triangles(16, 13, 15, 0, 15, 10, 16, 0),
    gsSP2Triangles(1, 10, 15, 0, 17, 1, 14, 0),
    gsSP2Triangles(2, 1, 17, 0, 18, 2, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 21, 22, 19, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 21, 24, 0),
    gsSP2Triangles(19, 25, 20, 0, 20, 26, 21, 0),
    gsSP2Triangles(27, 13, 16, 0, 16, 10, 28, 0),
    gsSP2Triangles(27, 29, 13, 0, 13, 29, 14, 0),
    gsSP2Triangles(14, 29, 30, 0, 30, 17, 14, 0),
    gsSP2Triangles(30, 18, 17, 0, 18, 30, 31, 0),
    gsSP2Triangles(20, 25, 31, 0, 25, 18, 31, 0),
    gsSPVertex(&gameplay_keepVtx_00A940[90], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 11, 10, 0, 12, 13, 11, 0),
    gsSP2Triangles(13, 12, 14, 0, 12, 15, 14, 0),
    gsSP2Triangles(16, 10, 9, 0, 16, 9, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP1Triangle(14, 15, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gFierceDeityMaskTLUT),
    gsDPLoadTextureBlock(gFierceDeityMaskMouthTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00A940[113], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(1, 0, 3, 0, 1, 3, 5, 0),
    gsSP2Triangles(6, 5, 3, 0, 3, 4, 6, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gFierceDeityMaskTLUT),
    gsDPLoadTextureBlock(gFierceDeityMaskEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00A940[121], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 5, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFierceDeityMaskHatTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00A940[131], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(6, 5, 8, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 4, 9, 0, 5, 0, 2, 0),
    gsSP2Triangles(0, 9, 3, 0, 8, 5, 2, 0),
    gsSP2Triangles(10, 7, 8, 0, 11, 10, 8, 0),
    gsSP2Triangles(2, 11, 8, 0, 12, 3, 9, 0),
    gsSP2Triangles(7, 10, 13, 0, 4, 6, 14, 0),
    gsSPEndDisplayList(),
};

u64 gFierceDeityMaskTLUT[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_tlut.rgba16.inc.c"
};

u64 gFierceDeityMaskHairTex[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_hair.ci8.inc.c"
};

u64 gFierceDeityMaskEyesTex[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_eyes.ci8.inc.c"
};

u64 gFierceDeityMaskMouthTex[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_mouth.ci8.inc.c"
};

u64 gFierceDeityMaskEarTex[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_ear.ci8.inc.c"
};

u64 gFierceDeityMaskHatTex[] = {
#include "assets/objects/gameplay_keep/fierce_deity_mask_hat.rgba16.inc.c"
};

u64 gameplay_keep_Tex_00C830[] = {
#include "assets/objects/gameplay_keep/tex_00C830.rgba16.inc.c"
};

u64 gameplay_keep_Tex_00CA30[] = {
#include "assets/objects/gameplay_keep/tex_00CA30.rgba16.inc.c"
};

u64 gDekuStickTex[] = {
#include "assets/objects/gameplay_keep/deku_stick.i8.inc.c"
};

Vec3s gLinkPauseChildJointTable[] = {
    {    -37,   2346,     93 },
    {      0,  11995,      0 },
    { -16385,   -305, -16333 },
    {      0,     51,     12 },
    {   3761,   2263,   -384 },
    {      0,      0,   3786 },
    {   1594,   1384, -18344 },
    {  -2288,  -2428,  -1562 },
    {      0,      0,   3219 },
    {  -2148,     -5, -16840 },
    {  15365,  -1708,  15611 },
    {   1761,   8365,  17711 },
    {      0,      0,  18859 },
    {      0,      0,      0 },
    {  -9392,  -9579,  28686 },
    {      0,      0,  -7093 },
    {  -2748,    685, -14092 },
    {    213,   6553, -32212 },
    {      0,      0,  -1877 },
    {   3267,   3309, -16090 },
    { -18101,  25946,  -2670 },
    {   -104,      0,      0 },
    {      0,      0,      0 },
    {      0,      0,      0 }
};

Vec3s gLinkPauseChildDekuShieldJointTable[] = {
    {    -37,   2346,     93 },
    {      0,      0,      0 },
    { -16385,   -305, -16333 },
    {      0,     51,     12 },
    {   3772,   2035,   -691 },
    {      0,      0,   4065 },
    {   1594,   1384, -18344 },
    {  -2642,  -1922,   1479 },
    {      0,      0,      0 },
    {  -2148,     -5, -16840 },
    {  19142,    330,  15619 },
    {     18,   2734,  17602 },
    {      0,      0,  19902 },
    {      0,      0,      0 },
    { -11942,  -3370, -28056 },
    {      0,      0,  -7093 },
    {  -2634,  -1046, -20439 },
    {  -5943,   8897, -31239 },
    {      0,      0, -18149 },
    {   5367,   4005, -18767 },
    { -16384,  27240,   -730 },
    {   -104,      0,      0 },
    {      0,      0,      0 },
    {      0,      0,      0 }
};

Vec3s gLinkPauseAdultBgsJointTable[] = {
    {    112,   3506,   -156 },
    {      0,   7927,      0 },
    { -18104,    728, -17116 },
    {      0,      0,      0 },
    {   5584,   2893,   -779 },
    {      0,      0,   2813 },
    {   2710,   1166, -16888 },
    {  -2057,  -3191,  -2192 },
    {      0,      0,   4577 },
    {  -2215,  -1317, -18974 },
    {  22897,   -947,  17702 },
    {   1386,   9779,  19889 },
    {      0,      0,  19902 },
    {      0,      0,      0 },
    {  11423,  -1937,  26391 },
    {      0,      0, -15854 },
    { -16991, -26137,  13708 },
    {  -6976,  -2831,  26031 },
    {      0,      0,  -4798 },
    {   4441,    221, -18986 },
    { -19499,  27753,   -227 },
    {      0,      0,      0 },
    {      0,      0,      0 },
    {      0,      0,      0 }
};

Vec3s gLinkPauseAdultJointTable[] = {
    {     37,   3529,      0 },
    {      0,      0,      0 },
    { -18104,    728, -17116 },
    {      0,      0,      0 },
    {   3114,   1725,  -1243 },
    {      0,      0,   2607 },
    {   2184,   1320, -17823 },
    {  -2001,  -2988,  -3620 },
    {      0,      0,   5024 },
    {  -1665,  -1220, -18352 },
    {  23087,   -313,  16384 },
    {   -474,   5888,  18054 },
    {      0,      0,  19902 },
    {      0,      0,      0 },
    {  -2318,  -1154,  30091 },
    {      0,      0,  -5945 },
    {    124,   -489, -19513 },
    {   5893,   3955, -26617 },
    {      0,      0,  -5319 },
    {   5865,   3517, -16725 },
    { -15534,  27097,   2355 },
    {      0,      0,      0 },
    {      0,      0,      0 },
    {      0,      0,      0 }
};

Vec3s gLinkPauseAdultShieldJointTable[] = {
    {     37,   3529,      0 },
    {      0,      0,      0 },
    { -18104,    728, -17116 },
    {      0,      0,      0 },
    {   3114,   1725,  -1243 },
    {      0,      0,   2607 },
    {   2184,   1320, -17823 },
    {  -2001,  -2988,  -3620 },
    {      0,      0,   5024 },
    {  -1665,  -1220, -18352 },
    {  23087,   -313,  16384 },
    {   -474,   5888,  18054 },
    {      0,      0,  19902 },
    {      0,      0,      0 },
    {  -2318,  -1154,  30091 },
    {      0,      0,  -5945 },
    {    124,   -489, -19513 },
    {   5893,   3955, -26617 },
    {      0,      0, -19192 },
    {   5865,   3517, -16725 },
    { -15534,  27097,   2355 },
    {      0,      0,      0 },
    {      0,      0,      0 },
    {      0,      0,      0 }
};

LinkAnimationHeader gPlayerAnim_al_elf_tobidasi = { 
    { 52 }, gPlayerAnim_al_elf_tobidasi_Data
};

LinkAnimationHeader gPlayerAnim_al_fuwafuwa = { 
    { 45 }, gPlayerAnim_al_fuwafuwa_Data
};

LinkAnimationHeader gPlayerAnim_al_fuwafuwa_loop = { 
    { 40 }, gPlayerAnim_al_fuwafuwa_loop_Data
};

LinkAnimationHeader gPlayerAnim_al_fuwafuwa_modori = { 
    { 54 }, gPlayerAnim_al_fuwafuwa_modori_Data
};

LinkAnimationHeader gPlayerAnim_al_gaku = { 
    { 29 }, gPlayerAnim_al_gaku_Data
};

LinkAnimationHeader gPlayerAnim_al_hensin = { 
    { 51 }, gPlayerAnim_al_hensin_Data
};

LinkAnimationHeader gPlayerAnim_al_hensin_loop = { 
    { 48 }, gPlayerAnim_al_hensin_loop_Data
};

LinkAnimationHeader gPlayerAnim_al_no = { 
    { 25 }, gPlayerAnim_al_no_Data
};

LinkAnimationHeader gPlayerAnim_al_unun = { 
    { 29 }, gPlayerAnim_al_unun_Data
};

LinkAnimationHeader gPlayerAnim_al_yareyare = { 
    { 48 }, gPlayerAnim_al_yareyare_Data
};

LinkAnimationHeader gPlayerAnim_al_yes = { 
    { 23 }, gPlayerAnim_al_yes_Data
};

LinkAnimationHeader gPlayerAnim_alink_dance_loop = { 
    { 145 }, gPlayerAnim_alink_dance_loop_Data
};

LinkAnimationHeader gPlayerAnim_alink_ee = { 
    { 30 }, gPlayerAnim_alink_ee_Data
};

LinkAnimationHeader gPlayerAnim_alink_ee_loop = { 
    { 28 }, gPlayerAnim_alink_ee_loop_Data
};

LinkAnimationHeader gPlayerAnim_alink_fukitobu = { 
    { 20 }, gPlayerAnim_alink_fukitobu_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFB8 = { 
    { 40 }, gPlayerAnimData_0435F0
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFC0 = { 
    { 30 }, gPlayerAnimData_0BB1F0
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFC8 = { 
    { 45 }, gPlayerAnimData_2C6350
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFD0 = { 
    { 12 }, gPlayerAnimData_0F31E0
};

LinkAnimationHeader gPlayerAnim_alink_kaitenmiss = { 
    { 28 }, gPlayerAnim_alink_kaitenmiss_Data
};

LinkAnimationHeader gPlayerAnim_alink_kyoro = { 
    { 15 }, gPlayerAnim_alink_kyoro_Data
};

LinkAnimationHeader gPlayerAnim_alink_kyoro_loop = { 
    { 62 }, gPlayerAnim_alink_kyoro_loop_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFF0 = { 
    { 42 }, gPlayerAnimData_189390
};

LinkAnimationHeader gameplay_keep_Linkanim_00CFF8 = { 
    { 18 }, gPlayerAnimData_0E1EA0
};

LinkAnimationHeader gPlayerAnim_alink_ozigi = { 
    { 30 }, gPlayerAnim_alink_ozigi_Data
};

LinkAnimationHeader gPlayerAnim_alink_ozigi_loop = { 
    { 10 }, gPlayerAnim_alink_ozigi_loop_Data
};

LinkAnimationHeader gPlayerAnim_alink_ozigi_modori = { 
    { 11 }, gPlayerAnim_alink_ozigi_modori_Data
};

LinkAnimationHeader gPlayerAnim_alink_powerup = { 
    { 80 }, gPlayerAnim_alink_powerup_Data
};

LinkAnimationHeader gPlayerAnim_alink_powerup_loop = { 
    { 29 }, gPlayerAnim_alink_powerup_loop_Data
};

LinkAnimationHeader gPlayerAnim_alink_rakkatyu = { 
    { 20 }, gPlayerAnim_alink_rakkatyu_Data
};

LinkAnimationHeader gPlayerAnim_alink_somukeru = { 
    { 8 }, gPlayerAnim_alink_somukeru_Data
};

LinkAnimationHeader gPlayerAnim_alink_somukeru_loop = { 
    { 40 }, gPlayerAnim_alink_somukeru_loop_Data
};

LinkAnimationHeader gPlayerAnim_alink_tereru = { 
    { 24 }, gPlayerAnim_alink_tereru_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D048 = { 
    { 15 }, gPlayerAnimData_1746B0
};

LinkAnimationHeader gameplay_keep_Linkanim_00D050 = { 
    { 15 }, gPlayerAnimData_0F3E00
};

LinkAnimationHeader gPlayerAnim_alink_yurayura = { 
    { 40 }, gPlayerAnim_alink_yurayura_Data
};

LinkAnimationHeader gPlayerAnim_bajyo_furikaeru = { 
    { 60 }, gPlayerAnim_bajyo_furikaeru_Data
};

LinkAnimationHeader gPlayerAnim_bajyo_walk = { 
    { 35 }, gPlayerAnim_bajyo_walk_Data
};

LinkAnimationHeader gPlayerAnim_cl_dakisime = { 
    { 40 }, gPlayerAnim_cl_dakisime_Data
};

LinkAnimationHeader gPlayerAnim_cl_dakisime_loop = { 
    { 40 }, gPlayerAnim_cl_dakisime_loop_Data
};

LinkAnimationHeader gPlayerAnim_cl_furafura = { 
    { 136 }, gPlayerAnim_cl_furafura_Data
};

LinkAnimationHeader gPlayerAnim_cl_hoo = { 
    { 20 }, gPlayerAnim_cl_hoo_Data
};

LinkAnimationHeader gPlayerAnim_cl_jibun_miru = { 
    { 43 }, gPlayerAnim_cl_jibun_miru_Data
};

LinkAnimationHeader gPlayerAnim_cl_kubisime = { 
    { 6 }, gPlayerAnim_cl_kubisime_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D0A0 = { 
    { 52 }, gPlayerAnimData_033600
};

LinkAnimationHeader gPlayerAnim_cl_maskoff = { 
    { 10 }, gPlayerAnim_cl_maskoff_Data
};

LinkAnimationHeader gPlayerAnim_cl_msbowait = { 
    { 79 }, gPlayerAnim_cl_msbowait_Data
};

LinkAnimationHeader gPlayerAnim_cl_nigeru = { 
    { 8 }, gPlayerAnim_cl_nigeru_Data
};

LinkAnimationHeader gPlayerAnim_cl_ononoki = { 
    { 60 }, gPlayerAnim_cl_ononoki_Data
};

LinkAnimationHeader gPlayerAnim_cl_setmask = { 
    { 66 }, gPlayerAnim_cl_setmask_Data
};

LinkAnimationHeader gPlayerAnim_cl_setmaskend = { 
    { 3 }, gPlayerAnim_cl_setmaskend_Data
};

LinkAnimationHeader gPlayerAnim_cl_tewofuru = { 
    { 22 }, gPlayerAnim_cl_tewofuru_Data
};

LinkAnimationHeader gPlayerAnim_cl_tobikakaru = { 
    { 52 }, gPlayerAnim_cl_tobikakaru_Data
};

LinkAnimationHeader gPlayerAnim_cl_uma_leftup = { 
    { 38 }, gPlayerAnim_cl_uma_leftup_Data
};

LinkAnimationHeader gPlayerAnim_cl_uma_rightup = { 
    { 38 }, gPlayerAnim_cl_uma_rightup_Data
};

LinkAnimationHeader gPlayerAnim_cl_umamiage = { 
    { 30 }, gPlayerAnim_cl_umamiage_Data
};

LinkAnimationHeader gPlayerAnim_cl_umamiage_loop = { 
    { 44 }, gPlayerAnim_cl_umamiage_loop_Data
};

LinkAnimationHeader gPlayerAnim_cl_umanoru = { 
    { 74 }, gPlayerAnim_cl_umanoru_Data
};

LinkAnimationHeader gPlayerAnim_cl_umanoru_loop = { 
    { 30 }, gPlayerAnim_cl_umanoru_loop_Data
};

LinkAnimationHeader gPlayerAnim_cl_wakare = { 
    { 51 }, gPlayerAnim_cl_wakare_Data
};

LinkAnimationHeader gPlayerAnim_cl_wakare_loop = { 
    { 30 }, gPlayerAnim_cl_wakare_loop_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_Tbox_open = { 
    { 133 }, gPlayerAnim_clink_demo_Tbox_open_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_atozusari = { 
    { 33 }, gPlayerAnim_clink_demo_atozusari_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_bashi = { 
    { 55 }, gPlayerAnim_clink_demo_bashi_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_doorA_link = { 
    { 100 }, gPlayerAnim_clink_demo_doorA_link_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_doorB_link = { 
    { 100 }, gPlayerAnim_clink_demo_doorB_link_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_futtobi = { 
    { 40 }, gPlayerAnim_clink_demo_futtobi_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_get1 = { 
    { 40 }, gPlayerAnim_clink_demo_get1_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_get2 = { 
    { 20 }, gPlayerAnim_clink_demo_get2_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_get3 = { 
    { 20 }, gPlayerAnim_clink_demo_get3_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_goto_future = { 
    { 110 }, gPlayerAnim_clink_demo_goto_future_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_koutai = { 
    { 35 }, gPlayerAnim_clink_demo_koutai_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_koutai_kennuki = { 
    { 25 }, gPlayerAnim_clink_demo_koutai_kennuki_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_koutai_wait = { 
    { 20 }, gPlayerAnim_clink_demo_koutai_wait_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_mimawasi = { 
    { 15 }, gPlayerAnim_clink_demo_mimawasi_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_mimawasi_wait = { 
    { 55 }, gPlayerAnim_clink_demo_mimawasi_wait_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_miokuri = { 
    { 30 }, gPlayerAnim_clink_demo_miokuri_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_miokuri_wait = { 
    { 30 }, gPlayerAnim_clink_demo_miokuri_wait_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_nozoki = { 
    { 30 }, gPlayerAnim_clink_demo_nozoki_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_return_to_future = { 
    { 51 }, gPlayerAnim_clink_demo_return_to_future_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_standup = { 
    { 78 }, gPlayerAnim_clink_demo_standup_Data
};

LinkAnimationHeader gPlayerAnim_clink_demo_standup_wait = { 
    { 30 }, gPlayerAnim_clink_demo_standup_wait_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D1D0 = { 
    { 24 }, gPlayerAnimData_0FFF10
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_endAL = { 
    { 35 }, gPlayerAnim_clink_normal_climb_endAL_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_endAR = { 
    { 36 }, gPlayerAnim_clink_normal_climb_endAR_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_endBL = { 
    { 35 }, gPlayerAnim_clink_normal_climb_endBL_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_endBR = { 
    { 36 }, gPlayerAnim_clink_normal_climb_endBR_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_startA = { 
    { 30 }, gPlayerAnim_clink_normal_climb_startA_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_startB = { 
    { 50 }, gPlayerAnim_clink_normal_climb_startB_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_upL = { 
    { 21 }, gPlayerAnim_clink_normal_climb_upL_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_climb_upR = { 
    { 21 }, gPlayerAnim_clink_normal_climb_upR_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_defense_ALL = { 
    { 5 }, gPlayerAnim_clink_normal_defense_ALL_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_okarina_walkB = { 
    { 21 }, gPlayerAnim_clink_normal_okarina_walkB_Data
};

LinkAnimationHeader gPlayerAnim_clink_normal_okarina_walk = { 
    { 21 }, gPlayerAnim_clink_normal_okarina_walk_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_negaeri = { 
    { 55 }, gPlayerAnim_clink_op3_negaeri_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_okiagari = { 
    { 365 }, gPlayerAnim_clink_op3_okiagari_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_tatiagari = { 
    { 110 }, gPlayerAnim_clink_op3_tatiagari_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_wait1 = { 
    { 80 }, gPlayerAnim_clink_op3_wait1_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_wait2 = { 
    { 30 }, gPlayerAnim_clink_op3_wait2_Data
};

LinkAnimationHeader gPlayerAnim_clink_op3_wait3 = { 
    { 30 }, gPlayerAnim_clink_op3_wait3_Data
};

LinkAnimationHeader gPlayerAnim_d_link_imanodare = { 
    { 20 }, gPlayerAnim_d_link_imanodare_Data
};

LinkAnimationHeader gPlayerAnim_d_link_orooro = { 
    { 60 }, gPlayerAnim_d_link_orooro_Data
};

LinkAnimationHeader gPlayerAnim_d_link_orowait = { 
    { 45 }, gPlayerAnim_d_link_orowait_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D278 = { 
    { 15 }, gPlayerAnimData_07A8B0
};

LinkAnimationHeader gameplay_keep_Linkanim_00D280 = { 
    { 20 }, gPlayerAnimData_17BEB0
};

LinkAnimationHeader gameplay_keep_Linkanim_00D288 = { 
    { 20 }, gPlayerAnimData_0EBC00
};

LinkAnimationHeader gameplay_keep_Linkanim_00D290 = { 
    { 20 }, gPlayerAnimData_07CA50
};

LinkAnimationHeader gPlayerAnim_demo_link_nwait = { 
    { 45 }, gPlayerAnim_demo_link_nwait_Data
};

LinkAnimationHeader gPlayerAnim_demo_link_orosuu = { 
    { 90 }, gPlayerAnim_demo_link_orosuu_Data
};

LinkAnimationHeader gPlayerAnim_demo_link_tewatashi = { 
    { 90 }, gPlayerAnim_demo_link_tewatashi_Data
};

LinkAnimationHeader gPlayerAnim_demo_link_twait = { 
    { 45 }, gPlayerAnim_demo_link_twait_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D2B8 = { 
    { 45 }, gPlayerAnimData_1B3FA0
};

LinkAnimationHeader gameplay_keep_Linkanim_00D2C0 = { 
    { 30 }, gPlayerAnimData_0B19E0
};

LinkAnimationHeader gPlayerAnim_demo_pikupiku = { 
    { 10 }, gPlayerAnim_demo_pikupiku_Data
};

LinkAnimationHeader gPlayerAnim_demo_rakka = { 
    { 3 }, gPlayerAnim_demo_rakka_Data
};

LinkAnimationHeader gPlayerAnim_demo_suwari1 = { 
    { 40 }, gPlayerAnim_demo_suwari1_Data
};

LinkAnimationHeader gPlayerAnim_demo_suwari2 = { 
    { 80 }, gPlayerAnim_demo_suwari2_Data
};

LinkAnimationHeader gPlayerAnim_demo_suwari3 = { 
    { 30 }, gPlayerAnim_demo_suwari3_Data
};

LinkAnimationHeader gPlayerAnim_dl_jibunmiru = { 
    { 48 }, gPlayerAnim_dl_jibunmiru_Data
};

LinkAnimationHeader gPlayerAnim_dl_jibunmiru_wait = { 
    { 20 }, gPlayerAnim_dl_jibunmiru_wait_Data
};

LinkAnimationHeader gPlayerAnim_dl_kokeru = { 
    { 14 }, gPlayerAnim_dl_kokeru_Data
};

LinkAnimationHeader gPlayerAnim_dl_yusaburu = { 
    { 6 }, gPlayerAnim_dl_yusaburu_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00D310 = { 
    { 30 }, gPlayerAnimData_04CD10
};

LinkAnimationHeader gameplay_keep_Linkanim_00D318 = { 
    { 30 }, gPlayerAnimData_297E90
};

LinkAnimationHeader gameplay_keep_Linkanim_00D320 = { 
    { 33 }, gPlayerAnimData_044AE0
};

LinkAnimationHeader gPlayerAnim_kf_awase = { 
    { 10 }, gPlayerAnim_kf_awase_Data
};

LinkAnimationHeader gPlayerAnim_kf_dakiau = { 
    { 35 }, gPlayerAnim_kf_dakiau_Data
};

LinkAnimationHeader gPlayerAnim_kf_dakiau_loop = { 
    { 40 }, gPlayerAnim_kf_dakiau_loop_Data
};

LinkAnimationHeader gPlayerAnim_kf_hanare = { 
    { 35 }, gPlayerAnim_kf_hanare_Data
};

LinkAnimationHeader gPlayerAnim_kf_hanare_loop = { 
    { 40 }, gPlayerAnim_kf_hanare_loop_Data
};

LinkAnimationHeader gPlayerAnim_kf_miseau = { 
    { 40 }, gPlayerAnim_kf_miseau_Data
};

LinkAnimationHeader gPlayerAnim_kf_omen = { 
    { 20 }, gPlayerAnim_kf_omen_Data
};

LinkAnimationHeader gPlayerAnim_kf_omen_loop = { 
    { 30 }, gPlayerAnim_kf_omen_loop_Data
};

LinkAnimationHeader gPlayerAnim_kf_tetunagu_loop = { 
    { 40 }, gPlayerAnim_kf_tetunagu_loop_Data
};

LinkAnimationHeader gPlayerAnim_kolink_odoroki_demo = { 
    { 60 }, gPlayerAnim_kolink_odoroki_demo_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_LLside_kiru_endL = { 
    { 11 }, gPlayerAnim_link_anchor_LLside_kiru_endL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_LLside_kiru_finsh_endR = { 
    { 16 }, gPlayerAnim_link_anchor_LLside_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_LRside_kiru_endR = { 
    { 11 }, gPlayerAnim_link_anchor_LRside_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_LRside_kiru_finsh_endL = { 
    { 18 }, gPlayerAnim_link_anchor_LRside_kiru_finsh_endL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lnormal_kiru_endR = { 
    { 10 }, gPlayerAnim_link_anchor_Lnormal_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lnormal_kiru_finsh_endR = { 
    { 11 }, gPlayerAnim_link_anchor_Lnormal_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lpierce_kiru_endL = { 
    { 9 }, gPlayerAnim_link_anchor_Lpierce_kiru_endL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lpierce_kiru_finsh_endR = { 
    { 13 }, gPlayerAnim_link_anchor_Lpierce_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lrolling_kiru_endR = { 
    { 12 }, gPlayerAnim_link_anchor_Lrolling_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lside_kiru_endR = { 
    { 8 }, gPlayerAnim_link_anchor_Lside_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Lside_kiru_finsh_endR = { 
    { 15 }, gPlayerAnim_link_anchor_Lside_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Rside_kiru_endR = { 
    { 18 }, gPlayerAnim_link_anchor_Rside_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_Rside_kiru_finsh_endR = { 
    { 19 }, gPlayerAnim_link_anchor_Rside_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_anchor2fighter = { 
    { 34 }, gPlayerAnim_link_anchor_anchor2fighter_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_back_brake = { 
    { 18 }, gPlayerAnim_link_anchor_back_brake_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_back_hitR = { 
    { 16 }, gPlayerAnim_link_anchor_back_hitR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_back_walk = { 
    { 16 }, gPlayerAnim_link_anchor_back_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_defense_hit = { 
    { 8 }, gPlayerAnim_link_anchor_defense_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_defense_long_hitL = { 
    { 8 }, gPlayerAnim_link_anchor_defense_long_hitL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_defense_long_hitR = { 
    { 7 }, gPlayerAnim_link_anchor_defense_long_hitR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_front_hitR = { 
    { 16 }, gPlayerAnim_link_anchor_front_hitR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_landingR = { 
    { 21 }, gPlayerAnim_link_anchor_landingR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_normal_kiru_finsh_endR = { 
    { 19 }, gPlayerAnim_link_anchor_normal_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_pierce_kiru_endR = { 
    { 9 }, gPlayerAnim_link_anchor_pierce_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_pierce_kiru_finsh_endR = { 
    { 32 }, gPlayerAnim_link_anchor_pierce_kiru_finsh_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_rolling_kiru_endR = { 
    { 14 }, gPlayerAnim_link_anchor_rolling_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_side_walkL = { 
    { 16 }, gPlayerAnim_link_anchor_side_walkL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_side_walkR = { 
    { 16 }, gPlayerAnim_link_anchor_side_walkR_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitL2defense = { 
    { 3 }, gPlayerAnim_link_anchor_waitL2defense_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitL2defense_long = { 
    { 3 }, gPlayerAnim_link_anchor_waitL2defense_long_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitL = { 
    { 29 }, gPlayerAnim_link_anchor_waitL_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitR2defense = { 
    { 3 }, gPlayerAnim_link_anchor_waitR2defense_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitR2defense_long = { 
    { 3 }, gPlayerAnim_link_anchor_waitR2defense_long_Data
};

LinkAnimationHeader gPlayerAnim_link_anchor_waitR = { 
    { 29 }, gPlayerAnim_link_anchor_waitR_Data
};

LinkAnimationHeader gPlayerAnim_link_boom_throw_waitL = { 
    { 29 }, gPlayerAnim_link_boom_throw_waitL_Data
};

LinkAnimationHeader gPlayerAnim_link_boom_throw_waitR = { 
    { 29 }, gPlayerAnim_link_boom_throw_waitR_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_bug_in = { 
    { 44 }, gPlayerAnim_link_bottle_bug_in_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_bug_miss = { 
    { 13 }, gPlayerAnim_link_bottle_bug_miss_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_bug_out = { 
    { 131 }, gPlayerAnim_link_bottle_bug_out_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_drink_demo_end = { 
    { 50 }, gPlayerAnim_link_bottle_drink_demo_end_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_drink_demo_start = { 
    { 47 }, gPlayerAnim_link_bottle_drink_demo_start_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_drink_demo_wait = { 
    { 9 }, gPlayerAnim_link_bottle_drink_demo_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_fish_in = { 
    { 44 }, gPlayerAnim_link_bottle_fish_in_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_fish_miss = { 
    { 21 }, gPlayerAnim_link_bottle_fish_miss_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_fish_out = { 
    { 120 }, gPlayerAnim_link_bottle_fish_out_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_read = { 
    { 100 }, gPlayerAnim_link_bottle_read_Data
};

LinkAnimationHeader gPlayerAnim_link_bottle_read_end = { 
    { 20 }, gPlayerAnim_link_bottle_read_end_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_bow_ready = { 
    { 9 }, gPlayerAnim_link_bow_bow_ready_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_bow_shoot_end = { 
    { 16 }, gPlayerAnim_link_bow_bow_shoot_end_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_bow_shoot_next = { 
    { 8 }, gPlayerAnim_link_bow_bow_shoot_next_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_bow_wait = { 
    { 66 }, gPlayerAnim_link_bow_bow_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_defense = { 
    { 5 }, gPlayerAnim_link_bow_defense_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_defense_wait = { 
    { 31 }, gPlayerAnim_link_bow_defense_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_side_walk = { 
    { 24 }, gPlayerAnim_link_bow_side_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_bow_walk2ready = { 
    { 9 }, gPlayerAnim_link_bow_walk2ready_Data
};

LinkAnimationHeader gPlayerAnim_link_child_tunnel_end = { 
    { 71 }, gPlayerAnim_link_child_tunnel_end_Data
};

LinkAnimationHeader gPlayerAnim_link_child_tunnel_start = { 
    { 80 }, gPlayerAnim_link_child_tunnel_start_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_Tbox_open = { 
    { 133 }, gPlayerAnim_link_demo_Tbox_open_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_back_to_past = { 
    { 90 }, gPlayerAnim_link_demo_back_to_past_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_baru_op1 = { 
    { 35 }, gPlayerAnim_link_demo_baru_op1_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_baru_op2 = { 
    { 40 }, gPlayerAnim_link_demo_baru_op2_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_baru_op3 = { 
    { 25 }, gPlayerAnim_link_demo_baru_op3_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_bikkuri = { 
    { 20 }, gPlayerAnim_link_demo_bikkuri_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_doorA_link = { 
    { 100 }, gPlayerAnim_link_demo_doorA_link_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_doorA_link_free = { 
    { 100 }, gPlayerAnim_link_demo_doorA_link_free_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_doorB_link = { 
    { 100 }, gPlayerAnim_link_demo_doorB_link_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_doorB_link_free = { 
    { 100 }, gPlayerAnim_link_demo_doorB_link_free_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_furimuki2 = { 
    { 45 }, gPlayerAnim_link_demo_furimuki2_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_furimuki2_wait = { 
    { 30 }, gPlayerAnim_link_demo_furimuki2_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_furimuki = { 
    { 80 }, gPlayerAnim_link_demo_furimuki_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_get_itemA = { 
    { 22 }, gPlayerAnim_link_demo_get_itemA_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_get_itemB = { 
    { 22 }, gPlayerAnim_link_demo_get_itemB_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_goma_furimuki = { 
    { 46 }, gPlayerAnim_link_demo_goma_furimuki_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_gurad = { 
    { 20 }, gPlayerAnim_link_demo_gurad_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_gurad_wait = { 
    { 10 }, gPlayerAnim_link_demo_gurad_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_jibunmiru = { 
    { 100 }, gPlayerAnim_link_demo_jibunmiru_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kakeyori = { 
    { 20 }, gPlayerAnim_link_demo_kakeyori_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kakeyori_mimawasi = { 
    { 85 }, gPlayerAnim_link_demo_kakeyori_mimawasi_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kakeyori_miokuri = { 
    { 25 }, gPlayerAnim_link_demo_kakeyori_miokuri_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kakeyori_miokuri_wait = { 
    { 20 }, gPlayerAnim_link_demo_kakeyori_miokuri_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kakeyori_wait = { 
    { 20 }, gPlayerAnim_link_demo_kakeyori_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kaoage = { 
    { 15 }, gPlayerAnim_link_demo_kaoage_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kaoage_wait = { 
    { 20 }, gPlayerAnim_link_demo_kaoage_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kenmiru1 = { 
    { 10 }, gPlayerAnim_link_demo_kenmiru1_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kenmiru1_wait = { 
    { 20 }, gPlayerAnim_link_demo_kenmiru1_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kenmiru2 = { 
    { 35 }, gPlayerAnim_link_demo_kenmiru2_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kenmiru2_modori = { 
    { 15 }, gPlayerAnim_link_demo_kenmiru2_modori_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kenmiru2_wait = { 
    { 20 }, gPlayerAnim_link_demo_kenmiru2_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_kousan = { 
    { 28 }, gPlayerAnim_link_demo_kousan_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_look_hand = { 
    { 35 }, gPlayerAnim_link_demo_look_hand_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_look_hand_wait = { 
    { 20 }, gPlayerAnim_link_demo_look_hand_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_nozokikomi = { 
    { 70 }, gPlayerAnim_link_demo_nozokikomi_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_nozokikomi_wait = { 
    { 35 }, gPlayerAnim_link_demo_nozokikomi_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_return_to_past = { 
    { 80 }, gPlayerAnim_link_demo_return_to_past_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_sita_wait = { 
    { 30 }, gPlayerAnim_link_demo_sita_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_ue = { 
    { 10 }, gPlayerAnim_link_demo_ue_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_ue_wait = { 
    { 30 }, gPlayerAnim_link_demo_ue_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_warp = { 
    { 70 }, gPlayerAnim_link_demo_warp_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_zeldamiru = { 
    { 15 }, gPlayerAnim_link_demo_zeldamiru_Data
};

LinkAnimationHeader gPlayerAnim_link_demo_zeldamiru_wait = { 
    { 25 }, gPlayerAnim_link_demo_zeldamiru_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_derth_rebirth = { 
    { 230 }, gPlayerAnim_link_derth_rebirth_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LLside_kiru = { 
    { 6 }, gPlayerAnim_link_fighter_LLside_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LLside_kiru_end = { 
    { 13 }, gPlayerAnim_link_fighter_LLside_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LLside_kiru_finsh = { 
    { 9 }, gPlayerAnim_link_fighter_LLside_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LLside_kiru_finsh_end = { 
    { 16 }, gPlayerAnim_link_fighter_LLside_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LRside_kiru = { 
    { 6 }, gPlayerAnim_link_fighter_LRside_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LRside_kiru_end = { 
    { 11 }, gPlayerAnim_link_fighter_LRside_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LRside_kiru_finsh = { 
    { 6 }, gPlayerAnim_link_fighter_LRside_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_LRside_kiru_finsh_end = { 
    { 17 }, gPlayerAnim_link_fighter_LRside_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lnormal_kiru = { 
    { 5 }, gPlayerAnim_link_fighter_Lnormal_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lnormal_kiru_end = { 
    { 9 }, gPlayerAnim_link_fighter_Lnormal_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lnormal_kiru_finsh = { 
    { 8 }, gPlayerAnim_link_fighter_Lnormal_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lnormal_kiru_finsh_end = { 
    { 11 }, gPlayerAnim_link_fighter_Lnormal_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpierce_kiru = { 
    { 3 }, gPlayerAnim_link_fighter_Lpierce_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpierce_kiru_end = { 
    { 10 }, gPlayerAnim_link_fighter_Lpierce_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpierce_kiru_finsh = { 
    { 9 }, gPlayerAnim_link_fighter_Lpierce_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpierce_kiru_finsh_end = { 
    { 13 }, gPlayerAnim_link_fighter_Lpierce_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_jump_kiru = { 
    { 10 }, gPlayerAnim_link_fighter_Lpower_jump_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_jump_kiru_end = { 
    { 19 }, gPlayerAnim_link_fighter_Lpower_jump_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_jump_kiru_hit = { 
    { 9 }, gPlayerAnim_link_fighter_Lpower_jump_kiru_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_kiru_side_walk = { 
    { 21 }, gPlayerAnim_link_fighter_Lpower_kiru_side_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_kiru_start = { 
    { 16 }, gPlayerAnim_link_fighter_Lpower_kiru_start_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_kiru_wait = { 
    { 35 }, gPlayerAnim_link_fighter_Lpower_kiru_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_kiru_wait_end = { 
    { 15 }, gPlayerAnim_link_fighter_Lpower_kiru_wait_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lpower_kiru_walk = { 
    { 21 }, gPlayerAnim_link_fighter_Lpower_kiru_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lrolling_kiru = { 
    { 16 }, gPlayerAnim_link_fighter_Lrolling_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lrolling_kiru_end = { 
    { 12 }, gPlayerAnim_link_fighter_Lrolling_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_jump = { 
    { 7 }, gPlayerAnim_link_fighter_Lside_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_jump_endL = { 
    { 8 }, gPlayerAnim_link_fighter_Lside_jump_endL_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_jump_end = { 
    { 8 }, gPlayerAnim_link_fighter_Lside_jump_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_kiru = { 
    { 5 }, gPlayerAnim_link_fighter_Lside_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_kiru_end = { 
    { 9 }, gPlayerAnim_link_fighter_Lside_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_kiru_finsh = { 
    { 9 }, gPlayerAnim_link_fighter_Lside_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Lside_kiru_finsh_end = { 
    { 15 }, gPlayerAnim_link_fighter_Lside_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_jump = { 
    { 7 }, gPlayerAnim_link_fighter_Rside_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_jump_endR = { 
    { 8 }, gPlayerAnim_link_fighter_Rside_jump_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_jump_end = { 
    { 8 }, gPlayerAnim_link_fighter_Rside_jump_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_kiru = { 
    { 5 }, gPlayerAnim_link_fighter_Rside_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_kiru_end = { 
    { 12 }, gPlayerAnim_link_fighter_Rside_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_kiru_finsh = { 
    { 7 }, gPlayerAnim_link_fighter_Rside_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Rside_kiru_finsh_end = { 
    { 18 }, gPlayerAnim_link_fighter_Rside_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Wrolling_kiru = { 
    { 17 }, gPlayerAnim_link_fighter_Wrolling_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_Wrolling_kiru_end = { 
    { 12 }, gPlayerAnim_link_fighter_Wrolling_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_backturn_jump = { 
    { 15 }, gPlayerAnim_link_fighter_backturn_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_backturn_jump_endR = { 
    { 12 }, gPlayerAnim_link_fighter_backturn_jump_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_backturn_jump_end = { 
    { 7 }, gPlayerAnim_link_fighter_backturn_jump_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_damage_run = { 
    { 20 }, gPlayerAnim_link_fighter_damage_run_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_damage_run_long = { 
    { 20 }, gPlayerAnim_link_fighter_damage_run_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_defense_long_hit = { 
    { 9 }, gPlayerAnim_link_fighter_defense_long_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_fighter2long = { 
    { 20 }, gPlayerAnim_link_fighter_fighter2long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_front_jump = { 
    { 10 }, gPlayerAnim_link_fighter_front_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_front_jump_endR = { 
    { 21 }, gPlayerAnim_link_fighter_front_jump_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_front_jump_end = { 
    { 21 }, gPlayerAnim_link_fighter_front_jump_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_jump_kiru_finsh = { 
    { 10 }, gPlayerAnim_link_fighter_jump_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_jump_kiru_finsh_end = { 
    { 12 }, gPlayerAnim_link_fighter_jump_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_jump_rollkiru = { 
    { 11 }, gPlayerAnim_link_fighter_jump_rollkiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_landing_roll_long = { 
    { 32 }, gPlayerAnim_link_fighter_landing_roll_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal2fighter = { 
    { 20 }, gPlayerAnim_link_fighter_normal2fighter_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal_kiru = { 
    { 5 }, gPlayerAnim_link_fighter_normal_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal_kiru_endR = { 
    { 9 }, gPlayerAnim_link_fighter_normal_kiru_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal_kiru_end = { 
    { 8 }, gPlayerAnim_link_fighter_normal_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal_kiru_finsh = { 
    { 6 }, gPlayerAnim_link_fighter_normal_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_normal_kiru_finsh_end = { 
    { 19 }, gPlayerAnim_link_fighter_normal_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_pierce_kiru = { 
    { 4 }, gPlayerAnim_link_fighter_pierce_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_pierce_kiru_end = { 
    { 9 }, gPlayerAnim_link_fighter_pierce_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_pierce_kiru_finsh = { 
    { 10 }, gPlayerAnim_link_fighter_pierce_kiru_finsh_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_pierce_kiru_finsh_end = { 
    { 19 }, gPlayerAnim_link_fighter_pierce_kiru_finsh_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_jump_kiru_end = { 
    { 20 }, gPlayerAnim_link_fighter_power_jump_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_side_walk = { 
    { 21 }, gPlayerAnim_link_fighter_power_kiru_side_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_startL = { 
    { 11 }, gPlayerAnim_link_fighter_power_kiru_startL_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_start = { 
    { 11 }, gPlayerAnim_link_fighter_power_kiru_start_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_wait = { 
    { 34 }, gPlayerAnim_link_fighter_power_kiru_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_wait_end = { 
    { 15 }, gPlayerAnim_link_fighter_power_kiru_wait_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_power_kiru_walk = { 
    { 21 }, gPlayerAnim_link_fighter_power_kiru_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_reboundR = { 
    { 11 }, gPlayerAnim_link_fighter_reboundR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_rebound = { 
    { 11 }, gPlayerAnim_link_fighter_rebound_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_rebound_longR = { 
    { 13 }, gPlayerAnim_link_fighter_rebound_longR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_rebound_long = { 
    { 13 }, gPlayerAnim_link_fighter_rebound_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_rolling_kiru = { 
    { 13 }, gPlayerAnim_link_fighter_rolling_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_rolling_kiru_end = { 
    { 16 }, gPlayerAnim_link_fighter_rolling_kiru_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_run = { 
    { 20 }, gPlayerAnim_link_fighter_run_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_run_long = { 
    { 20 }, gPlayerAnim_link_fighter_run_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_side_walkL_long = { 
    { 16 }, gPlayerAnim_link_fighter_side_walkL_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_side_walkR_long = { 
    { 16 }, gPlayerAnim_link_fighter_side_walkR_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_side_walk_long = { 
    { 29 }, gPlayerAnim_link_fighter_side_walk_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_turn_kiruL = { 
    { 5 }, gPlayerAnim_link_fighter_turn_kiruL_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_turn_kiruL_end = { 
    { 16 }, gPlayerAnim_link_fighter_turn_kiruL_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_turn_kiruR = { 
    { 6 }, gPlayerAnim_link_fighter_turn_kiruR_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_turn_kiruR_end = { 
    { 16 }, gPlayerAnim_link_fighter_turn_kiruR_end_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_wait2waitR_long = { 
    { 6 }, gPlayerAnim_link_fighter_wait2waitR_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_waitL2wait_long = { 
    { 13 }, gPlayerAnim_link_fighter_waitL2wait_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_waitL_long = { 
    { 29 }, gPlayerAnim_link_fighter_waitL_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_waitR2wait_long = { 
    { 13 }, gPlayerAnim_link_fighter_waitR2wait_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_waitR_long = { 
    { 29 }, gPlayerAnim_link_fighter_waitR_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_wait_long = { 
    { 89 }, gPlayerAnim_link_fighter_wait_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_walk_endL_long = { 
    { 11 }, gPlayerAnim_link_fighter_walk_endL_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_walk_endR_long = { 
    { 11 }, gPlayerAnim_link_fighter_walk_endR_long_Data
};

LinkAnimationHeader gPlayerAnim_link_fighter_walk_long = { 
    { 29 }, gPlayerAnim_link_fighter_walk_long_Data
};

LinkAnimationHeader gPlayerAnim_link_hammer_long2free = { 
    { 20 }, gPlayerAnim_link_hammer_long2free_Data
};

LinkAnimationHeader gPlayerAnim_link_hammer_long2long = { 
    { 20 }, gPlayerAnim_link_hammer_long2long_Data
};

LinkAnimationHeader gPlayerAnim_link_hammer_normal2long = { 
    { 20 }, gPlayerAnim_link_hammer_normal2long_Data
};

LinkAnimationHeader gPlayerAnim_link_hatto_demo = { 
    { 72 }, gPlayerAnim_link_hatto_demo_Data
};

LinkAnimationHeader gPlayerAnim_link_hook_fly_start = { 
    { 9 }, gPlayerAnim_link_hook_fly_start_Data
};

LinkAnimationHeader gPlayerAnim_link_hook_fly_wait = { 
    { 21 }, gPlayerAnim_link_hook_fly_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_hook_shot_ready = { 
    { 9 }, gPlayerAnim_link_hook_shot_ready_Data
};

LinkAnimationHeader gPlayerAnim_link_hook_wait = { 
    { 69 }, gPlayerAnim_link_hook_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_hook_walk2ready = { 
    { 9 }, gPlayerAnim_link_hook_walk2ready_Data
};

LinkAnimationHeader gPlayerAnim_link_kei_wait = { 
    { 30 }, gPlayerAnim_link_kei_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_keirei = { 
    { 40 }, gPlayerAnim_link_keirei_Data
};

LinkAnimationHeader gPlayerAnim_link_last_hit_motion1 = { 
    { 82 }, gPlayerAnim_link_last_hit_motion1_Data
};

LinkAnimationHeader gPlayerAnim_link_last_hit_motion2 = { 
    { 28 }, gPlayerAnim_link_last_hit_motion2_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_honoo1 = { 
    { 60 }, gPlayerAnim_link_magic_honoo1_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_honoo2 = { 
    { 25 }, gPlayerAnim_link_magic_honoo2_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_honoo3 = { 
    { 60 }, gPlayerAnim_link_magic_honoo3_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_kaze1 = { 
    { 56 }, gPlayerAnim_link_magic_kaze1_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_kaze2 = { 
    { 9 }, gPlayerAnim_link_magic_kaze2_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_kaze3 = { 
    { 32 }, gPlayerAnim_link_magic_kaze3_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_tamashii1 = { 
    { 52 }, gPlayerAnim_link_magic_tamashii1_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_tamashii2 = { 
    { 29 }, gPlayerAnim_link_magic_tamashii2_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_tamashii3 = { 
    { 49 }, gPlayerAnim_link_magic_tamashii3_Data
};

LinkAnimationHeader gPlayerAnim_link_magic_tame = { 
    { 43 }, gPlayerAnim_link_magic_tame_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_100step_up = { 
    { 28 }, gPlayerAnim_link_normal_100step_up_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_150step_up = { 
    { 45 }, gPlayerAnim_link_normal_150step_up_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_250jump_start = { 
    { 10 }, gPlayerAnim_link_normal_250jump_start_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_45_turn = { 
    { 10 }, gPlayerAnim_link_normal_45_turn_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_45_turn_free = { 
    { 10 }, gPlayerAnim_link_normal_45_turn_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_hold2upL = { 
    { 30 }, gPlayerAnim_link_normal_Fclimb_hold2upL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_sideL = { 
    { 21 }, gPlayerAnim_link_normal_Fclimb_sideL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_sideR = { 
    { 21 }, gPlayerAnim_link_normal_Fclimb_sideR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_startA = { 
    { 30 }, gPlayerAnim_link_normal_Fclimb_startA_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_startB = { 
    { 15 }, gPlayerAnim_link_normal_Fclimb_startB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_upL = { 
    { 21 }, gPlayerAnim_link_normal_Fclimb_upL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_Fclimb_upR = { 
    { 21 }, gPlayerAnim_link_normal_Fclimb_upR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_brake = { 
    { 12 }, gPlayerAnim_link_normal_back_brake_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_brake_end = { 
    { 12 }, gPlayerAnim_link_normal_back_brake_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_downA = { 
    { 6 }, gPlayerAnim_link_normal_back_downA_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_downB = { 
    { 14 }, gPlayerAnim_link_normal_back_downB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_down_wake = { 
    { 36 }, gPlayerAnim_link_normal_back_down_wake_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_hit = { 
    { 16 }, gPlayerAnim_link_normal_back_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_run = { 
    { 16 }, gPlayerAnim_link_normal_back_run_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_shitR = { 
    { 8 }, gPlayerAnim_link_normal_back_shitR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_shit = { 
    { 8 }, gPlayerAnim_link_normal_back_shit_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_back_walk = { 
    { 29 }, gPlayerAnim_link_normal_back_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_backspace = { 
    { 13 }, gPlayerAnim_link_normal_backspace_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_box_kick = { 
    { 50 }, gPlayerAnim_link_normal_box_kick_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_carryB = { 
    { 36 }, gPlayerAnim_link_normal_carryB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_carryB_free = { 
    { 17 }, gPlayerAnim_link_normal_carryB_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_carryB_wait = { 
    { 55 }, gPlayerAnim_link_normal_carryB_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check = { 
    { 20 }, gPlayerAnim_link_normal_check_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check_end = { 
    { 10 }, gPlayerAnim_link_normal_check_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check_end_free = { 
    { 10 }, gPlayerAnim_link_normal_check_end_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check_free = { 
    { 20 }, gPlayerAnim_link_normal_check_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check_wait = { 
    { 54 }, gPlayerAnim_link_normal_check_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_check_wait_free = { 
    { 54 }, gPlayerAnim_link_normal_check_wait_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_down = { 
    { 29 }, gPlayerAnim_link_normal_climb_down_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_endAL = { 
    { 27 }, gPlayerAnim_link_normal_climb_endAL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_endAR = { 
    { 28 }, gPlayerAnim_link_normal_climb_endAR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_endBL = { 
    { 56 }, gPlayerAnim_link_normal_climb_endBL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_endBR = { 
    { 56 }, gPlayerAnim_link_normal_climb_endBR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_startA = { 
    { 30 }, gPlayerAnim_link_normal_climb_startA_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_startB = { 
    { 56 }, gPlayerAnim_link_normal_climb_startB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_upL = { 
    { 21 }, gPlayerAnim_link_normal_climb_upL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_upR = { 
    { 21 }, gPlayerAnim_link_normal_climb_upR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_climb_up = { 
    { 29 }, gPlayerAnim_link_normal_climb_up_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_damage_run_free = { 
    { 20 }, gPlayerAnim_link_normal_damage_run_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense = { 
    { 2 }, gPlayerAnim_link_normal_defense_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_end = { 
    { 5 }, gPlayerAnim_link_normal_defense_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_end_free = { 
    { 5 }, gPlayerAnim_link_normal_defense_end_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_free = { 
    { 5 }, gPlayerAnim_link_normal_defense_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_hit = { 
    { 9 }, gPlayerAnim_link_normal_defense_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_kiru = { 
    { 5 }, gPlayerAnim_link_normal_defense_kiru_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_wait = { 
    { 20 }, gPlayerAnim_link_normal_defense_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_defense_wait_free = { 
    { 20 }, gPlayerAnim_link_normal_defense_wait_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_down_slope_slip = { 
    { 10 }, gPlayerAnim_link_normal_down_slope_slip_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_down_slope_slip_end = { 
    { 19 }, gPlayerAnim_link_normal_down_slope_slip_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_down_slope_slip_end_free = { 
    { 19 }, gPlayerAnim_link_normal_down_slope_slip_end_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_down_slope_slip_end_long = { 
    { 19 }, gPlayerAnim_link_normal_down_slope_slip_end_long_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_electric_shock = { 
    { 26 }, gPlayerAnim_link_normal_electric_shock_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_electric_shock_end = { 
    { 113 }, gPlayerAnim_link_normal_electric_shock_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_fall = { 
    { 37 }, gPlayerAnim_link_normal_fall_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_fall_up = { 
    { 86 }, gPlayerAnim_link_normal_fall_up_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_fall_up_free = { 
    { 61 }, gPlayerAnim_link_normal_fall_up_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_fall_wait = { 
    { 61 }, gPlayerAnim_link_normal_fall_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_fighter2free = { 
    { 20 }, gPlayerAnim_link_normal_fighter2free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_free2bom = { 
    { 20 }, gPlayerAnim_link_normal_free2bom_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_free2fighter_free = { 
    { 20 }, gPlayerAnim_link_normal_free2fighter_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_free2freeB = { 
    { 20 }, gPlayerAnim_link_normal_free2freeB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_free2free = { 
    { 20 }, gPlayerAnim_link_normal_free2free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_downA = { 
    { 5 }, gPlayerAnim_link_normal_front_downA_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_downB = { 
    { 12 }, gPlayerAnim_link_normal_front_downB_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_down_wake = { 
    { 39 }, gPlayerAnim_link_normal_front_down_wake_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_hit = { 
    { 16 }, gPlayerAnim_link_normal_front_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_shitR = { 
    { 8 }, gPlayerAnim_link_normal_front_shitR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_front_shit = { 
    { 8 }, gPlayerAnim_link_normal_front_shit_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_give_other = { 
    { 47 }, gPlayerAnim_link_normal_give_other_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_hang_up_down = { 
    { 11 }, gPlayerAnim_link_normal_hang_up_down_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_hip_down = { 
    { 28 }, gPlayerAnim_link_normal_hip_down_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_hip_down_free = { 
    { 28 }, gPlayerAnim_link_normal_hip_down_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_hip_down_long = { 
    { 28 }, gPlayerAnim_link_normal_hip_down_long_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_ice_down = { 
    { 16 }, gPlayerAnim_link_normal_ice_down_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump = { 
    { 9 }, gPlayerAnim_link_normal_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_hold = { 
    { 18 }, gPlayerAnim_link_normal_jump_climb_hold_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_hold_free = { 
    { 18 }, gPlayerAnim_link_normal_jump_climb_hold_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_up = { 
    { 38 }, gPlayerAnim_link_normal_jump_climb_up_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_up_free = { 
    { 38 }, gPlayerAnim_link_normal_jump_climb_up_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_wait = { 
    { 73 }, gPlayerAnim_link_normal_jump_climb_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_jump_climb_wait_free = { 
    { 72 }, gPlayerAnim_link_normal_jump_climb_wait_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_landing = { 
    { 21 }, gPlayerAnim_link_normal_landing_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_landing_free = { 
    { 21 }, gPlayerAnim_link_normal_landing_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_landing_roll = { 
    { 32 }, gPlayerAnim_link_normal_landing_roll_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_landing_roll_free = { 
    { 32 }, gPlayerAnim_link_normal_landing_roll_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_landing_wait = { 
    { 20 }, gPlayerAnim_link_normal_landing_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_light_bom = { 
    { 12 }, gPlayerAnim_link_normal_light_bom_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_light_bom_end = { 
    { 19 }, gPlayerAnim_link_normal_light_bom_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_long2bom = { 
    { 20 }, gPlayerAnim_link_normal_long2bom_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_newroll_jump_20f = { 
    { 13 }, gPlayerAnim_link_normal_newroll_jump_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_newroll_jump_end_20f = { 
    { 13 }, gPlayerAnim_link_normal_newroll_jump_end_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_newside_jump_20f = { 
    { 14 }, gPlayerAnim_link_normal_newside_jump_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_newside_jump_end_20f = { 
    { 16 }, gPlayerAnim_link_normal_newside_jump_end_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_nocarry_free = { 
    { 9 }, gPlayerAnim_link_normal_nocarry_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_nocarry_free_end = { 
    { 7 }, gPlayerAnim_link_normal_nocarry_free_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_nocarry_free_wait = { 
    { 5 }, gPlayerAnim_link_normal_nocarry_free_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_normal2bom = { 
    { 20 }, gPlayerAnim_link_normal_normal2bom_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_normal2fighter = { 
    { 20 }, gPlayerAnim_link_normal_normal2fighter_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_normal2fighter_free = { 
    { 20 }, gPlayerAnim_link_normal_normal2fighter_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_normal2free = { 
    { 20 }, gPlayerAnim_link_normal_normal2free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_okarina_end = { 
    { 12 }, gPlayerAnim_link_normal_okarina_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_okarina_start = { 
    { 12 }, gPlayerAnim_link_normal_okarina_start_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_okarina_swing = { 
    { 68 }, gPlayerAnim_link_normal_okarina_swing_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pull_end = { 
    { 16 }, gPlayerAnim_link_normal_pull_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pull_end_free = { 
    { 16 }, gPlayerAnim_link_normal_pull_end_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pull_start = { 
    { 16 }, gPlayerAnim_link_normal_pull_start_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pull_start_free = { 
    { 16 }, gPlayerAnim_link_normal_pull_start_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pulling = { 
    { 31 }, gPlayerAnim_link_normal_pulling_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pulling_free = { 
    { 31 }, gPlayerAnim_link_normal_pulling_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_push_end = { 
    { 16 }, gPlayerAnim_link_normal_push_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_push_start = { 
    { 16 }, gPlayerAnim_link_normal_push_start_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_push_wait = { 
    { 10 }, gPlayerAnim_link_normal_push_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_push_wait_end = { 
    { 11 }, gPlayerAnim_link_normal_push_wait_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_pushing = { 
    { 31 }, gPlayerAnim_link_normal_pushing_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_put = { 
    { 21 }, gPlayerAnim_link_normal_put_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_put_free = { 
    { 15 }, gPlayerAnim_link_normal_put_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_re_dead_attack = { 
    { 9 }, gPlayerAnim_link_normal_re_dead_attack_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_re_dead_attack_wait = { 
    { 11 }, gPlayerAnim_link_normal_re_dead_attack_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run = { 
    { 20 }, gPlayerAnim_link_normal_run_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run_free = { 
    { 20 }, gPlayerAnim_link_normal_run_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run_jump = { 
    { 13 }, gPlayerAnim_link_normal_run_jump_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run_jump_end = { 
    { 19 }, gPlayerAnim_link_normal_run_jump_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run_jump_water_fall = { 
    { 31 }, gPlayerAnim_link_normal_run_jump_water_fall_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_run_jump_water_fall_wait = { 
    { 13 }, gPlayerAnim_link_normal_run_jump_water_fall_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_short_landing = { 
    { 16 }, gPlayerAnim_link_normal_short_landing_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_short_landing_free = { 
    { 16 }, gPlayerAnim_link_normal_short_landing_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_side_walkL_free = { 
    { 16 }, gPlayerAnim_link_normal_side_walkL_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_side_walkR_free = { 
    { 16 }, gPlayerAnim_link_normal_side_walkR_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_side_walk = { 
    { 29 }, gPlayerAnim_link_normal_side_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_side_walk_free = { 
    { 29 }, gPlayerAnim_link_normal_side_walk_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_take_out = { 
    { 38 }, gPlayerAnim_link_normal_take_out_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_talk_free = { 
    { 7 }, gPlayerAnim_link_normal_talk_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_talk_free_wait = { 
    { 34 }, gPlayerAnim_link_normal_talk_free_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_throw = { 
    { 21 }, gPlayerAnim_link_normal_throw_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_throw_free = { 
    { 21 }, gPlayerAnim_link_normal_throw_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_up_slope_slip = { 
    { 10 }, gPlayerAnim_link_normal_up_slope_slip_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_up_slope_slip_end = { 
    { 19 }, gPlayerAnim_link_normal_up_slope_slip_end_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_up_slope_slip_end_free = { 
    { 19 }, gPlayerAnim_link_normal_up_slope_slip_end_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_up_slope_slip_end_long = { 
    { 19 }, gPlayerAnim_link_normal_up_slope_slip_end_long_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait2waitR = { 
    { 6 }, gPlayerAnim_link_normal_wait2waitR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitF_typeA_20f = { 
    { 184 }, gPlayerAnim_link_normal_waitF_typeA_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitF_typeB_20f = { 
    { 187 }, gPlayerAnim_link_normal_waitF_typeB_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitF_typeC_20f = { 
    { 200 }, gPlayerAnim_link_normal_waitF_typeC_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitL2wait = { 
    { 13 }, gPlayerAnim_link_normal_waitL2wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitL_free = { 
    { 29 }, gPlayerAnim_link_normal_waitL_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitR2wait = { 
    { 13 }, gPlayerAnim_link_normal_waitR2wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_waitR_free = { 
    { 29 }, gPlayerAnim_link_normal_waitR_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait = { 
    { 89 }, gPlayerAnim_link_normal_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait_free = { 
    { 89 }, gPlayerAnim_link_normal_wait_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait_typeA_20f = { 
    { 184 }, gPlayerAnim_link_normal_wait_typeA_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait_typeB_20f = { 
    { 187 }, gPlayerAnim_link_normal_wait_typeB_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_wait_typeC_20f = { 
    { 200 }, gPlayerAnim_link_normal_wait_typeC_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk = { 
    { 29 }, gPlayerAnim_link_normal_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk_endL = { 
    { 11 }, gPlayerAnim_link_normal_walk_endL_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk_endL_free = { 
    { 11 }, gPlayerAnim_link_normal_walk_endL_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk_endR = { 
    { 11 }, gPlayerAnim_link_normal_walk_endR_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk_endR_free = { 
    { 11 }, gPlayerAnim_link_normal_walk_endR_free_Data
};

LinkAnimationHeader gPlayerAnim_link_normal_walk_free = { 
    { 29 }, gPlayerAnim_link_normal_walk_free_Data
};

LinkAnimationHeader gPlayerAnim_link_okarina_warp_goal = { 
    { 45 }, gPlayerAnim_link_okarina_warp_goal_Data
};

LinkAnimationHeader gPlayerAnim_link_okiru_demo = { 
    { 80 }, gPlayerAnim_link_okiru_demo_Data
};

LinkAnimationHeader gPlayerAnim_link_shagamu_demo = { 
    { 13 }, gPlayerAnim_link_shagamu_demo_Data
};

LinkAnimationHeader gPlayerAnim_link_silver_carry = { 
    { 80 }, gPlayerAnim_link_silver_carry_Data
};

LinkAnimationHeader gPlayerAnim_link_silver_throw = { 
    { 31 }, gPlayerAnim_link_silver_throw_Data
};

LinkAnimationHeader gPlayerAnim_link_silver_wait = { 
    { 71 }, gPlayerAnim_link_silver_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_Lside_swim = { 
    { 34 }, gPlayerAnim_link_swimer_Lside_swim_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_Rside_swim = { 
    { 34 }, gPlayerAnim_link_swimer_Rside_swim_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_back_swim = { 
    { 39 }, gPlayerAnim_link_swimer_back_swim_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_land2swim_wait = { 
    { 27 }, gPlayerAnim_link_swimer_land2swim_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_15step_up = { 
    { 66 }, gPlayerAnim_link_swimer_swim_15step_up_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim = { 
    { 29 }, gPlayerAnim_link_swimer_swim_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_deep_end = { 
    { 32 }, gPlayerAnim_link_swimer_swim_deep_end_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_deep_start = { 
    { 50 }, gPlayerAnim_link_swimer_swim_deep_start_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_down = { 
    { 178 }, gPlayerAnim_link_swimer_swim_down_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_get = { 
    { 12 }, gPlayerAnim_link_swimer_swim_get_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_hit = { 
    { 10 }, gPlayerAnim_link_swimer_swim_hit_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_swim_wait = { 
    { 46 }, gPlayerAnim_link_swimer_swim_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_swimer_wait2swim_wait = { 
    { 10 }, gPlayerAnim_link_swimer_wait2swim_wait_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_fastrun = { 
    { 24 }, gPlayerAnim_link_uma_anim_fastrun_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_fastrun_muti = { 
    { 24 }, gPlayerAnim_link_uma_anim_fastrun_muti_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_jump100 = { 
    { 23 }, gPlayerAnim_link_uma_anim_jump100_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_jump200 = { 
    { 30 }, gPlayerAnim_link_uma_anim_jump200_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_slowrun = { 
    { 29 }, gPlayerAnim_link_uma_anim_slowrun_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_slowrun_muti = { 
    { 29 }, gPlayerAnim_link_uma_anim_slowrun_muti_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_stand = { 
    { 33 }, gPlayerAnim_link_uma_anim_stand_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_stop = { 
    { 65 }, gPlayerAnim_link_uma_anim_stop_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_walk = { 
    { 35 }, gPlayerAnim_link_uma_anim_walk_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_anim_walk_muti = { 
    { 35 }, gPlayerAnim_link_uma_anim_walk_muti_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_left_down = { 
    { 65 }, gPlayerAnim_link_uma_left_down_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_left_up = { 
    { 70 }, gPlayerAnim_link_uma_left_up_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_right_down = { 
    { 48 }, gPlayerAnim_link_uma_right_down_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_right_up = { 
    { 74 }, gPlayerAnim_link_uma_right_up_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_stop_muti = { 
    { 75 }, gPlayerAnim_link_uma_stop_muti_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_wait_1 = { 
    { 208 }, gPlayerAnim_link_uma_wait_1_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_wait_2 = { 
    { 195 }, gPlayerAnim_link_uma_wait_2_Data
};

LinkAnimationHeader gPlayerAnim_link_uma_wait_3 = { 
    { 30 }, gPlayerAnim_link_uma_wait_3_Data
};

LinkAnimationHeader gPlayerAnim_link_waitF_heat1_20f = { 
    { 36 }, gPlayerAnim_link_waitF_heat1_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_waitF_heat2_20f = { 
    { 24 }, gPlayerAnim_link_waitF_heat2_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_waitF_itemA_20f = { 
    { 90 }, gPlayerAnim_link_waitF_itemA_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_waitF_itemB_20f = { 
    { 100 }, gPlayerAnim_link_waitF_itemB_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_waitF_typeD_20f = { 
    { 138 }, gPlayerAnim_link_waitF_typeD_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_heat1_20f = { 
    { 35 }, gPlayerAnim_link_wait_heat1_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_heat2_20f = { 
    { 25 }, gPlayerAnim_link_wait_heat2_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_itemA_20f = { 
    { 90 }, gPlayerAnim_link_wait_itemA_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_itemB_20f = { 
    { 100 }, gPlayerAnim_link_wait_itemB_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_itemC_20f = { 
    { 93 }, gPlayerAnim_link_wait_itemC_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_itemD1_20f = { 
    { 70 }, gPlayerAnim_link_wait_itemD1_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_itemD2_20f = { 
    { 108 }, gPlayerAnim_link_wait_itemD2_20f_Data
};

LinkAnimationHeader gPlayerAnim_link_wait_typeD_20f = { 
    { 138 }, gPlayerAnim_link_wait_typeD_20f_Data
};

LinkAnimationHeader gPlayerAnim_lkt_nwait = { 
    { 45 }, gPlayerAnim_lkt_nwait_Data
};

LinkAnimationHeader gPlayerAnim_lost_horse2 = { 
    { 40 }, gPlayerAnim_lost_horse2_Data
};

LinkAnimationHeader gPlayerAnim_lost_horse = { 
    { 81 }, gPlayerAnim_lost_horse_Data
};

LinkAnimationHeader gPlayerAnim_lost_horse_wait = { 
    { 11 }, gPlayerAnim_lost_horse_wait_Data
};

LinkAnimationHeader gPlayerAnim_nw_modoru = { 
    { 20 }, gPlayerAnim_nw_modoru_Data
};

LinkAnimationHeader gPlayerAnim_o_get_ato = { 
    { 20 }, gPlayerAnim_o_get_ato_Data
};

LinkAnimationHeader gPlayerAnim_o_get_mae = { 
    { 50 }, gPlayerAnim_o_get_mae_Data
};

LinkAnimationHeader gPlayerAnim_okarinatori = { 
    { 22 }, gPlayerAnim_okarinatori_Data
};

LinkAnimationHeader gPlayerAnim_okiagaru = { 
    { 79 }, gPlayerAnim_okiagaru_Data
};

LinkAnimationHeader gPlayerAnim_okiagaru_tatu = { 
    { 41 }, gPlayerAnim_okiagaru_tatu_Data
};

LinkAnimationHeader gPlayerAnim_okiagaru_wait = { 
    { 40 }, gPlayerAnim_okiagaru_wait_Data
};

LinkAnimationHeader gPlayerAnim_om_get = { 
    { 30 }, gPlayerAnim_om_get_Data
};

LinkAnimationHeader gPlayerAnim_om_get_mae = { 
    { 50 }, gPlayerAnim_om_get_mae_Data
};

LinkAnimationHeader gPlayerAnim_pg_Tbox_open = { 
    { 133 }, gPlayerAnim_pg_Tbox_open_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_endAL = { 
    { 27 }, gPlayerAnim_pg_climb_endAL_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_endAR = { 
    { 27 }, gPlayerAnim_pg_climb_endAR_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_endBL = { 
    { 56 }, gPlayerAnim_pg_climb_endBL_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_endBR = { 
    { 56 }, gPlayerAnim_pg_climb_endBR_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_startA = { 
    { 30 }, gPlayerAnim_pg_climb_startA_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_startB = { 
    { 56 }, gPlayerAnim_pg_climb_startB_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_upL = { 
    { 21 }, gPlayerAnim_pg_climb_upL_Data
};

LinkAnimationHeader gPlayerAnim_pg_climb_upR = { 
    { 21 }, gPlayerAnim_pg_climb_upR_Data
};

LinkAnimationHeader gPlayerAnim_pg_doorA_open = { 
    { 100 }, gPlayerAnim_pg_doorA_open_Data
};

LinkAnimationHeader gPlayerAnim_pg_doorB_open = { 
    { 100 }, gPlayerAnim_pg_doorB_open_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplayA = { 
    { 9 }, gPlayerAnim_pg_gakkiplayA_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplayD = { 
    { 9 }, gPlayerAnim_pg_gakkiplayD_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplayL = { 
    { 9 }, gPlayerAnim_pg_gakkiplayL_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplayR = { 
    { 9 }, gPlayerAnim_pg_gakkiplayR_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplayU = { 
    { 9 }, gPlayerAnim_pg_gakkiplayU_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiplay = { 
    { 18 }, gPlayerAnim_pg_gakkiplay_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkistart = { 
    { 14 }, gPlayerAnim_pg_gakkistart_Data
};

LinkAnimationHeader gPlayerAnim_pg_gakkiwait = { 
    { 18 }, gPlayerAnim_pg_gakkiwait_Data
};

LinkAnimationHeader gPlayerAnim_pg_maru_change = { 
    { 11 }, gPlayerAnim_pg_maru_change_Data
};

LinkAnimationHeader gPlayerAnim_pg_maskoffstart = { 
    { 15 }, gPlayerAnim_pg_maskoffstart_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchA = { 
    { 12 }, gPlayerAnim_pg_punchA_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchAendR = { 
    { 13 }, gPlayerAnim_pg_punchAendR_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchAend = { 
    { 13 }, gPlayerAnim_pg_punchAend_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchB = { 
    { 19 }, gPlayerAnim_pg_punchB_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchBendR = { 
    { 10 }, gPlayerAnim_pg_punchBendR_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchBend = { 
    { 10 }, gPlayerAnim_pg_punchBend_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchC = { 
    { 20 }, gPlayerAnim_pg_punchC_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchCendR = { 
    { 10 }, gPlayerAnim_pg_punchCendR_Data
};

LinkAnimationHeader gPlayerAnim_pg_punchCend = { 
    { 10 }, gPlayerAnim_pg_punchCend_Data
};

LinkAnimationHeader gPlayerAnim_pg_wait = { 
    { 79 }, gPlayerAnim_pg_wait_Data
};

LinkAnimationHeader gPlayerAnim_pn_Tbox_open = { 
    { 133 }, gPlayerAnim_pn_Tbox_open_Data
};

LinkAnimationHeader gPlayerAnim_pn_attack = { 
    { 2 }, gPlayerAnim_pn_attack_Data
};

LinkAnimationHeader gPlayerAnim_pn_batabata = { 
    { 14 }, gPlayerAnim_pn_batabata_Data
};

LinkAnimationHeader gPlayerAnim_pn_doorA_open = { 
    { 100 }, gPlayerAnim_pn_doorA_open_Data
};

LinkAnimationHeader gPlayerAnim_pn_doorB_open = { 
    { 100 }, gPlayerAnim_pn_doorB_open_Data
};

LinkAnimationHeader gPlayerAnim_pn_drink = { 
    { 15 }, gPlayerAnim_pn_drink_Data
};

LinkAnimationHeader gPlayerAnim_pn_drinkend = { 
    { 20 }, gPlayerAnim_pn_drinkend_Data
};

LinkAnimationHeader gPlayerAnim_pn_drinkstart = { 
    { 29 }, gPlayerAnim_pn_drinkstart_Data
};

LinkAnimationHeader gPlayerAnim_pn_gakkiplay = { 
    { 8 }, gPlayerAnim_pn_gakkiplay_Data
};

LinkAnimationHeader gPlayerAnim_pn_gakkistart = { 
    { 12 }, gPlayerAnim_pn_gakkistart_Data
};

LinkAnimationHeader gPlayerAnim_pn_getA = { 
    { 22 }, gPlayerAnim_pn_getA_Data
};

LinkAnimationHeader gPlayerAnim_pn_getB = { 
    { 22 }, gPlayerAnim_pn_getB_Data
};

LinkAnimationHeader gPlayerAnim_pn_gurd = { 
    { 4 }, gPlayerAnim_pn_gurd_Data
};

LinkAnimationHeader gPlayerAnim_pn_kakku = { 
    { 12 }, gPlayerAnim_pn_kakku_Data
};

LinkAnimationHeader gPlayerAnim_pn_kakkufinish = { 
    { 15 }, gPlayerAnim_pn_kakkufinish_Data
};

LinkAnimationHeader gPlayerAnim_pn_maskoffstart = { 
    { 15 }, gPlayerAnim_pn_maskoffstart_Data
};

LinkAnimationHeader gPlayerAnim_pn_rakkafinish = { 
    { 11 }, gPlayerAnim_pn_rakkafinish_Data
};

LinkAnimationHeader gPlayerAnim_pn_tamahaki = { 
    { 8 }, gPlayerAnim_pn_tamahaki_Data
};

LinkAnimationHeader gPlayerAnim_pn_tamahakidf = { 
    { 2 }, gPlayerAnim_pn_tamahakidf_Data
};

LinkAnimationHeader gPlayerAnim_pz_Tbox_open = { 
    { 133 }, gPlayerAnim_pz_Tbox_open_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackA = { 
    { 7 }, gPlayerAnim_pz_attackA_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackAendR = { 
    { 6 }, gPlayerAnim_pz_attackAendR_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackAend = { 
    { 9 }, gPlayerAnim_pz_attackAend_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackB = { 
    { 10 }, gPlayerAnim_pz_attackB_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackBendR = { 
    { 6 }, gPlayerAnim_pz_attackBendR_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackBend = { 
    { 12 }, gPlayerAnim_pz_attackBend_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackC = { 
    { 20 }, gPlayerAnim_pz_attackC_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackCendR = { 
    { 3 }, gPlayerAnim_pz_attackCendR_Data
};

LinkAnimationHeader gPlayerAnim_pz_attackCend = { 
    { 10 }, gPlayerAnim_pz_attackCend_Data
};

LinkAnimationHeader gPlayerAnim_pz_bladeon = { 
    { 9 }, gPlayerAnim_pz_bladeon_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_endAL = { 
    { 27 }, gPlayerAnim_pz_climb_endAL_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_endAR = { 
    { 27 }, gPlayerAnim_pz_climb_endAR_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_endBL = { 
    { 56 }, gPlayerAnim_pz_climb_endBL_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_endBR = { 
    { 56 }, gPlayerAnim_pz_climb_endBR_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_startA = { 
    { 30 }, gPlayerAnim_pz_climb_startA_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_startB = { 
    { 56 }, gPlayerAnim_pz_climb_startB_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_upL = { 
    { 21 }, gPlayerAnim_pz_climb_upL_Data
};

LinkAnimationHeader gPlayerAnim_pz_climb_upR = { 
    { 21 }, gPlayerAnim_pz_climb_upR_Data
};

LinkAnimationHeader gPlayerAnim_pz_cutterattack = { 
    { 9 }, gPlayerAnim_pz_cutterattack_Data
};

LinkAnimationHeader gPlayerAnim_pz_cuttercatch = { 
    { 6 }, gPlayerAnim_pz_cuttercatch_Data
};

LinkAnimationHeader gPlayerAnim_pz_cutterwaitA = { 
    { 9 }, gPlayerAnim_pz_cutterwaitA_Data
};

LinkAnimationHeader gPlayerAnim_pz_cutterwaitB = { 
    { 9 }, gPlayerAnim_pz_cutterwaitB_Data
};

LinkAnimationHeader gPlayerAnim_pz_cutterwaitC = { 
    { 9 }, gPlayerAnim_pz_cutterwaitC_Data
};

LinkAnimationHeader gPlayerAnim_pz_cutterwaitanim = { 
    { 29 }, gPlayerAnim_pz_cutterwaitanim_Data
};

LinkAnimationHeader gPlayerAnim_pz_doorA_open = { 
    { 100 }, gPlayerAnim_pz_doorA_open_Data
};

LinkAnimationHeader gPlayerAnim_pz_doorB_open = { 
    { 100 }, gPlayerAnim_pz_doorB_open_Data
};

LinkAnimationHeader gPlayerAnim_pz_fishswim = { 
    { 10 }, gPlayerAnim_pz_fishswim_Data
};

LinkAnimationHeader gPlayerAnim_pz_gakkiplay = { 
    { 7 }, gPlayerAnim_pz_gakkiplay_Data
};

LinkAnimationHeader gPlayerAnim_pz_gakkistart = { 
    { 15 }, gPlayerAnim_pz_gakkistart_Data
};

LinkAnimationHeader gPlayerAnim_pz_jumpAT = { 
    { 13 }, gPlayerAnim_pz_jumpAT_Data
};

LinkAnimationHeader gPlayerAnim_pz_jumpATend = { 
    { 13 }, gPlayerAnim_pz_jumpATend_Data
};

LinkAnimationHeader gPlayerAnim_pz_maskoffstart = { 
    { 15 }, gPlayerAnim_pz_maskoffstart_Data
};

LinkAnimationHeader gPlayerAnim_pz_swimtowait = { 
    { 10 }, gPlayerAnim_pz_swimtowait_Data
};

LinkAnimationHeader gPlayerAnim_pz_wait = { 
    { 59 }, gPlayerAnim_pz_wait_Data
};

LinkAnimationHeader gPlayerAnim_pz_waterroll = { 
    { 18 }, gPlayerAnim_pz_waterroll_Data
};

LinkAnimationHeader gPlayerAnim_rakka = { 
    { 57 }, gPlayerAnim_rakka_Data
};

LinkAnimationHeader gPlayerAnim_rakuba = { 
    { 33 }, gPlayerAnim_rakuba_Data
};

LinkAnimationHeader gPlayerAnim_sirimochi = { 
    { 54 }, gPlayerAnim_sirimochi_Data
};

LinkAnimationHeader gPlayerAnim_sirimochi_wait = { 
    { 25 }, gPlayerAnim_sirimochi_wait_Data
};

LinkAnimationHeader gPlayerAnim_spotlight = { 
    { 50 }, gPlayerAnim_spotlight_Data
};

LinkAnimationHeader gPlayerAnim_spotlight_wait = { 
    { 25 }, gPlayerAnim_spotlight_wait_Data
};

LinkAnimationHeader gPlayerAnim_sude_nwait = { 
    { 45 }, gPlayerAnim_sude_nwait_Data
};

LinkAnimationHeader gameplay_keep_Linkanim_00E458 = { 
    { 66 }, gPlayerAnimData_2D8510
};

LinkAnimationHeader gPlayerAnim_urusai = { 
    { 51 }, gPlayerAnim_urusai_Data
};

LinkAnimationHeader gPlayerAnim_vs_yousei = { 
    { 102 }, gPlayerAnim_vs_yousei_Data
};

LinkAnimationHeader gPlayerAnim_L_1kyoro = { 
    { 20 }, gPlayerAnim_L_1kyoro_Data
};

LinkAnimationHeader gPlayerAnim_L_2kyoro = { 
    { 20 }, gPlayerAnim_L_2kyoro_Data
};

LinkAnimationHeader gPlayerAnim_L_bouzen = { 
    { 15 }, gPlayerAnim_L_bouzen_Data
};

LinkAnimationHeader gPlayerAnim_L_hajikareru = { 
    { 24 }, gPlayerAnim_L_hajikareru_Data
};

LinkAnimationHeader gPlayerAnim_L_kamaeru = { 
    { 15 }, gPlayerAnim_L_kamaeru_Data
};

LinkAnimationHeader gPlayerAnim_L_ken_miru = { 
    { 26 }, gPlayerAnim_L_ken_miru_Data
};

LinkAnimationHeader gPlayerAnim_L_kennasi_w = { 
    { 20 }, gPlayerAnim_L_kennasi_w_Data
};

LinkAnimationHeader gPlayerAnim_L_kw = { 
    { 20 }, gPlayerAnim_L_kw_Data
};

LinkAnimationHeader gPlayerAnim_L_mukinaoru = { 
    { 10 }, gPlayerAnim_L_mukinaoru_Data
};

LinkAnimationHeader gPlayerAnim_L_okarina_get = { 
    { 30 }, gPlayerAnim_L_okarina_get_Data
};

LinkAnimationHeader gPlayerAnim_L_sagaru = { 
    { 30 }, gPlayerAnim_L_sagaru_Data
};

LinkAnimationHeader gPlayerAnim_Link_ha = { 
    { 35 }, gPlayerAnim_Link_ha_Data
};

LinkAnimationHeader gPlayerAnim_Link_m_wait = { 
    { 40 }, gPlayerAnim_Link_m_wait_Data
};

LinkAnimationHeader gPlayerAnim_Link_miageru = { 
    { 20 }, gPlayerAnim_Link_miageru_Data
};

LinkAnimationHeader gPlayerAnim_Link_muku = { 
    { 25 }, gPlayerAnim_Link_muku_Data
};

LinkAnimationHeader gPlayerAnim_Link_otituku_w = { 
    { 20 }, gPlayerAnim_Link_otituku_w_Data
};

LinkAnimationHeader gPlayerAnim_Link_ue_wait = { 
    { 40 }, gPlayerAnim_Link_ue_wait_Data
};

u8 gameplay_keep_possiblePadding_00E4F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_00E500[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_00E500.vtx.inc"
};

Gfx gameplay_keep_DL_00E5C0[] = {
    gsSPVertex(gameplay_keepVtx_00E500, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gPinkDekuFlowerColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gPinkDekuFlowerColSurfaceType[] = {
    {0x0000C000, 0x000007C8},   {0x4000C000, 0x000007C8},
};

CollisionPoly gPinkDekuFlowerColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xF7B3},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF7B3},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x8001, 0xF7B3},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x8001, 0xF7B3},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xF7B3},
    {0x0001, 0x0008, 0x4009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFD44},
    {0x0001, 0x0008, 0x400B, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFD44},
};

Vec3s gPinkDekuFlowerColVertices[] = {
    {  -2125,    600,   2125 },
    {   2125,    600,   2125 },
    {   2125,    600,  -2125 },
    {  -2125,    600,  -2125 },
    {   2125,      0,   2125 },
    {  -2125,      0,   2125 },
    {   2125,      0,  -2125 },
    {  -2125,      0,  -2125 },
    {  -1530,    700,   1530 },
    {   1530,    700,  -1530 },
    {  -1530,    700,  -1530 },
    {   1530,    700,   1530 },
};

CollisionHeader gPinkDekuFlowerCol = { 
    { -2125, 0, -2125 },
    { 2125, 700, 2125 },
    ARRAY_COUNT(gPinkDekuFlowerColVertices), gPinkDekuFlowerColVertices,
    ARRAY_COUNT(gPinkDekuFlowerColPolygons), gPinkDekuFlowerColPolygons,
    gPinkDekuFlowerColSurfaceType,
    gPinkDekuFlowerColCamDataList,
    0, NULL
};

u8 gameplay_keep_possiblePadding_00E73C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

s16 sDekuFlowerBounceAnimFrameData[] = {
    0x0000, 0x0004, 0x4000, 0x0000, 0x0420, 0x06E6, 0x01D0, 0xFA1D, 0xF306, 0xEFC3, 0xF195, 0xF660, 0xFC54, 0x019D, 
    0x0469, 0x03ED, 0x0161, 0xFDF4, 0xFAD6, 0xF935, 0xF9FE, 0xFC5C, 0xFED9, 0x0000, 0x40D1, 0x4908, 0x5030, 0x48C3, 
    0x3CFA, 0x3639, 0x3AA1, 0x4411, 0x4981, 0x474E, 0x41DA, 0x3C29, 0x393D, 0x3AA5, 0x3E84, 0x42C1, 0x4544, 0x451B, 
    0x4384, 0x41B0, 0x40D1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x8000, 0x4000, 0x3D2C, 0x3872, 0x3772, 0x3F1A, 0xCA7B, 0xD06C, 0xCCF1, 0xC4FE, 0x3CCB, 0x3891, 
    0x399B, 0x3D57, 0xC231, 0xC68F, 0xC8DE, 0xC86B, 0xC648, 0xC37A, 0xC10A, 0x4000, 0x4000, 0x42D4, 0x478E, 0x488E, 
    0x40E6, 0x3585, 0x2F94, 0x330F, 0x3B02, 0x4335, 0x476F, 0x4665, 0x42A9, 0x3DCF, 0x3971, 0x3722, 0x3795, 0x39B8, 
    0x3C86, 0x3EF6, 0x4000, 0x0000, 0xF80B, 0xEC17, 0xE809, 0xEEDE, 0xFFC9, 0x0A83, 0x0808, 0xFF6E, 0xF651, 0xF249, 
    0xF3D4, 0xF857, 0xFE75, 0x0421, 0x0750, 0x0776, 0x05CE, 0x034E, 0x0101, 0x0000, 0x2000, 0x1F34, 0x1A2A, 0x169D, 
    0x1BE6, 0x2000, 0x1E95, 0x1F30, 0x1FFF, 0x1ECE, 0x1D80, 0x1E10, 0x1F43, 0x1FF9, 0x1FCA, 0x1F54, 0x1F4D, 0x1F95, 
    0x1FDE, 0x1FFD, 0x2000, 0x4000, 0x34AC, 0x226C, 0x1B3F, 0x26ED, 0x3FB3, 0x4F0A, 0x4B70, 0x3F32, 0x322C, 0x2C32, 
    0x2E82, 0x351A, 0x3DD1, 0x45D9, 0x4A66, 0x4A9D, 0x483D, 0x44AE, 0x416C, 0x4000, 0x0000, 0x07F5, 0x93E9, 0x97F7, 
    0x9122, 0x0037, 0xF57D, 0xF7F8, 0x0092, 0x09AF, 0x8DB7, 0x0C2C, 0x07A9, 0x018B, 0xFBDF, 0xF8B0, 0xF88A, 0xFA32, 
    0xFCB2, 0xFEFF, 0x0000, 0x6000, 0x60CC, 0x1A2A, 0x169D, 0x1BE6, 0x6000, 0x616B, 0x60D0, 0x6001, 0x6132, 0x1D80, 
    0x61F0, 0x60BD, 0x6007, 0x6036, 0x60AC, 0x60B3, 0x606B, 0x6022, 0x6003, 0x6000, 0x4000, 0x4B54, 0xDD94, 0xE4C1, 
    0xD913, 0x404D, 0x30F6, 0x3490, 0x40CE, 0x4DD4, 0xD3CE, 0x517E, 0x4AE6, 0x422F, 0x3A27, 0x359A, 0x3563, 0x37C3, 
    0x3B52, 0x3E94, 0x4000, 0xE000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE000, 0x4000, 0x42D4, 0x478E, 0x488E, 
    0x40E6, 0x3585, 0x2F94, 0x330F, 0x3B02, 0x4335, 0x476F, 0x4665, 0x42A9, 0x3DCF, 0x3971, 0x3722, 0x3795, 0x39B8, 
    0x3C86, 0x3EF6, 0x4000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x07F5, 0x13E9, 0x17F7, 
    0x1122, 0x0037, 0xF57D, 0xF7F8, 0x0092, 0x09AF, 0x0DB7, 0x0C2C, 0x07A9, 0x018B, 0xFBDF, 0xF8B0, 0xF88A, 0xFA32, 
    0xFCB2, 0xFEFF, 0x0000, 0xE000, 0xE0CC, 0xE5D6, 0xE963, 0xE41A, 0xE000, 0xE16B, 0xE0D0, 0xE001, 0xE132, 0xE280, 
    0xE1F0, 0xE0BD, 0xE007, 0xE036, 0xE0AC, 0xE0B3, 0xE06B, 0xE022, 0xE003, 0xE000, 0x4000, 0x34AC, 0x226C, 0x1B3F, 
    0x26ED, 0x3FB3, 0x4F0A, 0x4B70, 0x3F32, 0x322C, 0x2C32, 0x2E82, 0x351A, 0x3DD1, 0x45D9, 0x4A66, 0x4A9D, 0x483D, 
    0x44AE, 0x416C, 0x4000, 0x2000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x2000, 0xC000, 0xBD2C, 0xB872, 0xB772, 
    0xBF1A, 0xCA7B, 0xD06C, 0xCCF1, 0xC4FE, 0xBCCB, 0xB891, 0xB99B, 0xBD57, 0xC231, 0xC68F, 0xC8DE, 0xC86B, 0xC648, 
    0xC37A, 0xC10A, 0xC000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0xF80B, 0x6C17, 0x6809, 
    0x6EDE, 0xFFC9, 0x0A83, 0x0808, 0xFF6E, 0xF651, 0x7249, 0xF3D4, 0xF857, 0xFE75, 0x0421, 0x0750, 0x0776, 0x05CE, 
    0x034E, 0x0101, 0x0000, 0xA000, 0x9F34, 0xE5D6, 0xE963, 0xE41A, 0xA000, 0x9E95, 0x9F30, 0x9FFF, 0x9ECE, 0xE280, 
    0x9E11, 0x9F43, 0x9FF9, 0x9FCA, 0x9F54, 0x9F4D, 0x9F95, 0x9FDE, 0x9FFD, 0xA000, 0x4000, 0x4B54, 0xDD94, 0xE4C1, 
    0xD913, 0x404D, 0x30F6, 0x3490, 0x40CE, 0x4DD4, 0xD3CE, 0x517E, 0x4AE6, 0x422F, 0x3A27, 0x359A, 0x3563, 0x37C3, 
    0x3B52, 0x3E94, 0x4000, 0x0000, 
};

JointIndex sDekuFlowerBounceAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0018, 0x0001, 0x0002 },
    { 0x002D, 0x0042, 0x0057 },
    { 0x0000, 0x0000, 0x006C },
    { 0x0081, 0x0096, 0x00AB },
    { 0x00C0, 0x00D5, 0x00EA },
    { 0x00FF, 0x0114, 0x0129 },
    { 0x013E, 0x0153, 0x0168 },
    { 0x017D, 0x0192, 0x01A7 },
    { 0x01BC, 0x01D1, 0x01E6 },
};

AnimationHeader gDekuFlowerBounceAnim = { 
    { 21 }, sDekuFlowerBounceAnimFrameData,
    sDekuFlowerBounceAnimJointIndices, 3
};

Vtx gameplay_keepVtx_00EB90[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_00EB90.vtx.inc"
};

Gfx gPinkDekuFlowerIdleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_00EB90, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EB90[9], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EB90[18], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_00EEC8[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_00EEC8.vtx.inc"
};

Gfx gPinkDekuFlowerBaseDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_00EEC8, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerCenterDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[45], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EEC8[54], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerBackLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[37], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerLeftLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[33], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerFrontLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[29], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerRightLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[25], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerBackRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerFrontRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[17], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerFrontLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[13], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gPinkDekuFlowerBackLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[41], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

u64 gPinkDekuFlowerPetalAndCenterTex[] = {
#include "assets/objects/gameplay_keep/pink_deku_flower_petal_and_center.rgba16.inc.c"
};

u64 gPinkDekuFlowerLeafAndCenterTex[] = {
#include "assets/objects/gameplay_keep/pink_deku_flower_leaf_and_center.rgba16.inc.c"
};

u64 gPinkDekuFlowerBaseLeafTex[] = {
#include "assets/objects/gameplay_keep/pink_deku_flower_base_leaf.rgba16.inc.c"
};

u64 gGoldDekuFlowerPetalAndCenterTex[] = {
#include "assets/objects/gameplay_keep/gold_deku_flower_petal_and_center.rgba16.inc.c"
};

u64 gGoldDekuFlowerBaseLeafTex[] = {
#include "assets/objects/gameplay_keep/gold_deku_flower_base_leaf.rgba16.inc.c"
};

StandardLimb gPinkDekuFlowerBaseLimb = { 
    { 0, 0, 0 }, PINK_DEKU_FLOWER_LIMB_CENTER - 1, LIMB_DONE,
    gPinkDekuFlowerBaseDL
};

StandardLimb gPinkDekuFlowerCenterLimb = { 
    { 0, 600, 0 }, PINK_DEKU_FLOWER_LIMB_BACK_LEAF - 1, LIMB_DONE,
    gPinkDekuFlowerCenterDL
};

StandardLimb gPinkDekuFlowerBackLeafLimb = { 
    { 0, -1300, 0 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_LEAF - 1,
    gPinkDekuFlowerBackLeafDL
};

StandardLimb gPinkDekuFlowerFrontLeafLimb = { 
    { 0, 1300, 0 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL - 1,
    gPinkDekuFlowerFrontLeafDL
};

StandardLimb gPinkDekuFlowerFrontRightPetalLimb = { 
    { 0, 919, -919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL - 1,
    gPinkDekuFlowerFrontRightPetalDL
};

StandardLimb gPinkDekuFlowerBackRightPetalLimb = { 
    { 0, -919, -919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_RIGHT_LEAF - 1,
    gPinkDekuFlowerBackRightPetalDL
};

StandardLimb gPinkDekuFlowerRightLeafLimb = { 
    { 0, 0, -1300 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL - 1,
    gPinkDekuFlowerRightLeafDL
};

StandardLimb gPinkDekuFlowerFrontLeftPetalLimb = { 
    { 0, 919, 919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_LEFT_LEAF - 1,
    gPinkDekuFlowerFrontLeftPetalDL
};

StandardLimb gPinkDekuFlowerLeftLeafLimb = { 
    { 0, 0, 1300 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL - 1,
    gPinkDekuFlowerLeftLeafDL
};

StandardLimb gPinkDekuFlowerBackLeftPetalLimb = { 
    { 0, -919, 919 }, LIMB_DONE, LIMB_DONE,
    gPinkDekuFlowerBackLeftPetalDL
};

void* gPinkDekuFlowerSkelLimbs[] = {
    &gPinkDekuFlowerBaseLimb, /* PINK_DEKU_FLOWER_LIMB_BASE */
    &gPinkDekuFlowerCenterLimb, /* PINK_DEKU_FLOWER_LIMB_CENTER */
    &gPinkDekuFlowerBackLeafLimb, /* PINK_DEKU_FLOWER_LIMB_BACK_LEAF */
    &gPinkDekuFlowerFrontLeafLimb, /* PINK_DEKU_FLOWER_LIMB_FRONT_LEAF */
    &gPinkDekuFlowerFrontRightPetalLimb, /* PINK_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL */
    &gPinkDekuFlowerBackRightPetalLimb, /* PINK_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL */
    &gPinkDekuFlowerRightLeafLimb, /* PINK_DEKU_FLOWER_LIMB_RIGHT_LEAF */
    &gPinkDekuFlowerFrontLeftPetalLimb, /* PINK_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL */
    &gPinkDekuFlowerLeftLeafLimb, /* PINK_DEKU_FLOWER_LIMB_LEFT_LEAF */
    &gPinkDekuFlowerBackLeftPetalLimb, /* PINK_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL */
};

SkeletonHeader gPinkDekuFlowerSkel = { 
    gPinkDekuFlowerSkelLimbs, ARRAY_COUNT(gPinkDekuFlowerSkelLimbs)
};

s16 sDekuFlowerRustleAnimFrameData[] = {
    0x0000, 0x40D1, 0x0004, 0x4000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x8000, 0xCE50, 0xD256, 0xCAB9, 0x3DF0, 0x3622, 0x371C, 0x3BE3, 0xC176, 0xC4CF, 0xC4C0, 0xC305, 0xC0FC, 
    0x4000, 0x31B0, 0x2DAA, 0x3547, 0x4210, 0x49DE, 0x48E4, 0x441D, 0x3E8A, 0x3B31, 0x3B40, 0x3CFB, 0x3F04, 0x4000, 
    0xF61E, 0xFC5D, 0x061B, 0x0B1C, 0x0917, 0x038F, 0xFD5D, 0xF9D2, 0xF9A8, 0xFB10, 0xFD31, 0xFF25, 0x0000, 0x1EC1, 
    0x1FD6, 0x1F89, 0x1E68, 0x1EF4, 0x1FD8, 0x1FEA, 0x1F86, 0x1F7F, 0x1FB3, 0x1FE7, 0x1FFE, 0x2000, 0x31E2, 0x3ADA, 
    0x48AB, 0x4FEC, 0x4CF7, 0x4509, 0x3C44, 0x373A, 0x36FD, 0x3900, 0x3C06, 0x3ECA, 0x4000, 0x09E2, 0x03A3, 0xF9E5, 
    0xF4E4, 0xF6E9, 0xFC71, 0x02A3, 0x062E, 0x0658, 0x04F0, 0x02CF, 0x00DB, 0x0000, 0x613F, 0x602A, 0x6077, 0x6198, 
    0x610C, 0x6028, 0x6016, 0x607A, 0x6081, 0x604D, 0x6019, 0x6002, 0x6000, 0x4E1E, 0x4526, 0x3755, 0x3014, 0x3309, 
    0x3AF7, 0x43BC, 0x48C6, 0x4903, 0x4700, 0x43FA, 0x4136, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE000, 0x31B0, 0x2DAA, 0x3547, 0x4210, 0x49DE, 0x48E4, 0x441D, 
    0x3E8A, 0x3B31, 0x3B40, 0x3CFB, 0x3F04, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x09E2, 0x03A3, 0xF9E5, 0xF4E4, 0xF6E9, 0xFC71, 0x02A3, 0x062E, 0x0658, 
    0x04F0, 0x02CF, 0x00DB, 0x0000, 0xE13F, 0xE02A, 0xE077, 0xE198, 0xE10C, 0xE028, 0xE016, 0xE07A, 0xE081, 0xE04D, 
    0xE019, 0xE002, 0xE000, 0x31E2, 0x3ADA, 0x48AB, 0x4FEC, 0x4CF7, 0x4509, 0x3C44, 0x373A, 0x36FD, 0x3900, 0x3C06, 
    0x3ECA, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x2000, 0xCE50, 0xD256, 0xCAB9, 0xBDF0, 0xB622, 0xB71C, 0xBBE3, 0xC176, 0xC4CF, 0xC4C0, 0xC305, 0xC0FC, 0xC000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0xF61E, 
    0xFC5D, 0x061B, 0x0B1C, 0x0917, 0x038F, 0xFD5D, 0xF9D2, 0xF9A8, 0xFB10, 0xFD31, 0xFF25, 0x0000, 0x9EC1, 0x9FD6, 
    0x9F89, 0x9E68, 0x9EF4, 0x9FD8, 0x9FEA, 0x9F86, 0x9F7F, 0x9FB3, 0x9FE7, 0x9FFE, 0xA000, 0x4E1F, 0x4526, 0x3755, 
    0x3014, 0x3309, 0x3AF7, 0x43BC, 0x48C6, 0x4903, 0x4700, 0x43FA, 0x4136, 0x4000, 
};

JointIndex sDekuFlowerRustleAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0003 },
    { 0x0004, 0x0011, 0x001E },
    { 0x0000, 0x0000, 0x002B },
    { 0x0038, 0x0045, 0x0052 },
    { 0x005F, 0x006C, 0x0079 },
    { 0x0086, 0x0093, 0x00A0 },
    { 0x00AD, 0x00BA, 0x00C7 },
    { 0x00D4, 0x00E1, 0x00EE },
    { 0x00FB, 0x0108, 0x0115 },
};

AnimationHeader gDekuFlowerRustleAnim = { 
    { 13 }, sDekuFlowerRustleAnimFrameData,
    sDekuFlowerRustleAnimJointIndices, 4
};

u8 gameplay_keep_possiblePadding_0117B8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

BgCamInfo gGoldDekuFlowerColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gGoldDekuFlowerColSurfaceType[] = {
    {0x0000C000, 0x000007C8},
};

CollisionPoly gGoldDekuFlowerColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x6828, 0x4A65, 0xF7C5},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x6828, 0x4A65, 0xF7C5},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x4A65, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x4A65, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x6828, 0xB59B, 0xF7C5},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x6828, 0xB59B, 0xF7C5},
    {0x0000, 0x0005, 0x0000, 0x0003, 0xB59B, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0005, 0x0003, 0x0007, 0xB59B, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0008, 0x4009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFBB4},
    {0x0000, 0x0008, 0x400B, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFBB4},
};

Vec3s gGoldDekuFlowerColVertices[] = {
    {  -2225,   1000,   2225 },
    {   2225,   1000,   2225 },
    {   2225,   1000,  -2225 },
    {  -2225,   1000,  -2225 },
    {   3625,      0,   3625 },
    {  -3625,      0,   3625 },
    {   3625,      0,  -3625 },
    {  -3625,      0,  -3625 },
    {  -1530,   1100,   1530 },
    {   1530,   1100,  -1530 },
    {  -1530,   1100,  -1530 },
    {   1530,   1100,   1530 },
};

CollisionHeader gGoldDekuFlowerCol = { 
    { -3625, 0, -3625 },
    { 3625, 1100, 3625 },
    ARRAY_COUNT(gGoldDekuFlowerColVertices), gGoldDekuFlowerColVertices,
    ARRAY_COUNT(gGoldDekuFlowerColPolygons), gGoldDekuFlowerColPolygons,
    gGoldDekuFlowerColSurfaceType,
    gGoldDekuFlowerColCamDataList,
    0, NULL
};

u8 gameplay_keep_possiblePadding_011904[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_011910[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_011910.vtx.inc"
};

Gfx gGoldDekuFlowerIdleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_011910, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 7, 0, 12, 13, 2, 0),
    gsSP2Triangles(14, 15, 2, 0, 16, 17, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGoldDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011910[18], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 13, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 23, 16, 25, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_011CF0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_011CF0.vtx.inc"
};

Gfx gGoldDekuFlowerBaseDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_011CF0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 13, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 23, 16, 25, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerCenterDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[58], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPVertex(&gameplay_keepVtx_011CF0[67], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerBackLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[50], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[46], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerFrontLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[42], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[38], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerBackRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[34], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerFrontRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerFrontPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[26], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerBackPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[54], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

StandardLimb gGoldDekuFlowerBaseLimb = { 
    { 0, 0, 0 }, GOLD_DEKU_FLOWER_LIMB_CENTER - 1, LIMB_DONE,
    gGoldDekuFlowerBaseDL
};

StandardLimb gGoldDekuFlowerCenterLimb = { 
    { 0, 1000, 0 }, GOLD_DEKU_FLOWER_LIMB_BACK_PETAL - 1, LIMB_DONE,
    gGoldDekuFlowerCenterDL
};

StandardLimb gGoldDekuFlowerBackPetalLimb = { 
    { 0, -1300, 0 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_PETAL - 1,
    gGoldDekuFlowerBackPetalDL
};

StandardLimb gGoldDekuFlowerFrontPetalLimb = { 
    { 0, 1300, 0 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL - 1,
    gGoldDekuFlowerFrontPetalDL
};

StandardLimb gGoldDekuFlowerFrontRightPetalLimb = { 
    { 0, 919, -919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL - 1,
    gGoldDekuFlowerFrontRightPetalDL
};

StandardLimb gGoldDekuFlowerBackRightPetalLimb = { 
    { 0, -919, -919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_RIGHT_PETAL - 1,
    gGoldDekuFlowerBackRightPetalDL
};

StandardLimb gGoldDekuFlowerRightPetalLimb = { 
    { 0, 0, -1300 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL - 1,
    gGoldDekuFlowerRightPetalDL
};

StandardLimb gGoldDekuFlowerFrontLeftPetalLimb = { 
    { 0, 919, 919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_LEFT_PETAL - 1,
    gGoldDekuFlowerFrontLeftPetalDL
};

StandardLimb gGoldDekuFlowerLeftPetalLimb = { 
    { 0, 0, 1300 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL - 1,
    gGoldDekuFlowerLeftPetalDL
};

StandardLimb gGoldDekuFlowerBackLeftPetalLimb = { 
    { 0, -919, 919 }, LIMB_DONE, LIMB_DONE,
    gGoldDekuFlowerBackLeftPetalDL
};

void* gGoldDekuFlowerSkelLimbs[] = {
    &gGoldDekuFlowerBaseLimb, /* GOLD_DEKU_FLOWER_LIMB_BASE */
    &gGoldDekuFlowerCenterLimb, /* GOLD_DEKU_FLOWER_LIMB_CENTER */
    &gGoldDekuFlowerBackPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_BACK_PETAL */
    &gGoldDekuFlowerFrontPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_FRONT_PETAL */
    &gGoldDekuFlowerFrontRightPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL */
    &gGoldDekuFlowerBackRightPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL */
    &gGoldDekuFlowerRightPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_RIGHT_PETAL */
    &gGoldDekuFlowerFrontLeftPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL */
    &gGoldDekuFlowerLeftPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_LEFT_PETAL */
    &gGoldDekuFlowerBackLeftPetalLimb, /* GOLD_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL */
};

FlexSkeletonHeader gGoldDekuFlowerSkel = { 
    { gGoldDekuFlowerSkelLimbs, ARRAY_COUNT(gGoldDekuFlowerSkelLimbs) }, 10
};

u8 gameplay_keep_possiblePadding_0127F4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sameplay_keep_Anim_012860FrameData[] = {
    0x0000, 0x4000, 0x0000, 0xE89F, 0xD0D3, 0xB8AC, 0xA039, 0x878A, 0x6EAE, 0x55B5, 0x3CAD, 0x23A6, 0x0AB0, 0xF1DA, 
    0xD934, 0xC0CD, 0xA8B4, 0x90F9, 0x79AB, 0x62D9, 0x4C93, 0x36E9, 0x21EA, 0x0DA5, 0xFA2A, 0xE787, 0xD76E, 0xD56F, 
    0xDEB7, 0xED0E, 0xFA3A, 0x0000, 
};

JointIndex sameplay_keep_Anim_012860JointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0002, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_012860 = { 
    { 30 }, sameplay_keep_Anim_012860FrameData,
    sameplay_keep_Anim_012860JointIndices, 2
};

s16 sameplay_keep_Anim_0128BCFrameData[] = {
    0x0000, 0x4000, 0x3AA1, 0x3047, 0x2997, 0x3818, 0x50AB, 0x507F, 0x3C3A, 0x2F4C, 0x37DC, 0x43E1, 0x484F, 0x3B90, 
    0x3CA2, 0x4367, 0x3DE4, 0x4000, 0x400C, 0x3F0F, 0x3FF6, 0x0000, 
};

JointIndex sameplay_keep_Anim_0128BCJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_0128BC = { 
    { 20 }, sameplay_keep_Anim_0128BCFrameData,
    sameplay_keep_Anim_0128BCJointIndices, 1
};

u8 gameplay_keep_possiblePadding_0128CC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_0128D0[] = {
#include "assets/objects/gameplay_keep/tex_0128D0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0138D0[] = {
#include "assets/objects/gameplay_keep/tex_0138D0.rgba16.inc.c"
};

Vtx gameplay_keepVtx_013CD0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_013CD0.vtx.inc"
};

Gfx gameplay_keep_DL_013FF0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0128D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_013CD0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 2, 1, 0, 6, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 11, 8, 0),
    gsSP2Triangles(4, 9, 5, 0, 4, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(12, 16, 15, 0, 12, 17, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0138D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_013CD0[18], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_00CA30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_013CD0[26], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_013CD0[29], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 6, 0),
    gsSP2Triangles(5, 13, 3, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0141D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0141D0.vtx.inc"
};

Gfx gameplay_keep_DL_014370[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_00CA30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_0141D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0141D0[3], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0138D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_0141D0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPVertex(&gameplay_keepVtx_0141D0[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0128D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_0141D0[20], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(2, 5, 4, 0, 2, 1, 5, 0),
    gsSPEndDisplayList(),
};

LodLimb gameplay_keep_Lodlimb_014510 = { 
    { 0, 0, 0 }, ARROW_LIMB_2 - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gameplay_keep_Lodlimb_014520 = { 
    { -1, 0, 998 }, ARROW_LIMB_3 - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gameplay_keep_Lodlimb_014530 = { 
    { 0, 0, 0 }, ARROW_LIMB_4 - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gameplay_keep_Lodlimb_014540 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gameplay_keep_DL_013FF0, gameplay_keep_DL_014370 }
};

void* gameplay_keep_Skel_014560Limbs[] = {
    &gameplay_keep_Lodlimb_014510, /* ARROW_LIMB_1 */
    &gameplay_keep_Lodlimb_014520, /* ARROW_LIMB_2 */
    &gameplay_keep_Lodlimb_014530, /* ARROW_LIMB_3 */
    &gameplay_keep_Lodlimb_014540, /* ARROW_LIMB_4 */
};

SkeletonHeader gameplay_keep_Skel_014560 = { 
    gameplay_keep_Skel_014560Limbs, ARRAY_COUNT(gameplay_keep_Skel_014560Limbs)
};

u8 gameplay_keep_possiblePadding_014568[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_014570[] = {
#include "assets/objects/gameplay_keep/tex_014570.rgba32.inc.c"
};

u64 gBombBodyTex[] = {
#include "assets/objects/gameplay_keep/bomb_body.ia8.inc.c"
};

Vtx gameplay_keepVtx_015D70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_015D70.vtx.inc"
};

Gfx gBombBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(1, 0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPVertex(gameplay_keepVtx_015D70, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_015E38[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gBombCapTex[] = {
#include "assets/objects/gameplay_keep/bomb_cap.rgba16.inc.c"
};

Vtx gameplay_keepVtx_015EC0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_015EC0.vtx.inc"
};

Gfx gBombCapDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x03E8, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombCapTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_015EC0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_015EC0[4], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 6, 4, 0, 8, 4, 2, 0),
    gsSP1Triangle(8, 2, 1, 0),
    gsSPEndDisplayList(),
};

u64 gBombchuBodyTex[] = {
#include "assets/objects/gameplay_keep/bombchu_body.rgba16.inc.c"
};

Vtx gameplay_keepVtx_0160E0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0160E0.vtx.inc"
};

Gfx gBombchuDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0190, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombchuBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 3, 3, 15, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_0160E0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0160E0[3], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 2, 0),
    gsSP2Triangles(4, 9, 10, 0, 11, 12, 2, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 6, 11, 0),
    gsSP1Triangle(13, 0, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(ENVIRONMENT, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gameplay_keepVtx_0160E0[17], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 4, 6, 0, 6, 8, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 4, 7, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 14, 12, 0, 9, 11, 14, 0),
    gsSP2Triangles(9, 6, 5, 0, 9, 5, 11, 0),
    gsSP1Triangle(9, 8, 6, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 188, 75, 0, 255),
    gsSPVertex(&gameplay_keepVtx_0160E0[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_0164C8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gEffBombExplosion1Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_1.ia16.inc.c"
};

u64 gEffBombExplosion2Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_2.ia16.inc.c"
};

u64 gEffBombExplosion3Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_3.ia16.inc.c"
};

u64 gEffBombExplosion4Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_4.ia16.inc.c"
};

u64 gEffBombExplosion5Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_5.ia16.inc.c"
};

u64 gEffBombExplosion6Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_6.ia16.inc.c"
};

u64 gEffBombExplosion7Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_7.ia16.inc.c"
};

u64 gEffBombExplosion8Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_8.ia16.inc.c"
};

Gfx gEffBombExplosion1DL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_01A5A8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gEffBombExplosion2DL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
};

Gfx gEffBombExplosion3DL[] = {
    gsSPVertex(gameplay_keepVtx_01A5A8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_01A5A8[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01A5A8.vtx.inc"
};

u8 gameplay_keep_possiblePadding_01A5E8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_01A5F0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01A5F0.vtx.inc"
};

Gfx gEffFragments1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWitheredLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_01A5F0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gWitheredLeafTex[] = {
#include "assets/objects/gameplay_keep/withered_leaf.rgba16.inc.c"
};

u64 gameplay_keep_Tex_01A8B0[] = {
#include "assets/objects/gameplay_keep/tex_01A8B0.i8.inc.c"
};

u64 gameplay_keep_Tex_01AAB0[] = {
#include "assets/objects/gameplay_keep/tex_01AAB0.i8.inc.c"
};

Vtx gameplay_keepVtx_01ACB0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01ACB0.vtx.inc"
};

Gfx gameplay_keep_DL_01ACF0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_01A8B0, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gameplay_keep_Tex_01AAB0, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 1, 15),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_01ACB0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_01ADB0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01ADB0.vtx.inc"
};

Gfx gElegyShellHumanDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_01ADB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(0, 13, 3, 0, 8, 13, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 12, 16, 0),
    gsSP2Triangles(13, 15, 14, 0, 15, 8, 12, 0),
    gsSP2Triangles(13, 8, 15, 0, 3, 13, 14, 0),
    gsSP2Triangles(17, 7, 18, 0, 19, 7, 17, 0),
    gsSP2Triangles(12, 19, 16, 0, 12, 7, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 8, 27, 6, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[31], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanEyeAndNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(11, 15, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 14, 16, 0, 17, 12, 14, 0),
    gsSP2Triangles(17, 18, 12, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 18, 19, 0, 15, 21, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 18, 20, 0),
    gsSP2Triangles(25, 26, 18, 0, 12, 18, 26, 0),
    gsSP2Triangles(27, 12, 26, 0, 22, 27, 26, 0),
    gsSP2Triangles(27, 22, 24, 0, 27, 24, 28, 0),
    gsSP2Triangles(12, 27, 28, 0, 13, 12, 28, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanNostrilsAndSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[60], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 1, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 1, 11, 0),
    gsSP2Triangles(19, 9, 8, 0, 19, 20, 9, 0),
    gsSP2Triangles(21, 20, 19, 0, 19, 22, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 4, 6, 7, 0),
    gsSP2Triangles(26, 27, 28, 0, 21, 29, 30, 0),
    gsSP1Triangle(30, 31, 21, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[99], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 5, 4, 0),
    gsSP2Triangles(11, 10, 4, 0, 13, 0, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 5, 19, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellBeltAndTunicTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[120], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 9, 4, 0),
    gsSP2Triangles(7, 6, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 13, 18, 0),
    gsSP2Triangles(18, 21, 0, 0, 2, 18, 0, 0),
    gsSP2Triangles(10, 21, 13, 0, 2, 22, 19, 0),
    gsSP2Triangles(19, 22, 23, 0, 3, 24, 6, 0),
    gsSP2Triangles(5, 24, 3, 0, 1, 22, 2, 0),
    gsSP2Triangles(21, 25, 0, 0, 25, 21, 10, 0),
    gsSP2Triangles(18, 13, 21, 0, 19, 18, 2, 0),
    gsSP2Triangles(25, 24, 0, 0, 0, 24, 1, 0),
    gsSP2Triangles(25, 10, 6, 0, 6, 24, 25, 0),
    gsSP2Triangles(1, 5, 22, 0, 5, 1, 24, 0),
    gsSP2Triangles(5, 4, 22, 0, 4, 26, 22, 0),
    gsSP2Triangles(23, 22, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[150], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 0, 9, 0),
    gsSP2Triangles(6, 8, 10, 0, 11, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 22, 21, 0, 4, 23, 24, 0),
    gsSP2Triangles(4, 25, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(25, 29, 23, 0, 29, 30, 23, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[181], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 9, 16, 12, 0),
    gsSP2Triangles(8, 10, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 13, 0, 20, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 25, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[213], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 3, 1, 0),
    gsSP1Triangle(8, 1, 3, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanNostrilsAndSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[222], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 6, 17, 4, 0),
    gsSP2Triangles(11, 18, 19, 0, 10, 18, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 3, 1, 0),
    gsSP2Triangles(25, 1, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[252], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 13, 7, 4, 0),
    gsSP2Triangles(14, 13, 4, 0, 14, 4, 3, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(15, 19, 20, 0, 19, 15, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 23, 26, 0, 23, 22, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanBootsTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[283], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 18, 17, 0, 2, 21, 0, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
    gsSPVertex(&gameplay_keepVtx_01ADB0[313], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 8, 7, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellHumanPlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_01ADB0[337], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 3, 0, 4, 14, 12, 0),
    gsSP2Triangles(12, 14, 11, 0, 3, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 20, 0),
    gsSP2Triangles(18, 17, 21, 0, 20, 17, 22, 0),
    gsSPEndDisplayList(),
};

u64 gElegyShellHumanMouthTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_mouth.rgba16.inc.c"
};

u64 gElegyShellHumanEyeAndNoseTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_eye_and_nose.rgba16.inc.c"
};

u64 gElegyShellHumanNostrilsAndSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_nostrils_and_skin.rgba16.inc.c"
};

u64 gElegyShellHumanBootsTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_boots.rgba16.inc.c"
};

u64 gElegyShellHumanPlatformTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_platform.rgba16.inc.c"
};

u64 gElegyShellBeltAndTunicTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_belt_and_tunic.rgba16.inc.c"
};

u64 gElegyShellHumanHairTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_human_hair.rgba16.inc.c"
};

u8 gameplay_keep_possiblePadding_01ECF8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Gfx gCompassArrowDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_01ED28, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_01ED28[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01ED28.vtx.inc"
};

u8 gameplay_keep_possiblePadding_01ED58[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_01ED60[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01ED60.vtx.inc"
};

Gfx gameplay_keep_DL_01ED90[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_01F340, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM),
    gsDPSetRenderMode(G_RM_AA_TEX_EDGE, G_RM_AA_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_01ED60, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_01EE00[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01EE00.vtx.inc"
};

Gfx gLockOnArrowDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x03E8, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_01F200, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 4),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(gameplay_keepVtx_01EE00, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_01EE00[4], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 17, 12, 0, 19, 12, 20, 0),
    gsSP2Triangles(12, 17, 13, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 22, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 21, 23, 0, 29, 23, 30, 0),
    gsSPVertex(&gameplay_keepVtx_01EE00[35], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 7, 6, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 8, 7, 0, 11, 7, 9, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_01F200[] = {
#include "assets/objects/gameplay_keep/tex_01F200.i8.inc.c"
};

Vtx gameplay_keepVtx_01F240[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01F240.vtx.inc"
};

Gfx gEffFragments2DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(gameplay_keepVtx_01F240, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_01F338[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_01F340[] = {
#include "assets/objects/gameplay_keep/tex_01F340.ia8.inc.c"
};

u64 gSelectionCursorTex[] = {
#include "assets/objects/gameplay_keep/selection_cursor.ia4.inc.c"
};

u64 gControlStickTex[] = {
#include "assets/objects/gameplay_keep/control_stick.ia8.inc.c"
};

u64 gArrowCursorTex[] = {
#include "assets/objects/gameplay_keep/arrow_cursor.ia8.inc.c"
};

Gfx gBoulderFragmentsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBoulderFragmentsTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_01FB18, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 2, 5, 6, 0),
    gsSP2Triangles(2, 6, 0, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 7, 5, 4, 0),
    gsSP2Triangles(6, 8, 0, 0, 7, 8, 6, 0),
    gsSP2Triangles(4, 9, 7, 0, 10, 11, 9, 0),
    gsSP2Triangles(9, 11, 7, 0, 9, 4, 3, 0),
    gsSP2Triangles(9, 3, 10, 0, 3, 1, 10, 0),
    gsSP2Triangles(8, 11, 10, 0, 10, 1, 0, 0),
    gsSP2Triangles(0, 8, 10, 0, 7, 11, 8, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_01FB18[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_01FB18.vtx.inc"
};

u8 gameplay_keep_possiblePadding_01FBD8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gBoulderFragmentsTex[] = {
#include "assets/objects/gameplay_keep/boulder_fragments.rgba16.inc.c"
};

s16 sDoorHumanOpenLeftAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0xFFAE, 0xFEF3, 0xFDC2, 0xFC0D, 0xF900, 0xF512, 0xF226, 0xF0B1, 0xEFBF, 0xEF17, 0xEE81, 0xEDC2, 0xECC8, 
    0xEBDA, 0xEB37, 0xEA8E, 0xE9B2, 0xE8CF, 0xE7E3, 0xE6ED, 0xE5ED, 0xE4D8, 0xE3AB, 0xE271, 0xE130, 0xDFF4, 0xDEC3, 
    0xDDA9, 0xDCAC, 0xDBD7, 0xDB33, 0xDB42, 0xDB51, 0xDB61, 0xDB70, 0xDB7F, 0xDB8E, 0xDB9E, 0xDBAD, 0xDBBC, 0xDDC2, 
    0xE043, 0xE329, 0xE65B, 0xE9C4, 0xED4C, 0xF0DC, 0xF45D, 0xF7B8, 0xFAD6, 0xFDA1, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
};

JointIndex sDoorHumanOpenLeftAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorHumanOpenLeftAnim = { 
    { 88 }, sDoorHumanOpenLeftAnimFrameData,
    sDoorHumanOpenLeftAnimJointIndices, 2
};

u8 gameplay_keep_possiblePadding_0204C4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sDoorHumanOpenRightAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFA7, 0xFF09, 0xFE39, 
    0xFD4C, 0xFC53, 0xFB62, 0xFA8D, 0xF9EA, 0xF96B, 0xF8EF, 0xF853, 0xF777, 0xF639, 0xF2E7, 0xEEB6, 0xEB6C, 0xE85E, 
    0xE611, 0xE46A, 0xE300, 0xE1E0, 0xE117, 0xE0B3, 0xE0A9, 0xE0DD, 0xE143, 0xE1D1, 0xE27B, 0xE335, 0xE3F5, 0xE586, 
    0xE766, 0xE8A5, 0xE9C1, 0xEAE1, 0xEC2F, 0xEDB2, 0xEF52, 0xF106, 0xF2C8, 0xF490, 0xF655, 0xF811, 0xF9BB, 0xFB4C, 
    0xFCBD, 0xFE06, 0xFF1F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 
};

JointIndex sDoorHumanOpenRightAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorHumanOpenRightAnim = { 
    { 85 }, sDoorHumanOpenRightAnimFrameData,
    sDoorHumanOpenRightAnimJointIndices, 2
};

s16 sDoorFierceDeityZoraOpenLeftAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEB0, 
    0xFC16, 0xF8C9, 0xF561, 0xF276, 0xEFF6, 0xED6C, 0xEAE2, 0xE85F, 0xE5EB, 0xE390, 0xE154, 0xDF41, 0xDD5E, 0xDCA1, 
    0xDD03, 0xDD16, 0xDC61, 0xDB5C, 0xD9FE, 0xD763, 0xD54F, 0xD51D, 0xD56E, 0xD618, 0xD6F0, 0xD7F4, 0xD939, 0xDAB0, 
    0xDC4A, 0xDD97, 0xDF2B, 0xE285, 0xECEC, 0xF1B8, 0xF6A1, 0xFAE4, 0xFE4B, 0xFFCE, 0x0017, 0x0000, 
};

JointIndex sDoorFierceDeityZoraOpenLeftAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorFierceDeityZoraOpenLeftAnim = { 
    { 66 }, sDoorFierceDeityZoraOpenLeftAnimFrameData,
    sDoorFierceDeityZoraOpenLeftAnimJointIndices, 2
};

u8 gameplay_keep_possiblePadding_020668[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_020670[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_020670.vtx.inc"
};

Gfx gameplay_keep_DL_020B30[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_020E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_020670[68], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 2, 1, 0),
    gsSP2Triangles(0, 6, 3, 0, 0, 7, 6, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gDoorLeftDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_020E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(gameplay_keepVtx_020670, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[4], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[10], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[14], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[18], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[26], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gameplay_keep_DL_020B30),
    gsSPEndDisplayList(),
};

Gfx gDoorRightDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_020E38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_020670[34], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[38], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[48], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[52], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_020670[60], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gameplay_keep_DL_020B30),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_020E38[] = {
#include "assets/objects/gameplay_keep/tex_020E38.rgba16.inc.c"
};

Vtx gameplay_keepVtx_021E38[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_021E38.vtx.inc"
};

Gfx gameplay_keep_DL_0221B8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0226E8, G_IM_FMT_I, G_IM_SIZ_8b, 8, 128, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_021E38, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_0222E8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_021E38[32], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_0222E8[] = {
#include "assets/objects/gameplay_keep/tex_0222E8.i4.inc.c"
};

u64 gameplay_keep_Tex_0226E8[] = {
#include "assets/objects/gameplay_keep/tex_0226E8.i8.inc.c"
};

StandardLimb gameplay_keep_Standardlimb_022AE8 = { 
    { 0, 0, 0 }, DOOR_LIMB_2 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_022AF4 = { 
    { -2700, 0, 0 }, DOOR_LIMB_3 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_022B00 = { 
    { 0, 0, 0 }, DOOR_LIMB_4 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_022B0C = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gDoorLeftDL
};

void* gDoorSkelLimbs[] = {
    &gameplay_keep_Standardlimb_022AE8, /* DOOR_LIMB_1 */
    &gameplay_keep_Standardlimb_022AF4, /* DOOR_LIMB_2 */
    &gameplay_keep_Standardlimb_022B00, /* DOOR_LIMB_3 */
    &gameplay_keep_Standardlimb_022B0C, /* DOOR_LIMB_4 */
};

SkeletonHeader gDoorSkel = { 
    gDoorSkelLimbs, ARRAY_COUNT(gDoorSkelLimbs)
};

s16 sDoorFierceDeityZoraOpenRightAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE4E, 0xFAF1, 0xF6BC, 0xF284, 0xED1E, 0xE732, 
    0xE455, 0xE3FA, 0xE3AC, 0xE36B, 0xE336, 0xE30A, 0xE2E8, 0xE2CC, 0xE2B6, 0xE2A4, 0xE295, 0xE288, 0xE27A, 0xE26B, 
    0xE258, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE3AC, 0xE59E, 0xE723, 0xE8B8, 0xEA58, 0xEC01, 
    0xEDB0, 0xEF61, 0xF112, 0xF2BF, 0xF465, 0xF601, 0xF790, 0xF90F, 0xFA7A, 0xFBCE, 0xFD09, 0xFE27, 0xFF25, 0x0000, 
    0xFFA6, 0xFF4B, 0xFF22, 0xFF6C, 0xFFB6, 0x0000, 
};

JointIndex sDoorFierceDeityZoraOpenRightAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorFierceDeityZoraOpenRightAnim = { 
    { 74 }, sDoorFierceDeityZoraOpenRightAnimFrameData,
    sDoorFierceDeityZoraOpenRightAnimJointIndices, 2
};

u8 gameplay_keep_possiblePadding_022BF8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sDoorGoronOpenLeftAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0062, 
    0xFF38, 0xF82E, 0xDEB0, 0xC6DE, 0xC252, 0xC2E5, 0xC5A8, 0xC7AF, 0xC94E, 0xCAEF, 0xCB9B, 0xCC36, 0xCCB7, 0xCD13, 
    0xCD40, 0xCD32, 0xCCC8, 0xCC03, 0xCB0F, 0xCA16, 0xC946, 0xC8C8, 0xC889, 0xC858, 0xC836, 0xC826, 0xC82A, 0xC843, 
    0xC874, 0xC8BE, 0xC924, 0xCD55, 0xF956, 0x0000, 0x024C, 0x01D1, 0x00E6, 0xFF8B, 0xFE38, 0x0000, 
};

JointIndex sDoorGoronOpenLeftAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorGoronOpenLeftAnim = { 
    { 66 }, sDoorGoronOpenLeftAnimFrameData,
    sDoorGoronOpenLeftAnimJointIndices, 2
};

u8 gameplay_keep_possiblePadding_022CB8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sDoorGoronOpenRightAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE70, 0xFB4B, 0xF721, 0xF284, 0xEDD9, 0xE809, 
    0xDF72, 0xC863, 0xC835, 0xCB59, 0xCAD9, 0xC9CA, 0xC8A4, 0xC7E1, 0xC7FB, 0xCA43, 0xCE10, 0xD0E0, 0xD244, 0xD37F, 
    0xD498, 0xD599, 0xD68A, 0xD774, 0xD860, 0xD956, 0xDA60, 0xDB85, 0xDCD0, 0xDE49, 0xDFF2, 0xE1C4, 0xE3BA, 0xE5CC, 
    0xE7F4, 0xEA2C, 0xEC6B, 0xEEAD, 0xF0EA, 0xF31C, 0xF53D, 0xF744, 0xF92D, 0xFAF0, 0xFC87, 0xFDEB, 0xFF16, 0x0000, 
    0xFFAF, 0xFF5D, 0xFF0C, 0xFF5D, 0xFFAF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 
};

JointIndex sDoorGoronOpenRightAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorGoronOpenRightAnim = { 
    { 85 }, sDoorGoronOpenRightAnimFrameData,
    sDoorGoronOpenRightAnimJointIndices, 2
};

s16 sDoorDekuOpenLeftAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0xFF5C, 0xFDC9, 0xFBB8, 0xF997, 0xF7D5, 0xF663, 0xF4E8, 0xF368, 0xF1E5, 0xF064, 
    0xEEE5, 0xED6E, 0xEC01, 0xEAA0, 0xE950, 0xE812, 0xE6EB, 0xE5DC, 0xE4EA, 0xE421, 0xE387, 0xE314, 0xE2C1, 0xE287, 
    0xE260, 0xE243, 0xE22A, 0xE20D, 0xE1E6, 0xE1AC, 0xE1B3, 0xDEC2, 0xDC25, 0xDAE8, 0xD994, 0xD838, 0xD6E1, 0xD59C, 
    0xD476, 0xD37C, 0xD2BC, 0xD242, 0xD21C, 0xD258, 0xD703, 0xE1DA, 0xF8B2, 0x004E, 0x0342, 0x0216, 0x0000, 0x0000, 
    
};

JointIndex sDoorDekuOpenLeftAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorDekuOpenLeftAnim = { 
    { 81 }, sDoorDekuOpenLeftAnimFrameData,
    sDoorDekuOpenLeftAnimJointIndices, 2
};

u8 gGameplayKeepEmptyBlob[] = {
#include "assets/objects/gameplay_keep/gGameplayKeepEmptyBlob.bin.inc.c"
};

s16 sDoorDekuOpenRightAnimFrameData[] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFD8E, 0xFB1C, 0xF8AB, 0xF791, 0xF6F5, 
    0xF674, 0xF5AD, 0xF47E, 0xF30A, 0xF155, 0xEF8A, 0xEC81, 0xE6C6, 0xE032, 0xDBBD, 0xD973, 0xD783, 0xD61B, 0xD568, 
    0xD599, 0xD6D9, 0xD96E, 0xDD33, 0xE1BF, 0xE6A7, 0xEB81, 0xEFE3, 0xF361, 0xF592, 0xF6E6, 0xF818, 0xF929, 0xFA1B, 
    0xFAF1, 0xFBAB, 0xFC4D, 0xFCD7, 0xFD4C, 0xFDAE, 0xFDFE, 0xFE3F, 0xFE73, 0xFE9A, 0xFEB9, 0xFECF, 0xFEE0, 0xFEED, 
    0xFEF8, 0xFF03, 0xFF22, 0xFF6C, 0xFFB6, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 
};

JointIndex sDoorDekuOpenRightAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gDoorDekuOpenRightAnim = { 
    { 85 }, sDoorDekuOpenRightAnimFrameData,
    sDoorDekuOpenRightAnimJointIndices, 2
};

BgCamInfo gFramedDoorColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gFramedDoorColSurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gFramedDoorColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xD120},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xD120},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x8001, 0xF448},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x8001, 0xF448},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x8001, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x8001, 0x0000, 0x0000, 0xE890},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF448},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xF448},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gFramedDoorColVertices[] = {
    {   6000,  12000,   3000 },
    {   6000,  12000,  -3000 },
    {  -6000,  12000,  -3000 },
    {  -6000,  12000,   3000 },
    {   6000,      0,  -3000 },
    {   6000,      0,   3000 },
    {  -6000,      0,  -3000 },
    {  -6000,      0,   3000 },
};

CollisionHeader gFramedDoorCol = { 
    { -6000, 0, -3000 },
    { 6000, 12000, 3000 },
    ARRAY_COUNT(gFramedDoorColVertices), gFramedDoorColVertices,
    ARRAY_COUNT(gFramedDoorColPolygons), gFramedDoorColPolygons,
    gFramedDoorColSurfaceType,
    gFramedDoorColCamDataList,
    0, NULL
};

Gfx gEffDustDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_023188, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_023188[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_023188.vtx.inc"
};

u8 gameplay_keep_possiblePadding_0231C8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_0231D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0231D0.vtx.inc"
};

Gfx gEffFlash1DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetOtherMode(G_AD_NOTPATTERN | G_CD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                     G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE, G_AC_THRESHOLD | G_ZS_PIXEL | G_RM_PASS |
                     G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(gameplay_keepVtx_0231D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gEffFlash2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetOtherMode(G_AD_NOTPATTERN | G_CD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                     G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE, G_AC_THRESHOLD | G_ZS_PIXEL | G_RM_PASS |
                     G_RM_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(gameplay_keepVtx_0231D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_023308[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_023308.vtx.inc"
};

Gfx gLightOrbMaterial1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gLightOrbMaterial2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gLightOrbModelDL[] = {
    gsSPVertex(gameplay_keepVtx_023308, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_023440[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_023440.vtx.inc"
};

Gfx gElectricSparkMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
};

Gfx gElectricSparkModelDL[] = {
    gsSPVertex(gameplay_keepVtx_023440, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

u64 gFlashTex[] = {
#include "assets/objects/gameplay_keep/flash.i8.inc.c"
};

u8 gameplay_keep_possiblePadding_024508[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gSpinAttack1Tex[] = {
#include "assets/objects/gameplay_keep/spin_attack_1.i8.inc.c"
};

u64 gSpinAttack2Tex[] = {
#include "assets/objects/gameplay_keep/spin_attack_2.i8.inc.c"
};

Vtx gameplay_keepVtx_025510[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_025510.vtx.inc"
};

Gfx gSpinAttackDiskDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSpinAttack1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSpinAttack2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(0, 0, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_025510, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(24, 3, 25, 0, 24, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gSpinAttackCylinderDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSpinAttack1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSpinAttack2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(0, 100, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_025510[26], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 3, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 11, 12, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 13, 14, 0, 17, 16, 18, 0),
    gsSP2Triangles(17, 15, 16, 0, 19, 18, 20, 0),
    gsSP2Triangles(19, 17, 18, 0, 21, 20, 22, 0),
    gsSP2Triangles(21, 19, 20, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 21, 22, 0, 25, 24, 1, 0),
    gsSP2Triangles(25, 23, 24, 0, 0, 25, 1, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_025A90[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_025A90.vtx.inc"
};

Gfx gGreatSpinAttackDiskDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSpinAttack1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSpinAttack2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(255, 0, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_025A90, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(24, 3, 25, 0, 24, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gGreatSpinAttackCylinderDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSpinAttack1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSpinAttack2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(255, 100, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_025A90[26], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 3, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 11, 12, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 13, 14, 0, 17, 16, 18, 0),
    gsSP2Triangles(17, 15, 16, 0, 19, 18, 20, 0),
    gsSP2Triangles(19, 17, 18, 0, 21, 20, 22, 0),
    gsSP2Triangles(21, 19, 20, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 21, 22, 0, 25, 24, 1, 0),
    gsSP2Triangles(25, 23, 24, 0, 0, 25, 1, 0),
    gsSPEndDisplayList(),
};

u64 gSpinAttackCharging1Tex[] = {
#include "assets/objects/gameplay_keep/spin_attack_charging_1.i8.inc.c"
};

u64 gSpinAttackCharging2Tex[] = {
#include "assets/objects/gameplay_keep/spin_attack_charging_2.i8.inc.c"
};

Vtx gameplay_keepVtx_026810[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_026810.vtx.inc"
};

Gfx gSpinAttackChargingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSpinAttackCharging1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSpinAttackCharging2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 14, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x09000000),
    gsSPVertex(gameplay_keepVtx_026810, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 8, 0, 3, 2, 12, 0),
    gsSP2Triangles(3, 12, 11, 0, 8, 10, 13, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_0269D8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gSwordBeam1Tex[] = {
#include "assets/objects/gameplay_keep/sword_beam_1.i8.inc.c"
};

u64 gSwordBeam2Tex[] = {
#include "assets/objects/gameplay_keep/sword_beam_2.i8.inc.c"
};

Vtx gameplay_keepVtx_0279E0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0279E0.vtx.inc"
};

Gfx gSwordBeamDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSwordBeam1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSwordBeam2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 1),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_0279E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 7, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 13, 11, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 15, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
    gsSP2Triangles(20, 24, 25, 0, 20, 26, 24, 0),
    gsSP2Triangles(27, 28, 25, 0, 26, 29, 30, 0),
    gsSP1Triangle(26, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0279E0[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 5, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_027DC8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u16 gameplay_keep_flexBitFlags_0281DC[] = {
    0x0000, 0x01C0, 
};

s16 gameplay_keep_kfNums_0281DC[] = {
    0x0039, 0x0033, 0x0039, 
};

s16 gameplay_keep_presetValues_0281DC[] = {
    0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 

};

KeyFrame gameplay_keep_KeyFrame_0281DC[] = {
     { 1, 700, -461, },
     { 3, 669, -452, },
     { 4, 655, -445, },
     { 6, 625, -433, },
     { 7, 611, -426, },
     { 9, 583, -414, },
     { 11, 556, -401, },
     { 13, 530, -388, },
     { 15, 504, -375, },
     { 17, 480, -362, },
     { 19, 456, -349, },
     { 21, 433, -336, },
     { 22, 422, -329, },
     { 23, 411, -322, },
     { 24, 400, -316, },
     { 25, 390, -309, },
     { 27, 370, -296, },
     { 29, 351, -282, },
     { 31, 332, -269, },
     { 32, 323, -262, },
     { 33, 315, -255, },
     { 35, 298, -242, },
     { 37, 283, -228, },
     { 39, 268, -214, },
     { 41, 254, -200, },
     { 42, 247, -193, },
     { 43, 241, -186, },
     { 44, 235, -179, },
     { 46, 224, -165, },
     { 48, 213, -151, },
     { 49, 208, -144, },
     { 50, 203, -137, },
     { 51, 199, -130, },
     { 53, 191, -116, },
     { 54, 187, -108, },
     { 55, 183, -101, },
     { 56, 180, -94, },
     { 57, 177, -87, },
     { 58, 174, -80, },
     { 60, 170, -70, },
     { 61, 167, -75, },
     { 62, 165, -82, },
     { 63, 162, -90, },
     { 65, 155, -103, },
     { 67, 148, -116, },
     { 69, 140, -128, },
     { 71, 131, -139, },
     { 73, 121, -149, },
     { 75, 111, -158, },
     { 77, 100, -166, },
     { 79, 89, -174, },
     { 81, 77, -180, },
     { 83, 65, -186, },
     { 85, 53, -191, },
     { 87, 40, -195, },
     { 89, 27, -198, },
     { 90, 20, -198, },
     { 1, 20, 3, },
     { 3, 20, 12, },
     { 5, 22, 23, },
     { 7, 23, 35, },
     { 8, 25, 41, },
     { 10, 28, 52, },
     { 12, 32, 64, },
     { 14, 36, 76, },
     { 16, 42, 87, },
     { 18, 48, 99, },
     { 20, 55, 111, },
     { 22, 63, 123, },
     { 24, 71, 134, },
     { 25, 76, 140, },
     { 27, 86, 152, },
     { 29, 96, 164, },
     { 31, 108, 176, },
     { 33, 120, 188, },
     { 35, 133, 199, },
     { 37, 146, 211, },
     { 39, 161, 223, },
     { 41, 176, 235, },
     { 42, 184, 241, },
     { 43, 192, 247, },
     { 45, 209, 259, },
     { 47, 227, 271, },
     { 49, 245, 283, },
     { 50, 255, 289, },
     { 52, 274, 301, },
     { 54, 295, 313, },
     { 56, 316, 325, },
     { 58, 338, 337, },
     { 60, 361, 349, },
     { 61, 373, 355, },
     { 63, 397, 367, },
     { 65, 421, 379, },
     { 66, 434, 385, },
     { 67, 447, 391, },
     { 68, 460, 397, },
     { 70, 487, 409, },
     { 72, 515, 421, },
     { 74, 543, 433, },
     { 75, 558, 439, },
     { 77, 587, 451, },
     { 79, 618, 463, },
     { 81, 649, 475, },
     { 82, 665, 482, },
     { 84, 698, 494, },
     { 86, 731, 506, },
     { 88, 765, 518, },
     { 90, 800, 527, },
     { 1, 700, -461, },
     { 3, 669, -452, },
     { 4, 655, -445, },
     { 6, 625, -433, },
     { 7, 611, -426, },
     { 9, 583, -414, },
     { 11, 556, -401, },
     { 13, 530, -388, },
     { 15, 504, -375, },
     { 17, 480, -362, },
     { 19, 456, -349, },
     { 21, 433, -336, },
     { 22, 422, -329, },
     { 23, 411, -322, },
     { 24, 400, -316, },
     { 25, 390, -309, },
     { 27, 370, -296, },
     { 29, 351, -282, },
     { 31, 332, -269, },
     { 32, 323, -262, },
     { 33, 315, -255, },
     { 35, 298, -242, },
     { 37, 283, -228, },
     { 39, 268, -214, },
     { 41, 254, -200, },
     { 42, 247, -193, },
     { 43, 241, -186, },
     { 44, 235, -179, },
     { 46, 224, -165, },
     { 48, 213, -151, },
     { 49, 208, -144, },
     { 50, 203, -137, },
     { 51, 199, -130, },
     { 53, 191, -116, },
     { 54, 187, -108, },
     { 55, 183, -101, },
     { 56, 180, -94, },
     { 57, 177, -87, },
     { 58, 174, -80, },
     { 60, 170, -70, },
     { 61, 167, -75, },
     { 62, 165, -82, },
     { 63, 162, -90, },
     { 65, 155, -103, },
     { 67, 148, -116, },
     { 69, 140, -128, },
     { 71, 131, -139, },
     { 73, 121, -149, },
     { 75, 111, -158, },
     { 77, 100, -166, },
     { 79, 89, -174, },
     { 81, 77, -180, },
     { 83, 65, -186, },
     { 85, 53, -191, },
     { 87, 40, -195, },
     { 89, 27, -198, },
     { 90, 20, -198, },
};

KeyFrameAnimation gameplay_keep_KFAnim_0281DC = { 
    gameplay_keep_flexBitFlags_0281DC, gameplay_keep_KeyFrame_0281DC, gameplay_keep_kfNums_0281DC,
    gameplay_keep_presetValues_0281DC, 0xFFFF, 0x005A
};

Vtx gameplay_keepVtx_0281F0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0281F0.vtx.inc"
};

Gfx gameplay_keep_DL_0282D0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, SHADE, 0, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_028BB8, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 1),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_0283B8, 0x0080, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 4),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0281F0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 7, 6, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(2, 1, 12, 0, 1, 13, 12, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_0283B8[] = {
#include "assets/objects/gameplay_keep/tex_0283B8.i4.inc.c"
};

u64 gameplay_keep_Tex_028BB8[] = {
#include "assets/objects/gameplay_keep/tex_028BB8.i8.inc.c"
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_028FB8[] = {
    { 255, 255, 170, 0, 128 },
    { 255, 255, 170, 255, 128 },
    { 255, 255, 170, 255, 128 },
    { 255, 255, 170, 255, 128 },
};

u16 gameplay_keepTexColorChangingFrameData_028FCC[] = {
    0, 19, 49, 59,
};

AnimatedMatColorParams gameplay_keep_Matanimheader_028FECColorParams_028FD4 = { 
    60, 4, gameplay_keepTexColorChangingPrimColors_028FB8, NULL, gameplay_keepTexColorChangingFrameData_028FCC,
};

AnimatedMatTexScrollParams gameplay_keep_Matanimheader_028FECTexScrollParams_028FE4[] = {
    { -3, 1, 0x20, 0x20 },
    { 3, 6, 0x40, 0x40 },
};

AnimatedMaterial gameplay_keep_Matanimheader_028FEC[] = {
    { 1, 3, &gameplay_keep_Matanimheader_028FECColorParams_028FD4 },
    { -2, 1, gameplay_keep_Matanimheader_028FECTexScrollParams_028FE4 },
};

KeyFrameFlexLimb gameplay_keep_KeyFrameLimbs_02900C[] = {
    { NULL, 0x01, 0x01, 0xFF },
    { gameplay_keep_DL_0282D0, 0x00, 0x01, 0xFF },
};

KeyFrameFlexSkeleton gameplay_keep_KFSkel_02900C = { 
    0x02, 0x01, gameplay_keep_KeyFrameLimbs_02900C
};

u8 gameplay_keep_possiblePadding_029014[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sameplay_keep_Anim_029140FrameData[] = {
    0x0000, 0x0701, 0x0AC0, 0x0EF7, 0x0FEE, 0x0EF7, 0x0701, 0x0AC0, 0x0EF7, 0x0F62, 0x0EF7, 0x1726, 0x15CC, 0x134E, 
    0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x4CB7, 0x53DA, 0x5C8A, 0x5EB2, 0x5C8A, 0x4CB7, 0x53DA, 
    0x5C8A, 0x5D78, 0x5C8A, 0xF8FF, 0xF540, 0xF109, 0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 0xF109, 0x1726, 
    0x15CC, 0x134E, 0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x3349, 0x2C26, 0x2376, 0x214E, 0x2376, 
    0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0xF8FF, 0xF533, 0xF109, 0xF01D, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 
    0xF109, 0x68DA, 0x6A3A, 0x6CB2, 0x6D6E, 0x6CB2, 0x68DA, 0x6A34, 0x6CB2, 0x6D05, 0x6CB2, 0x3349, 0x2C0D, 0x2376, 
    0x2165, 0x2376, 0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0x0701, 0x8ACD, 0x8EF7, 0x8FE3, 0x8EF7, 0x0701, 0x8AC0, 
    0x8EF7, 0x8F62, 0x8EF7, 0x68DA, 0x15C6, 0x134E, 0x1292, 0x134E, 0x68DA, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x4CB7, 
    0xD3F3, 0xDC8A, 0xDE9B, 0xDC8A, 0x4CB7, 0xD3DA, 0xDC8A, 0xDD78, 0xDC8A, 0x0000, 
};

JointIndex sameplay_keep_Anim_029140JointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x000B, 0x0015 },
    { 0x001F, 0x0029, 0x0033 },
    { 0x003D, 0x0047, 0x0051 },
    { 0x005B, 0x0065, 0x006F },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_029140 = { 
    { 10 }, sameplay_keep_Anim_029140FrameData,
    sameplay_keep_Anim_029140JointIndices, 1
};

u64 gameplay_keep_Tex_029150[] = {
#include "assets/objects/gameplay_keep/tex_029150.i8.inc.c"
};

Vtx gameplay_keepVtx_029950[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029950.vtx.inc"
};

Gfx gameplay_keep_DL_029990[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_029150, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(gameplay_keepVtx_029950, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_029A18[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029A18.vtx.inc"
};

Gfx gameplay_keep_DL_029A58[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_029150, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(gameplay_keepVtx_029A18, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_029AE0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029AE0.vtx.inc"
};

Gfx gameplay_keep_DL_029B20[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_029150, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(gameplay_keepVtx_029AE0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_029BA8[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029BA8.vtx.inc"
};

Gfx gameplay_keep_DL_029BE8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_029150, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(gameplay_keepVtx_029BA8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_029C70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029C70.vtx.inc"
};

Gfx gameplay_keep_DL_029CB0[] = {
    gsDPLoadTextureBlock(gameplay_keep_Tex_08FBE0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_029CF0[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(gameplay_keepVtx_029C70, 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_029D10[] = {
    gsSPMatrix(0x01000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(0x08000000),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPLoadTextureBlock(gameplay_keep_Tex_08FBE0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gameplay_keep_Tex_090BE0, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_029E78, 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0903E0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gameplay_keep_Tex_0913E0, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_029E78[4], 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_029E78[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_029E78.vtx.inc"
};

u64 gameplay_keep_Tex_029EF8[] = {
#include "assets/objects/gameplay_keep/tex_029EF8.rgba16.inc.c"
};

StandardLimb gameplay_keep_Standardlimb_02AEF8 = { 
    { 0, 0, 0 }, FAIRY_LIMB_2 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_02AF04 = { 
    { 0, 0, 0 }, LIMB_DONE, FAIRY_LIMB_3 - 1,
    gameplay_keep_DL_029990
};

StandardLimb gameplay_keep_Standardlimb_02AF10 = { 
    { 0, 0, 0 }, LIMB_DONE, FAIRY_LIMB_4 - 1,
    gameplay_keep_DL_029A58
};

StandardLimb gameplay_keep_Standardlimb_02AF1C = { 
    { 0, 0, 0 }, LIMB_DONE, FAIRY_LIMB_5 - 1,
    gameplay_keep_DL_029B20
};

StandardLimb gameplay_keep_Standardlimb_02AF28 = { 
    { 0, 0, 0 }, LIMB_DONE, FAIRY_LIMB_6 - 1,
    gameplay_keep_DL_029BE8
};

StandardLimb gameplay_keep_Standardlimb_02AF34 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_029D10
};

void* gameplay_keep_Skel_02AF58Limbs[] = {
    &gameplay_keep_Standardlimb_02AEF8, /* FAIRY_LIMB_1 */
    &gameplay_keep_Standardlimb_02AF04, /* FAIRY_LIMB_2 */
    &gameplay_keep_Standardlimb_02AF10, /* FAIRY_LIMB_3 */
    &gameplay_keep_Standardlimb_02AF1C, /* FAIRY_LIMB_4 */
    &gameplay_keep_Standardlimb_02AF28, /* FAIRY_LIMB_5 */
    &gameplay_keep_Standardlimb_02AF34, /* FAIRY_LIMB_6 */
};

FlexSkeletonHeader gameplay_keep_Skel_02AF58 = { 
    { gameplay_keep_Skel_02AF58Limbs, ARRAY_COUNT(gameplay_keep_Skel_02AF58Limbs) }, 5
};

u8 gameplay_keep_possiblePadding_02AF64[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sameplay_keep_Anim_02B2E8FrameData[] = {
    0x0000, 0x0134, 0x0134, 0x0128, 0x0106, 0x00D4, 0x0094, 0x004C, 0x0000, 0xFFB4, 0xFF6C, 0xFF2C, 0xFEFA, 0xFED8, 
    0xFECC, 0xFECB, 0xFED2, 0xFEEE, 0xFF1D, 0xFF52, 0xFF8B, 0xFFC5, 0x0001, 0x003B, 0x0074, 0x00A8, 0x00D6, 0x00FD, 
    0x011B, 0x012F, 0x0000, 0x0013, 0x0027, 0x003A, 0x004B, 0x0056, 0x005B, 0x0058, 0x0050, 0x0044, 0x0035, 0x0024, 
    0x0012, 0x0000, 0xFFEE, 0xFFDC, 0xFFCB, 0xFFBC, 0xFFB0, 0xFFA8, 0xFFA5, 0xFFA7, 0xFFAD, 0xFFB6, 0xFFC1, 0xFFCF, 
    0xFFDE, 0xFFEF, 0x049C, 0x0386, 0x0247, 0x00ED, 0xFF8C, 0xFE32, 0xFCF2, 0xFBDC, 0xFB00, 0xFA70, 0xFA3C, 0xFA63, 
    0xFAD1, 0xFB7C, 0xFC57, 0xFD59, 0xFE75, 0xFFA3, 0x00D5, 0x0202, 0x031F, 0x0421, 0x04FC, 0x05A6, 0x0614, 0x063B, 
    0x0605, 0x0578, 0x0EF7, 0x0AC0, 0x0EF7, 0x0FEE, 0x0EF7, 0x0701, 0x0AC0, 0x0EF7, 0x0F62, 0x0EF7, 0x0AC0, 0x0EF7, 
    0x0FEE, 0x0EF7, 0x0701, 0x0AC0, 0x0EF7, 0x0F62, 0x0EF7, 0x0AC0, 0x0EF7, 0x0FEE, 0x0EF7, 0x0701, 0x0AC0, 0x0EF7, 
    0x0F62, 0x0EF7, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 
    0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 
    0x12FB, 0x134E, 0x5C8A, 0x53DA, 0x5C8A, 0x5EB2, 0x5C8A, 0x4CB7, 0x53DA, 0x5C8A, 0x5D78, 0x5C8A, 0x53DA, 0x5C8A, 
    0x5EB2, 0x5C8A, 0x4CB7, 0x53DA, 0x5C8A, 0x5D78, 0x5C8A, 0x53DA, 0x5C8A, 0x5EB2, 0x5C8A, 0x4CB7, 0x53DA, 0x5C8A, 
    0x5D78, 0x5C8A, 0xF109, 0xF540, 0xF109, 0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 0xF109, 0xF540, 0xF109, 
    0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 0xF109, 0xF540, 0xF109, 0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 
    0xF09E, 0xF109, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 
    0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x1726, 0x15CC, 0x134E, 
    0x12FB, 0x134E, 0x2376, 0x2C26, 0x2376, 0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0x2C26, 0x2376, 
    0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0x2C26, 0x2376, 0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 
    0x2288, 0x2376, 0xF109, 0xF540, 0xF109, 0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 0xF109, 0xF540, 0xF109, 
    0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 0xF09E, 0xF109, 0xF540, 0xF109, 0xF012, 0xF109, 0xF8FF, 0xF540, 0xF109, 
    0xF09E, 0xF109, 0x6CB2, 0x6A34, 0x6CB2, 0x6D76, 0x6CB2, 0x68DA, 0x6A34, 0x6CB2, 0x6D05, 0x6CB2, 0x6A34, 0x6CB2, 
    0x6D76, 0x6CB2, 0x68DA, 0x6A34, 0x6CB2, 0x6D05, 0x6CB2, 0x6A34, 0x6CB2, 0x6D76, 0x6CB2, 0x68DA, 0x6A34, 0x6CB2, 
    0x6D05, 0x6CB2, 0x2376, 0x2C26, 0x2376, 0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0x2C26, 0x2376, 
    0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 0x2288, 0x2376, 0x2C26, 0x2376, 0x214E, 0x2376, 0x3349, 0x2C26, 0x2376, 
    0x2288, 0x2376, 0x8EF7, 0x8AC0, 0x8EF7, 0x8FEE, 0x8EF7, 0x0701, 0x8AC0, 0x8EF7, 0x8F62, 0x8EF7, 0x8AC0, 0x8EF7, 
    0x8FEE, 0x8EF7, 0x0701, 0x8AC0, 0x8EF7, 0x8F62, 0x8EF7, 0x8AC0, 0x8EF7, 0x8FEE, 0x8EF7, 0x0701, 0x8AC0, 0x8EF7, 
    0x8F62, 0x8EF7, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x68DA, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 
    0x128A, 0x134E, 0x68DA, 0x15CC, 0x134E, 0x12FB, 0x134E, 0x15CC, 0x134E, 0x128A, 0x134E, 0x68DA, 0x15CC, 0x134E, 
    0x12FB, 0x134E, 0xDC8A, 0xD3DA, 0xDC8A, 0xDEB2, 0xDC8A, 0x4CB7, 0xD3DA, 0xDC8A, 0xDD78, 0xDC8A, 0xD3DA, 0xDC8A, 
    0xDEB2, 0xDC8A, 0x4CB7, 0xD3DA, 0xDC8A, 0xDD78, 0xDC8A, 0xD3DA, 0xDC8A, 0xDEB2, 0xDC8A, 0x4CB7, 0xD3DA, 0xDC8A, 
    0xDD78, 0xDC8A, 
};

JointIndex sameplay_keep_Anim_02B2E8JointIndices[] = {
    { 0x0000, 0x0002, 0x001E },
    { 0x003A, 0x0000, 0x0000 },
    { 0x0056, 0x0072, 0x008E },
    { 0x00AA, 0x00C6, 0x00E2 },
    { 0x00FE, 0x011A, 0x0136 },
    { 0x0152, 0x016E, 0x018A },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_02B2E8 = { 
    { 28 }, sameplay_keep_Anim_02B2E8FrameData,
    sameplay_keep_Anim_02B2E8JointIndices, 2
};

u8 gameplay_keep_possiblePadding_02B2F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sStrayFairyFlyingAnimFrameData[] = {
    0x0000, 0x007D, 0x8000, 0x0000, 0x000B, 0x0027, 0x004B, 0x006F, 0x008B, 0x0096, 0x008B, 0x006F, 0x004B, 0x0027, 
    0x000B, 0x0000, 0x000B, 0x0027, 0x004B, 0x006F, 0x008B, 0x0096, 0x008B, 0x006F, 0x004B, 0x0027, 0x000B, 0x2BB8, 
    0x0D03, 0xEE4E, 0xF7E7, 0x0D03, 0x221F, 0x2BB8, 0x0D03, 0xEE4E, 0xF7E7, 0x0D03, 0x221F, 0x2BB8, 0x0D03, 0xEE4E, 
    0xF7E7, 0x0D03, 0x221F, 0x2BB8, 0x0D03, 0xEE4E, 0xF7E7, 0x0D03, 0x221F, 0xD448, 0xF2FD, 0x11B2, 0x0819, 0xF2FD, 
    0xDDE1, 0xD448, 0xF2FD, 0x11B2, 0x0819, 0xF2FD, 0xDDE1, 0xD448, 0xF2FD, 0x11B2, 0x0819, 0xF2FD, 0xDDE1, 0xD448, 
    0xF2FD, 0x11B2, 0x0819, 0xF2FD, 0xDDE1, 0xFFCA, 0xFF1C, 0xFD68, 0xFB31, 0xF8FB, 0xF747, 0xF698, 0xF71B, 0xF86F, 
    0xFA46, 0xFC51, 0xFE42, 0xFFCA, 0x010D, 0x0250, 0x0379, 0x046D, 0x0513, 0x0550, 0x04E8, 0x03E2, 0x028D, 0x0139, 
    0x0033, 0x2715, 0x2256, 0x1D90, 0x195B, 0x1515, 0x1022, 0x0B28, 0x06CD, 0x03B7, 0x028A, 0x03B7, 0x06CD, 0x0B28, 
    0x1022, 0x1515, 0x195B, 0x1D90, 0x2256, 0x2715, 0x2B35, 0x2E1F, 0x2F39, 0x2E1F, 0x2B35, 0x0D7C, 0x08C2, 0x0417, 
    0x001A, 0xFC43, 0xF7F5, 0xF3B5, 0xF007, 0xED71, 0xEC77, 0xED71, 0xF007, 0xF3B5, 0xF7F5, 0xFC43, 0x001A, 0x0417, 
    0x08C2, 0x0D7C, 0x11A2, 0x1496, 0x15B5, 0x1496, 0x11A2, 0xF469, 0xEEE0, 0xE99B, 0xE56C, 0xE1F0, 0xDE6A, 0xDB28, 
    0xD875, 0xD69E, 0xD5F1, 0xD69E, 0xD875, 0xDB28, 0xDE6A, 0xE1F0, 0xE56C, 0xE99B, 0xEEE0, 0xF469, 0xF961, 0xFCF7, 
    0xFE58, 0xFCF7, 0xF961, 0x0000, 
};

JointIndex sStrayFairyFlyingAnimJointIndices[] = {
    { 0x0000, 0x0003, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x001B },
    { 0x0000, 0x0002, 0x0033 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x004B },
    { 0x0000, 0x0002, 0x0063 },
    { 0x0000, 0x0000, 0x007B },
    { 0x0000, 0x0000, 0x0093 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gStrayFairyFlyingAnim = { 
    { 24 }, sStrayFairyFlyingAnimFrameData,
    sStrayFairyFlyingAnimJointIndices, 3
};

u8 gameplay_keep_possiblePadding_02B4A4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_02B4B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_02B4B0.vtx.inc"
};

Gfx gStrayFairyRightFacingHeadDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyRightFacingHeadTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyLeftFacingHeadDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyLeftFacingHeadTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyGlowDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 180, 30, 90),
    gsDPSetEnvColor(255, 180, 30, 255),
    gsSPDisplayList(0x09000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gStrayFairyGlowTex, G_IM_FMT_I, 16, 16, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[14], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyTorsoDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[11], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyLeftArmDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[5], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyPelvisAndLegsDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_02B4B0, 2, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&gameplay_keepVtx_02B4B0[2], 3, 2),
    gsSP2Triangles(2, 0, 1, 0, 3, 1, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyRightArmDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[8], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyRightWingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyWingTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[21], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gStrayFairyLeftWingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 200, 255),
    gsDPSetEnvColor(150, 50, 0, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStrayFairyWingTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_02B4B0[18], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gStrayFairyRightFacingHeadTex[] = {
#include "assets/objects/gameplay_keep/stray_fairy_right_facing_head.ia8.inc.c"
};

u64 gStrayFairyBodyTex[] = {
#include "assets/objects/gameplay_keep/stray_fairy_body.ia8.inc.c"
};

u64 gStrayFairyLeftFacingHeadTex[] = {
#include "assets/objects/gameplay_keep/stray_fairy_left_facing_head.ia8.inc.c"
};

u64 gStrayFairyWingTex[] = {
#include "assets/objects/gameplay_keep/stray_fairy_wing.ia8.inc.c"
};

u64 gStrayFairyGlowTex[] = {
#include "assets/objects/gameplay_keep/stray_fairy_glow.i4.inc.c"
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C7B0[] = {
    { 255, 255, 200, 255, 255 },
    { 255, 255, 200, 255, 255 },
    { 255, 255, 200, 255, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C7C0[] = {
    { 150, 50, 0, 255 },
    { 200, 100, 0, 255 },
    { 150, 50, 0, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C7CC[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyClockTownTexAnimColorParams_02C7D4 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C7B0, gameplay_keepTexColorChangingEnvColors_02C7C0,
    gameplay_keepTexColorChangingFrameData_02C7CC,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C7E4[] = {
    { 255, 180, 30, 90, 255 },
    { 255, 180, 50, 70, 255 },
    { 255, 180, 30, 90, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C7F4[] = {
    { 255, 180, 30, 255 },
    { 255, 180, 50, 255 },
    { 255, 180, 30, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C800[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyClockTownTexAnimColorParams_02C808 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C7E4, gameplay_keepTexColorChangingEnvColors_02C7F4,
    gameplay_keepTexColorChangingFrameData_02C800,
};

AnimatedMaterial gStrayFairyClockTownTexAnim[] = {
    { 1, 4, &gStrayFairyClockTownTexAnimColorParams_02C7D4 },
    { -2, 4, &gStrayFairyClockTownTexAnimColorParams_02C808 },
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C828[] = {
    { 255, 255, 200, 255, 255 },
    { 255, 255, 200, 255, 255 },
    { 255, 255, 200, 255, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C838[] = {
    { 40, 90, 0, 255 },
    { 60, 110, 0, 255 },
    { 40, 90, 0, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C844[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairySnowheadTexAnimColorParams_02C84C = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C828, gameplay_keepTexColorChangingEnvColors_02C838,
    gameplay_keepTexColorChangingFrameData_02C844,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C85C[] = {
    { 180, 230, 40, 90, 255 },
    { 180, 230, 40, 70, 255 },
    { 180, 230, 40, 90, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C86C[] = {
    { 180, 230, 40, 255 },
    { 180, 230, 40, 255 },
    { 180, 230, 40, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C878[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairySnowheadTexAnimColorParams_02C880 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C85C, gameplay_keepTexColorChangingEnvColors_02C86C,
    gameplay_keepTexColorChangingFrameData_02C878,
};

AnimatedMaterial gStrayFairySnowheadTexAnim[] = {
    { 1, 4, &gStrayFairySnowheadTexAnimColorParams_02C84C },
    { -2, 4, &gStrayFairySnowheadTexAnimColorParams_02C880 },
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C8A0[] = {
    { 255, 235, 255, 255, 255 },
    { 255, 235, 255, 255, 255 },
    { 255, 235, 255, 255, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C8B0[] = {
    { 170, 40, 100, 255 },
    { 200, 70, 130, 255 },
    { 170, 40, 100, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C8BC[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyWoodfallTexAnimColorParams_02C8C4 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C8A0, gameplay_keepTexColorChangingEnvColors_02C8B0,
    gameplay_keepTexColorChangingFrameData_02C8BC,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C8D4[] = {
    { 255, 140, 220, 90, 255 },
    { 255, 140, 220, 70, 255 },
    { 255, 140, 220, 90, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C8E4[] = {
    { 255, 140, 220, 255 },
    { 255, 140, 220, 255 },
    { 255, 140, 220, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C8F0[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyWoodfallTexAnimColorParams_02C8F8 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C8D4, gameplay_keepTexColorChangingEnvColors_02C8E4,
    gameplay_keepTexColorChangingFrameData_02C8F0,
};

AnimatedMaterial gStrayFairyWoodfallTexAnim[] = {
    { 1, 4, &gStrayFairyWoodfallTexAnimColorParams_02C8C4 },
    { -2, 4, &gStrayFairyWoodfallTexAnimColorParams_02C8F8 },
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C918[] = {
    { 225, 235, 255, 255, 255 },
    { 225, 235, 255, 255, 255 },
    { 225, 235, 255, 255, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C928[] = {
    { 60, 20, 160, 255 },
    { 90, 50, 190, 255 },
    { 60, 20, 160, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C934[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyGreatBayTexAnimColorParams_02C93C = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C918, gameplay_keepTexColorChangingEnvColors_02C928,
    gameplay_keepTexColorChangingFrameData_02C934,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C94C[] = {
    { 200, 140, 255, 90, 255 },
    { 200, 140, 255, 70, 255 },
    { 200, 140, 255, 90, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C95C[] = {
    { 200, 140, 255, 255 },
    { 200, 140, 255, 255 },
    { 200, 140, 255, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C968[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyGreatBayTexAnimColorParams_02C970 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C94C, gameplay_keepTexColorChangingEnvColors_02C95C,
    gameplay_keepTexColorChangingFrameData_02C968,
};

AnimatedMaterial gStrayFairyGreatBayTexAnim[] = {
    { 1, 4, &gStrayFairyGreatBayTexAnimColorParams_02C93C },
    { -2, 4, &gStrayFairyGreatBayTexAnimColorParams_02C970 },
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C990[] = {
    { 255, 255, 225, 255, 255 },
    { 255, 255, 225, 255, 255 },
    { 255, 255, 225, 255, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C9A0[] = {
    { 160, 160, 60, 255 },
    { 190, 190, 90, 255 },
    { 160, 160, 60, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C9AC[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyStoneTowerTexAnimColorParams_02C9B4 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C990, gameplay_keepTexColorChangingEnvColors_02C9A0,
    gameplay_keepTexColorChangingFrameData_02C9AC,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_02C9C4[] = {
    { 200, 200, 140, 90, 255 },
    { 200, 200, 140, 70, 255 },
    { 200, 200, 140, 90, 255 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_02C9D4[] = {
    { 255, 255, 140, 255 },
    { 255, 255, 140, 255 },
    { 255, 255, 140, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_02C9E0[] = {
    0, 2, 4,
};

AnimatedMatColorParams gStrayFairyStoneTowerTexAnimColorParams_02C9E8 = { 
    5, 3, gameplay_keepTexColorChangingPrimColors_02C9C4, gameplay_keepTexColorChangingEnvColors_02C9D4,
    gameplay_keepTexColorChangingFrameData_02C9E0,
};

AnimatedMaterial gStrayFairyStoneTowerTexAnim[] = {
    { 1, 4, &gStrayFairyStoneTowerTexAnimColorParams_02C9B4 },
    { -2, 4, &gStrayFairyStoneTowerTexAnimColorParams_02C9E8 },
};

StandardLimb gStrayFairyRightFacingHeadLimb = { 
    { 0, 0, 125 }, STRAY_FAIRY_LIMB_LEFT_WING - 1, LIMB_DONE,
    gStrayFairyRightFacingHeadDL
};

StandardLimb gStrayFairyLeftWingLimb = { 
    { 0, 950, -76 }, LIMB_DONE, STRAY_FAIRY_LIMB_RIGHT_WING - 1,
    gStrayFairyLeftWingDL
};

StandardLimb gStrayFairyRightWingLimb = { 
    { 0, 950, -76 }, LIMB_DONE, STRAY_FAIRY_LIMB_GLOW - 1,
    gStrayFairyRightWingDL
};

StandardLimb gStrayFairyGlowLimb = { 
    { 0, 0, -125 }, STRAY_FAIRY_LIMB_TORSO - 1, STRAY_FAIRY_LIMB_LEFT_FACING_HEAD - 1,
    gStrayFairyGlowDL
};

StandardLimb gStrayFairyTorsoLimb = { 
    { 0, -350, 75 }, STRAY_FAIRY_LIMB_RIGHT_ARM - 1, LIMB_DONE,
    gStrayFairyTorsoDL
};

StandardLimb gStrayFairyRightArmLimb = { 
    { -103, -52, -45 }, LIMB_DONE, STRAY_FAIRY_LIMB_PELVIS_AND_LEGS - 1,
    gStrayFairyRightArmDL
};

StandardLimb gStrayFairyPelvisAndLegsLimb = { 
    { 0, -325, 0 }, LIMB_DONE, STRAY_FAIRY_LIMB_LEFT_ARM - 1,
    gStrayFairyPelvisAndLegsDL
};

StandardLimb gStrayFairyLeftArmLimb = { 
    { 103, -52, -45 }, LIMB_DONE, LIMB_DONE,
    gStrayFairyLeftArmDL
};

StandardLimb gStrayFairyLeftFacingHeadLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gStrayFairyLeftFacingHeadDL
};

void* gStrayFairySkelLimbs[] = {
    &gStrayFairyRightFacingHeadLimb, /* STRAY_FAIRY_LIMB_RIGHT_FACING_HEAD */
    &gStrayFairyLeftWingLimb, /* STRAY_FAIRY_LIMB_LEFT_WING */
    &gStrayFairyRightWingLimb, /* STRAY_FAIRY_LIMB_RIGHT_WING */
    &gStrayFairyGlowLimb, /* STRAY_FAIRY_LIMB_GLOW */
    &gStrayFairyTorsoLimb, /* STRAY_FAIRY_LIMB_TORSO */
    &gStrayFairyRightArmLimb, /* STRAY_FAIRY_LIMB_RIGHT_ARM */
    &gStrayFairyPelvisAndLegsLimb, /* STRAY_FAIRY_LIMB_PELVIS_AND_LEGS */
    &gStrayFairyLeftArmLimb, /* STRAY_FAIRY_LIMB_LEFT_ARM */
    &gStrayFairyLeftFacingHeadLimb, /* STRAY_FAIRY_LIMB_LEFT_FACING_HEAD */
};

FlexSkeletonHeader gStrayFairySkel = { 
    { gStrayFairySkelLimbs, ARRAY_COUNT(gStrayFairySkelLimbs) }, 9
};

u8 gameplay_keep_possiblePadding_02CAA4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_02CAB0[] = {
#include "assets/objects/gameplay_keep/tex_02CAB0.i4.inc.c"
};

u64 gameplay_keep_Tex_02CB30[] = {
#include "assets/objects/gameplay_keep/tex_02CB30.i8.inc.c"
};

u64 gameplay_keep_Tex_02CC30[] = {
#include "assets/objects/gameplay_keep/tex_02CC30.rgba16.inc.c"
};

u64 gameplay_keep_Tex_02D430[] = {
#include "assets/objects/gameplay_keep/tex_02D430.i8.inc.c"
};

u64 gameplay_keep_Tex_02DC30[] = {
#include "assets/objects/gameplay_keep/tex_02DC30.i8.inc.c"
};

Vtx gameplay_keepVtx_02E430[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_02E430.vtx.inc"
};

Gfx gameplay_keep_DL_02E510[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_02D430, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gameplay_keep_Tex_02DC30, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_02E430, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 3, 0),
    gsSP2Triangles(3, 8, 4, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(5, 4, 13, 0, 5, 13, 12, 0),
    gsSPEndDisplayList(),
};

s16 sameplay_keep_Anim_02E65CFrameData[] = {
    0x0000, 0x4000, 0x8000, 0x0000, 0x03E9, 0x071C, 0x031C, 0xFCE4, 0xF8E4, 0xFC17, 0x0000, 0x0FA5, 0x1C72, 0x0C6E, 
    0xF392, 0xE38E, 0xF05B, 0x0000, 0x0BBC, 0x1555, 0x0953, 0xF6AD, 0xEAAB, 0xF444, 
};

JointIndex sameplay_keep_Anim_02E65CJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x000A, 0x0002 },
    { 0x0000, 0x0011, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_02E65C = { 
    { 7 }, sameplay_keep_Anim_02E65CFrameData,
    sameplay_keep_Anim_02E65CJointIndices, 3
};

Vtx gameplay_keepVtx_02E670[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_02E670.vtx.inc"
};

Gfx gameplay_keep_DL_02E910[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_02EBC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_02E670, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_02E9A8[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&gameplay_keepVtx_02E670[4], 4, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_02EDC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_02E670[8], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DC00EC),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01DCFFED),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x01DC00EC),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 0, 0),
    gsSP1Triangle(9, 3, 2, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DC0100),
    gsSP1Triangle(0, 10, 11, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x01DC0100),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x01DC0000),
    gsSP2Triangles(2, 1, 12, 0, 13, 14, 2, 0),
    gsSP1Triangle(15, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_02EAB8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_02EBC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_02E670[20], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_02EDC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 6, 0, 11, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_02EBC8[] = {
#include "assets/objects/gameplay_keep/tex_02EBC8.rgba16.inc.c"
};

u64 gameplay_keep_Tex_02EDC8[] = {
#include "assets/objects/gameplay_keep/tex_02EDC8.rgba16.inc.c"
};

StandardLimb gameplay_keep_Standardlimb_02EFC8 = { 
    { 0, 0, 0 }, FISH_LIMB_2 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_02EFD4 = { 
    { 0, 0, 0 }, FISH_LIMB_3 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_02EFE0 = { 
    { 0, 0, 0 }, LIMB_DONE, FISH_LIMB_4 - 1,
    gameplay_keep_DL_02EAB8
};

StandardLimb gameplay_keep_Standardlimb_02EFEC = { 
    { 0, 0, 0 }, FISH_LIMB_5 - 1, FISH_LIMB_6 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_02EFF8 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_02E9A8
};

StandardLimb gameplay_keep_Standardlimb_02F004 = { 
    { 700, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_02E910
};

void* gameplay_keep_Skel_02F028Limbs[] = {
    &gameplay_keep_Standardlimb_02EFC8, /* FISH_LIMB_1 */
    &gameplay_keep_Standardlimb_02EFD4, /* FISH_LIMB_2 */
    &gameplay_keep_Standardlimb_02EFE0, /* FISH_LIMB_3 */
    &gameplay_keep_Standardlimb_02EFEC, /* FISH_LIMB_4 */
    &gameplay_keep_Standardlimb_02EFF8, /* FISH_LIMB_5 */
    &gameplay_keep_Standardlimb_02F004, /* FISH_LIMB_6 */
};

FlexSkeletonHeader gameplay_keep_Skel_02F028 = { 
    { gameplay_keep_Skel_02F028Limbs, ARRAY_COUNT(gameplay_keep_Skel_02F028Limbs) }, 3
};

u8 gameplay_keep_possiblePadding_02F034[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sameplay_keep_Anim_02F0ECFrameData[] = {
    0x0000, 0x4000, 0x8000, 0xFFC0, 0xFF2D, 0xFE8D, 0xFDEE, 0xFD5B, 0xFCE2, 0xFC90, 0xFC72, 0xFC90, 0xFCE2, 0xFD5B, 
    0xFDEE, 0xFE8D, 0xFF2D, 0xFFC0, 0x0040, 0x00D3, 0x0173, 0x0212, 0x02A5, 0x031E, 0x0370, 0x038E, 0x0370, 0x031E, 
    0x02A5, 0x0212, 0x0173, 0x00D3, 0x0040, 0xFDBC, 0xFEF1, 0x0000, 0x010F, 0x0244, 0x0387, 0x04BD, 0x05CB, 0x0699, 
    0x070D, 0x070D, 0x0699, 0x05CB, 0x04BD, 0x0387, 0x0244, 0x010F, 0x0000, 0xFEF1, 0xFDBC, 0xFC79, 0xFB43, 0xFA35, 
    0xF967, 0xF8F3, 0xF8F3, 0xF967, 0xFA35, 0xFB43, 0xFC79, 0x0000, 
};

JointIndex sameplay_keep_Anim_02F0ECJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0021, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_02F0EC = { 
    { 30 }, sameplay_keep_Anim_02F0ECFrameData,
    sameplay_keep_Anim_02F0ECJointIndices, 3
};

u8 gameplay_keep_possiblePadding_02F0FC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

u64 gEffShockwaveTex[] = {
#include "assets/objects/gameplay_keep/eff_shockwave.i8.inc.c"
};

Gfx gEffShockwaveDL[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffShockwaveTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gEffShockwaveVtx, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gEffShockwaveVtx[] = {
#include "assets/objects/gameplay_keep/gEffShockwaveVtx.vtx.inc"
};

Gfx gEffBubbleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_030228, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_030228[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_030228.vtx.inc"
};

u8 gameplay_keep_possiblePadding_030268[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gEffFireFootprint1Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_1.ia8.inc.c"
};

u64 gEffFireFootprint2Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_2.ia8.inc.c"
};

u64 gEffFireFootprint3Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_3.ia8.inc.c"
};

u64 gEffFireFootprint4Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_4.ia8.inc.c"
};

u64 gEffFireFootprint5Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_5.ia8.inc.c"
};

u64 gEffFireFootprint6Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_6.ia8.inc.c"
};

u64 gEffFireFootprint7Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_7.ia8.inc.c"
};

u64 gEffFireFootprint8Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_8.ia8.inc.c"
};

Gfx gEffFireFootprintDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_0322D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0322D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0322D0.vtx.inc"
};

u64 gameplay_keep_Tex_032310[] = {
#include "assets/objects/gameplay_keep/tex_032310.rgba32.inc.c"
};

u64 gEffHitmarkWhiteMetal1Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_1.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal2Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_2.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal3Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_3.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal4Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_4.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal5Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_5.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal6Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_6.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal7Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_7.i4.inc.c"
};

u64 gEffHitmarkWhiteMetal8Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_white_metal_8.i4.inc.c"
};

u64 gEffHitmarkDust1Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_1.i4.inc.c"
};

u64 gEffHitmarkDust2Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_2.i4.inc.c"
};

u64 gEffHitmarkDust3Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_3.i4.inc.c"
};

u64 gEffHitmarkDust4Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_4.i4.inc.c"
};

u64 gEffHitmarkDust5Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_5.i4.inc.c"
};

u64 gEffHitmarkDust6Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_6.i4.inc.c"
};

u64 gEffHitmarkDust7Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_7.i4.inc.c"
};

u64 gEffHitmarkDust8Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_dust_8.i4.inc.c"
};

u64 gEffHitmarkRed1Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_1.i4.inc.c"
};

u64 gEffHitmarkRed2Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_2.i4.inc.c"
};

u64 gEffHitmarkRed3Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_3.i4.inc.c"
};

u64 gEffHitmarkRed4Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_4.i4.inc.c"
};

u64 gEffHitmarkRed5Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_5.i4.inc.c"
};

u64 gEffHitmarkRed6Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_6.i4.inc.c"
};

u64 gEffHitmarkRed7Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_7.i4.inc.c"
};

u64 gEffHitmarkRed8Tex[] = {
#include "assets/objects/gameplay_keep/eff_hitmark_red_8.i4.inc.c"
};

Gfx gEffHitmarkDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 24, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_035768, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_035768[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_035768.vtx.inc"
};

u8 gameplay_keep_possiblePadding_0357A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_0357B0[] = {
#include "assets/objects/gameplay_keep/tex_0357B0.ia8.inc.c"
};

u64 gameplay_keep_Tex_035FB0[] = {
#include "assets/objects/gameplay_keep/tex_035FB0.ia8.inc.c"
};

u64 gEffWaterRippleTex[] = {
#include "assets/objects/gameplay_keep/eff_water_ripple.i8.inc.c"
};

Gfx gEffWaterRippleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffWaterRippleTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_037810, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_037810[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_037810.vtx.inc"
};

Gfx gEffSparkDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_0378B0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0378B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0378B0.vtx.inc"
};

u64 gEffWaterSplash1Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_1.i8.inc.c"
};

u64 gEffWaterSplash2Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_2.i8.inc.c"
};

u64 gEffWaterSplash3Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_3.i8.inc.c"
};

u64 gEffWaterSplash4Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_4.i8.inc.c"
};

u64 gEffWaterSplash5Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_5.i8.inc.c"
};

u64 gEffWaterSplash6Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_6.i8.inc.c"
};

u64 gEffWaterSplash7Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_7.i8.inc.c"
};

u64 gEffWaterSplash8Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_8.i8.inc.c"
};

Gfx gEffWaterSplashDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 40, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_03A150, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_03A150[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_03A150.vtx.inc"
};

u64 gEffStone1Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_1.ia8.inc.c"
};

u64 gEffStone2Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_2.ia8.inc.c"
};

u64 gEffStone3Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_3.ia8.inc.c"
};

u64 gEffStone4Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_4.ia8.inc.c"
};

u64 gEffStone5Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_5.ia8.inc.c"
};

u64 gEffStone6Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_6.ia8.inc.c"
};

u64 gEffStone7Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_7.ia8.inc.c"
};

u64 gEffStone8Tex[] = {
#include "assets/objects/gameplay_keep/eff_stone_8.ia8.inc.c"
};

Gfx gEffStoneDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_03C1F0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_03C1F0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_03C1F0.vtx.inc"
};

u64 gEffLightning1Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_1.i4.inc.c"
};

u64 gEffLightning2Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_2.i4.inc.c"
};

u64 gEffLightning3Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_3.i4.inc.c"
};

u64 gEffLightning4Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_4.i4.inc.c"
};

u64 gEffLightning5Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_5.i4.inc.c"
};

u64 gEffLightning6Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_6.i4.inc.c"
};

u64 gEffLightning7Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_7.i4.inc.c"
};

u64 gEffLightning8Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_8.i4.inc.c"
};

Gfx gEffLightningDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 96, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPPipeSync(),
    gsSPVertex(gameplay_keepVtx_03F2B8, 4, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(200, 255, 255, 255),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_03F2B8[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_03F2B8.vtx.inc"
};

u8 gameplay_keep_possiblePadding_03F2F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gEffEnemyDeathFlame1Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_1.i8.inc.c"
};

u64 gEffEnemyDeathFlame2Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_2.i8.inc.c"
};

u64 gEffEnemyDeathFlame3Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_3.i8.inc.c"
};

u64 gEffEnemyDeathFlame4Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_4.i8.inc.c"
};

u64 gEffEnemyDeathFlame5Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_5.i8.inc.c"
};

u64 gEffEnemyDeathFlame6Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_6.i8.inc.c"
};

u64 gEffEnemyDeathFlame7Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_7.i8.inc.c"
};

u64 gEffEnemyDeathFlame8Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_8.i8.inc.c"
};

u64 gEffEnemyDeathFlame9Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_9.i8.inc.c"
};

u64 gEffEnemyDeathFlame10Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_10.i8.inc.c"
};

Gfx gEffEnemyDeathFlameDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_044368, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_044368[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_044368.vtx.inc"
};

u8 gameplay_keep_possiblePadding_0443A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_0443B0[] = {
#include "assets/objects/gameplay_keep/tex_0443B0.i8.inc.c"
};

u64 gameplay_keep_Tex_0447B0[] = {
#include "assets/objects/gameplay_keep/tex_0447B0.i8.inc.c"
};

u64 gameplay_keep_Tex_044BB0[] = {
#include "assets/objects/gameplay_keep/tex_044BB0.i8.inc.c"
};

u64 gEffIceFragmentTex[] = {
#include "assets/objects/gameplay_keep/eff_ice_fragment.i8.inc.c"
};

u64 gameplay_keep_Tex_0453B0[] = {
#include "assets/objects/gameplay_keep/tex_0453B0.i8.inc.c"
};

Vtx gameplay_keepVtx_0457B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0457B0.vtx.inc"
};

Gfx gElegyShellGoronDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellGoronNecklaceTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0457B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 7, 3, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 11, 15, 0),
    gsSP2Triangles(16, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 20, 21, 12, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 9, 28, 5, 0),
    gsSP2Triangles(24, 23, 29, 0, 7, 8, 5, 0),
    gsSP2Triangles(24, 29, 30, 0, 2, 10, 0, 0),
    gsSP2Triangles(24, 30, 31, 0, 3, 10, 8, 0),
    gsSP2Triangles(10, 2, 9, 0, 0, 10, 3, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 1, 7, 2, 0),
    gsSP2Triangles(3, 8, 6, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 12, 0, 18, 14, 13, 0),
    gsSP2Triangles(19, 20, 21, 0, 16, 11, 14, 0),
    gsSP2Triangles(11, 10, 15, 0, 22, 23, 18, 0),
    gsSP2Triangles(18, 23, 16, 0, 24, 10, 25, 0),
    gsSP2Triangles(24, 26, 15, 0, 16, 23, 17, 0),
    gsSP2Triangles(24, 15, 10, 0, 20, 27, 21, 0),
    gsSP2Triangles(28, 19, 29, 0, 19, 21, 30, 0),
    gsSP2Triangles(21, 27, 30, 0, 19, 30, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 0, 2, 0),
    gsSP2Triangles(5, 4, 8, 0, 8, 4, 9, 0),
    gsSP2Triangles(1, 0, 10, 0, 11, 10, 5, 0),
    gsSP2Triangles(12, 11, 8, 0, 13, 3, 5, 0),
    gsSP2Triangles(1, 11, 12, 0, 13, 10, 0, 0),
    gsSP2Triangles(8, 9, 12, 0, 12, 6, 1, 0),
    gsSP2Triangles(0, 7, 13, 0, 5, 10, 13, 0),
    gsSP2Triangles(10, 11, 1, 0, 5, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 14, 0),
    gsSP2Triangles(19, 20, 17, 0, 21, 18, 20, 0),
    gsSP2Triangles(15, 22, 23, 0, 24, 16, 23, 0),
    gsSP2Triangles(16, 15, 23, 0, 18, 17, 20, 0),
    gsSP2Triangles(16, 24, 25, 0, 26, 14, 18, 0),
    gsSP2Triangles(17, 27, 25, 0, 15, 14, 26, 0),
    gsSP2Triangles(26, 22, 15, 0, 25, 27, 16, 0),
    gsSP2Triangles(25, 19, 17, 0, 18, 21, 26, 0),
    gsSP2Triangles(14, 27, 17, 0, 16, 27, 14, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[94], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 2, 1, 6, 0),
    gsSP2Triangles(2, 6, 3, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 8, 1, 0, 8, 9, 1, 0),
    gsSP2Triangles(10, 5, 3, 0, 10, 3, 6, 0),
    gsSP2Triangles(1, 9, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 12, 17, 18, 0),
    gsSP2Triangles(19, 14, 16, 0, 20, 19, 16, 0),
    gsSP2Triangles(12, 18, 13, 0, 13, 21, 22, 0),
    gsSP2Triangles(14, 19, 21, 0, 23, 21, 13, 0),
    gsSP2Triangles(22, 21, 19, 0, 24, 23, 18, 0),
    gsSP2Triangles(24, 15, 14, 0, 13, 18, 23, 0),
    gsSP2Triangles(21, 23, 14, 0, 14, 23, 24, 0),
    gsSP2Triangles(18, 17, 24, 0, 22, 11, 13, 0),
    gsSP1Triangle(19, 20, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronLoinclothTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[119], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 5, 0),
    gsSP2Triangles(1, 5, 6, 0, 4, 0, 2, 0),
    gsSP1Triangle(7, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSandalTopAndSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[127], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 4, 0),
    gsSP2Triangles(20, 18, 17, 0, 13, 21, 14, 0),
    gsSP2Triangles(22, 1, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 11, 28, 0, 29, 24, 26, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[157], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronFingerAndToeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[181], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 15, 9, 16, 0),
    gsSP2Triangles(17, 9, 15, 0, 10, 9, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(11, 24, 12, 0, 25, 13, 12, 0),
    gsSP2Triangles(4, 14, 1, 0, 26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[210], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 5, 4, 0),
    gsSP2Triangles(18, 19, 20, 0, 9, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 5, 17, 0),
    gsSP2Triangles(27, 15, 14, 0, 28, 29, 30, 0),
    gsSP1Triangle(6, 5, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[242], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(29, 28, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronTribalTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[273], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(3, 5, 10, 0, 11, 4, 12, 0),
    gsSP2Triangles(13, 8, 7, 0, 14, 12, 4, 0),
    gsSP2Triangles(15, 12, 14, 0, 16, 5, 4, 0),
    gsSP2Triangles(11, 16, 4, 0, 17, 12, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 17, 11, 12, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 5, 16, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGoronsRubyTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[303], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 8, 14, 9, 0),
    gsSP2Triangles(13, 12, 15, 0, 16, 1, 0, 0),
    gsSP2Triangles(16, 17, 1, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 18, 20, 0),
    gsSP2Triangles(1, 4, 2, 0, 22, 21, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSandalTopAndSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[329], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 3, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 23, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronFingerAndToeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[353], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 4, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 15, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGloveBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[369], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(0, 2, 14, 0, 10, 15, 8, 0),
    gsSP2Triangles(6, 16, 3, 0, 17, 18, 15, 0),
    gsSP1Triangle(10, 17, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGlovePalmTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[388], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 6, 7, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronTribalTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[397], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(2, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 6, 0, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 11, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(8, 17, 9, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(18, 20, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[429], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 6, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGoronsRubyTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[442], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 4, 12, 0, 7, 10, 8, 0),
    gsSP2Triangles(5, 4, 13, 0, 4, 14, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSandalTopAndSideTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[457], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(14, 20, 15, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronFingerAndToeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[481], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(0, 3, 1, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGloveBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[497], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 6, 8, 0),
    gsSP2Triangles(13, 3, 5, 0, 14, 15, 16, 0),
    gsSP2Triangles(8, 17, 12, 0, 2, 11, 18, 0),
    gsSP1Triangle(18, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronGlovePalmTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[516], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 6, 7, 0),
    gsSP1Triangle(5, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[525], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronChestTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[537], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 10, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 15, 0, 15, 12, 18, 0),
    gsSP2Triangles(13, 12, 17, 0, 19, 20, 10, 0),
    gsSP2Triangles(20, 21, 10, 0, 22, 21, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSP2Triangles(5, 2, 1, 0, 4, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSideburnsAndBeardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[568], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[576], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 6, 5, 0),
    gsSP2Triangles(15, 11, 1, 0, 15, 12, 11, 0),
    gsSP2Triangles(5, 4, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 16, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 26, 25, 0),
    gsSP2Triangles(9, 8, 28, 0, 29, 30, 21, 0),
    gsSP2Triangles(11, 2, 1, 0, 12, 31, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronEyeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[608], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 12, 0),
    gsSP1Triangle(10, 11, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronTribalTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[621], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[629], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 13, 0, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 1, 0, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 17, 16, 0, 24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronNostrilTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[656], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSideburnsAndBeardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[662], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 16, 15, 0, 8, 7, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 13, 12, 0, 27, 28, 18, 0),
    gsSP1Triangle(29, 28, 27, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[692], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[724], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 25, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[755], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[759], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(4, 18, 5, 0, 5, 18, 19, 0),
    gsSP2Triangles(20, 0, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 23, 0, 1, 20, 26, 0),
    gsSP2Triangles(1, 0, 20, 0, 27, 28, 29, 0),
    gsSP1Triangle(10, 30, 11, 0),
    gsSPVertex(&gameplay_keepVtx_0457B0[790], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 22, 23, 19, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[816], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 10, 15, 11, 0),
    gsSP2Triangles(10, 9, 16, 0, 11, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellGoronTLUT),
    gsDPLoadTextureBlock(gElegyShellGoronPlatformTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0457B0[834], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(12, 16, 17, 0, 14, 18, 12, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(21, 20, 24, 0, 23, 20, 25, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellGoronScarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0457B0[860], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(0, 6, 4, 0, 7, 0, 3, 0),
    gsSP1Triangle(7, 6, 0, 0),
    gsSPEndDisplayList(),
};

u64 gElegyShellGoronTLUT[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_tlut.rgba16.inc.c"
};

u64 gElegyShellGoronSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_skin.ci8.inc.c"
};

u64 gElegyShellGoronHairTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_hair.ci8.inc.c"
};

u64 gElegyShellGoronSideburnsAndBeardTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_sideburns_and_beard.ci8.inc.c"
};

u64 gElegyShellGoronNostrilTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_nostril.ci8.inc.c"
};

u64 gElegyShellGoronLipsTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_lips.ci8.inc.c"
};

u64 gElegyShellGoronGlovePalmTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_glove_palm.ci8.inc.c"
};

u64 gElegyShellGoronGloveBackTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_glove_back.ci8.inc.c"
};

u64 gElegyShellGoronFingerAndToeTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_finger_and_toe.ci8.inc.c"
};

u64 gElegyShellGoronSandalTopAndSideTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_sandal_top_and_side.ci8.inc.c"
};

u64 gElegyShellGoronChestTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_chest.ci8.inc.c"
};

u64 gElegyShellGoronBackTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_back.ci8.inc.c"
};

u64 gElegyShellGoronGoronsRubyTattooTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_gorons_ruby_tattoo.ci8.inc.c"
};

u64 gElegyShellGoronTribalTattooTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_tribal_tattoo.ci8.inc.c"
};

u64 gElegyShellGoronLoinclothTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_loincloth.ci8.inc.c"
};

u64 gElegyShellGoronEyeTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_eye.ci8.inc.c"
};

u64 gElegyShellGoronScarTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_scar.rgba16.inc.c"
};

u64 gElegyShellGoronNecklaceTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_necklace.i8.inc.c"
};

u64 gElegyShellGoronPlatformTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_goron_platform.ci8.inc.c"
};

u64 gHookshotReticleTex[] = {
#include "assets/objects/gameplay_keep/tex_04E220.i8.inc.c"
};

Vtx gameplay_keepVtx_04F220[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_04F220.vtx.inc"
};

Gfx gHookshotReticleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHookshotReticleTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 0, 0, 255),
    gsSPVertex(gameplay_keepVtx_04F220, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_04F2B8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_04F2C0[] = {
#include "assets/objects/gameplay_keep/tex_04F2C0.ia16.inc.c"
};

Vtx gameplay_keepVtx_0502C0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0502C0.vtx.inc"
};

Gfx gEffIceFragment1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffIceFragmentTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR |
                G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0x80, 170, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_0502C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[33], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gEffIceFragment2MaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffIceFragmentTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR |
                G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPEndDisplayList(),
};

Gfx gEffIceFragment2ModelDL[] = {
    gsSPVertex(gameplay_keepVtx_0502C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0502C0[33], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_050740[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_050740.vtx.inc"
};

Gfx gEffIceFragment3DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffIceFragmentTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 1, G_TX_NOMIRROR | G_TX_WRAP, 5,
                2),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0x80, 0x80, 170, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_050740, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_050740[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 2, 1, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_050740[34], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_050740[65], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(4, 16, 3, 0, 17, 18, 19, 0),
    gsSP2Triangles(9, 20, 5, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 0, 2, 27, 0),
    gsSPEndDisplayList(),
};

u64 gEffIceSmokeTex[] = {
#include "assets/objects/gameplay_keep/eff_ice_smoke.i4.inc.c"
};

Vtx gameplay_keepVtx_051080[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_051080.vtx.inc"
};

Gfx gEffIceSmokeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gEffFireMask1Tex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(gEffIceSmokeTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                          G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetEnvColor(255, 255, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_051080, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gFrozenSteamMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gEffFireMask1Tex, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(gEffIceSmokeTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                          G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetEnvColor(255, 255, 255, 128),
    gsSPEndDisplayList(),
};

Gfx gFrozenSteamModelDL[] = {
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_051080, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_051258[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sameplay_keep_Anim_05140CFrameData[] = {
    0x0000, 0x4000, 0x0081, 0x0173, 0xE3E0, 0x6792, 0xD86C, 0x12CF, 0x1705, 0x2643, 0xED31, 0xE8FB, 0x1C20, 0x986E, 
    0x0000, 0xF9CB, 0xF1B0, 0xF9CB, 0x0000, 0x0422, 0x0627, 0x0422, 0x0000, 0xFD16, 0xFABF, 0xFD16, 0x0000, 0x0381, 
    0x0776, 0x0381, 0x0004, 0x0382, 0x0591, 0x0382, 0x0004, 0xFB5B, 0xF534, 0xFB5B, 0xB8CF, 0xB191, 0xACCE, 0xB191, 
    0xB8CF, 0xC270, 0xCEFB, 0xC270, 0x041E, 0x0742, 0x0BC6, 0x0742, 0x041E, 0x0268, 0x0269, 0x0269, 0xFCD7, 0xFE1D, 
    0xFEC1, 0xFE1D, 0xFCD7, 0xFB2D, 0xF97D, 0xFB2D, 0xFF37, 0x05A0, 0x0AE9, 0x05A0, 0xFF37, 0xF761, 0xEC7F, 0xF761, 
    0xC59C, 0xBBEF, 0xB41F, 0xBBEF, 0xC59C, 0xD1CC, 0xE30A, 0xD1CC, 0xFBE2, 0xFD98, 0xFD97, 0xFD98, 0xFBE2, 0xF8BE, 
    0xF43A, 0xF8BE, 0x0329, 0x04D3, 0x0683, 0x04D3, 0x0329, 0x01E3, 0x013F, 0x01E3, 0xFF37, 0xF761, 0xEC7F, 0xF761, 
    0xFF37, 0x05A0, 0x0AE9, 0x05A0, 0xC59C, 0xD1CC, 0xE30A, 0xD1CC, 0xC59C, 0xBBEF, 0xB41F, 0xBBEF, 0x0000, 0xFBDE, 
    0xF9D9, 0xFBDE, 0x0000, 0x0635, 0x0E50, 0x0635, 0x0000, 0xFC7F, 0xF88A, 0xFC7F, 0x0000, 0x02EA, 0x0541, 0x02EA, 
    0x0004, 0xFB5B, 0xF534, 0xFB5B, 0x0004, 0x0382, 0x0591, 0x0382, 0xB8CF, 0xC270, 0xCEFB, 0xC270, 0xB8CF, 0xB191, 
    0xACCE, 0xB191, 
};

JointIndex sameplay_keep_Anim_05140CJointIndices[] = {
    { 0x0000, 0x0002, 0x0003 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x000E, 0x0016, 0x001E },
    { 0x0000, 0x0000, 0x0026 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0007, 0x0008, 0x0009 },
    { 0x002E, 0x0036, 0x003E },
    { 0x0000, 0x0000, 0x0046 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x000A, 0x000B, 0x0009 },
    { 0x004E, 0x0056, 0x005E },
    { 0x0000, 0x0000, 0x0066 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x000C, 0x000D, 0x0006 },
    { 0x006E, 0x0076, 0x007E },
    { 0x0000, 0x0000, 0x0086 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gameplay_keep_Anim_05140C = { 
    { 8 }, sameplay_keep_Anim_05140CFrameData,
    sameplay_keep_Anim_05140CJointIndices, 14
};

Gfx gameplay_keep_DL_051420[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0514E0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0514C0[] = {
    gsSPDisplayList(gameplay_keep_DL_051420),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0514D0[] = {
    gsSPDisplayList(gameplay_keep_DL_0514C0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0514E0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0514E0.vtx.inc"
};

Gfx gameplay_keep_DL_051510[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0515D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0515B0[] = {
    gsSPDisplayList(gameplay_keep_DL_051510),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0515C0[] = {
    gsSPDisplayList(gameplay_keep_DL_0515B0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0515D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0515D0.vtx.inc"
};

Gfx gameplay_keep_DL_051600[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0516C0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0516A0[] = {
    gsSPDisplayList(gameplay_keep_DL_051600),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0516B0[] = {
    gsSPDisplayList(gameplay_keep_DL_0516A0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0516C0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0516C0.vtx.inc"
};

Gfx gameplay_keep_DL_0516F0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0517B0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051790[] = {
    gsSPDisplayList(gameplay_keep_DL_0516F0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0517A0[] = {
    gsSPDisplayList(gameplay_keep_DL_051790),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0517B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0517B0.vtx.inc"
};

Gfx gameplay_keep_DL_0517E0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0518A0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051880[] = {
    gsSPDisplayList(gameplay_keep_DL_0517E0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051890[] = {
    gsSPDisplayList(gameplay_keep_DL_051880),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_0518A0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0518A0.vtx.inc"
};

Gfx gameplay_keep_DL_0518D0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_051990, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051970[] = {
    gsSPDisplayList(gameplay_keep_DL_0518D0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051980[] = {
    gsSPDisplayList(gameplay_keep_DL_051970),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_051990[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_051990.vtx.inc"
};

Gfx gameplay_keep_DL_0519C0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_051A80, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051A60[] = {
    gsSPDisplayList(gameplay_keep_DL_0519C0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051A70[] = {
    gsSPDisplayList(gameplay_keep_DL_051A60),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_051A80[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_051A80.vtx.inc"
};

Gfx gameplay_keep_DL_051AB0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052530, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_051B70, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051B50[] = {
    gsSPDisplayList(gameplay_keep_DL_051AB0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051B60[] = {
    gsSPDisplayList(gameplay_keep_DL_051B50),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_051B70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_051B70.vtx.inc"
};

Gfx gameplay_keep_DL_051BA0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL |
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA |
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gameplay_keep_Tex_051D30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_051C70, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051C50[] = {
    gsSPDisplayList(gameplay_keep_DL_051BA0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_051C60[] = {
    gsSPDisplayList(gameplay_keep_DL_051C50),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_051C70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_051C70.vtx.inc"
};

u64 gameplay_keep_Tex_051D30[] = {
#include "assets/objects/gameplay_keep/tex_051D30.rgba16.inc.c"
};

u64 gameplay_keep_Tex_052530[] = {
#include "assets/objects/gameplay_keep/tex_052530.rgba16.inc.c"
};

StandardLimb gameplay_keep_Standardlimb_052630 = { 
    { 0, 129, 371 }, BUG_LIMB_02 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_05263C = { 
    { 0, 0, 0 }, BUG_LIMB_03 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_052648 = { 
    { 0, 0, 0 }, LIMB_DONE, BUG_LIMB_04 - 1,
    gameplay_keep_DL_051C60
};

StandardLimb gameplay_keep_Standardlimb_052654 = { 
    { 268, -29, -113 }, BUG_LIMB_05 - 1, BUG_LIMB_09 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_052660 = { 
    { 0, 0, 0 }, BUG_LIMB_06 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_05266C = { 
    { 263, 0, 0 }, BUG_LIMB_07 - 1, BUG_LIMB_08 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_052678 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_051B60
};

StandardLimb gameplay_keep_Standardlimb_052684 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_051A70
};

StandardLimb gameplay_keep_Standardlimb_052690 = { 
    { 346, -29, -61 }, BUG_LIMB_0A - 1, BUG_LIMB_0E - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_05269C = { 
    { 0, 0, 0 }, BUG_LIMB_0B - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_0526A8 = { 
    { 263, 0, 0 }, BUG_LIMB_0C - 1, BUG_LIMB_0D - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_0526B4 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_051980
};

StandardLimb gameplay_keep_Standardlimb_0526C0 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_051890
};

StandardLimb gameplay_keep_Standardlimb_0526CC = { 
    { 346, -29, 61 }, BUG_LIMB_0F - 1, BUG_LIMB_13 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_0526D8 = { 
    { 0, 0, 0 }, BUG_LIMB_10 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_0526E4 = { 
    { 263, 0, 0 }, BUG_LIMB_11 - 1, BUG_LIMB_12 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_0526F0 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_0515C0
};

StandardLimb gameplay_keep_Standardlimb_0526FC = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_0514D0
};

StandardLimb gameplay_keep_Standardlimb_052708 = { 
    { 268, -29, 113 }, BUG_LIMB_14 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_052714 = { 
    { 0, 0, 0 }, BUG_LIMB_15 - 1, LIMB_DONE,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_052720 = { 
    { 263, 0, 0 }, BUG_LIMB_16 - 1, BUG_LIMB_17 - 1,
    NULL
};

StandardLimb gameplay_keep_Standardlimb_05272C = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_0517A0
};

StandardLimb gameplay_keep_Standardlimb_052738 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gameplay_keep_DL_0516B0
};

void* gameplay_keep_Skel_0527A0Limbs[] = {
    &gameplay_keep_Standardlimb_052630, /* BUG_LIMB_01 */
    &gameplay_keep_Standardlimb_05263C, /* BUG_LIMB_02 */
    &gameplay_keep_Standardlimb_052648, /* BUG_LIMB_03 */
    &gameplay_keep_Standardlimb_052654, /* BUG_LIMB_04 */
    &gameplay_keep_Standardlimb_052660, /* BUG_LIMB_05 */
    &gameplay_keep_Standardlimb_05266C, /* BUG_LIMB_06 */
    &gameplay_keep_Standardlimb_052678, /* BUG_LIMB_07 */
    &gameplay_keep_Standardlimb_052684, /* BUG_LIMB_08 */
    &gameplay_keep_Standardlimb_052690, /* BUG_LIMB_09 */
    &gameplay_keep_Standardlimb_05269C, /* BUG_LIMB_0A */
    &gameplay_keep_Standardlimb_0526A8, /* BUG_LIMB_0B */
    &gameplay_keep_Standardlimb_0526B4, /* BUG_LIMB_0C */
    &gameplay_keep_Standardlimb_0526C0, /* BUG_LIMB_0D */
    &gameplay_keep_Standardlimb_0526CC, /* BUG_LIMB_0E */
    &gameplay_keep_Standardlimb_0526D8, /* BUG_LIMB_0F */
    &gameplay_keep_Standardlimb_0526E4, /* BUG_LIMB_10 */
    &gameplay_keep_Standardlimb_0526F0, /* BUG_LIMB_11 */
    &gameplay_keep_Standardlimb_0526FC, /* BUG_LIMB_12 */
    &gameplay_keep_Standardlimb_052708, /* BUG_LIMB_13 */
    &gameplay_keep_Standardlimb_052714, /* BUG_LIMB_14 */
    &gameplay_keep_Standardlimb_052720, /* BUG_LIMB_15 */
    &gameplay_keep_Standardlimb_05272C, /* BUG_LIMB_16 */
    &gameplay_keep_Standardlimb_052738, /* BUG_LIMB_17 */
};

SkeletonHeader gameplay_keep_Skel_0527A0 = { 
    gameplay_keep_Skel_0527A0Limbs, ARRAY_COUNT(gameplay_keep_Skel_0527A0Limbs)
};

u8 gameplay_keep_possiblePadding_0527A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_0527B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0527B0.vtx.inc"
};

Gfx gKakeraLeafMiddleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_0527B0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_052880[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_052880.vtx.inc"
};

Gfx gKakeraLeafTipDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_052940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_052880, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_052940[] = {
#include "assets/objects/gameplay_keep/tex_052940.rgba16.inc.c"
};

u64 gameplay_keep_Tex_053140[] = {
#include "assets/objects/gameplay_keep/tex_053140.rgba16.inc.c"
};

u64 gameplay_keep_Tex_053940[] = {
#include "assets/objects/gameplay_keep/tex_053940.i4.inc.c"
};

u64 gameplay_keep_Tex_054140[] = {
#include "assets/objects/gameplay_keep/tex_054140.i4.inc.c"
};

Gfx gLensFlareCircleDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_053940, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_054A10, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLensFlareRingDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_054140, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_054A10, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_054A10[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_054A10.vtx.inc"
};

Gfx gEffSparklesDL[] = {
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_054AF0, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPVertex(&gameplay_keepVtx_054A10[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_054AF0[] = {
#include "assets/objects/gameplay_keep/tex_054AF0.i4.inc.c"
};

Vtx gameplay_keepVtx_054B70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_054B70.vtx.inc"
};

Gfx gameplay_keep_DL_054C90[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0x46, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_054E10, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_054D90, 0x0020, 1, G_IM_FMT_I, 16, 16, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 14),
    gsSPDisplayList(0x0B000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_054B70, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_054D90[] = {
#include "assets/objects/gameplay_keep/tex_054D90.i4.inc.c"
};

u64 gameplay_keep_Tex_054E10[] = {
#include "assets/objects/gameplay_keep/tex_054E10.i8.inc.c"
};

AnimatedMatTexScrollParams gameplay_keep_Matanimheader_054F18TexScrollParams_054F10[] = {
    { -1, 0, 0x10, 0x10 },
    { 1, -2, 0x10, 0x10 },
};

AnimatedMaterial gameplay_keep_Matanimheader_054F18[] = {
    { -4, 1, gameplay_keep_Matanimheader_054F18TexScrollParams_054F10 },
};

u64 gameplay_keep_Tex_054F20[] = {
#include "assets/objects/gameplay_keep/tex_054F20.i8.inc.c"
};

Vtx gameplay_keepVtx_055320[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_055320.vtx.inc"
};

Gfx gameplay_keep_DL_055360[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_044BB0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 15),
    gsDPLoadMultiBlock(gameplay_keep_Tex_054F20, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, ENVIRONMENT, PRIM_LOD_FRAC, TEXEL1, TEXEL0, 1, PRIM_LOD_FRAC, TEXEL1, ENVIRONMENT,
                       PRIMITIVE, COMBINED, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(IM_RD | CVG_DST_SAVE | ZMODE_OPA | FORCE_BL | GBL_c1(G_BL_CLR_IN, G_BL_0, G_BL_CLR_MEM, G_BL_1),
                      IM_RD | CVG_DST_SAVE | ZMODE_OPA | FORCE_BL | G_RM_NOOP2),
    gsSPClearGeometryMode(G_ZBUFFER | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetEnvColor(255, 255, 170, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_055320, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_055438[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_055440[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_055440.vtx.inc"
};

Gfx gameplay_keep_DL_055620[] = {
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_055628[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE,
                       0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0557F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_055FF0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_055440, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 0, 2, 0, 6, 0, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 3, 0),
    gsSP2Triangles(6, 3, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 6, 11, 10, 0),
    gsSP2Triangles(6, 8, 11, 0, 11, 8, 2, 0),
    gsSP2Triangles(10, 11, 2, 0, 9, 10, 2, 0),
    gsSP2Triangles(7, 9, 2, 0, 8, 7, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xC8, 255, 255, 255, 255),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0557F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_055FF0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, 1),
    gsSPVertex(&gameplay_keepVtx_055440[12], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 3, 0),
    gsSP2Triangles(10, 4, 3, 0, 11, 3, 12, 0),
    gsSP2Triangles(3, 5, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 5, 16, 0, 5, 7, 16, 0),
    gsSP2Triangles(17, 9, 11, 0, 9, 3, 11, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_0557F0[] = {
#include "assets/objects/gameplay_keep/tex_0557F0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_055FF0[] = {
#include "assets/objects/gameplay_keep/tex_055FF0.i4.inc.c"
};

Vtx gameplay_keepVtx_0567F0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0567F0.vtx.inc"
};

Gfx gElegyShellDekuDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellDekuLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0567F0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPLoadTextureBlock(gElegyShellDekuSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0567F0[18], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 1, 4, 5, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 15, 0, 11, 16, 12, 0),
    gsSP2Triangles(15, 17, 13, 0, 11, 17, 18, 0),
    gsSP2Triangles(15, 8, 18, 0, 13, 17, 11, 0),
    gsSP2Triangles(14, 8, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 20, 19, 0),
    gsSP2Triangles(26, 27, 28, 0, 21, 20, 29, 0),
    gsSP1Triangle(30, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[50], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(5, 2, 3, 0, 3, 10, 4, 0),
    gsSP2Triangles(9, 11, 6, 0, 12, 3, 2, 0),
    gsSP2Triangles(13, 7, 6, 0, 14, 13, 6, 0),
    gsSP2Triangles(12, 15, 3, 0, 3, 15, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 23, 25, 0),
    gsSP2Triangles(22, 26, 23, 0, 25, 27, 28, 0),
    gsSP2Triangles(18, 29, 19, 0, 30, 26, 22, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[81], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 8, 7, 0),
    gsSP2Triangles(2, 3, 0, 0, 9, 6, 5, 0),
    gsSP2Triangles(7, 8, 5, 0, 2, 1, 13, 0),
    gsSP2Triangles(11, 14, 2, 0, 4, 1, 0, 0),
    gsSP2Triangles(10, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 17, 26, 0),
    gsSP2Triangles(27, 17, 24, 0, 24, 28, 27, 0),
    gsSP1Triangle(29, 20, 19, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[111], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 4, 1, 13, 0),
    gsSP2Triangles(14, 15, 8, 0, 3, 4, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(17, 16, 25, 0, 20, 26, 27, 0),
    gsSP2Triangles(24, 27, 22, 0, 18, 28, 19, 0),
    gsSP2Triangles(18, 29, 16, 0, 16, 29, 21, 0),
    gsSP2Triangles(27, 24, 20, 0, 25, 30, 17, 0),
    gsSP2Triangles(25, 16, 31, 0, 21, 29, 19, 0),
    gsSP2Triangles(19, 26, 20, 0, 21, 31, 16, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[143], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 2, 17, 0, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[175], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 3, 0, 0, 3, 6, 4, 0),
    gsSP2Triangles(1, 4, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(1, 7, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 13, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 19, 16, 0, 10, 20, 8, 0),
    gsSP2Triangles(21, 2, 22, 0, 16, 19, 23, 0),
    gsSP2Triangles(24, 20, 10, 0, 4, 1, 0, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 26, 6, 0),
    gsSP1Triangle(28, 7, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[205], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 11, 9, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 10, 11, 21, 0),
    gsSP2Triangles(24, 30, 26, 0, 11, 22, 21, 0),
    gsSP1Triangle(22, 16, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0567F0[237], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 3, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 5, 0, 16, 5, 15, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 0, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 4, 9, 0, 29, 30, 13, 0),
    gsSP1Triangle(10, 13, 9, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000000),
    gsDPLoadTextureBlock(gElegyShellDekuEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0567F0[268], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 5, 2, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 8, 7, 0, 7, 10, 9, 0),
    gsSP2Triangles(7, 11, 10, 0, 7, 1, 11, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPLoadTextureBlock(gElegyShellDekuPlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0567F0[280], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(12, 16, 17, 0, 14, 18, 12, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(21, 20, 24, 0, 23, 20, 25, 0),
    gsSPEndDisplayList(),
};

u64 gElegyShellDekuPlatformTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_deku_platform.rgba16.inc.c"
};

u64 gElegyShellDekuSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_deku_skin.rgba16.inc.c"
};

u64 gElegyShellDekuLeafTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_deku_leaf.rgba16.inc.c"
};

u64 gElegyShellDekuEyeTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_deku_eye.rgba16.inc.c"
};

u8 gameplay_keep_possiblePadding_058B68[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_058B70[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_058B70.vtx.inc"
};

Gfx gameplay_keep_DL_058BA0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_058C30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_058B70, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_058C30[] = {
#include "assets/objects/gameplay_keep/tex_058C30.rgba16.inc.c"
};

BgCamInfo gameplay_keep_Colheader_058F30CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_058F30SurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_058F30Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xE0C0},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xE0C0},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xF060},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xF060},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xF060},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xF060},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF060},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xF060},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xF060},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gameplay_keep_Colheader_058F30Vertices[] = {
    {  -4000,   8000,  -4000 },
    {  -4000,   8000,   4000 },
    {   4000,   8000,   4000 },
    {   4000,   8000,  -4000 },
    {  -4000,      0,   4000 },
    {  -4000,      0,  -4000 },
    {   4000,      0,   4000 },
    {   4000,      0,  -4000 },
};

CollisionHeader gameplay_keep_Colheader_058F30 = { 
    { -4000, 0, -4000 },
    { 4000, 8000, 4000 },
    ARRAY_COUNT(gameplay_keep_Colheader_058F30Vertices), gameplay_keep_Colheader_058F30Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_058F30Polygons), gameplay_keep_Colheader_058F30Polygons,
    gameplay_keep_Colheader_058F30SurfaceType,
    gameplay_keep_Colheader_058F30CamDataList,
    0, NULL
};

Vtx gameplay_keepVtx_058F60[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_058F60.vtx.inc"
};

Gfx gameplay_keep_DL_0590E0[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_064BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_058F60, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_059190[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_059190.vtx.inc"
};

Gfx gameplay_keep_DL_059310[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_064BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_059190, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gameplay_keep_Colheader_0594C8CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_0594C8SurfaceType[] = {
    {0x00000000, 0x000007C0},   {0x00200000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_0594C8Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xD120},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xD120},
    {0x0001, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xF448},
    {0x0001, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xE890},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xE890},
    {0x0001, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0001, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xE890},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xE890},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gameplay_keep_Colheader_0594C8Vertices[] = {
    {  -3000,  12000,  -6000 },
    {  -3000,  12000,   6000 },
    {   3000,  12000,   6000 },
    {   3000,  12000,  -6000 },
    {  -3000,      0,   6000 },
    {  -3000,      0,  -6000 },
    {   3000,      0,   6000 },
    {   3000,      0,  -6000 },
};

CollisionHeader gameplay_keep_Colheader_0594C8 = { 
    { -3000, 0, -6000 },
    { 3000, 12000, 6000 },
    ARRAY_COUNT(gameplay_keep_Colheader_0594C8Vertices), gameplay_keep_Colheader_0594C8Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_0594C8Polygons), gameplay_keep_Colheader_0594C8Polygons,
    gameplay_keep_Colheader_0594C8SurfaceType,
    gameplay_keep_Colheader_0594C8CamDataList,
    0, NULL
};

u8 gameplay_keep_possiblePadding_0594F4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_059500[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_059500.vtx.inc"
};

Gfx gameplay_keep_DL_059680[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_064BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_059500, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_059738[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

BgCamInfo gameplay_keep_Colheader_059840CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_059840SurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_059840Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF6A0},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF6A0},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gameplay_keep_Colheader_059840Vertices[] = {
    {   -300,   2400,   -600 },
    {   -300,   2400,    600 },
    {    300,   2400,    600 },
    {    300,   2400,   -600 },
    {   -300,      0,    600 },
    {   -300,      0,   -600 },
    {    300,      0,    600 },
    {    300,      0,   -600 },
};

CollisionHeader gameplay_keep_Colheader_059840 = { 
    { -300, 0, -600 },
    { 300, 2400, 600 },
    ARRAY_COUNT(gameplay_keep_Colheader_059840Vertices), gameplay_keep_Colheader_059840Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_059840Polygons), gameplay_keep_Colheader_059840Polygons,
    gameplay_keep_Colheader_059840SurfaceType,
    gameplay_keep_Colheader_059840CamDataList,
    0, NULL
};

Vtx gameplay_keepVtx_059870[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_059870.vtx.inc"
};

Gfx gameplay_keep_DL_0599F0[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0653D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_059870, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gameplay_keep_Colheader_059BA0CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_059BA0SurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_059BA0Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xF060},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x8001, 0xF060},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x8001, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x8001, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xF060},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF060},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0xFB50},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0xFB50},
};

Vec3s gameplay_keep_Colheader_059BA0Vertices[] = {
    {   2000,   1200,  -4000 },
    {  -2000,   1200,  -4000 },
    {  -2000,   1200,   4000 },
    {   2000,   1200,   4000 },
    {  -2000,  -1200,  -4000 },
    {   2000,  -1200,  -4000 },
    {  -2000,  -1200,   4000 },
    {   2000,  -1200,   4000 },
};

CollisionHeader gameplay_keep_Colheader_059BA0 = { 
    { -2000, -1200, -4000 },
    { 2000, 1200, 4000 },
    ARRAY_COUNT(gameplay_keep_Colheader_059BA0Vertices), gameplay_keep_Colheader_059BA0Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_059BA0Polygons), gameplay_keep_Colheader_059BA0Polygons,
    gameplay_keep_Colheader_059BA0SurfaceType,
    gameplay_keep_Colheader_059BA0CamDataList,
    0, NULL
};

Vtx gameplay_keepVtx_059BD0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_059BD0.vtx.inc"
};

Gfx gameplay_keep_DL_059D50[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0653D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_059BD0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gameplay_keep_Colheader_059F00CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_059F00SurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_059F00Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xE4A8},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x8001, 0xE4A8},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x8001, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x8001, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xE4A8},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xE4A8},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF448},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0xF8F8},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0xF8F8},
};

Vec3s gameplay_keep_Colheader_059F00Vertices[] = {
    {   3000,   1800,  -7000 },
    {  -3000,   1800,  -7000 },
    {  -3000,   1800,   7000 },
    {   3000,   1800,   7000 },
    {  -3000,  -1800,  -7000 },
    {   3000,  -1800,  -7000 },
    {  -3000,  -1800,   7000 },
    {   3000,  -1800,   7000 },
};

CollisionHeader gameplay_keep_Colheader_059F00 = { 
    { -3000, -1800, -7000 },
    { 3000, 1800, 7000 },
    ARRAY_COUNT(gameplay_keep_Colheader_059F00Vertices), gameplay_keep_Colheader_059F00Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_059F00Polygons), gameplay_keep_Colheader_059F00Polygons,
    gameplay_keep_Colheader_059F00SurfaceType,
    gameplay_keep_Colheader_059F00CamDataList,
    0, NULL
};

Vtx gameplay_keepVtx_059F30[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_059F30.vtx.inc"
};

Gfx gameplay_keep_DL_05A0B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_064BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_059F30, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_05A168[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

BgCamInfo gameplay_keep_Colheader_05A270CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_keep_Colheader_05A270SurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gameplay_keep_Colheader_05A270Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gameplay_keep_Colheader_05A270Vertices[] = {
    {   -300,    600,   -300 },
    {   -300,    600,    300 },
    {    300,    600,    300 },
    {    300,    600,   -300 },
    {   -300,      0,    300 },
    {   -300,      0,   -300 },
    {    300,      0,    300 },
    {    300,      0,   -300 },
};

CollisionHeader gameplay_keep_Colheader_05A270 = { 
    { -300, 0, -300 },
    { 300, 600, 300 },
    ARRAY_COUNT(gameplay_keep_Colheader_05A270Vertices), gameplay_keep_Colheader_05A270Vertices,
    ARRAY_COUNT(gameplay_keep_Colheader_05A270Polygons), gameplay_keep_Colheader_05A270Polygons,
    gameplay_keep_Colheader_05A270SurfaceType,
    gameplay_keep_Colheader_05A270CamDataList,
    0, NULL
};

Vtx gameplay_keepVtx_05A2A0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05A2A0.vtx.inc"
};

Gfx gameplay_keep_DL_05A430[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0663D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_05A2A0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_065BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI_PRIM, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(&gameplay_keepVtx_05A2A0[20], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_05A540[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05A540.vtx.inc"
};

Gfx gameplay_keep_DL_05A600[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_066BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_05A540, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_05A540[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_05A6A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gHeartShapeTex[] = {
#include "assets/objects/gameplay_keep/heart_shape.i8.inc.c"
};

Vtx gameplay_keepVtx_05A7B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05A7B0.vtx.inc"
};

Gfx gHeartPieceInteriorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x09C4, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0447B0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 100, 255, 128),
    gsSPVertex(gameplay_keepVtx_05A7B0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_05A7B0[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 5, 3, 0, 7, 5, 6, 0),
    gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(7, 10, 9, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 13, 11, 0, 15, 13, 14, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 15, 18, 0),
    gsSP2Triangles(17, 16, 15, 0, 19, 17, 20, 0),
    gsSP2Triangles(17, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 23, 25, 21, 0),
    gsSP2Triangles(25, 26, 21, 0, 26, 27, 21, 0),
    gsSP2Triangles(21, 28, 22, 0, 21, 29, 28, 0),
    gsSP1Triangle(21, 30, 29, 0),
    gsSPVertex(&gameplay_keepVtx_05A7B0[34], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 0, 7, 0, 8, 9, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHeartShapeTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 200, 0, 100, 255),
    gsSPVertex(&gameplay_keepVtx_05A7B0[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_05AC58[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_05AC60[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05AC60.vtx.inc"
};

Gfx gSignRectangularDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_05AC60, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[24], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05AC60[35], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_05B158[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_05B160[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05B160.vtx.inc"
};

Gfx gSignDirectionalDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_05B160, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(0, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05B160[5], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05B160[9], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05B160[13], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05B160[17], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP1Triangle(8, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_05B160[30], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 216, 216, 216, 255),
    gsSPVertex(&gameplay_keepVtx_05B160[33], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_05B160[41], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gDropArrows2Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_2.rgba16.inc.c"
};

u64 gDropArrows1Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_1.rgba16.inc.c"
};

u64 gDropArrows3Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_3.rgba16.inc.c"
};

u64 gDropBombTex[] = {
#include "assets/objects/gameplay_keep/drop_bomb.rgba16.inc.c"
};

u64 gDropBombchuTex[] = {
#include "assets/objects/gameplay_keep/drop_bombchu.rgba16.inc.c"
};

u64 gDropUnknownPouchTex[] = {
#include "assets/objects/gameplay_keep/drop_unknown_pouch.rgba16.inc.c"
};

u64 gDropRecoveryHeartTex[] = {
#include "assets/objects/gameplay_keep/drop_recovery_heart.rgba16.inc.c"
};

u64 gDropHeartPieceTex[] = {
#include "assets/objects/gameplay_keep/drop_heart_piece.rgba16.inc.c"
};

Gfx gItemDropDL[] = {
    gsDPPipeSync(),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_05F778, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_05F778[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_05F778.vtx.inc"
};

u8 gameplay_keep_possiblePadding_05F7B8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gDropKeySmallTex[] = {
#include "assets/objects/gameplay_keep/drop_key_small.rgba16.inc.c"
};

u64 gDropMagicSmallTex[] = {
#include "assets/objects/gameplay_keep/drop_magic_small.rgba16.inc.c"
};

u64 gDropDekuNutTex[] = {
#include "assets/objects/gameplay_keep/drop_deku_nut.rgba16.inc.c"
};

u64 gDropDekuStickTex[] = {
#include "assets/objects/gameplay_keep/drop_deku_stick.rgba16.inc.c"
};

u64 gDropMagicLargeTex[] = {
#include "assets/objects/gameplay_keep/drop_magic_large.rgba16.inc.c"
};

u64 gRupeeGreenTex[] = {
#include "assets/objects/gameplay_keep/rupee_green.rgba16.inc.c"
};

u64 gRupeeBlueTex[] = {
#include "assets/objects/gameplay_keep/rupee_blue.rgba16.inc.c"
};

u64 gRupeeRedTex[] = {
#include "assets/objects/gameplay_keep/rupee_red.rgba16.inc.c"
};

u64 gRupeePurpleTex[] = {
#include "assets/objects/gameplay_keep/rupee_purple.rgba16.inc.c"
};

u64 gRupeeOrangeTex[] = {
#include "assets/objects/gameplay_keep/rupee_orange.rgba16.inc.c"
};

u64 gRupeeSilverTex[] = {
#include "assets/objects/gameplay_keep/rupee_silver.rgba16.inc.c"
};

Vtx gameplay_keepVtx_062080[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_062080.vtx.inc"
};

Gfx gRupeeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 2, 2, 2, 1),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_062080, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_062080[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_062080[33], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gRecoveryHeartTex[] = {
#include "assets/objects/gameplay_keep/recovery_heart.rgba16.inc.c"
};

u64 gBombTex[] = {
#include "assets/objects/gameplay_keep/bomb.rgba16.inc.c"
};

u64 gArrowTex[] = {
#include "assets/objects/gameplay_keep/arrow.rgba16.inc.c"
};

u64 gRupeeLightRedTex[] = {
#include "assets/objects/gameplay_keep/rupee_light_red.rgba16.inc.c"
};

u64 gRupeeLightBlueTex[] = {
#include "assets/objects/gameplay_keep/rupee_light_blue.rgba16.inc.c"
};

u64 gHeartContainerTex[] = {
#include "assets/objects/gameplay_keep/heart_container.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0643D0[] = {
#include "assets/objects/gameplay_keep/tex_0643D0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_064BD0[] = {
#include "assets/objects/gameplay_keep/tex_064BD0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0653D0[] = {
#include "assets/objects/gameplay_keep/tex_0653D0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_065BD0[] = {
#include "assets/objects/gameplay_keep/tex_065BD0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0663D0[] = {
#include "assets/objects/gameplay_keep/tex_0663D0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_066BD0[] = {
#include "assets/objects/gameplay_keep/tex_066BD0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_067BD0[] = {
#include "assets/objects/gameplay_keep/tex_067BD0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0683D0[] = {
#include "assets/objects/gameplay_keep/tex_0683D0.rgba16.inc.c"
};

u64 gSignRectangularSideTex[] = {
#include "assets/objects/gameplay_keep/sign_rectangular_side.rgba16.inc.c"
};

u64 gSignRectangularFrontTex[] = {
#include "assets/objects/gameplay_keep/sign_rectangular_front.rgba16.inc.c"
};

u64 gSignPostWoodTex[] = {
#include "assets/objects/gameplay_keep/sign_post_wood.rgba16.inc.c"
};

u64 gSignLetteringTex[] = {
#include "assets/objects/gameplay_keep/sign_lettering.rgba16.inc.c"
};

Vtx gameplay_keepVtx_06A7D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_06A7D0.vtx.inc"
};

Gfx gameplay_keep_DL_06A800[] = {
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPLoadTextureBlock(gameplay_keep_Tex_06A880, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06A7D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_06A880[] = {
#include "assets/objects/gameplay_keep/tex_06A880.i8.inc.c"
};

Vtx gameplay_keepVtx_06A980[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_06A980.vtx.inc"
};

Gfx gameplay_keep_DL_06AB30[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_06ABF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 36, 36, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06A980, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 0, 2, 0, 10, 2, 11, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[12], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 4, 3, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[19], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPVertex(&gameplay_keepVtx_06A980[23], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_06ABF8[] = {
#include "assets/objects/gameplay_keep/tex_06ABF8.rgba16.inc.c"
};

u8 gameplay_keep_possiblePadding_06B618[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_06B620[] = {
    { 255, 255, 255, 255, 128 },
    { 255, 255, 255, 70, 128 },
    { 255, 255, 255, 0, 128 },
    { 255, 255, 255, 0, 128 },
};

u16 gameplay_keepTexColorChangingFrameData_06B634[] = {
    0, 9, 12, 29,
};

AnimatedMatColorParams gameplay_keep_Matanimheader_06B6A0ColorParams_06B63C = { 
    30, 4, gameplay_keepTexColorChangingPrimColors_06B620, NULL, gameplay_keepTexColorChangingFrameData_06B634,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_06B64C[] = {
    { 255, 155, 0, 80, 128 },
    { 255, 155, 0, 80, 128 },
    { 255, 155, 0, 40, 128 },
    { 255, 155, 0, 0, 128 },
    { 255, 155, 0, 0, 128 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_06B668[] = {
    { 155, 0, 0, 255 },
    { 255, 0, 0, 255 },
    { 155, 155, 155, 255 },
    { 155, 0, 0, 255 },
    { 155, 0, 0, 0 },
};

u16 gameplay_keepTexColorChangingFrameData_06B67C[] = {
    0, 7, 17, 29, 35,
};

AnimatedMatColorParams gameplay_keep_Matanimheader_06B6A0ColorParams_06B688 = { 
    36, 5, gameplay_keepTexColorChangingPrimColors_06B64C, gameplay_keepTexColorChangingEnvColors_06B668,
    gameplay_keepTexColorChangingFrameData_06B67C,
};

AnimatedMatTexScrollParams gameplay_keep_Matanimheader_06B6A0TexScrollParams_06B698[] = {
    { 3, 0, 0x40, 0x40 },
    { -5, 0, 0x40, 0x40 },
};

AnimatedMaterial gameplay_keep_Matanimheader_06B6A0[] = {
    { 1, 4, &gameplay_keep_Matanimheader_06B6A0ColorParams_06B63C },
    { 2, 4, &gameplay_keep_Matanimheader_06B6A0ColorParams_06B688 },
    { -3, 1, gameplay_keep_Matanimheader_06B6A0TexScrollParams_06B698 },
};

u8 gameplay_keep_possiblePadding_06B6B8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_06B6C0[] = {
    { 255, 255, 255, 255, 128 },
    { 255, 255, 255, 70, 128 },
    { 255, 255, 255, 0, 128 },
    { 255, 255, 255, 0, 128 },
};

u16 gameplay_keepTexColorChangingFrameData_06B6D4[] = {
    0, 10, 13, 29,
};

AnimatedMatColorParams gameplay_keep_Matanimheader_06B730ColorParams_06B6DC = { 
    30, 4, gameplay_keepTexColorChangingPrimColors_06B6C0, NULL, gameplay_keepTexColorChangingFrameData_06B6D4,
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_06B6EC[] = {
    { 255, 255, 155, 80, 128 },
    { 255, 255, 255, 80, 128 },
    { 255, 255, 255, 80, 128 },
    { 255, 255, 255, 0, 128 },
};

F3DEnvColor gameplay_keepTexColorChangingEnvColors_06B700[] = {
    { 155, 155, 55, 255 },
    { 255, 255, 255, 255 },
    { 255, 255, 255, 255 },
    { 255, 255, 255, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_06B710[] = {
    0, 7, 17, 29,
};

AnimatedMatColorParams gameplay_keep_Matanimheader_06B730ColorParams_06B718 = { 
    30, 4, gameplay_keepTexColorChangingPrimColors_06B6EC, gameplay_keepTexColorChangingEnvColors_06B700,
    gameplay_keepTexColorChangingFrameData_06B710,
};

AnimatedMatTexScrollParams gameplay_keep_Matanimheader_06B730TexScrollParams_06B728[] = {
    { 3, 0, 0x40, 0x40 },
    { -5, 0, 0x40, 0x40 },
};

AnimatedMaterial gameplay_keep_Matanimheader_06B730[] = {
    { 1, 4, &gameplay_keep_Matanimheader_06B730ColorParams_06B6DC },
    { 2, 4, &gameplay_keep_Matanimheader_06B730ColorParams_06B718 },
    { -3, 1, gameplay_keep_Matanimheader_06B730TexScrollParams_06B728 },
};

u8 gameplay_keep_possiblePadding_06B748[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u16 gameplay_keep_flexBitFlags_06BB0C[] = {
    0x0000, 0x01C0, 0x01C0, 0x01C0, 
};

s16 gameplay_keep_kfNums_06BB0C[] = {
    0x0010, 0x0010, 0x0010, 0x001A, 0x001B, 0x001A, 0x0006, 0x0006, 0x0006, 
};

s16 gameplay_keep_presetValues_06BB0C[] = {
    0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

};

KeyFrame gameplay_keep_KeyFrame_06BB0C[] = {
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 9000, },
     { 9, 600, 10502, },
     { 10, 700, 3137, },
     { 11, 809, 3352, },
     { 12, 924, 3467, },
     { 13, 1040, 3482, },
     { 14, 1156, 3398, },
     { 15, 1267, 3215, },
     { 16, 1370, 2932, },
     { 17, 1462, 2549, },
     { 18, 1540, 2067, },
     { 19, 1600, 900, },
     { 20, 1600, 0, },
     { 41, 1600, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 3000, },
     { 9, 200, 3094, },
     { 10, 206, 148, },
     { 11, 210, 76, },
     { 12, 211, 19, },
     { 13, 211, -25, },
     { 14, 210, -56, },
     { 15, 207, -72, },
     { 16, 205, -74, },
     { 17, 202, -62, },
     { 18, 201, -37, },
     { 19, 200, -10, },
     { 21, 200, 0, },
     { 41, 200, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 9000, },
     { 9, 600, 10503, },
     { 10, 700, 3141, },
     { 11, 809, 3359, },
     { 12, 924, 3475, },
     { 13, 1041, 3491, },
     { 14, 1157, 3405, },
     { 15, 1268, 3218, },
     { 16, 1371, 2929, },
     { 17, 1463, 2540, },
     { 18, 1541, 2049, },
     { 19, 1600, 889, },
     { 20, 1600, 0, },
     { 41, 1600, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 6119, },
     { 9, 408, 6493, },
     { 10, 433, 714, },
     { 11, 456, 648, },
     { 12, 476, 585, },
     { 13, 495, 525, },
     { 14, 511, 469, },
     { 15, 526, 416, },
     { 16, 539, 366, },
     { 17, 550, 319, },
     { 18, 560, 275, },
     { 19, 569, 235, },
     { 20, 576, 198, },
     { 21, 582, 164, },
     { 22, 587, 133, },
     { 23, 591, 105, },
     { 24, 594, 81, },
     { 25, 596, 60, },
     { 26, 598, 42, },
     { 27, 599, 27, },
     { 28, 599, 16, },
     { 30, 600, 2, },
     { 40, 600, 0, },
     { 41, 600, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 358, },
     { 9, 24, 766, },
     { 10, 51, 848, },
     { 11, 80, 905, },
     { 12, 111, 953, },
     { 13, 144, 991, },
     { 14, 177, 1019, },
     { 15, 212, 1037, },
     { 17, 282, 1044, },
     { 18, 316, 1033, },
     { 19, 350, 1012, },
     { 20, 384, 981, },
     { 21, 416, 941, },
     { 22, 446, 891, },
     { 23, 475, 830, },
     { 24, 502, 761, },
     { 25, 526, 681, },
     { 26, 547, 592, },
     { 27, 565, 493, },
     { 28, 580, 384, },
     { 29, 591, 265, },
     { 30, 598, 137, },
     { 31, 600, 35, },
     { 32, 600, 0, },
     { 41, 600, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 6119, },
     { 9, 408, 6493, },
     { 10, 433, 714, },
     { 11, 456, 648, },
     { 12, 476, 585, },
     { 13, 495, 525, },
     { 14, 511, 469, },
     { 15, 526, 416, },
     { 16, 539, 366, },
     { 17, 550, 319, },
     { 18, 560, 275, },
     { 19, 569, 235, },
     { 20, 576, 198, },
     { 21, 582, 164, },
     { 22, 587, 133, },
     { 23, 591, 105, },
     { 24, 594, 81, },
     { 25, 596, 60, },
     { 26, 598, 42, },
     { 27, 599, 27, },
     { 28, 599, 16, },
     { 30, 600, 2, },
     { 40, 600, 0, },
     { 41, 600, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 12600, },
     { 9, 840, 12600, },
     { 10, 840, 0, },
     { 41, 840, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 12600, },
     { 9, 840, 12600, },
     { 10, 840, 0, },
     { 41, 840, 0, },
     { 1, 0, 0, },
     { 7, 0, 0, },
     { 8, 0, 14400, },
     { 9, 960, 14400, },
     { 10, 960, 0, },
     { 41, 960, 0, },
};

KeyFrameAnimation gameplay_keep_KFAnim_06BB0C = { 
    gameplay_keep_flexBitFlags_06BB0C, gameplay_keep_KeyFrame_06BB0C, gameplay_keep_kfNums_06BB0C,
    gameplay_keep_presetValues_06BB0C, 0xFFFF, 0x0029
};

Vtx gameplay_keepVtx_06BB20[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_06BB20.vtx.inc"
};

Gfx gameplay_keep_DL_06BFE0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06E350, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06E350, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP,
                          G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06BB20, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_06C098[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 155, 80),
    gsDPSetEnvColor(155, 155, 55, 255),
    gsSPDisplayList(0x09000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06D350, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06CB50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 13, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_06BB20[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 4, 11, 5, 0),
    gsSP2Triangles(12, 8, 9, 0, 12, 9, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(10, 16, 17, 0, 10, 17, 11, 0),
    gsSP2Triangles(18, 14, 15, 0, 18, 15, 19, 0),
    gsSP2Triangles(20, 18, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(16, 22, 23, 0, 16, 23, 17, 0),
    gsSP2Triangles(24, 20, 21, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(22, 28, 29, 0, 22, 29, 23, 0),
    gsSP2Triangles(30, 26, 27, 0, 30, 27, 31, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_06C1E8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_06C350, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06DB50, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0x0050, 0x00FC, 0x014C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_06BB20[4], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[14], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[24], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSPVertex(&gameplay_keepVtx_06BB20[34], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_06C350[] = {
#include "assets/objects/gameplay_keep/tex_06C350.i4.inc.c"
};

u64 gameplay_keep_Tex_06CB50[] = {
#include "assets/objects/gameplay_keep/tex_06CB50.i4.inc.c"
};

u64 gameplay_keep_Tex_06D350[] = {
#include "assets/objects/gameplay_keep/tex_06D350.i4.inc.c"
};

u64 gameplay_keep_Tex_06DB50[] = {
#include "assets/objects/gameplay_keep/tex_06DB50.i4.inc.c"
};

u64 gameplay_keep_Tex_06E350[] = {
#include "assets/objects/gameplay_keep/tex_06E350.i4.inc.c"
};

KeyFrameFlexLimb gameplay_keep_KeyFrameLimbs_06EB70[] = {
    { NULL, 0x03, 0x01, 0xFF },
    { gameplay_keep_DL_06C1E8, 0x00, 0x01, 0xFF },
    { gameplay_keep_DL_06C098, 0x00, 0x01, 0xFF },
    { gameplay_keep_DL_06BFE0, 0x00, 0x01, 0xFF },
};

KeyFrameFlexSkeleton gameplay_keep_KFSkel_06EB70 = { 
    0x04, 0x03, gameplay_keep_KeyFrameLimbs_06EB70
};

u8 gameplay_keep_possiblePadding_06EB78[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_06EB80[] = {
#include "assets/objects/gameplay_keep/tex_06EB80.i4.inc.c"
};

Gfx gameplay_keep_DL_06F380[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, COMBINED, 0, 0,
                       0, COMBINED),
    gsDPSetOtherMode(G_AD_NOTPATTERN | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                     G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A
                     | G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x7F, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPTexture(0x1388, 0x1388, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadMultiBlock_4b(gameplay_keep_Tex_06EB80, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP,
                          G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTextureTile(0x0F000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, 0, 144, 104, 175, 135, 0, G_TX_MIRROR | G_TX_WRAP,
                        G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_06F428[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_06F430[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_06F430.vtx.inc"
};

Gfx gameplay_keep_DL_06F9F0[] = {
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(gameplay_keepVtx_06F430, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 7, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 28, 30, 31, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_06F430[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 15, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(25, 28, 26, 0, 26, 28, 29, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_06F430[64], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_06FAE0[] = {
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_06F430[74], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 6, 5, 0, 0, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 10, 5, 0, 0, 13, 12, 0),
    gsSP2Triangles(2, 9, 0, 0, 9, 2, 3, 0),
    gsSP2Triangles(9, 3, 6, 0, 5, 6, 3, 0),
    gsSP2Triangles(8, 14, 0, 0, 14, 8, 7, 0),
    gsSP2Triangles(14, 7, 15, 0, 5, 15, 7, 0),
    gsSP2Triangles(5, 16, 11, 0, 17, 12, 11, 0),
    gsSP2Triangles(17, 11, 16, 0, 12, 17, 0, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_06FB58[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_06FB60[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_06FB60.vtx.inc"
};

Gfx gameplay_keep_DL_06FE20[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0704B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_06FB60, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 6, 7, 3, 0),
    gsSP2Triangles(7, 2, 3, 0, 7, 8, 2, 0),
    gsSP2Triangles(2, 9, 0, 0, 0, 9, 10, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 10, 7, 0),
    gsSP2Triangles(11, 7, 6, 0, 11, 6, 5, 0),
    gsSP2Triangles(11, 5, 4, 0, 11, 4, 1, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0700B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_06FB60[12], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 4, 3, 0),
    gsSP2Triangles(8, 3, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 8, 0, 0, 9, 7, 5, 0),
    gsSP2Triangles(8, 9, 5, 0, 0, 2, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_06FF68[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0704B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_06FB60[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(3, 6, 5, 0, 3, 7, 6, 0),
    gsSP2Triangles(3, 0, 7, 0, 0, 8, 7, 0),
    gsSP2Triangles(2, 9, 0, 0, 10, 9, 2, 0),
    gsSP2Triangles(7, 8, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(6, 7, 11, 0, 5, 6, 11, 0),
    gsSP2Triangles(4, 5, 11, 0, 1, 4, 11, 0),
    gsSP2Triangles(1, 11, 10, 0, 2, 1, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0700B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_06FB60[34], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(4, 5, 8, 0, 3, 4, 8, 0),
    gsSP2Triangles(1, 3, 8, 0, 2, 1, 8, 0),
    gsSP2Triangles(2, 8, 9, 0, 5, 7, 9, 0),
    gsSP2Triangles(5, 9, 8, 0, 6, 0, 2, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_0700B0[] = {
#include "assets/objects/gameplay_keep/tex_0700B0.rgba16.inc.c"
};

u64 gameplay_keep_Tex_0704B0[] = {
#include "assets/objects/gameplay_keep/tex_0704B0.rgba16.inc.c"
};

Vtx gameplay_keepVtx_0706B0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0706B0.vtx.inc"
};

Gfx gFallingRainDropDL[] = {
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPVertex(gameplay_keepVtx_0706B0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_070700[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_070700.vtx.inc"
};

Gfx gEffPoppedDekuBubbleStaticDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetEnvColor(155, 255, 255, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gEffPoppedDekuBubbleStaticTex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP,
                            G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gEffPoppedDekuBubbleStaticMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR |
                          G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_070700, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 gEffPoppedDekuBubbleStaticMaskTex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_static_mask.i4.inc.c"
};

u64 gEffPoppedDekuBubbleStaticTex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_static.i4.inc.c"
};

AnimatedMatTexScrollParams gEffPoppedDekuBubbleStaticTexAnimTexScrollParams_0711F0[] = {
    { 0, 0, 0x40, 0x40 },
    { 0, -1, 0x20, 0x20 },
};

AnimatedMaterial gEffPoppedDekuBubbleStaticTexAnim[] = {
    { -1, 1, gEffPoppedDekuBubbleStaticTexAnimTexScrollParams_0711F0 },
};

Vtx gameplay_keepVtx_071200[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_071200.vtx.inc"
};

Gfx gEffPoppedDekuBubbleSlidingDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetEnvColor(0, 255, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5,
                            6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gEffPoppedDekuBubbleMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_071200, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

AnimatedMatTexScrollParams gEffPoppedDekuBubbleSlidingTexAnimTexScrollParams_0712F0[] = {
    { 0, 0, 0x20, 0x40 },
    { 0, -7, 0x20, 0x20 },
};

AnimatedMaterial gEffPoppedDekuBubbleSlidingTexAnim[] = {
    { -2, 1, gEffPoppedDekuBubbleSlidingTexAnimTexScrollParams_0712F0 },
};

u64 gEffPoppedDekuBubbleSliding1Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_1.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding2Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_2.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding3Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_3.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding4Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_4.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding5Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_5.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding6Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_6.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding7Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_7.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding8Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_8.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding9Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_9.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding10Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_10.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding11Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_11.i4.inc.c"
};

u64 gEffPoppedDekuBubbleSliding12Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_sliding_12.i4.inc.c"
};

Vtx gameplay_keepVtx_074300[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_074300.vtx.inc"
};

Gfx gEffPoppedDekuBubbleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetEnvColor(0, 255, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6,
                            15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gEffPoppedDekuBubbleMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP,
                          G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0x012C, 0x007C, 0x01A8),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_074300, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

AnimatedMaterial gEffPoppedDekuBubbleTexAnim[] = {
    { 0, 6, NULL },
};

u8 gameplay_keep_possiblePadding_0743F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gEffPoppedDekuBubble1Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_1.i4.inc.c"
};

u64 gEffPoppedDekuBubble2Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_2.i4.inc.c"
};

u64 gEffPoppedDekuBubble3Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_3.i4.inc.c"
};

u64 gEffPoppedDekuBubble4Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_4.i4.inc.c"
};

u64 gEffPoppedDekuBubble5Tex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_5.i4.inc.c"
};

u64 gEffPoppedDekuBubbleMaskTex[] = {
#include "assets/objects/gameplay_keep/eff_popped_deku_bubble_mask.i4.inc.c"
};

Vtx gameplay_keepVtx_075A00[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_075A00.vtx.inc"
};

Gfx gSquareShadowDL[] = {
    gsDPSetAlphaCompare(G_AC_THRESHOLD),
    gsDPLoadTextureBlock_4b(gameplay_keep_Tex_075AA8, G_IM_FMT_I, 16, 16, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_075A00, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetAlphaCompare(G_AC_NONE),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_075AA8[] = {
#include "assets/objects/gameplay_keep/tex_075AA8.i4.inc.c"
};

u8 gameplay_keep_possiblePadding_075B28[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Gfx gFootShadowDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_075BC0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_075B90, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_075B90[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_075B90.vtx.inc"
};

u64 gameplay_keep_Tex_075BC0[] = {
#include "assets/objects/gameplay_keep/tex_075BC0.ia16.inc.c"
};

Gfx gCircleShadowDL[] = {
    gsDPLoadTextureBlock(gameplay_keep_Tex_076C40, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_076C10, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_076C10[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_076C10.vtx.inc"
};

u64 gameplay_keep_Tex_076C40[] = {
#include "assets/objects/gameplay_keep/tex_076C40.ia16.inc.c"
};

Vtx gameplay_keepVtx_077440[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_077440.vtx.inc"
};

Gfx gHorseShadowDL[] = {
    gsDPLoadTextureBlock(gameplay_keep_Tex_0774D0, G_IM_FMT_I, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_077440, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_0774D0[] = {
#include "assets/objects/gameplay_keep/tex_0774D0.i8.inc.c"
};

Vtx gameplay_keepVtx_0778D0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0778D0.vtx.inc"
};

Gfx gameplay_keep_DL_077990[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_078B10, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_0778D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0778D0[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_0778D0[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 gameplay_keep_possiblePadding_077A38[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gameplay_keep_Tex_077A40[] = {
#include "assets/objects/gameplay_keep/tex_077A40.ia8.inc.c"
};

Vtx gameplay_keepVtx_078A40[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_078A40.vtx.inc"
};

Gfx gameplay_keep_DL_078A80[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_077A40, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gameplay_keepVtx_078A40, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_078B10[] = {
#include "assets/objects/gameplay_keep/tex_078B10.rgba16.inc.c"
};

u64 gSun1Tex[] = {
#include "assets/objects/gameplay_keep/sun_1.i4.inc.c"
};

u64 gSun2Tex[] = {
#include "assets/objects/gameplay_keep/sun_2.i4.inc.c"
};

u64 gSun3Tex[] = {
#include "assets/objects/gameplay_keep/sun_3.i4.inc.c"
};

u64 gSunEvening1Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_1.i4.inc.c"
};

u64 gSunEvening2Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_2.i4.inc.c"
};

u64 gSunEvening3Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_3.i4.inc.c"
};

Gfx gSunSparkleMaterialDL[] = {
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP,
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
};

Gfx gSunSparkleModelDL[] = {
    gsSPVertex(&gameplay_keepVtx_07ACF8[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gSunDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSun1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 31, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 31, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_07ACF8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPLoadTextureBlock(gSun2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsDPLoadTextureBlock(gSun3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening3Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_07ACF8[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07ACF8.vtx.inc"
};

u8 gameplay_keep_possiblePadding_07ADF8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Gfx gLockOnReticleTriangleDL[] = {
    gsSPVertex(gameplay_keepVtx_07AE18, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx gameplay_keepVtx_07AE18[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07AE18.vtx.inc"
};

u8 gameplay_keep_possiblePadding_07AE48[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_07AE50[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07AE50.vtx.inc"
};

Gfx gSongOfTimeClockDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, COMBINED, 0, 0, 0, ENVIRONMENT),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSongOfTimeClockTopTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_07AE50[11], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 8, 9, 0),
    gsSP1Triangle(0, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSongOfTimeClockBottomTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(gameplay_keepVtx_07AE50, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 8, 9, 0),
    gsSP1Triangle(0, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gSongOfTimeClockEmptyDL[] = {
    gsSPEndDisplayList(),
};

u64 gSongOfTimeClockTopTex[] = {
#include "assets/objects/gameplay_keep/song_of_time_clock_top.i8.inc.c"
};

u64 gSongOfTimeClockBottomTex[] = {
#include "assets/objects/gameplay_keep/song_of_time_clock_bottom.i8.inc.c"
};

Vtx gameplay_keepVtx_07D0C0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07D0C0.vtx.inc"
};

Gfx gameplay_keep_DL_07D260[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, PRIMITIVE, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT,
                       0),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 28, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_07D350, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_07D0C0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_07D348[] = {
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_07D350[] = {
#include "assets/objects/gameplay_keep/tex_07D350.i8.inc.c"
};

Vtx gameplay_keepVtx_07D550[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07D550.vtx.inc"
};

Gfx gEffFire1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffFireTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gEffFireMask1Tex, 0x0100, 1, G_IM_FMT_I, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                          | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_07D550, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gEffFire2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffFireTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gEffFireMask1Tex, 0x0100, 1, G_IM_FMT_I, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                          | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(gameplay_keepVtx_07D550, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

u64 gEffFireMask1Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_mask_1.i4.inc.c"
};

u64 gEffFireMask2Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_mask_2.i4.inc.c"
};

u64 gEffFireTex[] = {
#include "assets/objects/gameplay_keep/eff_fire.i8.inc.c"
};

Vtx gameplay_keepVtx_07E710[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07E710.vtx.inc"
};

Gfx gameplay_keep_DL_07E8C0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0x80, 200, 150, 100, 255),
    gsDPSetEnvColor(150, 100, 50, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_keep_Tex_07EA08, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(gameplay_keep_Tex_07EA08, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 13, 14),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_07E710, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(5, 3, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 6, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 9, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 10, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 15, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(18, 17, 21, 0, 18, 21, 22, 0),
    gsSP2Triangles(20, 18, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 21, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 22, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 24, 1, 0, 25, 1, 0, 0),
    gsSP2Triangles(26, 25, 0, 0, 26, 0, 4, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_07EA08[] = {
#include "assets/objects/gameplay_keep/tex_07EA08.i8.inc.c"
};

u8 gameplay_keep_possiblePadding_07F208[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

AnimatedMatTexScrollParams gameplay_keep_Matanimheader_07F218TexScrollParams_07F210[] = {
    { 2, 8, 0x20, 0x40 },
    { 2, 8, 0x20, 0x40 },
};

AnimatedMaterial gameplay_keep_Matanimheader_07F218[] = {
    { -1, 1, gameplay_keep_Matanimheader_07F218TexScrollParams_07F210 },
};

Vtx gameplay_keepVtx_07F220[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_07F220.vtx.inc"
};

Gfx gameplay_keep_DL_07F260[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_07F2E8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPVertex(gameplay_keepVtx_07F220, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gameplay_keep_Tex_07F2E8[] = {
#include "assets/objects/gameplay_keep/tex_07F2E8.ia16.inc.c"
};

u8 gameplay_keep_possiblePadding_0802E8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_0802F0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0802F0.vtx.inc"
};

Gfx gameplay_keep_DL_080FC0[] = {
    gsSPEndDisplayList(),
};

Gfx gSoaringWarpCsWindCapsuleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, PRIMITIVE, 0, 0, 0, 0, 1, TEXEL1, TEXEL0_ALPHA, COMBINED, 0, 0, 0,
                       PRIMITIVE),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 55, 0),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSoaringWarpCsWindCapsuleTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(gSoaringWarpCsWindCapsuleTex, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 15, 14),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0802F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 4, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(5, 8, 9, 0, 6, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(24, 27, 28, 0, 25, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 7, 4, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(10, 15, 11, 0, 11, 15, 16, 0),
    gsSP2Triangles(13, 17, 18, 0, 13, 18, 14, 0),
    gsSP2Triangles(15, 19, 20, 0, 15, 20, 16, 0),
    gsSP2Triangles(16, 20, 21, 0, 17, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(23, 25, 26, 0, 24, 27, 28, 0),
    gsSP2Triangles(24, 28, 25, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 26, 0, 26, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 4, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(5, 8, 9, 0, 6, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(24, 27, 28, 0, 25, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 7, 4, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 11, 0, 14, 15, 16, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 13, 0),
    gsSP2Triangles(15, 19, 20, 0, 15, 20, 16, 0),
    gsSP2Triangles(16, 20, 21, 0, 17, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(23, 25, 26, 0, 24, 27, 28, 0),
    gsSP2Triangles(24, 28, 25, 0, 25, 28, 29, 0),
    gsSP1Triangle(25, 29, 26, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 7, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 8, 0, 8, 11, 12, 0),
    gsSP2Triangles(9, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(17, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 26, 0, 26, 29, 30, 0),
    gsSP2Triangles(26, 30, 27, 0, 27, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[155], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 2, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 4, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(5, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(14, 18, 15, 0, 15, 18, 19, 0),
    gsSP2Triangles(16, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(24, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_0802F0[187], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 7, 4, 0, 4, 7, 8, 0),
    gsSP2Triangles(5, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 13, 0),
    gsSP1Triangle(13, 16, 17, 0),
    gsSPEndDisplayList(),
};

u64 gSoaringWarpCsWindCapsuleTex[] = {
#include "assets/objects/gameplay_keep/soaring_warp_cs_wind_capsule.i8.inc.c"
};

F3DPrimColor gameplay_keepTexColorChangingPrimColors_0815A0[] = {
    { 0, 0, 55, 0, 255 },
    { 0, 0, 70, 255, 255 },
    { 0, 0, 70, 255, 255 },
};

u16 gameplay_keepTexColorChangingFrameData_0815B0[] = {
    0, 11, 93,
};

AnimatedMatColorParams gSoaringWarpCsWindCapsuleTexAnimColorParams_0815B8 = { 
    94, 3, gameplay_keepTexColorChangingPrimColors_0815A0, NULL, gameplay_keepTexColorChangingFrameData_0815B0,
};

AnimatedMatTexScrollParams gSoaringWarpCsWindCapsuleTexAnimTexScrollParams_0815C8[] = {
    { 4, 4, 0x10, 0x20 },
    { 25, 10, 0x10, 0x20 },
};

AnimatedMaterial gSoaringWarpCsWindCapsuleTexAnim[] = {
    { 1, 4, &gSoaringWarpCsWindCapsuleTexAnimColorParams_0815B8 },
    { -2, 1, gSoaringWarpCsWindCapsuleTexAnimTexScrollParams_0815C8 },
};

Vtx gameplay_keepVtx_0815E0[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_0815E0.vtx.inc"
};

Gfx gSoaringWarpCsEmptyDL[] = {
    gsSPEndDisplayList(),
};

Gfx gSoaringWarpCsFeatherDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSoaringWarpCsFeatherTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_0815E0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 gSoaringWarpCsFeatherTex[] = {
#include "assets/objects/gameplay_keep/soaring_warp_cs_feather.rgba16.inc.c"
};

u16 gameplay_keep_flexBitFlags_083534[] = {
    0x0010, 0x01C0, 0x0100, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038,
    0x0038, 0x0000, 0x0038, 0x0000, 0x0038, 0x0038, 0x0100, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0038,
    0x0038, 0x0038, 0x0038, 0x0038, 0x0038, 0x0000, 0x0038, 0x0038, 0x0038, 0x0000, 
};

s16 gameplay_keep_kfNums_083534[] = {
    0x0007, 0x0011, 0x0011, 0x0011, 0x0015, 0x000C, 0x000D, 0x000F, 0x000A, 0x000F, 0x000F, 0x000B, 0x000A, 0x000B,
    0x000B, 0x000A, 0x000B, 0x0007, 0x0009, 0x0008, 0x0007, 0x0008, 0x0008, 0x0007, 0x0009, 0x0009, 0x0005, 0x000B,
    0x000B, 0x0005, 0x0008, 0x000C, 0x000B, 0x000F, 0x0013, 0x000A, 0x0008, 0x000D, 0x0008, 0x0008, 0x000A, 0x0005,
    0x0009, 0x0005, 0x0006, 0x0009, 0x0005, 0x0007, 0x0009, 0x0005, 0x0011, 0x000A, 0x000C, 0x000F, 0x000C, 0x000A,
    0x0010, 0x000E, 0x000E, 0x000D, 0x0010, 0x000C, 0x000B, 0x000C, 0x000A, 0x000B, 0x0006, 0x0008, 0x0009, 0x0005,
    0x000C, 0x000B, 0x0006, 0x000B, 0x000A, 0x0005, 0x000B, 0x000A, 0x0008, 0x000A, 0x000D, 0x000A, 0x000B, 0x0010,
    0x0009, 0x000A, 0x000D, 0x000A, 0x000B, 0x000B, 0x0009, 0x000C, 0x0009, 0x0005, 0x000B, 0x0006, 
};

s16 gameplay_keep_presetValues_083534[] = {
    0x0320, 0x0320, 0x0320, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0090, 0xFFFFFF4E,
    0x0064, 0x0064, 0x0000, 0x0708, 0x0000, 0x008B, 0x0020, 0x0000, 0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000,
    0x0064, 0x0064, 0x0064, 0x00D5, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x00EC, 0x0000, 0x0000, 0x0064, 0x0064,
    0x0064, 0x012C, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0167, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0081,
    0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0072, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x008E, 0x0000, 0x0000,
    0x0064, 0x0064, 0x0064, 0x008E, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0097, 0x0000, 0x0000, 0x0064, 0x0064,
    0x0064, 0x008C, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x008F, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0708,
    0x0708, 0x00CA, 0x00A3, 0x0044, 0x0000, 0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064,
    0x0708, 0x0708, 0x00CA, 0x00C2, 0xFFFFFFC4, 0x0000, 0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0x0064, 0x0064,
    0x0064, 0x00B1, 0x0000, 0x0000, 0x0064, 0x0064, 0x0000, 0x0000, 0x0000, 0xFFFFFF75, 0x0020, 0x0000, 0x0064, 0x0064,
    0x0064, 0x0000, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x00D5, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x00EC,
    0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x012C, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0167, 0x0000, 0x0000,
    0x0064, 0x0064, 0x0064, 0x0081, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0072, 0x0000, 0x0000, 0x0064, 0x0064,
    0x0064, 0x008E, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x008E, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x0097,
    0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x008C, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x008F, 0x0000, 0x0000,
    0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0xFFFFF9C2, 0x00C2, 0xFFFFFFC4, 0x0000, 0x0064, 0x0064, 0x0064, 0x0000,
    0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x00B1, 0x0000, 0x0000, 0x0064, 0x0064, 0x0064, 0x00A3, 0x0044, 0x0000,
    0x0064, 0x0064, 0x0064, 0x0000, 0x0000, 0x065A, 0x0000, 0x0000, 0x0000, 

};

KeyFrame gameplay_keep_KeyFrame_083534[] = {
     { 1, 0, 0, },
     { 39, 0, 0, },
     { 40, 0, 566, },
     { 41, 38, 2909, },
     { 42, 194, 5043, },
     { 99, 29065, 15180, },
     { 100, 29565, 15002, },
     { 1, 18, 867, },
     { 2, 47, 870, },
     { 3, 76, 632, },
     { 4, 89, 313, },
     { 5, 97, 162, },
     { 6, 100, 56, },
     { 7, 101, 20, },
     { 9, 102, 14, },
     { 11, 103, 9, },
     { 13, 103, 4, },
     { 17, 103, -3, },
     { 21, 102, -7, },
     { 24, 102, -8, },
     { 29, 100, -5, },
     { 32, 100, -2, },
     { 42, 100, 0, },
     { 100, 100, 0, },
     { 1, 18, 867, },
     { 2, 47, 870, },
     { 3, 76, 632, },
     { 4, 89, 313, },
     { 5, 97, 162, },
     { 6, 100, 56, },
     { 7, 101, 20, },
     { 9, 102, 14, },
     { 11, 103, 9, },
     { 13, 103, 4, },
     { 17, 103, -3, },
     { 21, 102, -7, },
     { 24, 102, -8, },
     { 29, 100, -5, },
     { 32, 100, -2, },
     { 42, 100, 0, },
     { 100, 100, 0, },
     { 1, 18, 867, },
     { 2, 47, 870, },
     { 3, 76, 632, },
     { 4, 89, 313, },
     { 5, 97, 162, },
     { 6, 100, 56, },
     { 7, 101, 20, },
     { 9, 102, 14, },
     { 11, 103, 9, },
     { 13, 103, 4, },
     { 17, 103, -3, },
     { 21, 102, -7, },
     { 24, 102, -8, },
     { 29, 100, -5, },
     { 32, 100, -2, },
     { 42, 100, 0, },
     { 100, 100, 0, },
     { 1, 53, 194, },
     { 2, 59, 267, },
     { 3, 71, 362, },
     { 4, 83, 356, },
     { 5, 94, 248, },
     { 6, 100, 110, },
     { 7, 102, 46, },
     { 8, 103, 36, },
     { 9, 104, 27, },
     { 10, 105, 18, },
     { 11, 105, 11, },
     { 12, 106, 4, },
     { 14, 105, -7, },
     { 16, 105, -14, },
     { 18, 104, -18, },
     { 20, 102, -18, },
     { 22, 101, -16, },
     { 24, 100, -9, },
     { 26, 100, -1, },
     { 46, 100, 0, },
     { 100, 100, 0, },
     { 1, 1800, 0, },
     { 22, 1800, 0, },
     { 24, 1801, 42, },
     { 26, 1800, -186, },
     { 29, 1762, -395, },
     { 35, 1688, -502, },
     { 36, 1670, -742, },
     { 37, 1639, -1109, },
     { 39, 1558, -808, },
     { 40, 1542, -243, },
     { 41, 1542, 0, },
     { 100, 1542, 0, },
     { 1, -1800, 0, },
     { 22, -1800, 0, },
     { 24, -1796, 129, },
     { 26, -1800, -573, },
     { 29, -1916, -1254, },
     { 32, -2036, -1210, },
     { 35, -2159, -1255, },
     { 36, -2201, -1422, },
     { 37, -2254, -1694, },
     { 39, -2364, -1055, },
     { 40, -2384, -310, },
     { 41, -2384, 0, },
     { 100, -2384, 0, },
     { 1, -513, 1161, },
     { 2, -475, 1610, },
     { 5, -255, 1741, },
     { 6, -210, 990, },
     { 7, -189, 558, },
     { 15, -143, 108, },
     { 18, -133, 16, },
     { 27, -155, -151, },
     { 32, -174, -77, },
     { 35, -187, -250, },
     { 37, -219, -826, },
     { 39, -282, -648, },
     { 40, -296, -197, },
     { 41, -296, 0, },
     { 100, -296, 0, },
     { 1, 0, 0, },
     { 16, 0, 11, },
     { 21, 3, 0, },
     { 27, -21, -213, },
     { 31, -65, -476, },
     { 35, -126, -315, },
     { 37, -133, 196, },
     { 39, -109, 284, },
     { 42, -103, 0, },
     { 100, -103, 0, },
     { 1, 0, 0, },
     { 14, 1, -8, },
     { 17, -3, -116, },
     { 19, -10, -67, },
     { 23, 0, 513, },
     { 26, 79, 949, },
     { 28, 146, 1029, },
     { 30, 219, 1254, },
     { 35, 427, 693, },
     { 36, 443, -103, },
     { 37, 420, -1259, },
     { 39, 296, -1377, },
     { 40, 267, -434, },
     { 41, 267, 0, },
     { 100, 267, 0, },
     { 1, -147, -312, },
     { 2, -158, -409, },
     { 5, -200, -52, },
     { 8, -153, 770, },
     { 15, 60, 739, },
     { 16, 83, 429, },
     { 17, 89, -80, },
     { 18, 77, -408, },
     { 20, 44, -585, },
     { 22, 3, -475, },
     { 27, -6, 140, },
     { 32, 24, 241, },
     { 38, 68, 158, },
     { 44, 74, 0, },
     { 100, 74, 0, },
     { 1, 0, 0, },
     { 15, 0, 10, },
     { 21, 9, 1, },
     { 23, 0, -338, },
     { 29, -114, -467, },
     { 35, -183, -398, },
     { 36, -197, -567, },
     { 38, -251, -860, },
     { 39, -278, -571, },
     { 42, -289, 0, },
     { 100, -289, 0, },
     { 1, 0, 0, },
     { 15, 0, -10, },
     { 19, -7, -46, },
     { 23, 0, 365, },
     { 28, 105, 612, },
     { 35, 199, 416, },
     { 37, 237, 767, },
     { 39, 290, 525, },
     { 42, 300, 0, },
     { 100, 300, 0, },
     { 1, -455, 444, },
     { 2, -440, 615, },
     { 5, -356, 650, },
     { 8, -328, 119, },
     { 16, -324, 29, },
     { 26, -332, -98, },
     { 33, -351, -67, },
     { 37, -366, -223, },
     { 40, -385, -49, },
     { 45, -385, 0, },
     { 100, -385, 0, },
     { 1, 0, 0, },
     { 14, -1, 7, },
     { 17, 3, 104, },
     { 20, 11, 60, },
     { 23, 0, -476, },
     { 28, -136, -836, },
     { 34, -270, -612, },
     { 37, -336, -791, },
     { 39, -386, -473, },
     { 42, -395, 0, },
     { 100, -395, 0, },
     { 1, 0, 0, },
     { 15, 0, -11, },
     { 21, -10, -1, },
     { 23, 0, 373, },
     { 28, 107, 669, },
     { 32, 186, 564, },
     { 37, 270, 425, },
     { 39, 293, 195, },
     { 42, 296, 0, },
     { 100, 296, 0, },
     { 1, -222, -61, },
     { 4, -229, -18, },
     { 12, -147, 430, },
     { 15, -107, 360, },
     { 17, -88, 139, },
     { 20, -87, -36, },
     { 31, -143, -170, },
     { 37, -180, -264, },
     { 39, -197, -169, },
     { 43, -200, 0, },
     { 100, -200, 0, },
     { 1, 0, 0, },
     { 21, 1, 0, },
     { 27, -3, -51, },
     { 31, -22, -252, },
     { 35, -53, -112, },
     { 39, -55, 0, },
     { 100, -55, 0, },
     { 1, 0, 0, },
     { 15, 0, -6, },
     { 21, -6, -1, },
     { 25, 15, 244, },
     { 28, 49, 507, },
     { 30, 96, 965, },
     { 35, 272, 501, },
     { 37, 282, 0, },
     { 100, 282, 0, },
     { 1, 373, 141, },
     { 4, 395, 251, },
     { 6, 407, 56, },
     { 9, 404, -63, },
     { 18, 383, 1, },
     { 26, 383, -26, },
     { 37, 371, 0, },
     { 100, 371, 0, },
     { 1, 0, 0, },
     { 16, 0, -8, },
     { 24, 3, 111, },
     { 30, 34, 205, },
     { 36, 69, 25, },
     { 45, 69, 0, },
     { 100, 69, 0, },
     { 1, 0, 0, },
     { 16, 0, -14, },
     { 22, -3, 58, },
     { 28, 38, 273, },
     { 31, 71, 397, },
     { 35, 116, 157, },
     { 39, 119, 0, },
     { 100, 119, 0, },
     { 1, 569, -634, },
     { 2, 548, -877, },
     { 5, 430, -908, },
     { 7, 398, -225, },
     { 16, 399, -4, },
     { 33, 405, 22, },
     { 51, 406, 0, },
     { 100, 406, 0, },
     { 1, 0, 0, },
     { 20, -1, -8, },
     { 24, 3, 84, },
     { 31, 31, 176, },
     { 36, 53, 19, },
     { 44, 53, 0, },
     { 100, 53, 0, },
     { 1, 0, 0, },
     { 15, 0, -6, },
     { 21, -6, -1, },
     { 24, 9, 310, },
     { 28, 62, 445, },
     { 30, 95, 575, },
     { 35, 189, 255, },
     { 38, 194, 0, },
     { 100, 194, 0, },
     { 1, -13, -14, },
     { 6, -30, -259, },
     { 15, -140, -332, },
     { 17, -157, -112, },
     { 20, -157, 45, },
     { 24, -150, 24, },
     { 33, -143, 27, },
     { 49, -142, 0, },
     { 100, -142, 0, },
     { 1, 0, 0, },
     { 21, -1, 0, },
     { 32, 11, 27, },
     { 50, 13, 0, },
     { 100, 13, 0, },
     { 1, 0, 0, },
     { 14, 1, -9, },
     { 17, -3, -130, },
     { 18, -9, -121, },
     { 20, -14, -74, },
     { 23, 0, 621, },
     { 28, 179, 855, },
     { 33, 216, -113, },
     { 36, 206, -26, },
     { 44, 206, 0, },
     { 100, 206, 0, },
     { 1, 99, -430, },
     { 2, 85, -600, },
     { 5, 1, -707, },
     { 8, -39, -275, },
     { 15, -83, -161, },
     { 18, -93, -7, },
     { 25, -88, 12, },
     { 31, -95, -108, },
     { 36, -109, -14, },
     { 55, -109, 0, },
     { 100, -109, 0, },
     { 1, 0, -22, },
     { 8, -5, 11, },
     { 20, 0, -2, },
     { 54, -2, 0, },
     { 100, -2, 0, },
     { 1, 0, 12, },
     { 15, 1, -23, },
     { 21, -14, 0, },
     { 23, 0, 536, },
     { 28, 154, 778, },
     { 32, 206, 151, },
     { 38, 212, 0, },
     { 100, 212, 0, },
     { 1, 77, -998, },
     { 2, 44, -1368, },
     { 5, -134, -1225, },
     { 6, -161, -449, },
     { 7, -164, 18, },
     { 17, -22, 122, },
     { 19, -21, -21, },
     { 24, -30, -9, },
     { 30, -36, -135, },
     { 36, -64, -21, },
     { 44, -64, 0, },
     { 100, -64, 0, },
     { 1, 0, 0, },
     { 15, 0, 6, },
     { 22, 2, -47, },
     { 28, -18, -94, },
     { 29, -21, 118, },
     { 30, -11, 178, },
     { 32, -9, -16, },
     { 34, -15, -179, },
     { 36, -26, -54, },
     { 39, -26, 0, },
     { 100, -26, 0, },
     { 1, 0, 0, },
     { 15, 0, -11, },
     { 17, -2, -85, },
     { 21, -11, -4, },
     { 23, 0, 410, },
     { 28, 118, 659, },
     { 29, 138, -354, },
     { 30, 95, -636, },
     { 31, 95, 80, },
     { 32, 100, 164, },
     { 33, 106, 299, },
     { 34, 120, 472, },
     { 35, 138, 404, },
     { 38, 147, 0, },
     { 100, 147, 0, },
     { 1, -71, -594, },
     { 2, -91, -811, },
     { 5, -194, -663, },
     { 6, -207, -170, },
     { 7, -205, 125, },
     { 15, -94, 432, },
     { 17, -68, 378, },
     { 19, -51, 17, },
     { 23, -81, -149, },
     { 28, -88, -8, },
     { 29, -88, 109, },
     { 30, -81, 159, },
     { 32, -77, -41, },
     { 33, -80, -293, },
     { 34, -96, -577, },
     { 35, -119, -511, },
     { 36, -130, -172, },
     { 37, -130, 0, },
     { 100, -130, 0, },
     { 1, 0, 0, },
     { 11, 2, 14, },
     { 15, 2, -37, },
     { 17, -7, -282, },
     { 19, -25, -35, },
     { 22, -5, 195, },
     { 28, -10, -92, },
     { 32, -24, -121, },
     { 37, -34, 0, },
     { 100, -34, 0, },
     { 1, 0, 0, },
     { 15, 0, -11, },
     { 19, -7, -54, },
     { 23, 0, 446, },
     { 28, 129, 684, },
     { 32, 186, 267, },
     { 40, 204, 0, },
     { 100, 204, 0, },
     { 1, 28, -349, },
     { 2, 16, -476, },
     { 5, -44, -381, },
     { 8, -46, 156, },
     { 15, 19, 290, },
     { 17, 41, 380, },
     { 19, 60, 31, },
     { 23, 28, -141, },
     { 27, 27, -8, },
     { 31, 5, -338, },
     { 35, -38, -154, },
     { 38, -40, 0, },
     { 100, -40, 0, },
     { 1, 0, 0, },
     { 15, 0, 7, },
     { 18, 4, 51, },
     { 25, -4, -56, },
     { 31, -22, -152, },
     { 36, -41, -17, },
     { 44, -41, 0, },
     { 100, -41, 0, },
     { 1, 0, 0, },
     { 15, 0, -7, },
     { 21, -6, 6, },
     { 24, 9, 317, },
     { 29, 72, 320, },
     { 36, 127, 28, },
     { 45, 127, 0, },
     { 100, 127, 0, },
     { 1, -46, 13, },
     { 7, -49, -80, },
     { 15, -74, -38, },
     { 16, -75, 92, },
     { 19, -48, 50, },
     { 22, -69, -222, },
     { 29, -77, -72, },
     { 36, -106, -20, },
     { 48, -106, 0, },
     { 100, -106, 0, },
     { 1, 1800, 0, },
     { 21, 1801, 0, },
     { 32, 1773, -127, },
     { 37, 1762, 0, },
     { 100, 1762, 0, },
     { 1, -1800, 0, },
     { 15, -1800, 9, },
     { 19, -1794, 41, },
     { 23, -1800, -315, },
     { 28, -1890, -639, },
     { 30, -1936, -826, },
     { 35, -2072, -367, },
     { 38, -2078, 0, },
     { 100, -2078, 0, },
     { 1, -174, 0, },
     { 22, -174, -5, },
     { 35, -183, -12, },
     { 57, -184, 0, },
     { 100, -184, 0, },
     { 1, 1800, 0, },
     { 21, 1801, 0, },
     { 33, 1764, -134, },
     { 36, 1756, -16, },
     { 54, 1756, 0, },
     { 100, 1756, 0, },
     { 1, -1800, 0, },
     { 15, -1800, 8, },
     { 21, -1792, 1, },
     { 23, -1800, -274, },
     { 28, -1878, -557, },
     { 30, -1919, -719, },
     { 35, -2037, -319, },
     { 37, -2043, 0, },
     { 100, -2043, 0, },
     { 1, -201, 0, },
     { 23, -201, -11, },
     { 34, -209, -22, },
     { 51, -210, 0, },
     { 100, -210, 0, },
     { 1, 0, 0, },
     { 16, 0, 8, },
     { 24, -3, -102, },
     { 32, -45, -213, },
     { 36, -64, -23, },
     { 41, -64, 0, },
     { 100, -64, 0, },
     { 1, 0, 0, },
     { 15, 0, -7, },
     { 21, -7, -1, },
     { 24, 10, 343, },
     { 29, 86, 537, },
     { 31, 128, 715, },
     { 35, 210, 283, },
     { 37, 215, 0, },
     { 100, 215, 0, },
     { 1, -60, 0, },
     { 21, -59, 0, },
     { 34, -71, -28, },
     { 45, -72, 0, },
     { 100, -72, 0, },
     { 1, 53, 186, },
     { 2, 59, 257, },
     { 3, 70, 352, },
     { 4, 82, 354, },
     { 5, 94, 263, },
     { 6, 100, 134, },
     { 7, 103, 60, },
     { 8, 104, 31, },
     { 9, 105, 7, },
     { 10, 104, -10, },
     { 11, 104, -22, },
     { 13, 102, -30, },
     { 14, 101, -25, },
     { 15, 100, -15, },
     { 16, 100, -4, },
     { 21, 100, 0, },
     { 100, 100, 0, },
     { 1, 0, 0, },
     { 15, 0, -7, },
     { 21, -7, -1, },
     { 24, 11, 387, },
     { 28, 75, 444, },
     { 32, 124, 332, },
     { 36, 158, 96, },
     { 40, 143, -50, },
     { 45, 143, 0, },
     { 100, 143, 0, },
     { 1, 0, 0, },
     { 12, -1, -3, },
     { 17, 4, 151, },
     { 18, 10, 141, },
     { 20, 16, 87, },
     { 22, 16, -287, },
     { 28, -198, -1196, },
     { 32, -330, -877, },
     { 37, -455, -568, },
     { 39, -483, -225, },
     { 42, -487, 0, },
     { 100, -487, 0, },
     { 1, 1252, 1102, },
     { 2, 1289, 1534, },
     { 5, 1501, 1749, },
     { 6, 1548, 1081, },
     { 7, 1573, 704, },
     { 15, 1674, 297, },
     { 17, 1693, 168, },
     { 20, 1696, -29, },
     { 24, 1676, -297, },
     { 29, 1618, -309, },
     { 35, 1563, -146, },
     { 37, 1564, 270, },
     { 39, 1591, 299, },
     { 42, 1597, 0, },
     { 100, 1597, 0, },
     { 1, 0, 0, },
     { 15, 0, -7, },
     { 20, -5, -30, },
     { 23, 0, 239, },
     { 28, 69, 407, },
     { 32, 115, 320, },
     { 35, 141, 161, },
     { 37, 141, -245, },
     { 39, 116, -284, },
     { 40, 110, -90, },
     { 43, 110, 0, },
     { 100, 110, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 17, 2, 90, },
     { 19, 8, 51, },
     { 23, 0, -402, },
     { 28, -115, -748, },
     { 32, -211, -726, },
     { 38, -322, -229, },
     { 43, -329, 0, },
     { 100, -329, 0, },
     { 1, -147, -63, },
     { 6, -162, -14, },
     { 10, -129, 669, },
     { 15, 26, 763, },
     { 16, 48, 387, },
     { 17, 52, -130, },
     { 18, 39, -424, },
     { 20, 8, -547, },
     { 22, -30, -379, },
     { 29, 13, 32, },
     { 35, -29, -83, },
     { 36, -29, 199, },
     { 37, -16, 587, },
     { 39, 35, 542, },
     { 41, 46, 0, },
     { 100, 46, 0, },
     { 1, 0, 0, },
     { 14, 1, -5, },
     { 17, -4, -141, },
     { 19, -12, -80, },
     { 23, 0, 645, },
     { 28, 185, 1069, },
     { 31, 261, 522, },
     { 35, 335, 838, },
     { 36, 367, 1397, },
     { 37, 428, 2212, },
     { 39, 591, 1656, },
     { 40, 625, 500, },
     { 41, 625, 0, },
     { 100, 625, 0, },
     { 1, 0, 0, },
     { 14, -1, 4, },
     { 17, 3, 120, },
     { 18, 8, 109, },
     { 20, 12, 68, },
     { 22, 13, -225, },
     { 29, -185, -723, },
     { 35, -283, -755, },
     { 36, -312, -1312, },
     { 37, -370, -2127, },
     { 39, -529, -1613, },
     { 40, -562, -488, },
     { 41, -562, 0, },
     { 100, -562, 0, },
     { 1, -444, 226, },
     { 3, -422, 516, },
     { 8, -315, 468, },
     { 16, -303, -7, },
     { 24, -307, -142, },
     { 31, -339, -18, },
     { 35, -347, -222, },
     { 36, -357, -498, },
     { 37, -381, -907, },
     { 39, -451, -728, },
     { 40, -466, -222, },
     { 41, -466, 0, },
     { 100, -466, 0, },
     { 1, 0, 0, },
     { 14, 1, -5, },
     { 17, -4, -164, },
     { 18, -11, -149, },
     { 20, -17, -93, },
     { 22, -17, 308, },
     { 23, 0, 752, },
     { 28, 216, 1236, },
     { 30, 286, 1000, },
     { 35, 415, 253, },
     { 36, 418, -429, },
     { 37, 387, -1478, },
     { 39, 254, -1438, },
     { 40, 224, -448, },
     { 41, 224, 0, },
     { 100, 224, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 17, 3, 102, },
     { 20, 11, 58, },
     { 23, 0, -470, },
     { 28, -135, -753, },
     { 32, -206, -412, },
     { 35, -239, -228, },
     { 37, -244, 177, },
     { 39, -222, 257, },
     { 42, -216, 0, },
     { 100, -216, 0, },
     { 1, -244, 123, },
     { 4, -221, 367, },
     { 9, -154, 320, },
     { 15, -98, 232, },
     { 18, -85, 22, },
     { 25, -101, -172, },
     { 30, -122, -22, },
     { 36, -121, -97, },
     { 39, -142, -167, },
     { 43, -145, 0, },
     { 100, -145, 0, },
     { 1, 0, 0, },
     { 18, 1, 18, },
     { 24, -5, -199, },
     { 28, -32, -19, },
     { 33, 16, 501, },
     { 35, 54, 626, },
     { 36, 76, 854, },
     { 37, 111, 1245, },
     { 39, 201, 905, },
     { 40, 219, 272, },
     { 41, 219, 0, },
     { 100, 219, 0, },
     { 1, 0, 0, },
     { 20, -1, -7, },
     { 24, 5, 214, },
     { 28, 30, -151, },
     { 35, -174, -1095, },
     { 37, -250, -1282, },
     { 39, -332, -781, },
     { 40, -347, -228, },
     { 41, -347, 0, },
     { 100, -347, 0, },
     { 1, 373, -118, },
     { 3, 361, -262, },
     { 10, 311, 108, },
     { 17, 365, 62, },
     { 21, 364, -35, },
     { 29, 356, 27, },
     { 35, 371, 17, },
     { 37, 365, -248, },
     { 40, 339, -70, },
     { 42, 339, 0, },
     { 100, 339, 0, },
     { 1, 0, 0, },
     { 21, 1, 0, },
     { 27, -10, -72, },
     { 38, -1, -6, },
     { 91, -2, 0, },
     { 100, -2, 0, },
     { 1, 0, 0, },
     { 15, 0, 7, },
     { 21, 6, 1, },
     { 24, -11, -380, },
     { 29, -77, -148, },
     { 36, -56, 62, },
     { 41, -56, 0, },
     { 100, -56, 0, },
     { 1, 548, -161, },
     { 3, 532, -379, },
     { 8, 445, -479, },
     { 12, 393, -362, },
     { 16, 350, -218, },
     { 20, 345, 36, },
     { 25, 352, 27, },
     { 44, 354, 0, },
     { 100, 354, 0, },
     { 1, 0, 0, },
     { 27, -1, -8, },
     { 39, -9, 5, },
     { 80, -9, 0, },
     { 100, -9, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 17, 3, 96, },
     { 20, 10, 55, },
     { 23, 0, -433, },
     { 28, -124, -782, },
     { 31, -197, -730, },
     { 35, -285, -522, },
     { 37, -309, -104, },
     { 39, -303, 104, },
     { 44, -301, 0, },
     { 100, -301, 0, },
     { 1, 15, -72, },
     { 4, 1, -235, },
     { 9, -51, -355, },
     { 15, -141, -409, },
     { 17, -161, -127, },
     { 20, -161, 43, },
     { 25, -149, 73, },
     { 33, -122, 122, },
     { 38, -111, -13, },
     { 64, -112, 0, },
     { 100, -112, 0, },
     { 1, 0, 0, },
     { 21, -1, 0, },
     { 31, 10, 35, },
     { 39, 15, -5, },
     { 69, 15, 0, },
     { 100, 15, 0, },
     { 1, 0, 0, },
     { 14, -1, 4, },
     { 17, 3, 121, },
     { 19, 11, 68, },
     { 21, 15, 2, },
     { 23, 0, -568, },
     { 28, -163, -827, },
     { 34, -222, -55, },
     { 38, -228, 20, },
     { 57, -226, 0, },
     { 100, -226, 0, },
     { 1, 105, -335, },
     { 2, 94, -492, },
     { 9, -94, -305, },
     { 16, -42, 170, },
     { 19, -39, -15, },
     { 24, -41, 23, },
     { 33, -22, 98, },
     { 39, -13, -14, },
     { 59, -14, 0, },
     { 100, -14, 0, },
     { 1, 0, 0, },
     { 21, -1, 0, },
     { 30, 10, -14, },
     { 41, -3, 0, },
     { 100, -3, 0, },
     { 1, 0, 0, },
     { 14, -1, 4, },
     { 17, 4, 134, },
     { 20, 14, 76, },
     { 23, 0, -630, },
     { 28, -182, -915, },
     { 32, -240, -142, },
     { 35, -246, -65, },
     { 38, -251, 21, },
     { 61, -249, 0, },
     { 100, -249, 0, },
     { 1, 51, -263, },
     { 2, 42, -386, },
     { 9, -97, -125, },
     { 16, -11, 262, },
     { 19, -5, -23, },
     { 23, -11, -8, },
     { 30, 6, 245, },
     { 37, 72, 149, },
     { 43, 79, 0, },
     { 100, 79, 0, },
     { 1, 0, 0, },
     { 15, 0, -8, },
     { 20, -5, 23, },
     { 27, 13, 95, },
     { 34, 16, -23, },
     { 38, 20, 78, },
     { 46, 23, 0, },
     { 100, 23, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 17, 3, 104, },
     { 20, 11, 68, },
     { 23, 0, -517, },
     { 28, -149, -801, },
     { 33, -223, -247, },
     { 38, -247, 42, },
     { 41, -243, 0, },
     { 100, -243, 0, },
     { 1, -65, -361, },
     { 2, -77, -526, },
     { 9, -249, 34, },
     { 14, -113, 1097, },
     { 16, -49, 757, },
     { 19, -7, -6, },
     { 23, -49, -175, },
     { 25, -54, -33, },
     { 31, -20, 426, },
     { 37, 48, -93, },
     { 39, 33, -190, },
     { 43, 29, 0, },
     { 100, 29, 0, },
     { 1, 0, 0, },
     { 14, 1, -4, },
     { 17, -3, -121, },
     { 19, -11, -20, },
     { 23, 0, 78, },
     { 31, 24, 184, },
     { 36, 49, -15, },
     { 40, 25, -60, },
     { 44, 25, 0, },
     { 100, 25, 0, },
     { 1, 0, 0, },
     { 15, 0, 6, },
     { 20, 5, 41, },
     { 23, 0, -249, },
     { 28, -72, -547, },
     { 31, -136, -747, },
     { 35, -234, -586, },
     { 37, -260, -137, },
     { 40, -254, 34, },
     { 44, -254, 0, },
     { 100, -254, 0, },
     { 1, 74, -220, },
     { 2, 66, -324, },
     { 8, -45, -365, },
     { 15, -14, 354, },
     { 16, -2, 481, },
     { 17, 18, 700, },
     { 18, 45, 588, },
     { 19, 58, 70, },
     { 22, 10, -487, },
     { 25, -6, 11, },
     { 30, 7, 75, },
     { 35, 25, 184, },
     { 37, 45, 484, },
     { 39, 81, 369, },
     { 42, 89, 0, },
     { 100, 89, 0, },
     { 1, 0, 0, },
     { 15, 0, -9, },
     { 20, -6, 14, },
     { 25, 11, 195, },
     { 35, 61, 42, },
     { 37, 58, -208, },
     { 39, 39, -205, },
     { 42, 34, 0, },
     { 100, 34, 0, },
     { 1, 0, 0, },
     { 15, 0, 9, },
     { 19, 6, 43, },
     { 23, 0, -347, },
     { 28, -100, -648, },
     { 32, -184, -626, },
     { 36, -255, -331, },
     { 40, -260, 24, },
     { 50, -260, 0, },
     { 100, -260, 0, },
     { 1, -47, -139, },
     { 3, -60, -309, },
     { 9, -122, -39, },
     { 15, -74, 305, },
     { 17, -54, 318, },
     { 19, -38, 18, },
     { 22, -59, -210, },
     { 26, -65, 33, },
     { 35, -19, 273, },
     { 37, 6, 551, },
     { 39, 46, 399, },
     { 42, 54, 0, },
     { 100, 54, 0, },
     { 1, 0, 0, },
     { 16, 0, -13, },
     { 21, -3, 0, },
     { 24, 5, 189, },
     { 29, 40, 102, },
     { 35, 40, 64, },
     { 37, 54, 405, },
     { 39, 86, 333, },
     { 42, 93, 0, },
     { 100, 93, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 17, 2, 86, },
     { 19, 8, 49, },
     { 21, 11, 2, },
     { 23, 0, -393, },
     { 28, -113, -659, },
     { 32, -180, -426, },
     { 39, -249, -74, },
     { 44, -250, 0, },
     { 100, -250, 0, },
     { 1, 1599, 0, },
     { 21, 1599, 0, },
     { 26, 1599, 6, },
     { 30, 1615, 319, },
     { 35, 1674, 76, },
     { 36, 1673, -368, },
     { 37, 1649, -1010, },
     { 39, 1563, -925, },
     { 40, 1544, -286, },
     { 41, 1544, 0, },
     { 100, 1544, 0, },
     { 1, 0, 0, },
     { 15, 0, -5, },
     { 21, -5, -1, },
     { 24, 8, 263, },
     { 29, 56, 150, },
     { 37, 64, 144, },
     { 40, 78, 35, },
     { 44, 78, 0, },
     { 100, 78, 0, },
     { 1, 0, 0, },
     { 14, -1, 3, },
     { 20, 9, 48, },
     { 23, 0, -387, },
     { 28, -111, -655, },
     { 31, -168, -538, },
     { 35, -225, -256, },
     { 36, -232, -7, },
     { 37, -226, 374, },
     { 39, -187, 438, },
     { 42, -178, 0, },
     { 100, -178, 0, },
     { 1, -60, 0, },
     { 23, -60, -1, },
     { 30, -46, 365, },
     { 35, 28, 243, },
     { 36, 33, -81, },
     { 37, 23, -535, },
     { 39, -28, -557, },
     { 42, -39, 0, },
     { 100, -39, 0, },
     { 1, 0, 0, },
     { 21, -1, 0, },
     { 31, 16, 43, },
     { 40, 21, -2, },
     { 100, 21, 0, },
     { 1, 0, 0, },
     { 14, 1, -3, },
     { 17, -3, -100, },
     { 20, -10, -57, },
     { 23, 0, 459, },
     { 28, 132, 761, },
     { 32, 209, 482, },
     { 36, 261, 240, },
     { 38, 266, -54, },
     { 41, 261, 0, },
     { 100, 261, 0, },
     { 1, -1598, 0, },
     { 20, -1600, -7, },
     { 26, -1589, 110, },
     { 39, -1565, -9, },
     { 66, -1566, 0, },
     { 100, -1566, 0, },
};

KeyFrameAnimation gameplay_keep_KFAnim_083534 = { 
    gameplay_keep_flexBitFlags_083534, gameplay_keep_KeyFrame_083534, gameplay_keep_kfNums_083534,
    gameplay_keep_presetValues_083534, 0xFFFF, 0x0064
};

u8 gameplay_keep_possiblePadding_083548[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_083550[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_083550.vtx.inc"
};

Gfx gameplay_keep_DL_084790[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[286], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0847E0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[277], 3, 0),
    gsSPMatrix(0x0D000400, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[280], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084850[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000400, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[268], 3, 0),
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[271], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0848C0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[259], 3, 0),
    gsSPMatrix(0x0D000480, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[262], 6, 3),
    gsSP2Triangles(2, 1, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084930[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000480, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[250], 3, 0),
    gsSPMatrix(0x0D0004C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[253], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0849A0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0004C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[241], 3, 0),
    gsSPMatrix(0x0D000500, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[244], 6, 3),
    gsSP2Triangles(3, 4, 1, 0, 5, 1, 2, 0),
    gsSP2Triangles(2, 0, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084A10[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000500, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[232], 3, 0),
    gsSPMatrix(0x0D000540, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[235], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084A80[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000540, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[223], 3, 0),
    gsSPMatrix(0x0D000580, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[226], 6, 3),
    gsSP2Triangles(3, 4, 1, 0, 5, 1, 2, 0),
    gsSP2Triangles(2, 0, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084AF0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000580, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[214], 3, 0),
    gsSPMatrix(0x0D0005C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[217], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084B60[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0005C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[205], 3, 0),
    gsSPMatrix(0x0D000600, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[208], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084BD0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000600, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[194], 3, 0),
    gsSPMatrix(0x0D000640, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[197], 8, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSP1Triangle(9, 10, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084C48[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000640, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[159], 3, 0),
    gsSPMatrix(0x0D000680, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[162], 10, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 7, 0, 0, 2, 1, 8, 0),
    gsSP2Triangles(2, 9, 10, 0, 1, 11, 12, 0),
    gsSPVertex(&gameplay_keepVtx_083550[172], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 10, 7, 0),
    gsSP2Triangles(3, 11, 0, 0, 6, 8, 2, 0),
    gsSP2Triangles(6, 2, 1, 0, 6, 1, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084CF0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000680, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[184], 2, 0),
    gsSPMatrix(0x0D000740, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[186], 3, 2),
    gsSP2Triangles(2, 0, 1, 0, 3, 1, 4, 0),
    gsSPVertex(&gameplay_keepVtx_083550[189], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084D70[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000680, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[154], 2, 0),
    gsSPMatrix(0x0D0006C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[156], 3, 2),
    gsSP2Triangles(2, 1, 0, 0, 3, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084DD8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0006C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[146], 2, 0),
    gsSPMatrix(0x0D000700, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[148], 3, 2),
    gsSP2Triangles(2, 0, 1, 0, 3, 1, 4, 0),
    gsSPVertex(&gameplay_keepVtx_083550[151], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084E50[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[140], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084EA0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[131], 3, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[134], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084F10[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[122], 3, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[125], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084F80[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[113], 3, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[116], 6, 3),
    gsSP2Triangles(3, 4, 1, 0, 5, 1, 2, 0),
    gsSP2Triangles(2, 0, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_084FF0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[104], 3, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[107], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085060[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[95], 3, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[98], 6, 3),
    gsSP2Triangles(2, 1, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0850D0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[86], 3, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[89], 6, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085140[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[77], 3, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[80], 6, 3),
    gsSP2Triangles(2, 1, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0851B0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[68], 3, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[71], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085220[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[59], 3, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[62], 6, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085290[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[48], 3, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[51], 8, 3),
    gsSP2Triangles(3, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 7, 8, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085308[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[13], 3, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[16], 10, 3),
    gsSP2Triangles(2, 0, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 8, 9, 1, 0),
    gsSP2Triangles(10, 1, 2, 0, 11, 12, 1, 0),
    gsSPVertex(&gameplay_keepVtx_083550[26], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(7, 1, 9, 0, 9, 10, 7, 0),
    gsSP2Triangles(3, 11, 0, 0, 6, 2, 1, 0),
    gsSP2Triangles(6, 1, 8, 0, 6, 8, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_0853B0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[8], 2, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[10], 3, 2),
    gsSP2Triangles(2, 0, 1, 0, 3, 1, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085418[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_083550, 2, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[2], 3, 2),
    gsSP2Triangles(2, 1, 0, 0, 3, 0, 4, 0),
    gsSPVertex(&gameplay_keepVtx_083550[5], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gameplay_keep_DL_085490[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(1, 0, SHADE, 0, 0, 0, 0, 1, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[38], 2, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_083550[40], 3, 2),
    gsSP2Triangles(2, 1, 0, 0, 3, 0, 4, 0),
    gsSPVertex(&gameplay_keepVtx_083550[43], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsSPEndDisplayList(),
};

KeyFrameFlexLimb gameplay_keep_KeyFrameLimbs_085640[] = {
    { NULL, 0x01, 0x00, 0xFF },
    { NULL, 0x02, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084E50, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084EA0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084F10, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084F80, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084FF0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085060, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0850D0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085140, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0851B0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085220, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085290, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085308, 0x02, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085490, 0x00, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0853B0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_085418, 0x00, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084790, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0847E0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084850, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0848C0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084930, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_0849A0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084A10, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084A80, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084AF0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084B60, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084BD0, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084C48, 0x02, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084D70, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084DD8, 0x00, 0x00, 0xFF },
    { NULL, 0x01, 0x00, 0xFF },
    { gameplay_keep_DL_084CF0, 0x00, 0x00, 0xFF },
};

KeyFrameFlexSkeleton gameplay_keep_KFSkel_085640 = { 
    0x26, 0x1E, gameplay_keep_KeyFrameLimbs_085640
};

u8 gameplay_keep_possiblePadding_085648[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx gameplay_keepVtx_085650[] = {
#include "assets/objects/gameplay_keep/gameplay_keepVtx_085650.vtx.inc"
};

Gfx gElegyShellZoraDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarBoneTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_085650, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 29, 31, 0),
    gsSPVertex(&gameplay_keepVtx_085650[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 1, 0, 1, 0, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(7, 23, 6, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_085650[63], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarSpinousTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[79], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 0, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 11, 14, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 21, 27, 22, 0),
    gsSP2Triangles(28, 24, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_085650[111], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 21, 23, 19, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 25, 0, 29, 28, 27, 0),
    gsSP1Triangle(29, 30, 28, 0),
    gsSPVertex(&gameplay_keepVtx_085650[142], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 3, 13, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[156], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 14, 11, 0),
    gsSP2Triangles(16, 15, 11, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 22, 21, 0),
    gsSP2Triangles(2, 24, 25, 0, 2, 25, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[182], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(9, 10, 6, 0, 6, 10, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 11, 0),
    gsSP2Triangles(18, 19, 0, 0, 19, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarJawTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[202], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 18, 21, 0),
    gsSP2Triangles(18, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 0, 0, 28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_085650[233], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 12, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPLoadTextureBlock(gElegyShellZoraGuitarSpinousTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[253], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 12, 0, 0, 5, 13, 3, 0),
    gsSP2Triangles(11, 14, 9, 0, 8, 15, 6, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0C000010),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraRightShoulderTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_085650[269], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 13, 12, 17, 0),
    gsSP2Triangles(18, 16, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 24, 23, 0),
    gsSP2Triangles(27, 16, 18, 0, 27, 14, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraRibsTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[297], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 0, 2, 0, 13, 14, 15, 0),
    gsSP2Triangles(11, 16, 9, 0, 17, 18, 19, 0),
    gsSP1Triangle(5, 20, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraFinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[318], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 12, 2, 6, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[332], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 5, 9, 6, 0),
    gsSP2Triangles(5, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 12, 11, 0),
    gsSP2Triangles(11, 16, 15, 0, 14, 16, 11, 0),
    gsSP2Triangles(17, 4, 8, 0, 18, 19, 20, 0),
    gsSP2Triangles(5, 21, 10, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 3, 0, 0, 26, 23, 22, 0),
    gsSP1Triangle(27, 3, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[360], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP1Triangle(9, 10, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraFinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[371], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 3, 5, 0),
    gsSP2Triangles(6, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 13, 2, 0, 2, 1, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraWristbandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[385], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 3, 5, 0, 5, 6, 4, 0),
    gsSP2Triangles(4, 2, 1, 0, 0, 2, 7, 0),
    gsSP2Triangles(7, 6, 5, 0, 7, 8, 0, 0),
    gsSP1Triangle(5, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[394], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(8, 12, 11, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(5, 19, 18, 0, 5, 4, 19, 0),
    gsSP2Triangles(14, 12, 21, 0, 16, 22, 17, 0),
    gsSP2Triangles(9, 8, 11, 0, 23, 24, 1, 0),
    gsSP2Triangles(1, 24, 2, 0, 1, 3, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraSpottedSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[419], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 0, 2, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 8, 9, 6, 0),
    gsSP1Triangle(19, 16, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[439], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&gameplay_keepVtx_085650[453], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraArrowTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[456], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 4, 0, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(14, 16, 15, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraRibsTattooTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[474], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 5, 7, 0, 8, 10, 7, 0),
    gsSP2Triangles(6, 5, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraMouthTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[490], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraEyeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[495], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 2, 5, 0, 0, 2, 4, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 8, 11, 12, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraFinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_085650[509], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 19, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 21, 24, 0, 15, 25, 16, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_085650[541], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraBackAndHipSpottedSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_085650[547], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 1, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 5, 4, 0, 4, 15, 14, 0),
    gsSP2Triangles(5, 16, 3, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 19, 25, 0, 24, 17, 19, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP2Triangles(24, 25, 26, 0, 10, 31, 13, 0),
    gsSPVertex(&gameplay_keepVtx_085650[579], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 3, 10, 0),
    gsSP2Triangles(9, 11, 3, 0, 12, 11, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 11, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 23, 20, 0),
    gsSP2Triangles(13, 25, 14, 0, 26, 7, 6, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 27, 30, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&gameplay_keepVtx_085650[611], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 7, 4, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 5, 4, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraSpottedSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[639], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 0, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 12, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 14, 9, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(17, 21, 15, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 18, 20, 0, 22, 24, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(25, 31, 18, 0),
    gsSPVertex(&gameplay_keepVtx_085650[671], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 3, 0),
    gsSP2Triangles(9, 3, 5, 0, 3, 8, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 13, 16, 0),
    gsSP2Triangles(12, 18, 10, 0, 12, 19, 18, 0),
    gsSP2Triangles(20, 2, 21, 0, 22, 23, 6, 0),
    gsSP2Triangles(5, 23, 22, 0, 24, 13, 17, 0),
    gsSP2Triangles(8, 25, 22, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 6, 8, 0, 25, 8, 7, 0),
    gsSP2Triangles(5, 22, 26, 0, 26, 9, 5, 0),
    gsSP2Triangles(14, 13, 24, 0, 15, 27, 28, 0),
    gsSP2Triangles(14, 27, 15, 0, 29, 15, 28, 0),
    gsSP1Triangle(29, 16, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gElegyShellZoraTLUT),
    gsDPLoadTextureBlock(gElegyShellZoraSkinTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[701], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 11, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 19, 0, 29, 30, 31, 0),
    gsSP1Triangle(19, 12, 11, 0),
    gsSPVertex(&gameplay_keepVtx_085650[733], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSP1Triangle(27, 30, 29, 0),
    gsSPVertex(&gameplay_keepVtx_085650[764], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 5, 6, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 6, 10, 0),
    gsSP2Triangles(6, 9, 7, 0, 7, 11, 1, 0),
    gsSP2Triangles(7, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 12, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 17, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 19, 0, 16, 20, 19, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_085650[796], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 9, 6, 0, 17, 14, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 8, 25, 0, 11, 24, 12, 0),
    gsSP2Triangles(26, 20, 19, 0, 27, 28, 29, 0),
    gsSP1Triangle(5, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_085650[828], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(7, 14, 8, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_085650[859], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 7, 6, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 17, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 25, 24, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_085650[889], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gElegyShellZoraPlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_085650[904], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(12, 16, 17, 0, 14, 18, 12, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(21, 20, 24, 0, 23, 20, 25, 0),
    gsSPEndDisplayList(),
};

u64 gElegyShellZoraTLUT[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_tlut.rgba16.inc.c"
};

u64 gElegyShellZoraGuitarJawTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_guitar_jaw.rgba16.inc.c"
};

u64 gElegyShellZoraGuitarEyeTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_guitar_eye.rgba16.inc.c"
};

u64 gElegyShellZoraGuitarTeethTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_guitar_teeth.rgba16.inc.c"
};

u64 gElegyShellZoraGuitarSpinousTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_guitar_spinous.rgba16.inc.c"
};

u64 gElegyShellZoraGuitarBoneTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_guitar_bone.rgba16.inc.c"
};

u64 gElegyShellZoraSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_skin.ci8.inc.c"
};

u64 gElegyShellZoraSpottedSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_spotted_skin.ci8.inc.c"
};

u64 gElegyShellZoraFingersTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_fingers.ci8.inc.c"
};

u64 gElegyShellZoraBackAndHipSpottedSkinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_back_and_hip_spotted_skin.ci8.inc.c"
};

u64 gElegyShellZoraWristbandTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_wristband.ci8.inc.c"
};

u64 gElegyShellZoraFinTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_fin.ci8.inc.c"
};

u64 gElegyShellZoraEyeTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_eye.ci8.inc.c"
};

u64 gElegyShellZoraMouthTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_mouth.ci8.inc.c"
};

u64 gElegyShellZoraRibsTattooTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_ribs_tattoo.ci8.inc.c"
};

u64 gElegyShellZoraArrowTattooTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_arrow_tattoo.ci8.inc.c"
};

u64 gElegyShellZoraRightShoulderTattooTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_right_shoulder_tattoo.ci8.inc.c"
};

u64 gElegyShellZoraPlatformTex[] = {
#include "assets/objects/gameplay_keep/elegy_shell_zora_platform.rgba16.inc.c"
};

u64 gameplay_keep_Tex_08D3E0[] = {
#include "assets/objects/gameplay_keep/tex_08D3E0.i8.inc.c"
};

u64 gEffDust1Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_1.i8.inc.c"
};

u64 gEffDust2Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_2.i8.inc.c"
};

u64 gEffDust3Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_3.i8.inc.c"
};

u64 gEffDust4Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_4.i8.inc.c"
};

u64 gEffDust5Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_5.i8.inc.c"
};

u64 gEffDust6Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_6.i8.inc.c"
};

u64 gEffDust7Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_7.i8.inc.c"
};

u64 gEffDust8Tex[] = {
#include "assets/objects/gameplay_keep/eff_dust_8.i8.inc.c"
};

u64 gameplay_keep_Tex_08FBE0[] = {
#include "assets/objects/gameplay_keep/tex_08FBE0.i8.inc.c"
};

u64 gameplay_keep_Tex_0903E0[] = {
#include "assets/objects/gameplay_keep/tex_0903E0.i8.inc.c"
};

u64 gameplay_keep_Tex_090BE0[] = {
#include "assets/objects/gameplay_keep/tex_090BE0.i8.inc.c"
};

u64 gameplay_keep_Tex_0913E0[] = {
#include "assets/objects/gameplay_keep/tex_0913E0.i8.inc.c"
};

u64 gEffBubble1Tex[] = {
#include "assets/objects/gameplay_keep/eff_bubble_1.ia8.inc.c"
};

u64 gEffBubble2Tex[] = {
#include "assets/objects/gameplay_keep/eff_bubble_2.ia8.inc.c"
};

u64 gElectricSpark1Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_1.i4.inc.c"
};

u64 gElectricSpark2Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_2.i4.inc.c"
};

u64 gElectricSpark3Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_3.i4.inc.c"
};

u64 gElectricSpark4Tex[] = {
#include "assets/objects/gameplay_keep/electric_spark_4.i4.inc.c"
};

