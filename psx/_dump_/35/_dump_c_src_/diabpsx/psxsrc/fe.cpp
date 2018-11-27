// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80139F54
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80139F7C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80139FF0
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013A06C
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


// address: 0x8013A19C
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


// address: 0x8013A5B0
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A630
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013A6DC
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A7C4
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8013A8A8
int FeGetCursor__Fv() {
}


// address: 0x8013A8BC
void FeSelect__Fv() {
}


// address: 0x8013A900
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013AA98
void InitDummyMenu__Fv() {
}


// address: 0x8013AAA0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013AB60
void FeInitMainMenu__Fv() {
}


// address: 0x8013ABBC
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013AC0C
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x8013AD40
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8013ADB4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013AE28
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8013AE70
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


// address: 0x8013B30C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x8013B354
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013B39C
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


// address: 0x8013B92C
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


// address: 0x8013B9FC
void FeEnterGame__Fv() {
}


// address: 0x8013BA24
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013BA8C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013BAF8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013BB64
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013BBAC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013BC64
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013BCAC
void FeInitBook1Menu__Fv() {
}


// address: 0x8013BCF8
void FeInitBook2Menu__Fv() {
}


// address: 0x8013BD44
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013BF40
void PlayDemo__Fv() {
}


// address: 0x8013BF54
void FadeFEOut__Fv() {
}


// address: 0x8013C018
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013C110
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013C488
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


// address: 0x8013C890
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


