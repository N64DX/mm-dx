#include <ultra64.h>
#include <global.h>

void EffectSS_Init(GlobalContext* globalCtx, s32 numEntries) {
    u32 i;
    EffectSs* iter;
    ParticleOverlay* iter2;

    EffectSS2Info.data_table = (EffectSs*)THA_AllocEndAlign16(&globalCtx->state.heap, numEntries * sizeof(EffectSs));
    EffectSS2Info.searchIndex = 0;
    EffectSS2Info.size = numEntries;

    for (iter = EffectSS2Info.data_table; iter < EffectSS2Info.data_table + EffectSS2Info.size; iter++) {
        EffectSS_ResetEntry(iter);
    }

    for (i = 0, iter2 = particleOverlayTable; i != EFFECT_SS2_TYPE_LAST_LABEL; i++) {
        (iter2++)->loadedRamAddr = 0;
    }
}

void EffectSS_Clear(GlobalContext* globalCtx) {
    u32 i;
    EffectSs* iter;
    ParticleOverlay* iter2;
    void* addr;

    EffectSS2Info.data_table = NULL;
    EffectSS2Info.searchIndex = 0;
    EffectSS2Info.size = 0;

    // This code is completely useless, as data_table was just set to NULL and size to 0
    for (iter = EffectSS2Info.data_table; iter < EffectSS2Info.data_table + EffectSS2Info.size; iter++) {
        EffectSS_Delete(iter);
    }

    // Free memory from loaded particle overlays
    for (i = 0, iter2 = particleOverlayTable; i != EFFECT_SS2_TYPE_LAST_LABEL; i++) {
        addr = (void*)iter2->loadedRamAddr;
        if (addr != NULL) {
            zelda_free(addr);
        }
        (iter2++)->loadedRamAddr = 0;
    }
}

EffectSs* EffectSS_GetTable() {
    return EffectSS2Info.data_table;
}

void EffectSS_Delete(EffectSs* a0) {
    if (a0->flags & 0x2) {
        func_801A72CC((UNK_PTR)&a0->pos);
    }

    if (a0->flags & 0x4) {
        func_801A72CC((UNK_PTR)&a0->vec);
    }

    EffectSS_ResetEntry(a0);
}

void EffectSS_ResetEntry(EffectSs* particle) {
    u32 i;

    particle->type = EFFECT_SS2_TYPE_LAST_LABEL;
    particle->accel.z = 0;
    particle->accel.y = 0;
    particle->accel.x = 0;
    particle->velocity.z = 0;
    particle->velocity.y = 0;
    particle->velocity.x = 0;
    particle->vec.z = 0;
    particle->vec.y = 0;
    particle->vec.x = 0;
    particle->pos.z = 0;
    particle->pos.y = 0;
    particle->pos.x = 0;
    particle->life = -1;
    particle->flags = 0;
    particle->priority = 128;
    particle->draw = NULL;
    particle->update = NULL;
    particle->gfx = NULL;
    particle->actor = NULL;

    for (i = 0; i != ARRAY_COUNT(particle->regs); i++) {
        particle->regs[i] = 0;
    }
}

