// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80139E7C
// line start: 167
// line end:   172
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139EA8
// line start: 178
// line end:   186
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139F2C
// line start: 190
// line end:   195
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80139FA8
// line start: 199
// line end:   215
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 21
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x8013A0D0
// line start: 222
// line end:   336
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFF98
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT ARect;
	// register: 17
	register int X;
	// register: 19
	register int Y;
	// register: 20
	// size: 0x4
	register enum TXT_JUST Just;
	// address: 0xFFFFFFC0
	// size: 0x70
	auto struct TextDat *PanelGfx;
	// register: 4
	register int SelX;
	// register: 18
	register int SelY;
	// address: 0xFFFFFFB8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 21
								register int Loop;
								{
									{
										{
											{
												{
													{
														{
															// register: 2
															// size: 0x28
															register struct POLY_FT4 *Ft4;
															{
																{
																	{
																		// register: 18
																		register int Loop;
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
						}
					}
				}
			}
		}
	}
}


// address: 0x8013A6FC
// line start: 340
// line end:   353
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A77C
// line start: 357
// line end:   413
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A8C4
// line start: 420
// line end:   431
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A9AC
// line start: 436
// line end:   448
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013AA94
// line start: 457
// line end:   458
int FeGetCursor__Fv() {
}


// address: 0x8013AAA8
// line start: 462
// line end:   464
void FeSelect__Fv() {
}


// address: 0x8013AAF8
// line start: 474
// line end:   527
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
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


// address: 0x8013ACC0
// line start: 531
// line end:   532
void InitDummyMenu__Fv() {
}


// address: 0x8013ACC8
// line start: 538
// line end:   577
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013ADE8
// line start: 594
// line end:   607
void FeInitMainMenu__Fv() {
}


// address: 0x8013AE64
// line start: 624
// line end:   644
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013AEF4
// line start: 649
// line end:   713
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013B0A8
// line start: 730
// line end:   745
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013B12C
// line start: 749
// line end:   764
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013B1B0
// line start: 769
// line end:   772
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013B1F8
// line start: 777
// line end:   827
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


// address: 0x8013B680
// line start: 917
// line end:   927
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B6DC
// line start: 931
// line end:   939
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B730
// line start: 944
// line end:   1074
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
	}
}


// address: 0x8013BCF8
// line start: 1080
// line end:   1105
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
					{
						// register: 2
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013BE0C
// line start: 1112
// line end:   1117
void FeEnterGame__Fv() {
}


// address: 0x8013BE34
// line start: 1133
// line end:   1148
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BEB4
// line start: 1152
// line end:   1160
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BF1C
// line start: 1164
// line end:   1172
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BF8C
// line start: 1189
// line end:   1212
void FeInitDifficultyMenu__Fv() {
	// register: 4
	register int MaxLevel;
}


// address: 0x8013C030
// line start: 1217
// line end:   1239
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013C114
// line start: 1276
// line end:   1282
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013C160
// line start: 1286
// line end:   1292
void FeInitBook1Menu__Fv() {
}


// address: 0x8013C1B0
// line start: 1296
// line end:   1302
void FeInitBook2Menu__Fv() {
}


// address: 0x8013C200
// line start: 1307
// line end:   1349
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013C444
// line start: 1354
// line end:   1355
void PlayDemo__Fv() {
}


// address: 0x8013C458
// line start: 1370
// line end:   1386
void FadeFEOut__Fv() {
}


// address: 0x8013C51C
// line start: 1419
// line end:   1474
void DrawBackTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8013C6A4
// line start: 1483
// line end:   1502
void FeInitMainStuff__FP4TASK(struct TASK *T2) {
}


// address: 0x8013C750
// line start: 1515
// line end:   1713
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int len;
	// register: 17
	register int Fefadeval;
	// register: 19
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013CBFC
// line start: 1722
// line end:   1724
void DrawFeTwinkle__Fii(int TwinkX, int TwinkY) {
}


