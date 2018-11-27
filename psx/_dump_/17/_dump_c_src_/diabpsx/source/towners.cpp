// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800370CC
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037120
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037140
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037188
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800372E8
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800373A0
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800374CC
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037600
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037730
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037860
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037990
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AC8
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BF8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D28
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E58
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 3
	register int y2;
}


// address: 0x8003811C
void InitTowners__Fv() {
}


// address: 0x800381A8
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003824C
void TownCtrlMsg__Fi(int i) {
	// register: 3
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038364
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038398
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800383CC
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800384B4
void TownHealer__Fv() {
}


// address: 0x800384DC
void TownStory__Fv() {
}


// address: 0x80038504
void TownDrunk__Fv() {
}


// address: 0x8003852C
void TownBoy__Fv() {
}


// address: 0x80038554
void TownWitch__Fv() {
}


// address: 0x8003857C
void TownBarMaid__Fv() {
}


// address: 0x800385A4
void TownCow__Fv() {
}


// address: 0x800385CC
void ProcessTowners__Fv() {
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


// address: 0x8003881C
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800388E0
void CowSFX__Fi(int pnum) {
	// address: 0x8010B764
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x801156E4
	static int snLastCowSFX;
}


// address: 0x800389EC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038A2C
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x94
	register struct ItemStruct *Item;
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


