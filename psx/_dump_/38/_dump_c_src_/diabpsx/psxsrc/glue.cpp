// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x8009B748
// line start: 244
// line end:   245
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8009B754
// line start: 255
// line end:   256
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8009B760
// line start: 266
// line end:   271
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009B7B4
// line start: 281
// line end:   286
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8009B808
// line start: 296
// line end:   301
void GLUE_PreTown__Fv() {
}


// address: 0x8009B838
// line start: 310
// line end:   312
void GLUE_PreDun__Fv() {
}


// address: 0x8009B840
// line start: 331
// line end:   332
bool GLUE_Finished__Fv() {
}


// address: 0x8009B84C
// line start: 342
// line end:   343
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8009B858
// line start: 353
// line end:   362
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8009B8C0
// line start: 371
// line end:   375
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8D0
// line start: 383
// line end:   384
bool GLUE_GetShowGameScreenFlag__Fv() {
}


// address: 0x8009B8DC
// line start: 392
// line end:   396
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8EC
// line start: 404
// line end:   408
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8009B8FC
// line start: 420
// line end:   421
bool GLUE_HasGameStarted__Fv() {
}


// address: 0x8009B908
// line start: 430
// line end:   450
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8009B9E0
// line start: 463
// line end:   465
void GLUE_DoQuake__Fii(int Time, int Amount) {
}


// address: 0x8009B9F0
// line start: 470
// line end:   625
void BgTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// register: 18
	register bool IsTown;
	// register: 20
	register int TextId;
	// register: 16
	register int Level;
	// register: 17
	register int ObjId;
	// register: 19
	register int List;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *plr1;
	// register: 22
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	// address: 0xFFFFFD78
	// size: 0x108
	auto struct CBlocks MyBlocks;
	// address: 0xFFFFFE80
	// size: 0x90
	auto struct CPlayer MyPlayer;
	// address: 0xFFFFFF10
	// size: 0x90
	auto struct CPlayer MyPlayer2;
	// address: 0xFFFFFFA0
	// size: 0x1C
	auto struct GPanel P1Panel;
	// address: 0xFFFFFFC0
	// size: 0x1C
	auto struct GPanel P2Panel;
}


// address: 0x8009BE9C
// size: 0xC
// line start: 635
// line end:   645
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
		// register: 17
		register int f;
	}
}


// address: 0x8009BF34
// size: 0xC
// line start: 650
// line end:   656
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8009BF90
// size: 0xC
// line start: 660
// line end:   665
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8009BFC0
// line start: 669
// line end:   701
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	{
		{
			// register: 3
			// size: 0xC
			register struct PInf *Inf;
		}
	}
}


// address: 0x8009C08C
// line start: 714
// line end:   724
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructbT2(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown, bool Blocking) {
	// register: 16
	register int Id;
}


// address: 0x8009C104
// size: 0x10
// line start: 737
// line end:   744
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


// address: 0x8009C1B0
// line start: 757
// line end:   768
void GLUE_StartGameExit__Fv() {
	{
	}
}


// address: 0x8009C21C
// line start: 779
// line end:   781
void GLUE_Init__Fv() {
}


