// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80121A5C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80121A84
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80121AF4
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80121B74
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


// address: 0x8012202C
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122098
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80122110
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801221F8
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801222DC
int FeGetCursor__Fv() {
}


// address: 0x801222F0
void FeSelect__Fv() {
}


// address: 0x80122334
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80122540
void InitDummyMenu__Fv() {
}


// address: 0x80122548
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8012260C
void FeInitMainMenu__Fv() {
}


// address: 0x80122668
void FeInitNewGameMenu__Fv() {
}


// address: 0x801226B4
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801227A8
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801227F8
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80122848
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80122890
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


// address: 0x80122D2C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80122D7C
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80122DCC
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


// address: 0x8012331C
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


// address: 0x801233EC
void FeEnterGame__Fv() {
}


// address: 0x80123414
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8012347C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x801234E8
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80123554
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80123598
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80123650
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80123698
void FeInitBook1Menu__Fv() {
}


// address: 0x801236E4
void FeInitBook2Menu__Fv() {
}


// address: 0x80123730
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8012392C
void PlayDemo__Fv() {
}


// address: 0x80123940
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801239F4
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


// address: 0x80123D64
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


