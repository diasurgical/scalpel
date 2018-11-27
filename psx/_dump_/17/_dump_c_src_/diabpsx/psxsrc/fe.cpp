// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80121A5C
// line start: 154
// line end:   159
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80121A84
// line start: 165
// line end:   172
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80121AF4
// line start: 176
// line end:   181
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80121B74
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


// address: 0x8012202C
// line start: 260
// line end:   273
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122098
// line start: 277
// line end:   289
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122110
// line start: 295
// line end:   306
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801221F8
// line start: 311
// line end:   322
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801222DC
// line start: 330
// line end:   331
int FeGetCursor__Fv() {
}


// address: 0x801222F0
// line start: 335
// line end:   336
void FeSelect__Fv() {
}


// address: 0x80122334
// line start: 346
// line end:   396
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80122540
// line start: 400
// line end:   401
void InitDummyMenu__Fv() {
}


// address: 0x80122548
// line start: 407
// line end:   425
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8012260C
// line start: 442
// line end:   451
void FeInitMainMenu__Fv() {
}


// address: 0x80122668
// line start: 468
// line end:   474
void FeInitNewGameMenu__Fv() {
}


// address: 0x801226B4
// line start: 479
// line end:   501
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801227A8
// line start: 519
// line end:   525
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801227F8
// line start: 529
// line end:   535
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80122848
// line start: 540
// line end:   543
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80122890
// line start: 548
// line end:   590
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


// address: 0x80122D2C
// line start: 635
// line end:   642
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80122D7C
// line start: 646
// line end:   652
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80122DCC
// line start: 657
// line end:   746
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


// address: 0x8012331C
// line start: 755
// line end:   767
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


// address: 0x801233EC
// line start: 774
// line end:   779
void FeEnterGame__Fv() {
}


// address: 0x80123414
// line start: 795
// line end:   808
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8012347C
// line start: 812
// line end:   821
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x801234E8
// line start: 825
// line end:   834
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80123554
// line start: 851
// line end:   856
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80123598
// line start: 861
// line end:   876
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80123650
// line start: 913
// line end:   919
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80123698
// line start: 923
// line end:   929
void FeInitBook1Menu__Fv() {
}


// address: 0x801236E4
// line start: 933
// line end:   939
void FeInitBook2Menu__Fv() {
}


// address: 0x80123730
// line start: 944
// line end:   977
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8012392C
// line start: 985
// line end:   986
void PlayDemo__Fv() {
}


// address: 0x80123940
// line start: 994
// line end:   1010
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801239F4
// line start: 1024
// line end:   1150
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


// address: 0x80123D64
// line start: 1155
// line end:   1277
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


