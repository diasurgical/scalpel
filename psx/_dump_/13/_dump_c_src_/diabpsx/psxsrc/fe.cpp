// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801202C4
// line start: 154
// line end:   159
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801202EC
// line start: 165
// line end:   172
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8012035C
// line start: 176
// line end:   181
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x801203DC
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


// address: 0x80120894
// line start: 260
// line end:   273
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80120900
// line start: 277
// line end:   289
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80120978
// line start: 295
// line end:   306
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80120A60
// line start: 311
// line end:   322
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80120B44
// line start: 330
// line end:   331
int FeGetCursor__Fv() {
}


// address: 0x80120B58
// line start: 335
// line end:   336
void FeSelect__Fv() {
}


// address: 0x80120B9C
// line start: 346
// line end:   396
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80120DA8
// line start: 400
// line end:   401
void InitDummyMenu__Fv() {
}


// address: 0x80120DB0
// line start: 407
// line end:   425
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80120E74
// line start: 442
// line end:   451
void FeInitMainMenu__Fv() {
}


// address: 0x80120ED4
// line start: 468
// line end:   474
void FeInitNewGameMenu__Fv() {
}


// address: 0x80120F20
// line start: 479
// line end:   501
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80121014
// line start: 519
// line end:   525
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80121064
// line start: 529
// line end:   535
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801210B4
// line start: 540
// line end:   543
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801210FC
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


// address: 0x80121598
// line start: 635
// line end:   642
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801215E8
// line start: 646
// line end:   652
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80121638
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


// address: 0x80121B88
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


// address: 0x80121C58
// line start: 774
// line end:   779
void FeEnterGame__Fv() {
}


// address: 0x80121C80
// line start: 795
// line end:   808
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80121CE8
// line start: 812
// line end:   821
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80121D54
// line start: 825
// line end:   834
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80121DC0
// line start: 851
// line end:   856
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80121E04
// line start: 861
// line end:   876
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80121EBC
// line start: 913
// line end:   919
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80121F04
// line start: 923
// line end:   929
void FeInitBook1Menu__Fv() {
}


// address: 0x80121F50
// line start: 933
// line end:   939
void FeInitBook2Menu__Fv() {
}


// address: 0x80121F9C
// line start: 944
// line end:   977
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80122198
// line start: 985
// line end:   986
void PlayDemo__Fv() {
}


// address: 0x801221AC
// line start: 994
// line end:   1010
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80122260
// line start: 1024
// line end:   1149
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


// address: 0x801225C8
// line start: 1154
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


