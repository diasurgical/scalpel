// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801242A4
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801242CC
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8012433C
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x801243BC
// line start: 199
// line end:   258
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


// address: 0x80124874
// line start: 262
// line end:   275
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801248F4
// line start: 279
// line end:   292
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80124978
// line start: 298
// line end:   309
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80124A60
// line start: 314
// line end:   325
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80124B44
// line start: 333
// line end:   334
int FeGetCursor__Fv() {
}


// address: 0x80124B58
// line start: 338
// line end:   339
void FeSelect__Fv() {
}


// address: 0x80124B9C
// line start: 349
// line end:   399
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80124DA8
// line start: 403
// line end:   404
void InitDummyMenu__Fv() {
}


// address: 0x80124DB0
// line start: 410
// line end:   428
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80124E74
// line start: 445
// line end:   454
void FeInitMainMenu__Fv() {
}


// address: 0x80124ED0
// line start: 471
// line end:   477
void FeInitNewGameMenu__Fv() {
}


// address: 0x80124F1C
// line start: 482
// line end:   504
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80125010
// line start: 522
// line end:   528
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80125060
// line start: 532
// line end:   538
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801250B0
// line start: 543
// line end:   546
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801250F8
// line start: 551
// line end:   593
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


// address: 0x80125594
// line start: 638
// line end:   645
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801255E4
// line start: 649
// line end:   655
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80125634
// line start: 660
// line end:   749
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


// address: 0x80125B84
// line start: 758
// line end:   770
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


// address: 0x80125C54
// line start: 777
// line end:   782
void FeEnterGame__Fv() {
}


// address: 0x80125C7C
// line start: 798
// line end:   811
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80125CE4
// line start: 815
// line end:   824
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80125D50
// line start: 828
// line end:   837
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80125DBC
// line start: 854
// line end:   859
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80125E00
// line start: 864
// line end:   879
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80125EB8
// line start: 916
// line end:   922
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80125F00
// line start: 926
// line end:   932
void FeInitBook1Menu__Fv() {
}


// address: 0x80125F4C
// line start: 936
// line end:   942
void FeInitBook2Menu__Fv() {
}


// address: 0x80125F98
// line start: 947
// line end:   980
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80126194
// line start: 988
// line end:   989
void PlayDemo__Fv() {
}


// address: 0x801261A8
// line start: 997
// line end:   1013
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8012625C
// line start: 1027
// line end:   1157
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


// address: 0x801265C4
// line start: 1162
// line end:   1282
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


