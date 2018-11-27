// C:\diabpsx\PSXSRC\GLUE.CPP

#include "types.h"

// address: 0x8008E614
// line start: 221
// line end:   222
void GLUE_SetMonsterList__Fi(int List) {
}


// address: 0x8008E620
// line start: 232
// line end:   233
int GLUE_GetMonsterList__Fv() {
}


// address: 0x8008E62C
// line start: 243
// line end:   248
void GLUE_SuspendGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008E680
// line start: 258
// line end:   263
void GLUE_ResumeGame__Fv() {
	// register: 16
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8008E6D4
// line start: 273
// line end:   280
void GLUE_PreTown__Fv() {
}


// address: 0x8008E738
// line start: 289
// line end:   295
void GLUE_PreDun__Fv() {
}


// address: 0x8008E784
// line start: 315
// line end:   316
bool GLUE_Finished__Fv() {
}


// address: 0x8008E790
// line start: 326
// line end:   327
void GLUE_SetFinished__Fb(bool NewFinished) {
}


// address: 0x8008E79C
// line start: 337
// line end:   349
void GLUE_StartBg__Fibi(int TextId, bool IsTown, int Level) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
}


// address: 0x8008E820
// line start: 358
// line end:   362
bool GLUE_SetShowGameScreenFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E830
// line start: 370
// line end:   374
bool GLUE_SetHomingScrollFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E840
// line start: 382
// line end:   386
bool GLUE_SetShowPanelFlag__Fb(bool NewFlag) {
	// register: 2
	register bool OldFlag;
}


// address: 0x8008E850
// line start: 396
// line end:   416
void DoShowPanelGFX__FP6GPanelT0(struct GPanel *P1, struct GPanel *P2) {
}


// address: 0x8008E928
// line start: 427
// line end:   585
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


// address: 0x8008EE14
// size: 0x8
// line start: 595
// line end:   605
struct PInf *FindPlayerChar__FPc(char *Id) {
	{
	}
}


// address: 0x8008EE9C
// size: 0x8
// line start: 610
// line end:   616
struct PInf *FindPlayerChar__Fiii(int Char, int Wep, int Arm) {
	// address: 0xFFFFFFE0
	// size: 0x14
	auto char TxBuff[20];
}


// address: 0x8008EEF8
// size: 0x8
// line start: 620
// line end:   625
struct PInf *FindPlayerChar__FP12PlayerStruct(struct PlayerStruct *P) {
}


// address: 0x8008EF28
// line start: 629
// line end:   635
int FindPlayerChar__FP12PlayerStructb(struct PlayerStruct *P, bool InTown) {
	// register: 2
	// size: 0x8
	register struct PInf *Inf;
}


// address: 0x8008EF68
// line start: 645
// line end:   651
void MakeSurePlayerDressedProperly__FR7CPlayerR12PlayerStructb(struct CPlayer *Player, struct PlayerStruct *Plr, bool InTown) {
	// register: 16
	register int Id;
}


// address: 0x8008EFBC
// size: 0x10
// line start: 662
// line end:   669
struct MonstList *GLUE_GetCurrentList__Fi(int Level) {
	// register: 17
	// size: 0x8
	register struct MonstLevel *MLev;
	// register: 16
	register int List;
}


