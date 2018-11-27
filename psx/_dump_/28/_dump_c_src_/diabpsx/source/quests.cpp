// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x8006123C
// line start: 159
// line end:   219
void TSK_Lava2Water__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFB0
	// size: 0x20
	auto unsigned short LAVAPAL[16];
	// address: 0xFFFFFFD0
	// size: 0x20
	auto unsigned short WATERPAL[16];
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT ClutR;
	// register: 16
	register int clut;
	// register: 16
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 3
	// size: 0x8
	register struct PAL *Pal;
	// register: 2
	register unsigned short cx;
	// register: 3
	register unsigned short cy;
	// register: 16
	register bool ch;
	{
		{
			{
				// register: 4
				register int i;
				{
					{
						// register: 10
						register int i;
						{
							// register: 11
							register unsigned short col1;
							// register: 3
							register unsigned short col2;
							// register: 14
							register unsigned char sb;
							// register: 13
							register unsigned char sg;
							// register: 8
							register unsigned char dr;
							// register: 7
							register unsigned char dg;
							// register: 5
							register unsigned char db;
						}
					}
				}
			}
		}
	}
}


// address: 0x8006148C
// line start: 225
// line end:   290
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80061948
// line start: 294
// line end:   321
unsigned char ForceQuests__Fv() {
	{
		// register: 6
		register int i;
		{
			// register: 16
			register int ql;
			// register: 18
			register int qx;
			// register: 17
			register int qy;
			{
				// register: 4
				register int j;
			}
		}
	}
}


// address: 0x80061AEC
// line start: 326
// line end:   332
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061B80
// line start: 338
// line end:   436
void CheckQuestKill__FiUc(int m, unsigned char sendmsg) {
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
											// register: 4
											register int i;
											// register: 7
											register int j;
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


// address: 0x80062160
// line start: 470
// line end:   495
void SetReturnLvlPos__Fv() {
}


// address: 0x80062270
// line start: 503
// line end:   508
void GetReturnLvlPos__Fv() {
}


// address: 0x800622C4
// line start: 515
// line end:   537
void ResyncMPQuests__Fv() {
}


// address: 0x80062400
// line start: 547
// line end:   636
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062960
// line start: 652
// line end:   693
void PrintQLString__FiiUcPcc(int x, int y, unsigned char cjustflag, char *str, int col) {
	// register: 10
	register unsigned char r;
	// register: 9
	register unsigned char g;
	// register: 8
	register unsigned char b;
	{
		{
			// register: 17
			register int len;
		}
	}
}


// address: 0x80062B8C
// line start: 702
// line end:   729
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062D40
// line start: 738
// line end:   756
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062DC0
// line start: 764
// line end:   784
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062ED0
// line start: 791
// line end:   799
void QuestlogUp__Fv() {
}


// address: 0x80062F28
// line start: 807
// line end:   814
void QuestlogDown__Fv() {
}


// address: 0x80062F90
// line start: 824
// line end:   835
void RemoveQLog__Fv() {
}


// address: 0x80062FFC
// line start: 840
// line end:   854
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80063098
// line start: 862
// line end:   864
void QuestlogESC__Fv() {
}


// address: 0x800630C0
// line start: 871
// line end:   891
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80063140
// line start: 938
// line end:   938
void _GLOBAL__D_questlog() {
}


// address: 0x80063168
// line start: 938
// line end:   938
void _GLOBAL__I_questlog() {
}


