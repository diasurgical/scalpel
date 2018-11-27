// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80122D04
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80122D2C
void FeAddEntry__Fii8TXT_JUSTiP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, int Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80122D9C
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80122E1C
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


// address: 0x801232AC
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123318
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80123390
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80123478
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012355C
int FeGetCursor__Fv() {
}


// address: 0x80123570
void FeSelect__Fv() {
}


// address: 0x801235B4
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801237A4
void InitDummyMenu__Fv() {
}


// address: 0x801237AC
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80123870
void FeInitMainMenu__Fv() {
}


// address: 0x801238D0
void FeInitNewGameMenu__Fv() {
}


// address: 0x8012391C
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80123A10
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80123A60
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80123AB0
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80123AF8
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


// address: 0x80123F94
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80123FE4
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80124034
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


// address: 0x801244BC
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80124560
void FeEnterGame__Fv() {
}


// address: 0x80124588
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801245D0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8012463C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801246A8
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801246EC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801247A4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801247EC
void FeInitBook1Menu__Fv() {
}


// address: 0x80124838
void FeInitBook2Menu__Fv() {
}


// address: 0x80124884
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80124A80
void PlayDemo__Fv() {
}


// address: 0x80124A94
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF78
	// size: 0x78
	auto struct CScreen FeScreen;
	// register: 17
	register int fadeval;
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


// address: 0x80124E64
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


