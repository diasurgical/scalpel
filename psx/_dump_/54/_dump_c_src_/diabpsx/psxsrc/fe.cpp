// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80138B1C
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138B44
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138BB8
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138C34
// line start: 188
// line end:   204
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


// address: 0x80138D64
// line start: 211
// line end:   290
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


// address: 0x80139178
// line start: 294
// line end:   307
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801391F8
// line start: 311
// line end:   329
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392A4
// line start: 335
// line end:   346
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013938C
// line start: 351
// line end:   362
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139470
// line start: 370
// line end:   371
int FeGetCursor__Fv() {
}


// address: 0x80139484
// line start: 375
// line end:   376
void FeSelect__Fv() {
}


// address: 0x801394C8
// line start: 386
// line end:   437
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139660
// line start: 441
// line end:   442
void InitDummyMenu__Fv() {
}


// address: 0x80139668
// line start: 448
// line end:   466
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139728
// line start: 483
// line end:   492
void FeInitMainMenu__Fv() {
}


// address: 0x80139784
// line start: 509
// line end:   515
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397D4
// line start: 520
// line end:   553
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139908
// line start: 571
// line end:   580
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013997C
// line start: 584
// line end:   593
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399F0
// line start: 598
// line end:   601
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A38
// line start: 606
// line end:   648
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


// address: 0x80139ED4
// line start: 738
// line end:   746
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F1C
// line start: 750
// line end:   757
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F64
// line start: 762
// line end:   875
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


// address: 0x8013A4B4
// line start: 884
// line end:   898
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


// address: 0x8013A590
// line start: 905
// line end:   910
void FeEnterGame__Fv() {
}


// address: 0x8013A5B8
// line start: 926
// line end:   939
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A620
// line start: 943
// line end:   952
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A68C
// line start: 956
// line end:   965
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6F8
// line start: 982
// line end:   987
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A740
// line start: 992
// line end:   1007
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7F8
// line start: 1044
// line end:   1050
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A840
// line start: 1054
// line end:   1060
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A88C
// line start: 1064
// line end:   1070
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8D8
// line start: 1075
// line end:   1108
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAD4
// line start: 1116
// line end:   1117
void PlayDemo__Fv() {
}


// address: 0x8013AAE8
// line start: 1125
// line end:   1139
void FadeFEOut__Fv() {
}


// address: 0x8013AB60
// line start: 1155
// line end:   1184
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC58
// line start: 1193
// line end:   1329
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFD0
// line start: 1336
// line end:   1469
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


// address: 0x8013B3D8
// line start: 1474
// line end:   1476
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


