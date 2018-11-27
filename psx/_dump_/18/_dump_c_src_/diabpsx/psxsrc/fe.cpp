// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80130184
// line start: 154
// line end:   159
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801301AC
// line start: 165
// line end:   172
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013021C
// line start: 176
// line end:   181
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013029C
// line start: 197
// line end:   256
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
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


// address: 0x80130754
// line start: 260
// line end:   273
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801307D4
// line start: 277
// line end:   290
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80130858
// line start: 296
// line end:   307
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130940
// line start: 312
// line end:   323
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130A24
// line start: 331
// line end:   332
int FeGetCursor__Fv() {
}


// address: 0x80130A38
// line start: 336
// line end:   337
void FeSelect__Fv() {
}


// address: 0x80130A7C
// line start: 347
// line end:   397
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80130C88
// line start: 401
// line end:   402
void InitDummyMenu__Fv() {
}


// address: 0x80130C90
// line start: 408
// line end:   426
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80130D54
// line start: 443
// line end:   452
void FeInitMainMenu__Fv() {
}


// address: 0x80130DB0
// line start: 469
// line end:   475
void FeInitNewGameMenu__Fv() {
}


// address: 0x80130DFC
// line start: 480
// line end:   502
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80130EF0
// line start: 520
// line end:   526
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80130F40
// line start: 530
// line end:   536
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80130F90
// line start: 541
// line end:   544
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80130FD8
// line start: 549
// line end:   591
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


// address: 0x80131474
// line start: 636
// line end:   643
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801314C4
// line start: 647
// line end:   653
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80131514
// line start: 658
// line end:   747
void FeNewNameMenuCtrl__Fv() {
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


// address: 0x80131A64
// line start: 756
// line end:   768
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


// address: 0x80131B34
// line start: 775
// line end:   780
void FeEnterGame__Fv() {
}


// address: 0x80131B5C
// line start: 796
// line end:   809
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80131BC4
// line start: 813
// line end:   822
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80131C30
// line start: 826
// line end:   835
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80131C9C
// line start: 852
// line end:   857
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80131CE0
// line start: 862
// line end:   877
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80131D98
// line start: 914
// line end:   920
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80131DE0
// line start: 924
// line end:   930
void FeInitBook1Menu__Fv() {
}


// address: 0x80131E2C
// line start: 934
// line end:   940
void FeInitBook2Menu__Fv() {
}


// address: 0x80131E78
// line start: 945
// line end:   978
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80132074
// line start: 986
// line end:   987
void PlayDemo__Fv() {
}


// address: 0x80132088
// line start: 995
// line end:   1011
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013213C
// line start: 1025
// line end:   1151
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


// address: 0x801324AC
// line start: 1156
// line end:   1276
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


