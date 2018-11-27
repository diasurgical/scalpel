// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x8008EF18
// line start: 220
// line end:   221
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008EF24
// line start: 231
// line end:   232
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008EF30
// line start: 242
// line end:   247
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EF84
// line start: 257
// line end:   262
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008EFD8
// line start: 272
// line end:   279
void GLUE_PreTown__Fv() {
}


// address: 0x8008F03C
// line start: 305
// line end:   306
bool GLUE_Finished__Fv() {
}


// address: 0x8008F048
// line start: 316
// line end:   317
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008F054
// line start: 327
// line end:   339
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008F0D8
// line start: 348
// line end:   352
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F0E8
// line start: 360
// line end:   364
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F0F8
// line start: 372
// line end:   376
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008F108
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008F1E0
// line start: 417
// line end:   572
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 19
	register bool IsTown;
	// register: 16
	register int TextId;
	// register: 17
	register int Level;
	// register: 18
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


// address: 0x8008F6A8
// size: 0x8
// line start: 582
// line end:   592
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008F730
// size: 0x8
// line start: 597
// line end:   603
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008F78C
// size: 0x8
// line start: 607
// line end:   612
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008F7BC
// line start: 616
// line end:   622
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008F7FC
// line start: 632
// line end:   638
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008F850
// size: 0x10
// line start: 649
// line end:   656
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


