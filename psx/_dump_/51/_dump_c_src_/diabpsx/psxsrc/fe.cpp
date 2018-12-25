// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8012903C
// line start: 161
// line end:   166
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80129064
// line start: 172
// line end:   179
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801290D8
// line start: 183
// line end:   188
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80129154
// line start: 192
// line end:   208
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


// address: 0x80129284
// line start: 215
// line end:   294
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


// address: 0x80129698
// line start: 298
// line end:   311
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80129718
// line start: 315
// line end:   335
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801297D4
// line start: 342
// line end:   353
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801298BC
// line start: 358
// line end:   369
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801299A0
// line start: 377
// line end:   378
int FeGetCursor__Fv() {
}


// address: 0x801299B4
// line start: 382
// line end:   383
void FeSelect__Fv() {
}


// address: 0x801299F8
// line start: 393
// line end:   444
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80129BA4
// line start: 448
// line end:   449
void InitDummyMenu__Fv() {
}


// address: 0x80129BAC
// line start: 455
// line end:   473
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80129C6C
// line start: 490
// line end:   500
void FeInitMainMenu__Fv() {
}


// address: 0x80129CCC
// line start: 517
// line end:   523
void FeInitNewGameMenu__Fv() {
}


// address: 0x80129D1C
// line start: 528
// line end:   573
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80129E88
// line start: 591
// line end:   600
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80129EFC
// line start: 604
// line end:   613
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80129F70
// line start: 618
// line end:   621
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80129FB8
// line start: 626
// line end:   668
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


// address: 0x8012A440
// line start: 758
// line end:   766
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8012A488
// line start: 770
// line end:   777
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8012A4D0
// line start: 782
// line end:   905
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


// address: 0x8012AA64
// line start: 914
// line end:   926
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


// address: 0x8012AB34
// line start: 933
// line end:   938
void FeEnterGame__Fv() {
}


// address: 0x8012AB5C
// line start: 954
// line end:   967
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8012ABC4
// line start: 971
// line end:   980
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8012AC30
// line start: 984
// line end:   993
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012AC9C
// line start: 1010
// line end:   1015
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8012ACE4
// line start: 1020
// line end:   1035
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8012AD9C
// line start: 1072
// line end:   1078
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8012ADE4
// line start: 1082
// line end:   1088
void FeInitBook1Menu__Fv() {
}


// address: 0x8012AE30
// line start: 1092
// line end:   1098
void FeInitBook2Menu__Fv() {
}


// address: 0x8012AE7C
// line start: 1103
// line end:   1136
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8012B078
// line start: 1144
// line end:   1145
void PlayDemo__Fv() {
}


// address: 0x8012B08C
// line start: 1160
// line end:   1176
void FadeFEOut__Fv() {
}


// address: 0x8012B150
// line start: 1192
// line end:   1221
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8012B248
// line start: 1230
// line end:   1366
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8012B5C0
// line start: 1373
// line end:   1506
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


// address: 0x8012B9C8
// line start: 1511
// line end:   1513
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


