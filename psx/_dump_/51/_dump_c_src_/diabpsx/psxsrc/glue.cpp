// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x80094000
// line start: 233
// line end:   234
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009400C
// line start: 244
// line end:   245
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80094018
// line start: 255
// line end:   260
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009406C
// line start: 270
// line end:   275
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800940C0
// line start: 285
// line end:   290
void GLUE_PreTown__Fv() {
}


// address: 0x80094114
// line start: 299
// line end:   300
void GLUE_PreDun__Fv() {
}


// address: 0x80094128
// line start: 320
// line end:   321
bool GLUE_Finished__Fv() {
}


// address: 0x80094134
// line start: 331
// line end:   332
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80094140
// line start: 342
// line end:   354
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x800941C4
// line start: 363
// line end:   367
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941D4
// line start: 375
// line end:   379
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941E4
// line start: 387
// line end:   391
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x800941F4
// line start: 401
// line end:   421
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x800942CC
// line start: 432
// line end:   619
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 19
	register int ObjId;
	// register: 20
	register int List;
	// address: 0xFFFFFDD0
	// size: 0xE0
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEB0
	// size: 0x84
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF38
	// size: 0x84
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x8009482C
// size: 0xC
// line start: 629
// line end:   639
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800948C4
// size: 0xC
// line start: 644
// line end:   650
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80094920
// size: 0xC
// line start: 654
// line end:   659
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80094950
// line start: 663
// line end:   675
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x800949B0
// line start: 687
// line end:   702
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80094A30
// size: 0x10
// line start: 715
// line end:   722
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x80094ADC
// line start: 735
// line end:   746
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x80094B48
// line start: 757
// line end:   758
void GLUE_Init__Fv() {
}


