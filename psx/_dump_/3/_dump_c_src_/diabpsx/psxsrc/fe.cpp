// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801419CC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801419F4
void FeAddEntry__Fii8TXT_JUSTPcP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, char *Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80141A64
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// register: 5
	register int X;
	// register: 6
	register int Y;
	// register: 3
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 17
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


// address: 0x80141E14
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141E80
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141EF8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80141FE0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801420C4
int FeGetCursor__Fv() {
}


// address: 0x801420D8
void FeSelect__Fv() {
}


// address: 0x8014211C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80142308
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801423F4
void FeInitMainMenu__Fv() {
}


// address: 0x8014251C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801425E0
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801426D4
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801427D0
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801428CC
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80142914
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


// address: 0x80142D98
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801431BC
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801435E0
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


// address: 0x801439F8
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80143A9C
void FeEnterGame__Fv() {
}


// address: 0x80143ADC
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80143B94
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80143C04
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80143C74
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80143D48
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80143E00
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80143EE8
void FeInitBook1Menu__Fv() {
}


// address: 0x80143FE4
void FeInitBook2Menu__Fv() {
}


// address: 0x801440E0
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801442DC
void InitDummyMenu__Fv() {
}


// address: 0x801442E4
void PlayDemo__Fv() {
}


// address: 0x801442F8
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x74
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


// address: 0x80144694
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


