// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x8004D778
// line start: 133
// line end:   221
void CalcTextSpeed__FPCc(char *Name) {
	// register: 17
	register char *ptr;
	// address: 0xFFFFFFD0
	// size: 0x10
	auto char SpeechName[16];
	// register: 16
	register unsigned long SfxFrames;
	// register: 3
	register unsigned long TextHeight;
	{
		{
			// register: 3
			// size: 0x4
			register enum LANG_TYPE Lang;
			// address: 0xFFFFFFE0
			// size: 0x2
			auto char Prefix[2];
			// address: 0xFFFFFFE8
			// size: 0x8
			auto struct RECT Window;
		}
	}
}


// address: 0x80047F34
// line start: 127
// line end:   168
void CalcTextSpeed__FPCc_addr_80047F34(char *Name) {
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


// address: 0x8004DCD4
// line start: 397
// line end:   425
void DrawQTextBack__Fv() {
	{
		{
			{
				{
					// address: 0xFFFFFF98
					// size: 0x50
					auto char BookName[80];
					// address: 0xFFFFFFE8
					// size: 0x8
					auto struct RECT ClipRect;
					// register: 17
					register int oldot;
				}
			}
		}
	}
}


// address: 0x8004819C
// line start: 210
// line end:   216
void DrawQTextBack__Fv_addr_8004819C() {
}


// address: 0x80049274
// line start: 253
// line end:   276
void DrawQTextBack__Fv_addr_80049274() {
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


// address: 0x8004DE70
// line start: 439
// line end:   545
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
	// register: 18
	register char stextflagsave;
}


// address: 0x80048298
// line start: 239
// line end:   259
void DrawQTextTSK__FP4TASK_addr_80048298(struct TASK *T) {
}


// address: 0x80045610
// line start: 246
// line end:   301
void DrawQTextTSK__FP4TASK_addr_80045610(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x800477A0
// line start: 246
// line end:   297
void DrawQTextTSK__FP4TASK_addr_800477A0(struct TASK *T) {
	{
	}
}


// address: 0x80048364
// line start: 265
// line end:   355
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 21
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 22
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
}


// address: 0x8004E198
// line start: 587
// line end:   813
void DrawQText__Fv_addr_8004E198() {
	// register: 17
	register char *p;
	// register: 30
	register char *pnl;
	// register: 21
	register char *SpacePtr;
	// register: 22
	register int ty;
	// register: 18
	register int l;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 19
	register int LetterCount;
	// register: 20
	register int KanjiCount;
	// register: 16
	register char *t;
	// register: 16
	register int textot;
	// register: 16
	register int OldDOt;
	// address: 0xFFFFFFC8
	auto int OldOt;
	// register: 3
	register int TextYSize;
	{
		{
			{
				{
					{
						// register: 3
						register int diff;
						{
							{
								// register: 3
								register int diff;
								{
									{
										{
											// register: 3
											register int diff;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80048420
// line start: 265
// line end:   368
void DrawQText__Fv_addr_80048420() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 23
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 30
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x8004956C
// line start: 347
// line end:   480
void DrawQText__Fv_addr_8004956C() {
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


// address: 0x800472FC
// line start: 271
// line end:   379
void DrawQText__Fv_addr_800472FC() {
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


// address: 0x8004D934
// line start: 240
// line end:   283
void FadeMusicTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register long MusicVolume;
}


// address: 0x80047F20
// line start: 108
// line end:   111
void FreeQuestText__Fv() {
}


// address: 0x80048074
// line start: 177
// line end:   205
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto char Name[8];
}


// address: 0x8004901C
// line start: 178
// line end:   248
void InitQTextMsg__Fi_addr_8004901C(int m) {
	// register: 4
	register int iBookName;
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x8004DA80
// line start: 296
// line end:   392
void InitQTextMsg__Fi_addr_8004DA80(int m) {
	{
		// register: 16
		register int i;
		{
			{
				// register: 3
				// size: 0x10
				register struct DEF_ARGS *args;
			}
		}
	}
}


// address: 0x80047458
// line start: 176
// line end:   225
void InitQTextMsg__Fi_addr_80047458(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x80047F28
// line start: 115
// line end:   119
void InitQuestText__Fv() {
}


// address: 0x8004E158
// line start: 564
// line end:   575
int KANJI_strlen__FPc(char *str) {
	// register: 5
	register int l;
}


// address: 0x8004820C
// line start: 224
// line end:   232
void PrintCDWait__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80048694
// line start: 359
// line end:   359
void _GLOBAL__D_QBack() {
}


// address: 0x800486BC
// line start: 359
// line end:   359
void _GLOBAL__I_QBack() {
}


