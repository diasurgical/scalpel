// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80137CFC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137D24
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137D98
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137E14
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


// address: 0x80138204
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138284
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138308
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801383F0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801384D4
int FeGetCursor__Fv() {
}


// address: 0x801384E8
void FeSelect__Fv() {
}


// address: 0x8013852C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138738
void InitDummyMenu__Fv() {
}


// address: 0x80138740
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80138800
void FeInitMainMenu__Fv() {
}


// address: 0x8013885C
void FeInitNewGameMenu__Fv() {
}


// address: 0x801388A8
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013899C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80138A0C
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80138A7C
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80138AC4
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


// address: 0x80138F60
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138FB0
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80139000
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


// address: 0x80139550
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


// address: 0x80139620
void FeEnterGame__Fv() {
}


// address: 0x80139648
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801396B0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013971C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139788
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801397CC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139884
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801398CC
void FeInitBook1Menu__Fv() {
}


// address: 0x80139918
void FeInitBook2Menu__Fv() {
}


// address: 0x80139964
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139B60
void PlayDemo__Fv() {
}


// address: 0x80139B74
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139C18
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


// address: 0x80139FD4
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


// address: 0x8013A3DC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


