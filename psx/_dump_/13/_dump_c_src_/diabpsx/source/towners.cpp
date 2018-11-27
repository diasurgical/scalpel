// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80037090
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800370E4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037104
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003714C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800372AC
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037364
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037490
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375C4
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376F4
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037824
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037954
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A8C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BBC
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CEC
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E1C
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


// address: 0x800380E0
void InitTowners__Fv() {
}


// address: 0x8003816C
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


// address: 0x80038210
void TownCtrlMsg__Fi(int i) {
	// register: 3
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038328
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003835C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038390
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80038478
void TownHealer__Fv() {
}


// address: 0x800384A0
void TownStory__Fv() {
}


// address: 0x800384C8
void TownDrunk__Fv() {
}


// address: 0x800384F0
void TownBoy__Fv() {
}


// address: 0x80038518
void TownWitch__Fv() {
}


// address: 0x80038540
void TownBarMaid__Fv() {
}


// address: 0x80038568
void TownCow__Fv() {
}


// address: 0x80038590
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


// address: 0x800387E0
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800388A4
void CowSFX__Fi(int pnum) {
	// address: 0x8010A6E8
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80114094
	static int snLastCowSFX;
}


// address: 0x800389B0
void TownerTalk__Fii(int first, int t) {
}


// address: 0x800389F0
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


