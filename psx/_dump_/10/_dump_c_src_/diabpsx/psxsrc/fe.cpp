// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80122D04
// line start: 155
// line end:   160
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122D2C
// line start: 166
// line end:   173
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122D9C
// line start: 177
// line end:   182
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122E1C
// line start: 198
// line end:   254
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


// address: 0x801232AC
// line start: 258
// line end:   271
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123318
// line start: 275
// line end:   287
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123390
// line start: 293
// line end:   304
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123478
// line start: 309
// line end:   320
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012355C
// line start: 328
// line end:   329
int FeGetCursor__Fv() {
}


// address: 0x80123570
// line start: 333
// line end:   334
void FeSelect__Fv() {
}


// address: 0x801235B4
// line start: 343
// line end:   387
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801237A4
// line start: 391
// line end:   392
void InitDummyMenu__Fv() {
}


// address: 0x801237AC
// line start: 398
// line end:   416
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123870
// line start: 433
// line end:   442
void FeInitMainMenu__Fv() {
}


// address: 0x801238D0
// line start: 459
// line end:   465
void FeInitNewGameMenu__Fv() {
}


// address: 0x8012391C
// line start: 470
// line end:   492
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80123A10
// line start: 510
// line end:   516
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123A60
// line start: 520
// line end:   526
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123AB0
// line start: 531
// line end:   534
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80123AF8
// line start: 539
// line end:   581
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


// address: 0x80123F94
// line start: 626
// line end:   633
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123FE4
// line start: 637
// line end:   643
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80124034
// line start: 648
// line end:   725
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


// address: 0x801244BC
// line start: 734
// line end:   741
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124560
// line start: 748
// line end:   753
void FeEnterGame__Fv() {
}


// address: 0x80124588
// line start: 769
// line end:   775
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801245D0
// line start: 780
// line end:   789
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8012463C
// line start: 793
// line end:   802
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801246A8
// line start: 819
// line end:   824
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801246EC
// line start: 829
// line end:   844
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801247A4
// line start: 881
// line end:   887
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801247EC
// line start: 891
// line end:   897
void FeInitBook1Menu__Fv() {
}


// address: 0x80124838
// line start: 901
// line end:   907
void FeInitBook2Menu__Fv() {
}


// address: 0x80124884
// line start: 912
// line end:   945
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124A80
// line start: 953
// line end:   954
void PlayDemo__Fv() {
}


// address: 0x80124A94
// line start: 971
// line end:   1131
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF78
	// size: 0x78
	auto struct CScreen FeScreen;
	// register: 17
	register int fadeval;
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


// address: 0x80124E64
// line start: 1136
// line end:   1244
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


