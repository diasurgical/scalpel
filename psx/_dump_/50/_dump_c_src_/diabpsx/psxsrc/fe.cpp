// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8012F294
// line start: 161
// line end:   166
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x8012F2BC
// line start: 172
// line end:   179
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8012F330
// line start: 183
// line end:   188
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8012F3AC
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


// address: 0x8012F4DC
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


// address: 0x8012F8F0
// line start: 298
// line end:   311
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8012F970
// line start: 315
// line end:   335
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8012FA2C
// line start: 342
// line end:   353
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012FB14
// line start: 358
// line end:   369
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012FBF8
// line start: 377
// line end:   378
int FeGetCursor__Fv() {
}


// address: 0x8012FC0C
// line start: 382
// line end:   383
void FeSelect__Fv() {
}


// address: 0x8012FC50
// line start: 393
// line end:   444
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8012FDFC
// line start: 448
// line end:   449
void InitDummyMenu__Fv() {
}


// address: 0x8012FE04
// line start: 455
// line end:   473
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8012FEC4
// line start: 490
// line end:   500
void FeInitMainMenu__Fv() {
}


// address: 0x8012FF24
// line start: 517
// line end:   523
void FeInitNewGameMenu__Fv() {
}


// address: 0x8012FF74
// line start: 528
// line end:   573
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801300B0
// line start: 591
// line end:   600
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80130124
// line start: 604
// line end:   613
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80130198
// line start: 618
// line end:   621
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801301E0
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


// address: 0x80130668
// line start: 758
// line end:   766
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801306B0
// line start: 770
// line end:   777
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801306F8
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


// address: 0x80130C8C
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


// address: 0x80130D5C
// line start: 933
// line end:   938
void FeEnterGame__Fv() {
}


// address: 0x80130D84
// line start: 954
// line end:   967
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80130DEC
// line start: 971
// line end:   980
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80130E58
// line start: 984
// line end:   993
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80130EC4
// line start: 1010
// line end:   1015
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80130F0C
// line start: 1020
// line end:   1035
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80130FC4
// line start: 1072
// line end:   1078
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013100C
// line start: 1082
// line end:   1088
void FeInitBook1Menu__Fv() {
}


// address: 0x80131058
// line start: 1092
// line end:   1098
void FeInitBook2Menu__Fv() {
}


// address: 0x801310A4
// line start: 1103
// line end:   1136
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801312A0
// line start: 1144
// line end:   1145
void PlayDemo__Fv() {
}


// address: 0x801312B4
// line start: 1160
// line end:   1176
void FadeFEOut__Fv() {
}


// address: 0x80131378
// line start: 1192
// line end:   1221
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x80131470
// line start: 1230
// line end:   1366
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80131810
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


// address: 0x80131C18
// line start: 1511
// line end:   1513
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


