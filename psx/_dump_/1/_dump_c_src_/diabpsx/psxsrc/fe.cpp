// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80122BDC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122C04
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122C74
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122CF4
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
				}
			}
		}
	}
}


// address: 0x80123184
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801231F0
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123268
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123350
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123434
int FeGetCursor__Fv() {
}


// address: 0x80123448
void FeSelect__Fv() {
}


// address: 0x8012348C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80123678
void InitDummyMenu__Fv() {
}


// address: 0x80123680
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123744
void FeInitMainMenu__Fv() {
}


// address: 0x801237A4
void FeInitNewGameMenu__Fv() {
}


// address: 0x801237F0
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801238E4
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123934
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123984
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801239CC
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


// address: 0x80123E68
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123EB8
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80123F08
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


// address: 0x80124390
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124434
void FeEnterGame__Fv() {
}


// address: 0x8012445C
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801244A4
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124510
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8012457C
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801245C0
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80124678
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801246C0
void FeInitBook1Menu__Fv() {
}


// address: 0x8012470C
void FeInitBook2Menu__Fv() {
}


// address: 0x80124758
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124954
void PlayDemo__Fv() {
}


// address: 0x80124968
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


// address: 0x80124D0C
void McMainCharKeyCtrl__Fv() {
	// register: 16
	register int j;
	// register: 19
	register int Spacing;
	// register: 9
	register int fileno;
	// register: 8
	register int sr;
	// register: 3
	register int sg;
	// register: 2
	register int sb;
}


