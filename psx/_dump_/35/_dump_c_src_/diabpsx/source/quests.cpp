// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x800613DC
// line start: 160
// line end:   220
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


// address: 0x80061628
// line start: 226
// line end:   304
void CheckQuests__Fv() {
	// register: 20
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
	// register: 21
	register int omp;
	{
		{
			{
				// register: 17
				register int pl;
				{
					// register: 4
					// size: 0x23A8
					register struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x80061ADC
// line start: 308
// line end:   335
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


// address: 0x80061C80
// line start: 340
// line end:   346
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061D14
// line start: 352
// line end:   457
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


// address: 0x800622F4
// line start: 491
// line end:   516
void SetReturnLvlPos__Fv() {
}


// address: 0x80062404
// line start: 524
// line end:   529
void GetReturnLvlPos__Fv() {
}


// address: 0x80062458
// line start: 536
// line end:   558
void ResyncMPQuests__Fv() {
}


// address: 0x80062594
// line start: 568
// line end:   657
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062AF4
// line start: 673
// line end:   714
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


// address: 0x80062D20
// line start: 723
// line end:   753
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062EE8
// line start: 763
// line end:   784
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062F80
// line start: 792
// line end:   813
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80063098
// line start: 820
// line end:   838
void QuestlogUp__Fv() {
}


// address: 0x800630EC
// line start: 846
// line end:   866
void QuestlogDown__Fv() {
}


// address: 0x80063158
// line start: 875
// line end:   887
void RemoveQLog__Fv() {
}


// address: 0x800631D0
// line start: 892
// line end:   913
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80063294
// line start: 921
// line end:   923
void QuestlogESC__Fv() {
}


// address: 0x800632BC
// line start: 930
// line end:   950
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x8006333C
// line start: 997
// line end:   997
void _GLOBAL__D_questlog() {
}


// address: 0x80063364
// line start: 997
// line end:   997
void _GLOBAL__I_questlog() {
}


