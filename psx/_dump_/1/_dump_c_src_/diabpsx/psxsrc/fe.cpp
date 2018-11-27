// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80122BDC
// line start: 152
// line end:   157
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122C04
// line start: 163
// line end:   170
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122C74
// line start: 174
// line end:   179
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122CF4
// line start: 195
// line end:   251
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
				}
			}
		}
	}
}


// address: 0x80123184
// line start: 255
// line end:   268
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801231F0
// line start: 272
// line end:   284
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123268
// line start: 290
// line end:   301
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123350
// line start: 306
// line end:   317
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123434
// line start: 325
// line end:   326
int FeGetCursor__Fv() {
}


// address: 0x80123448
// line start: 330
// line end:   331
void FeSelect__Fv() {
}


// address: 0x8012348C
// line start: 340
// line end:   384
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80123678
// line start: 388
// line end:   389
void InitDummyMenu__Fv() {
}


// address: 0x80123680
// line start: 395
// line end:   413
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123744
// line start: 430
// line end:   439
void FeInitMainMenu__Fv() {
}


// address: 0x801237A4
// line start: 456
// line end:   462
void FeInitNewGameMenu__Fv() {
}


// address: 0x801237F0
// line start: 467
// line end:   489
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801238E4
// line start: 507
// line end:   513
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123934
// line start: 517
// line end:   523
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123984
// line start: 528
// line end:   531
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801239CC
// line start: 536
// line end:   578
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


// address: 0x80123E68
// line start: 623
// line end:   630
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123EB8
// line start: 634
// line end:   640
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80123F08
// line start: 645
// line end:   722
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


// address: 0x80124390
// line start: 731
// line end:   738
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124434
// line start: 745
// line end:   750
void FeEnterGame__Fv() {
}


// address: 0x8012445C
// line start: 766
// line end:   772
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801244A4
// line start: 777
// line end:   786
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124510
// line start: 790
// line end:   799
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012457C
// line start: 816
// line end:   821
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801245C0
// line start: 826
// line end:   841
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80124678
// line start: 878
// line end:   884
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801246C0
// line start: 888
// line end:   894
void FeInitBook1Menu__Fv() {
}


// address: 0x8012470C
// line start: 898
// line end:   904
void FeInitBook2Menu__Fv() {
}


// address: 0x80124758
// line start: 909
// line end:   942
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124954
// line start: 950
// line end:   951
void PlayDemo__Fv() {
}


// address: 0x80124968
// line start: 968
// line end:   1119
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


// address: 0x80124D0C
// line start: 1124
// line end:   1232
void McMainCharKeyCtrl__Fv() {
	// register: 16
	register int j;
	// register: 19
	register int Spacing;
	// register: 9
	register int fileno;
	// register: 8
	register int sr;
	// register: 3
	register int sg;
	// register: 2
	register int sb;
}