// XXX Some regalloc differences and instruction ordering
#ifdef NON_MATCHING
s32 EffectSS_FindFreeSpace(u32 priority, u32* tableEntry) {
    s32 ret = 0;
    s32 i;

    if (EffectSS2Info.size <= EffectSS2Info.searchIndex) {
        EffectSS2Info.searchIndex = 0;
    }

    // Search for a unused entry
    for (i = EffectSS2Info.searchIndex;;) {
        if (EffectSS2Info.data_table[i].life == -1) {
            ret = 1;
            break;
        }

        i += 1;

        if (EffectSS2Info.size <= i) {
            i = 0;
        }

        if (i == EffectSS2Info.searchIndex) {
            break;
        }
    }

    if (ret == 1) {
        ret = 0;
    } else {
        // If the entire table is full, look for a lower priority entry instead
        for (;;) {
            if (priority <= EffectSS2Info.data_table[i].priority &&
                (priority != EffectSS2Info.data_table[i].priority || (EffectSS2Info.data_table[i].flags & 0x1) == 0)) {
                ret = 0;
                break;
            }

            i += 1;

            if (EffectSS2Info.size <= i) {
                i = 0;
            }

            if (i == EffectSS2Info.searchIndex) {
                ret = 1;
                return ret;
            }
        }
    }

    *tableEntry = i;

    return ret;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/code/z_effect_soft_sprite/EffectSS_FindFreeSpace.asm")
#endif

void EffectSS_Copy(GlobalContext* globalCtx, EffectSs* a1) {
    u32 index;
    if (func_8016A01C(globalCtx) != 1) {
        if (EffectSS_FindFreeSpace(a1->priority, &index) == 0) {
            EffectSS2Info.searchIndex = index + 1;
            EffectSS2Info.data_table[index] = *a1;
        }
    }
}

#ifdef NON_MATCHING
void EffectSs_Spawn(GlobalContext* globalCtx, s32 type, s32 priority, void* initData) {
    u32 index;
    u32 initRet;
    u32 overlaySize;
    ParticleOverlayInfo* overlayInfo;
    ParticleOverlay* entry = &particleOverlayTable[type];

    if (EffectSS_FindFreeSpace(priority, &index) != 0) {
        return;
    }

    EffectSS2Info.searchIndex = index + 1;
    if (entry->vramStart == 0) {
        overlayInfo = entry->overlayInfo;
    } else {
        // XXX this subtraction is done earlier
        overlaySize = entry->vramEnd - entry->vramStart;
        if (entry->loadedRamAddr == 0) {
            entry->loadedRamAddr = (u32)zelda_mallocR(overlaySize);

            if (entry->loadedRamAddr == 0) {
                return;
            }

            load_and_relocate_overlay(entry->vromStart, entry->vromEnd, entry->vramStart, entry->vramEnd,
                                      entry->loadedRamAddr);
        }

        // XXX this should use a0, but it doesn't
        if (entry->overlayInfo != NULL) {
            overlayInfo = (ParticleOverlayInfo*)(-(entry->vramStart - entry->loadedRamAddr) + (u32)entry->overlayInfo);
        } else {
            overlayInfo = NULL;
        }
    }

    if (overlayInfo->init != 0) {
        EffectSS_Delete(&EffectSS2Info.data_table[index]);

        EffectSS2Info.data_table[index].type = type;
        EffectSS2Info.data_table[index].priority = priority;

        initRet = (*overlayInfo->init)(globalCtx, index, &EffectSS2Info.data_table[index], initData);

        if (initRet == 0) {
            EffectSS_ResetEntry(&EffectSS2Info.data_table[index]);
        }
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/code/z_effect_soft_sprite/EffectSs_Spawn.asm")
#endif

void EffectSS_UpdateParticle(GlobalContext* globalCtx, s32 index) {
    EffectSs* particle = &EffectSS2Info.data_table[index];

    if (particle->update != NULL) {
        particle->velocity.x += particle->accel.x;
        particle->velocity.y += particle->accel.y;
        particle->velocity.z += particle->accel.z;

        particle->pos.x += particle->velocity.x;
        particle->pos.y += particle->velocity.y;
        particle->pos.z += particle->velocity.z;

        particle->update(globalCtx, index, particle);
    }
}

void EffectSS_UpdateAllParticles(GlobalContext* globalCtx) {
    s32 i;

    for (i = 0; i < EffectSS2Info.size; i++) {
        if (EffectSS2Info.data_table[i].life > -1) {
            EffectSS2Info.data_table[i].life--;

            if (EffectSS2Info.data_table[i].life < 0) {
                EffectSS_Delete(&EffectSS2Info.data_table[i]);
            }
        }

        if (EffectSS2Info.data_table[i].life > -1) {
            EffectSS_UpdateParticle(globalCtx, i);
        }
    }
}

void EffectSS_DrawParticle(GlobalContext* globalCtx, s32 index) {
    EffectSs* entry = &EffectSS2Info.data_table[index];
    if (entry->draw != 0) {
        entry->draw(globalCtx, index, entry);
    }
}

void EffectSS_DrawAllParticles(GlobalContext* globalCtx) {
    Lights* s0;
    s32 i;

    s0 = LightContext_NewLights(&globalCtx->lightCtx, globalCtx->state.gfxCtx);
    Lights_BindAll(s0, globalCtx->lightCtx.listHead, 0, globalCtx);
    Lights_Draw(s0, globalCtx->state.gfxCtx);

    for (i = 0; i < EffectSS2Info.size; i++) {
        if (EffectSS2Info.data_table[i].life > -1) {
            if (EffectSS2Info.data_table[i].pos.x > 32000 || EffectSS2Info.data_table[i].pos.x < -32000 ||
                EffectSS2Info.data_table[i].pos.y > 32000 || EffectSS2Info.data_table[i].pos.y < -32000 ||
                EffectSS2Info.data_table[i].pos.z > 32000 || EffectSS2Info.data_table[i].pos.z < -32000) {
                EffectSS_Delete(&EffectSS2Info.data_table[i]);
            } else {
                EffectSS_DrawParticle(globalCtx, i);
            }
        }
    }
}

#ifdef NON_MATCHING
s16 func_800B096C(s16 a0, s16 a1, s32 a2) {
    s16 ret;

    if (a2 == 0) {
        ret = a1;
    } else {
        // XXX result of the division is put in t0 instead of t8
        ret = a0 + (s16)((a1 - a0) / (f32)a2);
    }

    return ret;
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/code/z_effect_soft_sprite/func_800B096C.asm")
#endif

s16 func_800B09D0(s16 a0, s16 a1, f32 a2) {
    return a2 * (a1 - a0) + a0;
}

u8 func_800B0A24(u8 a0, u8 a1, f32 a2) {
    return a2 * ((f32)a1 - (f32)a0) + a0;
}
