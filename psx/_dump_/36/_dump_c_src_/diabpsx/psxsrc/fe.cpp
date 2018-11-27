// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8013556C
// line start: 160
// line end:   165
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135594
// line start: 171
// line end:   178
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80135608
// line start: 182
// line end:   187
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135684
// line start: 191
// line end:   207
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


// address: 0x801357B4
// line start: 214
// line end:   293
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


// address: 0x80135BC8
// line start: 297
// line end:   310
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135C48
// line start: 314
// line end:   334
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135D04
// line start: 341
// line end:   352
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135DEC
// line start: 357
// line end:   368
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135ED0
// line start: 376
// line end:   377
int FeGetCursor__Fv() {
}


// address: 0x80135EE4
// line start: 381
// line end:   382
void FeSelect__Fv() {
}


// address: 0x80135F28
// line start: 392
// line end:   443
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801360D4
// line start: 447
// line end:   448
void InitDummyMenu__Fv() {
}


// address: 0x801360DC
// line start: 454
// line end:   472
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013619C
// line start: 489
// line end:   499
void FeInitMainMenu__Fv() {
}


// address: 0x801361FC
// line start: 516
// line end:   522
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013624C
// line start: 527
// line end:   560
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80136380
// line start: 578
// line end:   587
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801363F4
// line start: 591
// line end:   600
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136468
// line start: 605
// line end:   608
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801364B0
// line start: 613
// line end:   655
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


// address: 0x8013694C
// line start: 745
// line end:   753
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136994
// line start: 757
// line end:   764
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801369DC
// line start: 769
// line end:   888
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


// address: 0x80136F6C
// line start: 897
// line end:   909
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


// address: 0x8013703C
// line start: 916
// line end:   921
void FeEnterGame__Fv() {
}


// address: 0x80137064
// line start: 937
// line end:   950
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801370CC
// line start: 954
// line end:   963
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80137138
// line start: 967
// line end:   976
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801371A4
// line start: 993
// line end:   998
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801371EC
// line start: 1003
// line end:   1018
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801372A4
// line start: 1055
// line end:   1061
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801372EC
// line start: 1065
// line end:   1071
void FeInitBook1Menu__Fv() {
}


// address: 0x80137338
// line start: 1075
// line end:   1081
void FeInitBook2Menu__Fv() {
}


// address: 0x80137384
// line start: 1086
// line end:   1119
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137580
// line start: 1127
// line end:   1128
void PlayDemo__Fv() {
}


// address: 0x80137594
// line start: 1143
// line end:   1159
void FadeFEOut__Fv() {
}


// address: 0x80137658
// line start: 1175
// line end:   1204
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x80137750
// line start: 1213
// line end:   1349
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80137AC8
// line start: 1356
// line end:   1489
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


// address: 0x80137ED0
// line start: 1494
// line end:   1496
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


