// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80124F34
// line start: 156
// line end:   161
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80124F5C
// line start: 167
// line end:   174
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80124FD0
// line start: 178
// line end:   183
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8012504C
// line start: 188
// line end:   257
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


// address: 0x8012557C
// line start: 261
// line end:   274
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801255FC
// line start: 278
// line end:   291
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125680
// line start: 297
// line end:   308
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125768
// line start: 313
// line end:   324
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012584C
// line start: 332
// line end:   333
int FeGetCursor__Fv() {
}


// address: 0x80125860
// line start: 337
// line end:   338
void FeSelect__Fv() {
}


// address: 0x801258A4
// line start: 348
// line end:   398
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80125AB0
// line start: 402
// line end:   403
void InitDummyMenu__Fv() {
}


// address: 0x80125AB8
// line start: 409
// line end:   427
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80125B78
// line start: 444
// line end:   453
void FeInitMainMenu__Fv() {
}


// address: 0x80125BD4
// line start: 470
// line end:   476
void FeInitNewGameMenu__Fv() {
}


// address: 0x80125C20
// line start: 481
// line end:   503
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80125D14
// line start: 521
// line end:   530
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80125D84
// line start: 534
// line end:   543
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80125DF4
// line start: 548
// line end:   551
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80125E3C
// line start: 556
// line end:   598
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


// address: 0x801262D8
// line start: 767
// line end:   774
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126328
// line start: 778
// line end:   784
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126378
// line start: 789
// line end:   895
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


// address: 0x801268B0
// line start: 904
// line end:   916
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


// address: 0x80126980
// line start: 923
// line end:   928
void FeEnterGame__Fv() {
}


// address: 0x801269A8
// line start: 944
// line end:   957
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80126A10
// line start: 961
// line end:   970
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80126A7C
// line start: 974
// line end:   983
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80126AE8
// line start: 1000
// line end:   1005
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80126B2C
// line start: 1010
// line end:   1025
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80126BE4
// line start: 1062
// line end:   1068
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80126C2C
// line start: 1072
// line end:   1078
void FeInitBook1Menu__Fv() {
}


// address: 0x80126C78
// line start: 1082
// line end:   1088
void FeInitBook2Menu__Fv() {
}


// address: 0x80126CC4
// line start: 1093
// line end:   1126
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80126EC0
// line start: 1134
// line end:   1135
void PlayDemo__Fv() {
}


// address: 0x80126ED4
// line start: 1143
// line end:   1159
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80126F70
// line start: 1173
// line end:   1303
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


// address: 0x801272D8
// line start: 1308
// line end:   1428
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


