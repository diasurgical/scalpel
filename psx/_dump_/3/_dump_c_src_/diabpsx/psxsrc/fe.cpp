// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801419CC
// line start: 256
// line end:   261
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x801419F4
// line start: 267
// line end:   274
void FeAddEntry__Fii8TXT_JUSTPcP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, char *Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80141A64
// line start: 289
// line end:   346
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
// line start: 350
// line end:   363
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 2
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141E80
// line start: 367
// line end:   379
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80141EF8
// line start: 385
// line end:   396
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80141FE0
// line start: 401
// line end:   412
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801420C4
// line start: 420
// line end:   421
int FeGetCursor__Fv() {
}


// address: 0x801420D8
// line start: 425
// line end:   426
void FeSelect__Fv() {
}


// address: 0x8014211C
// line start: 435
// line end:   489
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80142308
// line start: 495
// line end:   522
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801423F4
// line start: 529
// line end:   543
void FeInitMainMenu__Fv() {
}


// address: 0x8014251C
// line start: 561
// line end:   570
void FeInitNewGameMenu__Fv() {
}


// address: 0x801425E0
// line start: 575
// line end:   597
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801426D4
// line start: 605
// line end:   614
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801427D0
// line start: 618
// line end:   627
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x801428CC
// line start: 632
// line end:   635
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x80142914
// line start: 640
// line end:   682
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
// line start: 691
// line end:   730
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801431BC
// line start: 734
// line end:   771
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801435E0
// line start: 776
// line end:   852
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
// line start: 861
// line end:   868
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
	}
}


// address: 0x80143A9C
// line start: 875
// line end:   880
void FeEnterGame__Fv() {
}


// address: 0x80143ADC
// line start: 889
// line end:   897
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80143B94
// line start: 901
// line end:   910
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80143C04
// line start: 914
// line end:   923
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80143C74
// line start: 931
// line end:   939
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80143D48
// line start: 944
// line end:   959
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80143E00
// line start: 967
// line end:   977
void FeInitBackgroundMenu__Fv() {
}


// address: 0x80143EE8
// line start: 981
// line end:   991
void FeInitBook1Menu__Fv() {
}


// address: 0x80143FE4
// line start: 995
// line end:   1005
void FeInitBook2Menu__Fv() {
}


// address: 0x801440E0
// line start: 1010
// line end:   1043
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x801442DC
// line start: 1059
// line end:   1062
void InitDummyMenu__Fv() {
}


// address: 0x801442E4
// line start: 1067
// line end:   1068
void PlayDemo__Fv() {
}


// address: 0x801442F8
// line start: 1085
// line end:   1222
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
// line start: 1227
// line end:   1335
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


