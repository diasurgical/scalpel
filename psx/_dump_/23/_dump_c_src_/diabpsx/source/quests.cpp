// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x800610B8
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


// address: 0x80061308
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


// address: 0x800617C4
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


// address: 0x80061968
// line start: 326
// line end:   332
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800619FC
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


// address: 0x80061FDC
// line start: 470
// line end:   495
void SetReturnLvlPos__Fv() {
}


// address: 0x800620EC
// line start: 503
// line end:   508
void GetReturnLvlPos__Fv() {
}


// address: 0x80062140
// line start: 515
// line end:   537
void ResyncMPQuests__Fv() {
}


// address: 0x8006227C
// line start: 547
// line end:   636
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800627DC
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


// address: 0x80062A08
// line start: 702
// line end:   730
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062C40
// line start: 735
// line end:   753
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062CC0
// line start: 761
// line end:   781
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062DD0
// line start: 788
// line end:   796
void QuestlogUp__Fv() {
}


// address: 0x80062E28
// line start: 804
// line end:   811
void QuestlogDown__Fv() {
}


// address: 0x80062E90
// line start: 819
// line end:   836
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062F4C
// line start: 844
// line end:   849
void QuestlogESC__Fv() {
}


// address: 0x80062F8C
// line start: 856
// line end:   876
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x8006300C
// line start: 923
// line end:   923
void _GLOBAL__D_questlog() {
}


// address: 0x80063034
// line start: 923
// line end:   923
void _GLOBAL__I_questlog() {
}


