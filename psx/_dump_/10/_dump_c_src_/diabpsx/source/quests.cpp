// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x800612AC
// line start: 157
// line end:   217
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


// address: 0x800614FC
// line start: 224
// line end:   288
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x800619B4
// line start: 292
// line end:   319
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


// address: 0x80061B58
// line start: 324
// line end:   330
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061BEC
// line start: 336
// line end:   434
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


// address: 0x800621CC
// line start: 468
// line end:   493
void SetReturnLvlPos__Fv() {
}


// address: 0x800622DC
// line start: 501
// line end:   506
void GetReturnLvlPos__Fv() {
}


// address: 0x80062330
// line start: 513
// line end:   535
void ResyncMPQuests__Fv() {
}


// address: 0x8006246C
// line start: 545
// line end:   634
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800629CC
// line start: 650
// line end:   691
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


// address: 0x80062BF8
// line start: 700
// line end:   728
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062E30
// line start: 733
// line end:   750
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062EB0
// line start: 758
// line end:   778
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062FC0
// line start: 785
// line end:   793
void QuestlogUp__Fv() {
}


// address: 0x80063018
// line start: 801
// line end:   808
void QuestlogDown__Fv() {
}


// address: 0x80063080
// line start: 816
// line end:   833
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x8006313C
// line start: 841
// line end:   846
void QuestlogESC__Fv() {
}


// address: 0x8006317C
// line start: 853
// line end:   873
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800631FC
// line start: 920
// line end:   920
void _GLOBAL__D_questlog() {
}


// address: 0x80063224
// line start: 920
// line end:   920
void _GLOBAL__I_questlog() {
}


