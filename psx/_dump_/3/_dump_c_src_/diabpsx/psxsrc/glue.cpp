// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x80092244
// line start: 220
// line end:   221
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80092250
// line start: 231
// line end:   232
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009225C
// line start: 242
// line end:   247
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800922B0
// line start: 257
// line end:   262
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80092304
// line start: 272
// line end:   279
void GLUE_PreTown__Fv() {
}


// address: 0x80092368
// line start: 305
// line end:   306
bool GLUE_Finished__Fv() {
}


// address: 0x80092374
// line start: 316
// line end:   317
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80092380
// line start: 327
// line end:   339
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80092404
// line start: 348
// line end:   352
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092414
// line start: 360
// line end:   364
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092424
// line start: 372
// line end:   376
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80092434
// line start: 386
// line end:   406
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009250C
// line start: 417
// line end:   569
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
	// address: 0xFFFFFDE0
	// size: 0xDC
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFEC0
	// size: 0x80
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF40
	// size: 0x80
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFC0
	// size: 0x10
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto struct GPanel P2Panel;
}


// address: 0x800929C4
// size: 0x8
// line start: 579
// line end:   589
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80092A4C
// size: 0x8
// line start: 594
// line end:   600
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80092AA8
// size: 0x8
// line start: 604
// line end:   609
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092AD8
// line start: 613
// line end:   619
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80092B18
// line start: 629
// line end:   635
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80092B6C
// size: 0x10
// line start: 646
// line end:   653
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


