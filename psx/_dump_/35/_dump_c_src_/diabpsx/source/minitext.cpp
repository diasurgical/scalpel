// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x80047420
void FreeQuestText__Fv() {
}


// address: 0x80047428
void InitQuestText__Fv() {
}


// address: 0x80047434
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x80047588
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80047730
void DrawQTextBack__Fv() {
}


// address: 0x800477A0
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	{
	}
}


// address: 0x800478E0
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80047C4C
void _GLOBAL__D_QBack() {
}


// address: 0x80047C74
void _GLOBAL__I_QBack() {
}


