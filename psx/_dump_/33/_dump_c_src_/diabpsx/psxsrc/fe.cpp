// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80138C54
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138C7C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80138CF0
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138D6C
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


// address: 0x80139180
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80139200
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801392AC
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139394
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80139478
int FeGetCursor__Fv() {
}


// address: 0x8013948C
void FeSelect__Fv() {
}


// address: 0x801394D0
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139668
void InitDummyMenu__Fv() {
}


// address: 0x80139670
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139730
void FeInitMainMenu__Fv() {
}


// address: 0x8013978C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801397DC
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80139900
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139974
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801399E8
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80139A30
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


// address: 0x80139ECC
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80139F14
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139F5C
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


// address: 0x8013A4AC
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


// address: 0x8013A57C
void FeEnterGame__Fv() {
}


// address: 0x8013A5A4
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x8013A60C
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013A678
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x8013A6E4
void FeInitDifficultyMenu__Fv() {
}


// address: 0x8013A72C
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A7E4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A82C
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A878
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A8C4
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013AAC0
void PlayDemo__Fv() {
}


// address: 0x8013AAD4
void FadeFEOut__Fv() {
}


// address: 0x8013AB4C
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x8013AC3C
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x8013AFB4
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


// address: 0x8013B3BC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


