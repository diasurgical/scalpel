// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x80063058
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


// address: 0x800632A4
// line start: 226
// line end:   305
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


// address: 0x80063764
// line start: 309
// line end:   336
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


// address: 0x80063908
// line start: 341
// line end:   347
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x8006399C
// line start: 353
// line end:   458
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


// address: 0x80063F7C
// line start: 492
// line end:   517
void SetReturnLvlPos__Fv() {
}


// address: 0x8006408C
// line start: 525
// line end:   530
void GetReturnLvlPos__Fv() {
}


// address: 0x800640E0
// line start: 537
// line end:   559
void ResyncMPQuests__Fv() {
}


// address: 0x8006421C
// line start: 569
// line end:   658
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006477C
// line start: 674
// line end:   715
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


// address: 0x800649A8
// line start: 724
// line end:   754
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80064B70
// line start: 764
// line end:   785
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80064C08
// line start: 793
// line end:   814
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80064D20
// line start: 821
// line end:   839
void QuestlogUp__Fv() {
}


// address: 0x80064D74
// line start: 847
// line end:   867
void QuestlogDown__Fv() {
}


// address: 0x80064DE0
// line start: 876
// line end:   888
void RemoveQLog__Fv() {
}


// address: 0x80064E58
// line start: 893
// line end:   914
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80064F1C
// line start: 922
// line end:   924
void QuestlogESC__Fv() {
}


// address: 0x80064F44
// line start: 931
// line end:   951
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80064FC4
// line start: 998
// line end:   998
void _GLOBAL__D_questlog() {
}


// address: 0x80064FEC
// line start: 998
// line end:   998
void _GLOBAL__I_questlog() {
}


