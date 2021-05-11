#include "z_en_ginko_man.h"

#define FLAGS 0x00000009

#define THIS ((EnGinkoMan*)thisx)

void EnGinkoMan_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGinkoMan_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGinkoMan_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGinkoMan_Draw(Actor* thisx, GlobalContext* globalCtx);

void EnGinkoMan_SetupIdle(EnGinkoMan* this);
void EnGinkoMan_SetupDialogue(EnGinkoMan* this);
void EnGinkoMan_SetupBankAward(EnGinkoMan* this);
void EnGinkoMan_SetupBankAward2(EnGinkoMan* this);
void EnGinkoMan_SetupStamp(EnGinkoMan* this);

void EnGinkoMan_Idle(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_BankAward(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_DepositDialogue(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_BankAward2(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_Stamp(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_Dialogue(EnGinkoMan* this, GlobalContext* globalCtx);
void EnGinkoMan_SwitchAnimation(EnGinkoMan* this, GlobalContext* globalCtx);

const ActorInit En_Ginko_Man_InitVars = {
    ACTOR_EN_GINKO_MAN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_BOJ,
    sizeof(EnGinkoMan),
    (ActorFunc)EnGinkoMan_Init,
    (ActorFunc)EnGinkoMan_Destroy,
    (ActorFunc)EnGinkoMan_Update,
    (ActorFunc)EnGinkoMan_Draw
};

ActorAnimationEntry animations[] = {
    {object_ginko_floorsmacking_anim, 1.0f, 0.0f, 0.0f, 0, -4.0f,},
    {object_ginko_sitting_anim,       1.0f, 0.0f, 0.0f, 0, -4.0f,},
    {object_ginko_stamp_reach_anim,   1.0f, 0.0f, 0.0f, 2, -4.0f,},
    {object_ginko_advertising_anim,   1.0f, 0.0f, 0.0f, 0, -4.0f,}, // looking around for customers
    {object_ginko_amazed_anim,        1.0f, 0.0f, 0.0f, 0, -4.0f,},
};

void EnGinkoMan_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGinkoMan* this = THIS;
    this->actor.targetMode = 1;
    this->actor.uncullZoneForward = 400.0f;
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.colChkInfo.cylRadius = 100;
    this->curTextId = 0;
    this->newAccountFlag = 0;
    this->stampChecked = 0;
    this->choiceDepositWithdrawl = GINKOMAN_CHOICE_RESET;
    this->serviceFee = 0;
    SkelAnime_InitSV(globalCtx, &this->skelAnime, object_ginko_skeleton, object_ginko_sitting_anim, &this->limbDrawTbl, &this->transitionDrawTbl, 0x10);
    EnGinkoMan_SetupIdle(this);
}

void EnGinkoMan_Destroy(Actor *thisx, GlobalContext *globalCtx) { }

void EnGinkoMan_SetupIdle(EnGinkoMan* this) {

    this->actor.flags |= 1; // targetable
    func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
    this->actionFunc = EnGinkoMan_Idle;
}

void EnGinkoMan_Idle(EnGinkoMan *this, GlobalContext *globalCtx) {
    s32 dYaw;
    s32 dYawABS;

    dYaw = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    EnGinkoMan_SwitchAnimation(this, globalCtx);
    if (func_800B84D0(&this->actor, globalCtx)) { // Listen for dialogue start?
        if ((gSaveContext.perm.bankRupees & 0xFFFF) == 0) {
            func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);
            func_801518B0(globalCtx, 0x44C, &this->actor);
            this->curTextId = 0x44C; // would you like to make an account
        } else {
            func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
            if ((((s32) gSaveContext.perm.day % 5) == 3) && (gSaveContext.perm.isNight == 1)) {
                func_801518B0(globalCtx, 0x467, &this->actor);
                this->curTextId = 0x467; // "What's this? You need somethin' on a day like this?
            } else {
                func_801518B0(globalCtx, 0x466, &this->actor);
                this->curTextId = 0x466; // What's this? You need somethin'?
            }
        }
        EnGinkoMan_SetupDialogue(this);
    } else {

        dYawABS = dYaw < 0 ? -dYaw : dYaw;
        if (dYawABS < 0x1555) {
            func_800B8614(&this->actor, globalCtx, 100.0f);
        }
    }
}

#if NON_EQUIVELENT
// non-equiv: case 14 is possibly still non-equiv but def does not match, hard to tell 
// if else inside of jump tables makes mips2c confused, also late rodata
// action func: non-input dialogue
void EnGinkoMan_DepositDialogue(EnGinkoMan *this, GlobalContext *globalCtx) { // 80418E34
    u32 tempEDC;
    s16* previousBankValue;

    if (func_80147624(globalCtx) == 0) {
      return;
    }
    
    switch (this->curTextId - 0x44C) {

    case 0: // "Hey there, little guy!  Won't you deposit some Rupees? (first dialogue)
        func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
        if ((gSaveContext.perm.weekEventReg[10] & 8) != 0) {
            func_801518B0(globalCtx, 0x44E, &this->actor);
            this->curTextId = 0x44E; //" ...So, what'll it be?  Deposit Rupees Don't deposit Rupees"
        } else {
            func_801518B0(globalCtx, 0x44D, &this->actor);
            this->curTextId = 0x44D; // "For example, if you deposit 200 Rupees, you'll get an item that holds a lot of Rupees."
        }
        break; 

    case 1: // "For example, if you deposit 200 Rupees, you'll get an item that holds a lot of Rupees."
        func_801518B0(globalCtx, 0x44E, &this->actor);
        this->curTextId = 0x44E; //" ...So, what'll it be?  Deposit Rupees Don't deposit Rupees"
        return;
    case 3: // "...So, what'll it be?  Deposit Rupees Don't deposit Rupees"
        func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);
        func_801518B0(globalCtx, 0x450, &this->actor);
        this->curTextId = 0x450; // "How much? How much?  [rupee prompt]
        return;

    case 7: // you deposited a tiny amount
    case 8: // you deposited a normal amount
    case 9: // you deposited a lot
        if (this->newAccountFlag == 1) {
            this->newAccountFlag = 0;
            if (this->curTextId != 0x453) { // "That's it? That ain't nothing at all, big spender!
                func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
            }
            func_801518B0(globalCtx, 0x461, &this->actor);
            this->curTextId = 0x461; // So, little guy, what's your name?
        } else { 
            if (this->curTextId == 0x453) { // "That's it? That ain't nothing at all, big spender!
                func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);
            }
            globalCtx->msgCtx.bankRupees = gSaveContext.perm.bankRupees & 0xFFFF;
            func_801518B0(globalCtx, 0x45A, &this->actor);
            this->curTextId = 0x45A; // "All right, little guy, now I've got a total of [rupees] from you!"
        }
        break;
    case 10: // "Is that so? Think about it, little guy!"
    case 13: // "Heyyy! You don't have that much!
        func_801518B0(globalCtx, 0x44E, &this->actor);
        this->curTextId = 0x44E; //" ...So, what'll it be?  Deposit Rupees Don't deposit Rupees"
        return;

    case 14: // "All right, little guy, now I've got a total of [rupees] from you!"

        /***** WARNING: this case is non-equivelent ****/
        
        tempEDC = gSaveContext.perm.bankRupees & 0xFFFF;
        if ((tempEDC >= 200) 
        && (this->previousBankValue < 200) 
        && ((gSaveContext.perm.weekEventReg[0x3B] & 0x40) == 0)) {
            //block_20:
            gSaveContext.perm.weekEventReg[0x3B] = gSaveContext.perm.weekEventReg[0x3B] | 0x40;
            func_801518B0(globalCtx, 0x45B, &this->actor);
            this->curTextId = 0x45B; // "What's this? You've already saved up 200 Rupees!?!
            return;
        } // bright pink arrow

        // "branch likely" when shouldn't be
        if ( (tempEDC >= 1000)
        && ((this->previousBankValue) < 1000)
        && (gSaveContext.perm.weekEventReg[0x3B] & 0x80) == 0) {
           //block_24:
            gSaveContext.perm.weekEventReg[0x3B] |= 0x80;
            func_801518B0(globalCtx, 0x45C, &this->actor);
            this->curTextId = 0x45C; // "What's this? You've already saved up 1000 Rupees!?!
            return;
        } // bright blue arrow

        if (( this->previousBankValue) >= 5000) { // added back in because missing
            if ((((s16) tempEDC ) < 5000) 
            && (( gSaveContext.perm.weekEventReg[0x3B] & 1) == 0)) {
                gSaveContext.perm.weekEventReg[0x3B] |= 1;
                func_801518B0(globalCtx, 0x45D, &this->actor);
                this->curTextId = 0x45D; // "What's this? You've already saved up 5000 Rupees?!
                return;
            } else { // olive arrow
                //block_28:
                if (this->previousBankValue < gSaveContext.perm.bankRupees) {
                //if (*previousBankValue < gSaveContext.perm.bankRupees) {
                    func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                    func_801518B0(globalCtx, 0x45E, &this->actor);
                    this->curTextId = 0x45E; // "...Hang on there, little guy.  I can't take any more deposits.  Sorry..."
                    return;
                } else {
                    func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);
                    func_801518B0(globalCtx, 0x460, &this->actor);
                    this->curTextId = 0x460; // "Come back and deposit some after you save up a bunch!"
                    return;
                }
            }
        }

        // bright green arrow goes here
        func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING); 
        func_801518B0(globalCtx, 0x460, &this->actor);
        this->curTextId = 0x460;  // "Come back and deposit some after you save up a bunch!" 
        break;

    case 15: // given 200 reward
    case 16: // given 1000 reward
    case 17: // given 5000 reward
        this->stampChecked = 0;
        func_801477B4(globalCtx);
        EnGinkoMan_SetupBankAward(this);
        EnGinkoMan_BankAward(this, globalCtx);
        return;
    case 21: // So, little guy, what's your name?
        func_801518B0(globalCtx, 0x462, &this->actor);
        this->curTextId = 0x462; // Hmm... Link is it?
        return;
    case 22: // Hmm.. Link is it?
        func_801518B0(globalCtx, 0x463, &this->actor);
        this->curTextId = 0x463; // Got it... I won't forget your deposits. Let me stamp you
        return;
    case 23: // Got it... I won't forget your deposits. Let me stamp you
        func_801518B0(globalCtx, 0x464, &this->actor);
        this->curTextId = 0x464; // Hey, relax! It doesn't leave any marks
        return;
    case 24: // Hey, relax! It doesn't leave any marks
        //globalCtx->msgCtx.pad11F23 = 0x44;
        globalCtx->msgCtx.pad11F23[0] = 0x44;
        EnGinkoMan_SetupStamp(this); // stamp player
        return;
    case 25: // "There! Now I'll know you when I see you!"
        func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);
        globalCtx->msgCtx.bankRupees = gSaveContext.perm.bankRupees & 0xFFFF;
        func_801518B0(globalCtx, 0x45A, &this->actor);
        this->curTextId = 0x45A; // "All right, little guy, now I've got a total of [rupees] from you!"
        return;
    case 26: // What's this? You need somethin'?
    case 27: // "What's this? You need somethin' on a day like this?  You haven't evacuated yet?
        func_801518B0(globalCtx, 0x468, &this->actor);
        this->curTextId = 0x468; // " Deposit Rupees Withdraw Rupees Nothing really"
        return;
    case 29: // "Excuse me, but let me take a look at you..."
        EnGinkoMan_SetupStamp(this); // stamp player
        return;
    case 30: // "Ah, yes...[Link].  If I remember, you're the little guy who deposited [rupees]."
    case 32: // "Ah, yes...[Link], right?  If I remember, you're the little guy who deposited [rupees]."
    case 50: // "Your deposits total [rupees]."
        if (this->choiceDepositWithdrawl == GINKOMAN_CHOICE_DEPOSIT) {
            if ((u32) (gSaveContext.perm.bankRupees & 0xFFFF) >= 0x1388) {
                func_801518B0(globalCtx, 0x45F, &this->actor);
                this->curTextId = 0x45F; // "Excuuuse me! But I can't take anymore deposits!
            } else if (gSaveContext.perm.unk24.currentRupees == 0) {
                func_801518B0(globalCtx, 0x458, &this->actor);
                this->curTextId = 0x458; // "Hmm...You play mean jokes, little guy! You haven't even got a single Rupee!  
            } else {
                func_801518B0(globalCtx, 0x479, &this->actor);
                this->curTextId = 0x479; // "Well, are you gonna make a deposit?"
            }
        } else if ((((s32) gSaveContext.perm.day % 5) == 3) && (gSaveContext.perm.isNight == 1)) {
            func_801518B0(globalCtx, 0x46D, &this->actor);
            // "Look, little guy, if it's 'cause of the bad rumors going around, forget it! They're just rumors!"
            this->curTextId = 0x46D;
        } else { // GINKOMAN_CHOICE_WITHDRAWL
            func_801518B0(globalCtx, 0x46B, &this->actor);
            this->curTextId = 0x46B; // "So..."
        }
        this->choiceDepositWithdrawl = GINKOMAN_CHOICE_RESET;
        return;
    case 31: // So...
        func_801518B0(globalCtx, 0x46E, &this->actor);
        this->curTextId = 0x46E; // "How much do you want?  [rupee prompt]
        return;
    case 33: // "Look, little guy, if it's 'cause of the bad rumors going around, forget it! They're just rumors!"
        func_801518B0(globalCtx, 0x46B, &this->actor);
        this->curTextId = 0x46B; // So...
        return;
    case 36: // "Is that so?  Come back and deposit some after saving up a bunch!"
        if (func_80147624(globalCtx) == 0) {
            return;
        }
        func_801477B4(globalCtx);
        this->stampChecked = 0;
        EnGinkoMan_SetupIdle(this); // change to waiting for approach
        return;
    case 42: // "...You haven't deposited that many Rupees, so that much isn't available for withdrawal. Do the math! 
        func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
    case 41: // "What's this?  Look, little guy, you can't hold this many rupees! You got that?"
    case 48: // "Is that so?  Think it over, little guy!  So what are you gonna do?"
    case 49: // duplicate of 48
        func_801518B0(globalCtx, 0x468, &this->actor);
        this->curTextId = 0x468; // " Deposit Rupees Withdraw Rupees Nothing really"
        return;
    case 38: // "What's this? It's a waste to take out such a tiny bit!  ...But if you say so!"
    case 39: // Use it wisely...
    case 40: // "Aw, you're taking out all that?  If you spend it like that, it'll all be gone before you know it!"
        if ((gSaveContext.perm.bankRupees & 0xFFFF) == 0) {
            func_801518B0(globalCtx, 0x478, &this->actor);
            //  "Look, little guy, all the Rupees you deposited are gone, so you can't use that stamp anymore."
            this->curTextId = 0x478;
        } else {
            globalCtx->msgCtx.bankRupees = gSaveContext.perm.bankRupees & 0xFFFF;
            func_801518B0(globalCtx, 0x45A, &this->actor);
            this->curTextId = 0x45A; // "All right, little guy, now I've got a total of [rupees] from you!"
        }
        break;
    case 43: // "...You know, at this time of day there's a 4 Rupee service charge on withdrawals!"
        func_801518B0(globalCtx, 0x471, &this->actor);
        this->curTextId = 0x471; // "Are you really withdrawing [rupees selected]? Y/n"
        this->serviceFee = globalCtx->msgCtx.unk1206C;
        return;
    case 45: // Well, are you gonna make a deposit?
        func_801518B0(globalCtx, 0x44F, &this->actor);
        this->curTextId = 0x44F; // "All right! So..."
        return;
    default:
        break;
    } // end switch

} // */
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Ginko_Man_0x80A644A0/EnGinkoMan_DepositDialogue.asm")
#endif

