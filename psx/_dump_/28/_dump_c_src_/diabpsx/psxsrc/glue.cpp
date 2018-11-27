// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x8009165C
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x80091668
int GLUE_GetMonsterList__Fv() {
}


// address: 0x80091674
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800916C8
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009171C
void GLUE_PreTown__Fv() {
}


// address: 0x80091780
void GLUE_PreDun__Fv() {
}


// address: 0x800917CC
bool GLUE_Finished__Fv() {
}


// address: 0x800917D8
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x800917E4
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x80091868
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091878
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091888
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x80091898
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x80091970
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


// address: 0x80091E34
// size: 0x8
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x80091EBC
// size: 0x8
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x80091F18
// size: 0x8
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x80091F48
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x80091F88
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x80091FDC
// size: 0x10
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}

