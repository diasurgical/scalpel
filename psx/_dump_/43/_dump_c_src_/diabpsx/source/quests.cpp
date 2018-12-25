// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x80060F8C
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


// address: 0x800611DC
// line start: 226
// line end:   291
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x80061698
// line start: 295
// line end:   322
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


// address: 0x8006183C
// line start: 327
// line end:   333
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x800618D0
// line start: 339
// line end:   444
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


// address: 0x80061EB0
// line start: 478
// line end:   503
void SetReturnLvlPos__Fv() {
}


// address: 0x80061FC0
// line start: 511
// line end:   516
void GetReturnLvlPos__Fv() {
}


// address: 0x80062014
// line start: 523
// line end:   545
void ResyncMPQuests__Fv() {
}


// address: 0x80062150
// line start: 555
// line end:   644
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x800626B0
// line start: 660
// line end:   701
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


// address: 0x800628DC
// line start: 710
// line end:   740
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062AA4
// line start: 750
// line end:   771
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062B3C
// line start: 779
// line end:   800
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062C54
// line start: 807
// line end:   825
void QuestlogUp__Fv() {
}


// address: 0x80062CA4
// line start: 833
// line end:   853
void QuestlogDown__Fv() {
}


// address: 0x80062D0C
// line start: 862
// line end:   874
void RemoveQLog__Fv() {
}


// address: 0x80062D84
// line start: 879
// line end:   900
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062E48
// line start: 908
// line end:   910
void QuestlogESC__Fv() {
}


// address: 0x80062E70
// line start: 917
// line end:   937
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80062EF0
// line start: 984
// line end:   984
void _GLOBAL__D_questlog() {
}


// address: 0x80062F18
// line start: 984
// line end:   984
void _GLOBAL__I_questlog() {
}