#if NON_MATCHING
// NON-MATCHING: lots of regalloc 
// ROM SHIFT: a couple redundant li 0x4806 added reason unk
// actionfunc: wait for player dialogue input
void EnGinkoMan_WaitForDialogueInput(EnGinkoMan *this, GlobalContext *globalCtx) {

    // branch likely instead of branch, fixed by adding a fake if later though
    // probably because its supposed to wrap around the whole switch, but couldn't match with that either
    if (func_80147624(globalCtx) == 0) {
      return;
    }

    switch (this->curTextId) {

    case 0x44E: // "...So, what'll it be?
        if (globalCtx->msgCtx.choiceIndex == GINKOMAN_CHOICE_YES) {
            if ( (gSaveContext.perm.bankRupees & 0xFFFF) >= 0x1388) {
                play_sound(0x4806);// NA_SE_SY_ERROR
                func_801518B0(globalCtx, 0x45F, &this->actor);
                this->curTextId = 0x45F; // bank full, cannot accept more
                return;
            }
            else {
                if (gSaveContext.perm.unk24.currentRupees > 0) {
                    func_8019F208(0x4806);
                    func_801518B0(globalCtx, 0x44F, &this->actor);
                    this->curTextId = 0x44F; // "All right! so..."
                } else {
                    play_sound(0x4806); // NA_SE_SY_ERROR
                    func_801518B0(globalCtx, 0x458, &this->actor);
                    this->curTextId = 0x458; // you haven't even gotten a single rup
                }
                return;
            } 
        } else { // GINKOMAN_CHOICE_NO
            func_8019F230();
            func_801518B0(globalCtx, 0x451, &this->actor);
            this->curTextId = 0x451; // dont say that, come on, trust me!
            break;
        }

    case 0x452: // Really? are you really depositing rupees?

        if (globalCtx->msgCtx.choiceIndex == GINKOMAN_CHOICE_YES){
            if (gSaveContext.perm.unk24.currentRupees < globalCtx->msgCtx.bankRupeesSelected) {
                play_sound(0x4806); // NA_SE_SY_ERROR
                func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                func_801518B0(globalCtx, 0x459, &this->actor);
                this->curTextId = 0x459; // HEY you dont have that much
                //return;
            } else {
                func_8019F208(0x4806);
                if (globalCtx->msgCtx.bankRupeesSelected >= 100) {
                    func_801518B0(globalCtx, 0x455, &this->actor);
                    this->curTextId = 0x455; // You're really going to be give me that much? Rich little guy!
                } else if (globalCtx->msgCtx.bankRupeesSelected >= 10) {
                    func_801518B0(globalCtx, 0x454, &this->actor);
                    this->curTextId = 0x454; // Seriously? that's a lot. A lot!
                } else {
                    func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                    func_801518B0(globalCtx, 0x453, &this->actor);
                    this->curTextId = 0x453; // That's it? That aint nothing at all
                }
                if ((gSaveContext.perm.bankRupees & 0xFFFF) == 0) {
                    this->newAccountFlag = 1;
                }
                func_801159EC((s16) -(s32) globalCtx->msgCtx.bankRupeesSelected);
                this->previousBankValue = gSaveContext.perm.bankRupees;

                gSaveContext.perm.bankRupees = ((gSaveContext.perm.bankRupees & 0xFFFF) 
                    + globalCtx->msgCtx.bankRupeesSelected) | (gSaveContext.perm.bankRupees & 0xFFFF0000);
            }
        }else{ // GINKOMAN_CHOICE_NO
            func_8019F230();
            func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
            if ((gSaveContext.perm.bankRupees & 0xFFFF) == 0) { // @B74
                func_801518B0(globalCtx, 0x456, &this->actor);
                this->curTextId = 0x456; // Is that so? think about it 
            } else {
                func_801518B0(globalCtx, 0x47D, &this->actor);
                this->curTextId = 0x47D; // is that so? think it over
            }
        }
        break;

    case 0x468:  // Deposit OR withdrawl OR cancel screen // location: @C38
        // FAKE MATCH
        if (globalCtx->msgCtx.choiceIndex) {} // -5000 permuter score: regalloc and branch likely swapping

        if (globalCtx->msgCtx.choiceIndex == GINKOMAN_CHOICE_CANCEL) {
            func_8019F230();
            func_801518B0(globalCtx, 0x470, &this->actor);
            this->curTextId = 0x470; // "Is that so? Come back and deposit some after saving up a bunch!"
        } else {
            func_8019F208();
            this->choiceDepositWithdrawl = globalCtx->msgCtx.choiceIndex;
            if (this->stampChecked == 0) {                          // @C94
                this->stampChecked = 1;
                func_801518B0(globalCtx, 0x469, &this->actor);
                this->curTextId = 0x469; // "Excuse me, but let me take a look at you..."
            } else {
                func_801518B0(globalCtx, 0x47E, &this->actor);
                this->curTextId = 0x47E; // "Your deposits total [rupees]."
            }
        }
        break;

    case 0x471: // Are you really withdrawling [selected rupees]?   // @CDC
        // 0xEDC: bankRupees
        if (globalCtx->msgCtx.choiceIndex == GINKOMAN_CHOICE_YES) {
            // s32 casts required for slt instead of sltu
            if ((s32)((gSaveContext.perm.bankRupees & 0xFFFF)) < ((s32)( globalCtx->msgCtx.bankRupeesSelected + this->serviceFee))) { 
                play_sound(0x4806); // NA_SE_SY_ERROR
                func_800BDC5C(&this->skelAnime, animations, GINKO_FLOORSMACKING);       // @ D30
                func_801518B0(globalCtx, 0x476, &this->actor);
                this->curTextId = 0x476; // you dont have enough deposited to withdrawl
                return;
            }
            
            // check if wallet is big enough
            if ( (D_801C1E2C[ ( gSaveContext.perm.inv.unk48 & D_801C1DD0) >> D_801C1E08])
               < (globalCtx->msgCtx.bankRupeesSelected + gSaveContext.perm.unk24.currentRupees)) {
                play_sound(0x4806); // NA_SE_SY_ERROR
                func_801518B0(globalCtx, 0x475, &this->actor);
                this->curTextId = 0x475; // You can't hold that many in your wallet
                return;
            }
            func_8019F208(0x4806);

            if (globalCtx->msgCtx.bankRupeesSelected >= 100) {
                func_801518B0(globalCtx, 0x474, &this->actor);
                this->curTextId = 0x474; // Aw, you're taking out all that?
            } else if (globalCtx->msgCtx.bankRupeesSelected >= 10) {
                func_801518B0(globalCtx, 0x473, &this->actor);
                this->curTextId = 0x473; // use it wisely
            } else {
                func_801518B0(globalCtx, 0x472, &this->actor);
                this->curTextId = 0x472; // It's a waste to take out such a tiny bit
            }
            this->previousBankValue = (s16) gSaveContext.perm.bankRupees;
            gSaveContext.perm.bankRupees = (((gSaveContext.perm.bankRupees & 0xFFFF) - globalCtx->msgCtx.bankRupeesSelected) 
              - this->serviceFee) | (gSaveContext.perm.bankRupees & 0xFFFF0000);
            func_801159EC( (s16) globalCtx->msgCtx.bankRupeesSelected, &gSaveContext); // cast req
            return;
        } else { 
            func_8019F230();
            func_801518B0(globalCtx, 0x47C, &this->actor);
            this->curTextId = 0x47C; // "Is that so? Think it over, little guy! So what are you gonna do?"
        }
    } // end switch
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Ginko_Man_0x80A644A0/EnGinkoMan_WaitForDialogueInput.asm")
#endif

void EnGinkoMan_WaitForRupeeCount(EnGinkoMan *this, GlobalContext *globalCtx) {
    if (func_80147624(globalCtx)) {
        switch (this->curTextId){
            case 0x450: // "How much? How much?" [rupee prompt] Set the amount with [Control Stick] and
                if (globalCtx->msgCtx.bankRupeesSelected == 0) {
                    func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                    func_801518B0(globalCtx, 0x457, &this->actor);
                    this->curTextId = 0x457; // Zero Rupees? Cruel joke!
                } else {
                    func_801518B0(globalCtx, 0x452, &this->actor);
                    this->curTextId = 0x452; // Really? are you really depositing [x]? Y/n
                }
                break;

            case 0x46E: // "How much do you want?"  [rupee prompt] Set the amount with [Control Stick]
                if (globalCtx->msgCtx.bankRupeesSelected == 0) {
                    func_801518B0(globalCtx, 0x46F, &this->actor);
                    this->curTextId = 0x46F; // "Zero Rupees?!?  That's a cruel joke!"
                } else if (gSaveContext.perm.isNight == 1) {
                    func_801518B0(globalCtx, 0x477, &this->actor);
                    this->curTextId = 0x477; // "...You know, at this time of day there's a 4 Rupee service charge...
                } else {
                    func_801518B0(globalCtx, 0x471, &this->actor);
                    this->curTextId = 0x471; // "Are you really withdrawing [rupees selected]? Y/n
                    this->serviceFee = 0;
                }
                break;
        }
    }
}

void EnGinkoMan_SetupDialogue(EnGinkoMan* this) {
    this->actionFunc = EnGinkoMan_Dialogue;
}

void EnGinkoMan_Dialogue(EnGinkoMan *this, GlobalContext *globalCtx) {
    switch ( func_80152498(&globalCtx->msgCtx) ) { // get dialogue state?
        case 2:
            EnGinkoMan_SetupIdle(this);
            break;
        case 4:
            EnGinkoMan_WaitForDialogueInput(this, globalCtx);
            break;
        case 5:
            EnGinkoMan_DepositDialogue(this, globalCtx);
            break;
        case 6:
            if (func_80147624(globalCtx) != 0) {
                this->stampChecked = 0;
                EnGinkoMan_SetupIdle(this);
            }
            break;
        case 14:
            EnGinkoMan_WaitForRupeeCount(this, globalCtx);
            break;
        case 0:
        default:
            break;
    }

    if ((this->skelAnime.animCurrentSeg == object_ginko_floorsmacking_anim)
      && (func_801378B8(&this->skelAnime, this->skelAnime.animFrameCount) != 0)) {
        Audio_PlayActorSound2(this, 0x2992); // NA_SE_EV_BANK_MAN_HAND_HIT
    }
}

void EnGinkoMan_SetupBankAward(EnGinkoMan* this) {
    this->actionFunc = EnGinkoMan_BankAward;
}

void EnGinkoMan_BankAward(EnGinkoMan *this, GlobalContext *globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx)) {
        // ? when would bank have a parent?
        this->actor.parent = NULL;
        EnGinkoMan_SetupBankAward2(this);
    } else if (this->curTextId == 0x45B) { // "Whats this, you already saved up 200?"
        if (((&gSaveContext)->perm.weekEventReg[10] & 8) == 0) {
            func_800B8A1C(&this->actor, globalCtx,
                 ((u32) ((s32) (&gSaveContext)->perm.inv.unk48 & D_801C1DD0) >> D_801C1E08) + 8, 500.0f, 100.0f);
        } else {
            func_800B8A1C(&this->actor, globalCtx, 2, 500.0f, 100.0f);
        }
    } else if (this->curTextId == 0x45C) { // "Whats this, you already saved up 5000?"
        func_800B8A1C(&this->actor, globalCtx, 2, 500.0f, 100.0f);
    } else if (((&gSaveContext)->perm.weekEventReg[0x3B] & 8) == 0) {
        func_800B8A1C(&this->actor, globalCtx, 12, 500.0f, 100.0f);
    } else {
        func_800B8A1C(&this->actor, globalCtx, 2, 500.0f, 100.0f);
    }
}

