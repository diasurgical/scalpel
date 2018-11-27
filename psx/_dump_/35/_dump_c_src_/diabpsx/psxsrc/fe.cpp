// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80139F54
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139F7C
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139FF0
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013A06C
// line start: 188
// line end:   204
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 17
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x8013A19C
// line start: 211
// line end:   290
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 19
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 22
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 20
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8013A5B0
// line start: 294
// line end:   307
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A630
// line start: 311
// line end:   329
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A6DC
// line start: 335
// line end:   346
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A7C4
// line start: 351
// line end:   362
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A8A8
// line start: 370
// line end:   371
int FeGetCursor__Fv() {
}


// address: 0x8013A8BC
// line start: 375
// line end:   376
void FeSelect__Fv() {
}


// address: 0x8013A900
// line start: 386
// line end:   437
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013AA98
// line start: 441
// line end:   442
void InitDummyMenu__Fv() {
}


// address: 0x8013AAA0
// line start: 448
// line end:   466
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013AB60
// line start: 483
// line end:   492
void FeInitMainMenu__Fv() {
}


// address: 0x8013ABBC
// line start: 509
// line end:   515
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013AC0C
// line start: 520
// line end:   553
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x8013AD40
// line start: 571
// line end:   580
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013ADB4
// line start: 584
// line end:   593
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013AE28
// line start: 598
// line end:   601
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013AE70
// line start: 606
// line end:   648
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8013B30C
// line start: 738
// line end:   746
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B354
// line start: 750
// line end:   757
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B39C
// line start: 762
// line end:   881
void FeNewNameMenuCtrl__Fv() {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// address: 0xFFFFFFD8
											// size: 0x2
											auto char asd[2];
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


// address: 0x8013B92C
// line start: 890
// line end:   902
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8013B9FC
// line start: 909
// line end:   914
void FeEnterGame__Fv() {
}


// address: 0x8013BA24
// line start: 930
// line end:   943
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BA8C
// line start: 947
// line end:   956
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BAF8
// line start: 960
// line end:   969
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BB64
// line start: 986
// line end:   991
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013BBAC
// line start: 996
// line end:   1011
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013BC64
// line start: 1048
// line end:   1054
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013BCAC
// line start: 1058
// line end:   1064
void FeInitBook1Menu__Fv() {
}


// address: 0x8013BCF8
// line start: 1068
// line end:   1074
void FeInitBook2Menu__Fv() {
}


// address: 0x8013BD44
// line start: 1079
// line end:   1112
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013BF40
// line start: 1120
// line end:   1121
void PlayDemo__Fv() {
}


// address: 0x8013BF54
// line start: 1129
// line end:   1145
void FadeFEOut__Fv() {
}


// address: 0x8013C018
// line start: 1161
// line end:   1190
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013C110
// line start: 1199
// line end:   1335
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013C488
// line start: 1342
// line end:   1475
void McMainCharKeyCtrl__Fv() {
	// register: 23
	register int j;
	// register: 30
	register int Spacing;
	// register: 20
	register int fileno;
	// register: 22
	register int sr;
	// register: 21
	register int sg;
	// register: 19
	register int sb;
	// register: 17
	register int SelX;
	// register: 16
	register int len;
}


// address: 0x8013C890
// line start: 1480
// line end:   1482
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


