// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x80091A2C
// line start: 229
// line end:   230
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091A38
// line start: 240
// line end:   241
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091A44
// line start: 251
// line end:   256
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091A98
// line start: 266
// line end:   271
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091AEC
// line start: 281
// line end:   288
void GLUE_PreTown__Fv() {
}


// address: 0x80091B50
// line start: 297
// line end:   303
void GLUE_PreDun__Fv() {
}


// address: 0x80091B9C
// line start: 323
// line end:   324
bool GLUE_Finished__Fv() {
}


// address: 0x80091BA8
// line start: 334
// line end:   335
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091BB4
// line start: 345
// line end:   357
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091C38
// line start: 366
// line end:   370
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091C48
// line start: 378
// line end:   382
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091C58
// line start: 390
// line end:   394
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091C68
// line start: 404
// line end:   424
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091D40
// line start: 435
// line end:   617
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


// address: 0x8009225C
// size: 0xC
// line start: 627
// line end:   637
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x800922F4
// size: 0xC
// line start: 642
// line end:   648
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80092350
// size: 0xC
// line start: 652
// line end:   657
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092380
// line start: 661
// line end:   673
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x800923E0
// line start: 685
// line end:   700
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092460
// size: 0x10
// line start: 713
// line end:   720
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


