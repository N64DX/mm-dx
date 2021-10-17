#include "global.h"

u32 __osSiAccessQueueEnabled = 0;

OSMesg siAccessBuf[1];
OSMesgQueue __osSiAccessQueue;

void __osSiCreateAccessQueue() {
    __osSiAccessQueueEnabled = 1;
    osCreateMesgQueue(&__osSiAccessQueue, siAccessBuf, 1);
    osSendMesg(&__osSiAccessQueue, NULL, 0);
}

void __osSiGetAccess(void) {
    OSMesg dummyMesg;
    if (!__osSiAccessQueueEnabled) {
        __osSiCreateAccessQueue();
    }
    osRecvMesg(&__osSiAccessQueue, &dummyMesg, 1);
}

void __osSiRelAccess(void) {
    osSendMesg(&__osSiAccessQueue, NULL, 0);
}
