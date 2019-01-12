// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x80067104
// line start: 166
// line end:   173
void CheckRPortalOK__FPiT0(int *rx, int *ry) {
	// register: 6
	register int nx;
	// register: 3
	register int ny;
}


// address: 0x80067144
// line start: 185
// line end:   269
void CheckQuests__Fv() {
	// register: 20
	register int i;
	// address: 0xFFFFFFD8
	auto int rportx;
	// address: 0xFFFFFFDC
	auto int rporty;
	// register: 21
	register int omp;
	{
		{
			{
				// register: 17
				register int pl;
				{
					// register: 4
					// size: 0x19E8
					register struct PlayerStruct *player;
				}
			}
		}
	}
}


// address: 0x8006761C
// line start: 273
// line end:   300
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


// address: 0x800677C0
// line start: 305
// line end:   311
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80067854
// line start: 317
// line end:   424
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
											// register: 16
											register int i;
											// register: 17
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


// address: 0x80067E1C
// line start: 458
// line end:   483
void SetReturnLvlPos__Fv() {
}


// address: 0x80067F2C
// line start: 491
// line end:   496
void GetReturnLvlPos__Fv() {
}


// address: 0x80067F80
// line start: 536
// line end:   625
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x8006846C
// line start: 641
// line end:   683
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


// address: 0x800686C0
// line start: 696
// line end:   735
void DrawQuestLog__Fv() {
	// register: 16
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
	// register: 18
	register int totlines;
}


// address: 0x800688B8
// line start: 743
// line end:   769
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068990
// line start: 777
// line end:   803
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80068AC4
// line start: 810
// line end:   837
void QuestlogUp__Fv() {
}


// address: 0x80068B5C
// line start: 845
// line end:   873
void QuestlogDown__Fv() {
}


// address: 0x80068C10
// line start: 881
// line end:   903
void RemoveQLog__Fv() {
}


// address: 0x80068CC8
// line start: 909
// line end:   928
void QuestlogEnter__Fv() {
	// register: 16
	register int q;
}


// address: 0x80068D94
// line start: 936
// line end:   938
void QuestlogESC__Fv() {
}


// address: 0x80068DBC
// line start: 945
// line end:   965
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x80068E3C
// line start: 965
// line end:   965
void _GLOBAL__D_questlog() {
}


// address: 0x80068E64
// line start: 965
// line end:   965
void _GLOBAL__I_questlog() {
}