// called when bank has a parent actor
void EnGinkoMan_SetupBankAward2(EnGinkoMan* this) {
    this->actionFunc = EnGinkoMan_BankAward2;
}

# if NON_MATCHING
// NON_MATCHING: minor regalloc at globalCtx into func_80152498
// separate function to handle bank rewards... if the bank has a parent actor? might be unused
void EnGinkoMan_BankAward2(EnGinkoMan* this, GlobalContext *globalCtx) {
    GlobalContext* gCtx;// = globalCtx;

    if (func_800B84D0(&this->actor, globalCtx)) {
        if (((gSaveContext.perm.weekEventReg[0xA] & 8) == 0) && (this->curTextId == 0x45B)) {
            // "What's this? You've already saved up 200 Rupees!?!  Well, little guy, here's your special gift. Take it!"
            gSaveContext.perm.weekEventReg[0xA] |= 8;
            func_801518B0(globalCtx, 0x47A, &this->actor);

            if (1) { // might be fake, but it solves almost everything
                this->curTextId = 0x47A; // "See! Doesn't it hold more than your old one?
            }

        } else {
            func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
            func_801518B0(globalCtx, 0x47B, &this->actor);
            this->curTextId = 0x47B; // "Is that so?  Think it over, little guy!  So what are you gonna do?"
        }
        EnGinkoMan_SetupDialogue(this);

    } else if (this->curTextId == 0x45D) { // saved up 5000 rupees for HP
        gCtx = globalCtx;
        if ((func_80152498(&gCtx->msgCtx, globalCtx) == 6) && (func_80147624(globalCtx) != 0)) {
            if ((gSaveContext.perm.weekEventReg[0x3B] & 8) == 0) {
                gSaveContext.perm.weekEventReg[0x3B] |= 8;
            }
            EnGinkoMan_SetupIdle(this);
        }

    } else {
        func_800B85E0(&this->actor, globalCtx, 500.0f, -1);
    }
}
#else
#pragma GLOBAL_ASM("./asm/non_matchings/overlays/ovl_En_Ginko_Man_0x80A644A0/EnGinkoMan_BankAward2.asm")
#endif

