// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x80048EB8
// line start: 111
// line end:   114
void FreeQuestText__Fv() {
}


// address: 0x80048EC0
// line start: 118
// line end:   122
void InitQuestText__Fv() {
}


// address: 0x80048ECC
// line start: 130
// line end:   168
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


// address: 0x8004901C
// line start: 178
// line end:   248
void InitQTextMsg__Fi(int m) {
	// register: 4
	register int iBookName;
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80049274
// line start: 253
// line end:   276
void DrawQTextBack__Fv() {
	{
		{
			{
				{
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT ClipRect;
				}
			}
		}
	}
}


// address: 0x800493FC
// line start: 287
// line end:   342
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x8004956C
// line start: 347
// line end:   480
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
	// register: 18
	register int OldOt;
}


// address: 0x80049974
// line start: 483
// line end:   483
void _GLOBAL__D_QBack() {
}


// address: 0x8004999C
// line start: 483
// line end:   483
void _GLOBAL__I_QBack() {
}


