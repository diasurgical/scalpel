// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80138C54
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138C7C
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138CF0
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138D6C
// line start: 191
// line end:   270
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


// address: 0x80139180
// line start: 274
// line end:   287
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80139200
// line start: 291
// line end:   309
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392AC
// line start: 315
// line end:   326
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139394
// line start: 331
// line end:   342
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139478
// line start: 350
// line end:   351
int FeGetCursor__Fv() {
}


// address: 0x8013948C
// line start: 355
// line end:   356
void FeSelect__Fv() {
}


// address: 0x801394D0
// line start: 366
// line end:   417
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139668
// line start: 421
// line end:   422
void InitDummyMenu__Fv() {
}


// address: 0x80139670
// line start: 428
// line end:   446
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139730
// line start: 463
// line end:   472
void FeInitMainMenu__Fv() {
}


// address: 0x8013978C
// line start: 489
// line end:   495
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397DC
// line start: 500
// line end:   533
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139900
// line start: 551
// line end:   560
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139974
// line start: 564
// line end:   573
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399E8
// line start: 578
// line end:   581
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A30
// line start: 586
// line end:   628
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


// address: 0x80139ECC
// line start: 797
// line end:   805
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F14
// line start: 809
// line end:   816
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F5C
// line start: 821
// line end:   934
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


// address: 0x8013A4AC
// line start: 943
// line end:   955
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


// address: 0x8013A57C
// line start: 962
// line end:   967
void FeEnterGame__Fv() {
}


// address: 0x8013A5A4
// line start: 983
// line end:   996
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A60C
// line start: 1000
// line end:   1009
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A678
// line start: 1013
// line end:   1022
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6E4
// line start: 1039
// line end:   1044
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A72C
// line start: 1049
// line end:   1064
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7E4
// line start: 1101
// line end:   1107
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A82C
// line start: 1111
// line end:   1117
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A878
// line start: 1121
// line end:   1127
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8C4
// line start: 1132
// line end:   1165
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAC0
// line start: 1173
// line end:   1174
void PlayDemo__Fv() {
}


// address: 0x8013AAD4
// line start: 1182
// line end:   1196
void FadeFEOut__Fv() {
}


// address: 0x8013AB4C
// line start: 1212
// line end:   1239
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC3C
// line start: 1248
// line end:   1384
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFB4
// line start: 1391
// line end:   1524
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


// address: 0x8013B3BC
// line start: 1529
// line end:   1531
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


