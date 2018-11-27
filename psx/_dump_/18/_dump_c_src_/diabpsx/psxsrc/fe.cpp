// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80130184
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801301AC
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8013021C
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8013029C
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


// address: 0x80130754
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801307D4
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80130858
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130940
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80130A24
int FeGetCursor__Fv() {
}


// address: 0x80130A38
void FeSelect__Fv() {
}


// address: 0x80130A7C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80130C88
void InitDummyMenu__Fv() {
}


// address: 0x80130C90
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80130D54
void FeInitMainMenu__Fv() {
}


// address: 0x80130DB0
void FeInitNewGameMenu__Fv() {
}


// address: 0x80130DFC
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80130EF0
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80130F40
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80130F90
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80130FD8
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


// address: 0x80131474
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801314C4
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80131514
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


// address: 0x80131A64
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


// address: 0x80131B34
void FeEnterGame__Fv() {
}


// address: 0x80131B5C
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80131BC4
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80131C30
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80131C9C
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80131CE0
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80131D98
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80131DE0
void FeInitBook1Menu__Fv() {
}


// address: 0x80131E2C
void FeInitBook2Menu__Fv() {
}


// address: 0x80131E78
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80132074
void PlayDemo__Fv() {
}


// address: 0x80132088
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013213C
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


// address: 0x801324AC
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


