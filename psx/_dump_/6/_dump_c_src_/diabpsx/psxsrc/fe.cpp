// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8012351C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80123544
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801235B4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80123634
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


// address: 0x80123AC4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123B30
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123BA8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123C90
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123D74
int FeGetCursor__Fv() {
}


// address: 0x80123D88
void FeSelect__Fv() {
}


// address: 0x80123DCC
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80123FB8
void InitDummyMenu__Fv() {
}


// address: 0x80123FC0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80124084
void FeInitMainMenu__Fv() {
}


// address: 0x801240E4
void FeInitNewGameMenu__Fv() {
}


// address: 0x80124130
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80124224
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80124274
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801242C4
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x8012430C
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


// address: 0x801247A8
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801247F8
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80124848
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


// address: 0x80124CD0
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124D74
void FeEnterGame__Fv() {
}


// address: 0x80124D9C
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80124DE4
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80124E50
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80124EBC
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80124F00
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80124FB8
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80125000
void FeInitBook1Menu__Fv() {
}


// address: 0x8012504C
void FeInitBook2Menu__Fv() {
}


// address: 0x80125098
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80125294
void PlayDemo__Fv() {
}


// address: 0x801252A8
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


// address: 0x8012564C
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


