// C:\diabpsx\SOURCE\QUESTS.CPP

#include "types.h"

// address: 0x80060A50
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


// address: 0x80060CA0
void CheckQuests__Fv() {
	// register: 18
	register int i;
	// register: 4
	register int rportx;
	// register: 5
	register int rporty;
}


// address: 0x8006115C
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


// address: 0x80061300
unsigned char QuestStatus__Fi(int i) {
}


// address: 0x80061394
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


// address: 0x80061974
void SetReturnLvlPos__Fv() {
}


// address: 0x80061A84
void GetReturnLvlPos__Fv() {
}


// address: 0x80061AD8
void ResyncMPQuests__Fv() {
}


// address: 0x80061C14
void ResyncQuests__Fv() {
	// register: 16
	register int i;
	// register: 16
	register int tren;
}


// address: 0x80062174
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


// address: 0x800623A0
void DrawQuestLog__Fv() {
	// register: 18
	register int i;
	// register: 17
	register int l;
	// register: 2
	register int q;
}


// address: 0x80062568
void DrawQuestLogTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80062600
void StartQuestlog__Fv() {
	// register: 5
	register int i;
}


// address: 0x80062718
void QuestlogUp__Fv() {
}


// address: 0x80062768
void QuestlogDown__Fv() {
}


// address: 0x800627D0
void RemoveQLog__Fv() {
}


// address: 0x8006283C
void QuestlogEnter__Fv() {
	// register: 3
	register int q;
}


// address: 0x80062900
void QuestlogESC__Fv() {
}


// address: 0x80062928
void SetMultiQuest__FiiUci(int q, int s, unsigned char l, int v1) {
}


// address: 0x800629A8
void _GLOBAL__D_questlog() {
}


// address: 0x800629D0
void _GLOBAL__I_questlog() {
}


