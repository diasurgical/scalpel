// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8012571C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80125744
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801257B8
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80125834
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
		}
	}
}


// address: 0x80125D74
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125DF4
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125E78
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125F60
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80126044
int FeGetCursor__Fv() {
}


// address: 0x80126058
void FeSelect__Fv() {
}


// address: 0x8012609C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801262A8
void InitDummyMenu__Fv() {
}


// address: 0x801262B0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80126370
void FeInitMainMenu__Fv() {
}


// address: 0x801263CC
void FeInitNewGameMenu__Fv() {
}


// address: 0x80126418
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8012650C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x8012657C
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801265EC
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80126634
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


// address: 0x80126AD0
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126B20
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126B70
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


// address: 0x801270B4
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


// address: 0x80127184
void FeEnterGame__Fv() {
}


// address: 0x801271AC
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80127214
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80127280
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801272EC
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80127330
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801273E8
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80127430
void FeInitBook1Menu__Fv() {
}


// address: 0x8012747C
void FeInitBook2Menu__Fv() {
}


// address: 0x801274C8
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801276C4
void PlayDemo__Fv() {
}


// address: 0x801276D8
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80127774
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


// address: 0x80127AF0
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


