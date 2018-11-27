// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80137C0C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137C34
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137CA8
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137D24
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
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801381FC
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x8013827C
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138300
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801383E8
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801384CC
int FeGetCursor__Fv() {
}


// address: 0x801384E0
void FeSelect__Fv() {
}


// address: 0x80138524
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138730
void InitDummyMenu__Fv() {
}


// address: 0x80138738
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801387F8
void FeInitMainMenu__Fv() {
}


// address: 0x80138854
void FeInitNewGameMenu__Fv() {
}


// address: 0x801388A0
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80138994
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80138A04
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138A74
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80138ABC
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


// address: 0x80138F58
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138FA8
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138FF8
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


// address: 0x8013953C
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


// address: 0x8013960C
void FeEnterGame__Fv() {
}


// address: 0x80139634
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013969C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80139708
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139774
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801397B8
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139870
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801398B8
void FeInitBook1Menu__Fv() {
}


// address: 0x80139904
void FeInitBook2Menu__Fv() {
}


// address: 0x80139950
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139B4C
void PlayDemo__Fv() {
}


// address: 0x80139B60
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139C04
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
}


// address: 0x80139FC0
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


