// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80137C0C
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137C34
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137CA8
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137D24
// line start: 188
// line end:   262
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
	// register: 18
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 18
	register int SelX;
	// register: 20
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
								// register: 21
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801381FC
// line start: 266
// line end:   279
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013827C
// line start: 283
// line end:   296
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138300
// line start: 302
// line end:   313
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801383E8
// line start: 318
// line end:   329
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801384CC
// line start: 337
// line end:   338
int FeGetCursor__Fv() {
}


// address: 0x801384E0
// line start: 342
// line end:   343
void FeSelect__Fv() {
}


// address: 0x80138524
// line start: 353
// line end:   403
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138730
// line start: 407
// line end:   408
void InitDummyMenu__Fv() {
}


// address: 0x80138738
// line start: 414
// line end:   432
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801387F8
// line start: 449
// line end:   458
void FeInitMainMenu__Fv() {
}


// address: 0x80138854
// line start: 475
// line end:   481
void FeInitNewGameMenu__Fv() {
}


// address: 0x801388A0
// line start: 486
// line end:   508
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80138994
// line start: 526
// line end:   535
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80138A04
// line start: 539
// line end:   548
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138A74
// line start: 553
// line end:   556
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80138ABC
// line start: 561
// line end:   603
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


// address: 0x80138F58
// line start: 772
// line end:   779
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138FA8
// line start: 783
// line end:   789
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138FF8
// line start: 794
// line end:   906
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


// address: 0x8013953C
// line start: 915
// line end:   927
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


// address: 0x8013960C
// line start: 934
// line end:   939
void FeEnterGame__Fv() {
}


// address: 0x80139634
// line start: 955
// line end:   968
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013969C
// line start: 972
// line end:   981
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80139708
// line start: 985
// line end:   994
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139774
// line start: 1011
// line end:   1016
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801397B8
// line start: 1021
// line end:   1036
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139870
// line start: 1073
// line end:   1079
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801398B8
// line start: 1083
// line end:   1089
void FeInitBook1Menu__Fv() {
}


// address: 0x80139904
// line start: 1093
// line end:   1099
void FeInitBook2Menu__Fv() {
}


// address: 0x80139950
// line start: 1104
// line end:   1137
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139B4C
// line start: 1145
// line end:   1146
void PlayDemo__Fv() {
}


// address: 0x80139B60
// line start: 1154
// line end:   1174
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139C04
// line start: 1188
// line end:   1322
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
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
											{
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
}


// address: 0x80139FC0
// line start: 1327
// line end:   1447
void McMainCharKeyCtrl__Fv() {
	// register: 19
	register int j;
	// register: 22
	register int Spacing;
	// register: 3
	register int fileno;
	// register: 18
	register int sr;
	// register: 17
	register int sg;
	// register: 16
	register int sb;
}


