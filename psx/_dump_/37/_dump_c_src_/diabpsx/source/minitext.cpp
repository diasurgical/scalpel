// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x8004748C
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x80047494
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x800474A0
// line start: 127
// line end:   164
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


// address: 0x800475E0
// line start: 173
// line end:   210
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x800476E0
// line start: 215
// line end:   221
void DrawQTextBack__Fv() {
}


// address: 0x80047750
// line start: 229
// line end:   237
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x800477DC
// line start: 244
// line end:   258
void DrawQTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80047878
// line start: 272
// line end:   380
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


// address: 0x80047BB0
// line start: 383
// line end:   383
void _GLOBAL__D_QBack() {
}


// address: 0x80047BD8
// line start: 383
// line end:   383
void _GLOBAL__I_QBack() {
}