void EnGinkoMan_SetupStamp(EnGinkoMan* this) {
    func_800BDC5C(&this->skelAnime, animations, GINKO_REACHING);
    this->actionFunc =  EnGinkoMan_Stamp;
}

void EnGinkoMan_Stamp(EnGinkoMan *this, GlobalContext *globalCtx) {
    if ((this->curTextId == 0x464) // "Hey, relax! It doesn't leave any marks, and it's not gonna hurt."
      && (func_801378B8(&this->skelAnime, 10.0f))) {
        Audio_PlayActorSound2(this, 0x2993); // NA_SE_EV_HANKO "stamp"
    }

    if (func_801378B8(&this->skelAnime, this->skelAnime.animFrameCount)) {
        switch(this->curTextId){
            case 0x464: // "Hey, relax! It doesn't leave any marks, and it's not gonna hurt."
                func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                func_801518B0(globalCtx, 0x465, &this->actor);
                this->curTextId = 0x465; // "There! Now I'll know you when I see you!"
                break;

            case 0x469: // "Excuse me, but let me take a look at you..."
                func_800BDC5C(&this->skelAnime, animations, GINKO_SITTING);
                globalCtx->msgCtx.bankRupees = (gSaveContext.perm.bankRupees & 0xFFFF); 
                // perm.day cast req for div vs divu
                if ((((s32) gSaveContext.perm.day % 5) == 3) && (gSaveContext.perm.isNight == 1)) {
                    func_801518B0(globalCtx, 0x46C, &this->actor);
                    this->curTextId = 0x46C; // "Ah, yes...[Link], right?
                } else {
                    func_801518B0(globalCtx, 0x46A, &this->actor);
                    this->curTextId = 0x46A; // "Ah, yes...[Link].
                }
                break;
        }

        EnGinkoMan_SetupDialogue(this);
    }
}

