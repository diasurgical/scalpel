// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8012571C
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80125744
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801257B8
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80125834
// line start: 188
// line end:   259
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


// address: 0x80125D74
// line start: 263
// line end:   276
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125DF4
// line start: 280
// line end:   293
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125E78
// line start: 299
// line end:   310
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125F60
// line start: 315
// line end:   326
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80126044
// line start: 334
// line end:   335
int FeGetCursor__Fv() {
}


// address: 0x80126058
// line start: 339
// line end:   340
void FeSelect__Fv() {
}


// address: 0x8012609C
// line start: 350
// line end:   400
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801262A8
// line start: 404
// line end:   405
void InitDummyMenu__Fv() {
}


// address: 0x801262B0
// line start: 411
// line end:   429
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80126370
// line start: 446
// line end:   455
void FeInitMainMenu__Fv() {
}


// address: 0x801263CC
// line start: 472
// line end:   478
void FeInitNewGameMenu__Fv() {
}


// address: 0x80126418
// line start: 483
// line end:   505
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8012650C
// line start: 523
// line end:   532
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8012657C
// line start: 536
// line end:   545
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801265EC
// line start: 550
// line end:   553
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80126634
// line start: 558
// line end:   600
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


// address: 0x80126AD0
// line start: 769
// line end:   776
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126B20
// line start: 780
// line end:   786
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126B70
// line start: 791
// line end:   903
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


// address: 0x801270B4
// line start: 912
// line end:   924
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


// address: 0x80127184
// line start: 931
// line end:   936
void FeEnterGame__Fv() {
}


// address: 0x801271AC
// line start: 952
// line end:   965
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80127214
// line start: 969
// line end:   978
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80127280
// line start: 982
// line end:   991
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801272EC
// line start: 1008
// line end:   1013
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80127330
// line start: 1018
// line end:   1033
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801273E8
// line start: 1070
// line end:   1076
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80127430
// line start: 1080
// line end:   1086
void FeInitBook1Menu__Fv() {
}


// address: 0x8012747C
// line start: 1090
// line end:   1096
void FeInitBook2Menu__Fv() {
}


// address: 0x801274C8
// line start: 1101
// line end:   1134
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801276C4
// line start: 1142
// line end:   1143
void PlayDemo__Fv() {
}


// address: 0x801276D8
// line start: 1151
// line end:   1167
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80127774
// line start: 1181
// line end:   1312
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


// address: 0x80127AF0
// line start: 1317
// line end:   1437
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


