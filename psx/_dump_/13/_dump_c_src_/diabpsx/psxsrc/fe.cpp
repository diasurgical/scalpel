// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801202C4
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801202EC
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x8012035C
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x801203DC
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


// address: 0x80120894
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80120900
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80120978
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80120A60
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80120B44
int FeGetCursor__Fv() {
}


// address: 0x80120B58
void FeSelect__Fv() {
}


// address: 0x80120B9C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80120DA8
void InitDummyMenu__Fv() {
}


// address: 0x80120DB0
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80120E74
void FeInitMainMenu__Fv() {
}


// address: 0x80120ED4
void FeInitNewGameMenu__Fv() {
}


// address: 0x80120F20
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80121014
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80121064
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801210B4
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801210FC
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


// address: 0x80121598
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801215E8
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80121638
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


// address: 0x80121B88
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


// address: 0x80121C58
void FeEnterGame__Fv() {
}


// address: 0x80121C80
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80121CE8
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80121D54
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80121DC0
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80121E04
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80121EBC
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80121F04
void FeInitBook1Menu__Fv() {
}


// address: 0x80121F50
void FeInitBook2Menu__Fv() {
}


// address: 0x80121F9C
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80122198
void PlayDemo__Fv() {
}


// address: 0x801221AC
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80122260
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


// address: 0x801225C8
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