void EnGinkoMan_SwitchAnimation(EnGinkoMan *this, GlobalContext *globalCtx) {
    if (this->actor.xzDistToPlayer > 160.0f) {
        if (this->animTimer == 0) {
            if (this->skelAnime.animCurrentSeg != object_ginko_amazed_anim) {
                this->animTimer = 0x28;
                func_800BDC5C(&this->skelAnime, animations, GINKO_ADVERTISING);
            }
        }

    } else if ((this->animTimer == 0) && (this->skelAnime.animCurrentSeg != object_ginko_advertising_anim)) {
        this->animTimer = 0x28;
        func_800BDC5C(&this->skelAnime, animations, GINKO_AMAZED);
    }

    DECR(this->animTimer);
}

void EnGinkoMan_FacePlayer(EnGinkoMan *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);

    if (this->skelAnime.animCurrentSeg != object_ginko_amazed_anim) {
        func_800E9250(globalCtx, &this->actor, &this->limb15Rot, &this->limb8Rot, this->actor.focus.pos);
    } else {
        func_800E8F08(&this->limb15Rot, &this->limb8Rot);
    }
}

void EnGinkoMan_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGinkoMan* this = THIS;

    this->actionFunc(this, globalCtx);
    this->actor.focus.pos = this->actor.world.pos;
    this->actor.focus.pos.y += 30.0f;
    EnGinkoMan_FacePlayer(this, globalCtx);
}

s32 EnGinkoMan_LimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, Actor* actor){
    EnGinkoMan* this = (EnGinkoMan*) actor;
    if (limbIndex == 15) {
        *dList = &object_ginko_limb15_dlist; 
    }
    if (limbIndex == 15) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(this->limb15Rot.y, 1);
        SysMatrix_InsertZRotation_s(this->limb15Rot.x, 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    } else if (limbIndex == 8) {
        SysMatrix_InsertXRotation_s(-this->limb8Rot.y, 1);
        SysMatrix_InsertZRotation_s(-this->limb8Rot.x, 1);
    }
    return 0;
}

void EnGinkoMan_PostLimbDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* actor) {}

void EnGinkoMan_Draw(Actor* thisx, GlobalContext *globalCtx) {
    EnGinkoMan* this = THIS;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_8012C28C(globalCtx->state.gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x08, Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0));
    gSPSegment(POLY_OPA_DISP++, 0x09, Gfx_EnvColor(globalCtx->state.gfxCtx, 0x32, 0x50, 0, 0));
    gDPPipeSync(POLY_OPA_DISP++);

    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, this->skelAnime.dListCount, &EnGinkoMan_LimbDraw, &EnGinkoMan_PostLimbDraw, &this->actor);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
