// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x800916EC
// line start: 224
// line end:   225
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x800916F8
// line start: 235
// line end:   236
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091704
// line start: 246
// line end:   251
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80091758
// line start: 261
// line end:   266
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800917AC
// line start: 276
// line end:   283
void GLUE_PreTown__Fv() {
}


// address: 0x80091810
// line start: 292
// line end:   298
void GLUE_PreDun__Fv() {
}


// address: 0x8009185C
// line start: 318
// line end:   319
bool GLUE_Finished__Fv() {
}


// address: 0x80091868
// line start: 329
// line end:   330
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x80091874
// line start: 340
// line end:   352
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x800918F8
// line start: 361
// line end:   365
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091908
// line start: 373
// line end:   377
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091918
// line start: 385
// line end:   389
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091928
// line start: 399
// line end:   419
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091A00
// line start: 430
// line end:   612
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


// address: 0x80091F1C
// size: 0xC
// line start: 622
// line end:   632
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x80091FB4
// size: 0xC
// line start: 637
// line end:   643
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80092010
// size: 0xC
// line start: 647
// line end:   652
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80092040
// line start: 656
// line end:   668
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 3
	// size: 0xC
	register struct PInf *Inf;
}


// address: 0x800920A0
// line start: 680
// line end:   689
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x800920F4
// size: 0x10
// line start: 702
// line end:   709
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


