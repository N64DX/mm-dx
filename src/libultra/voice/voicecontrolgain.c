#include "global.h"

u8 D_80098180[] = { 0x00, 0x80, 0x40, 0xC0, 0x20, 0xA0, 0x60, 0xE0 };

// Adjusts the input gain of the Voice Recognition System
s32 osVoiceControlGain(OSVoiceHandle* hd, s32 analog, s32 digital) {
    s32 errorCode;
    u8 phi_a2;

    if (analog == 0) {
        phi_a2 = 0x18;
    } else {
        phi_a2 = 0x98;
    }

    errorCode = __osVoiceSetADConverter(hd->mq, hd->port, phi_a2);
    if (errorCode != 0) {
        return errorCode;
    }

    if (((digital < 8) && (digital >= 0))) {
        phi_a2 = D_80098180[digital] + 2;
    } else {
        return CONT_ERR_INVALID;
    }

    errorCode = __osVoiceSetADConverter(hd->mq, hd->port, phi_a2);
    if (errorCode != 0) {
        return errorCode;
    }

    return errorCode;
}
