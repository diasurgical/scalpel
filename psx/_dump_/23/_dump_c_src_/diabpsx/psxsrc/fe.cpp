// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x80124F34
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80124F5C
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80124FD0
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x8012504C
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


// address: 0x8012557C
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x801255FC
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80125680
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80125768
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x8012584C
int FeGetCursor__Fv() {
}


// address: 0x80125860
void FeSelect__Fv() {
}


// address: 0x801258A4
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80125AB0
void InitDummyMenu__Fv() {
}


// address: 0x80125AB8
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80125B78
void FeInitMainMenu__Fv() {
}


// address: 0x80125BD4
void FeInitNewGameMenu__Fv() {
}


// address: 0x80125C20
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x80125D14
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80125D84
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80125DF4
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80125E3C
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


// address: 0x801262D8
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80126328
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80126378
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


// address: 0x801268B0
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


// address: 0x80126980
void FeEnterGame__Fv() {
}


// address: 0x801269A8
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80126A10
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80126A7C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80126AE8
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80126B2C
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80126BE4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80126C2C
void FeInitBook1Menu__Fv() {
}


// address: 0x80126C78
void FeInitBook2Menu__Fv() {
}


// address: 0x80126CC4
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80126EC0
void PlayDemo__Fv() {
}


// address: 0x80126ED4
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80126F70
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


// address: 0x801272D8
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


