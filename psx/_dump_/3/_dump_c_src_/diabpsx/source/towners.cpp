// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80038250
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800382A4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800382C4
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003830C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003846C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80038524
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038688
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387F4
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003895C
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038AC4
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C2C
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038D9C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038F04
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003906C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800391D4
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


// address: 0x800394B4
void InitTowners__Fv() {
}


// address: 0x80039540
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


// address: 0x800395E4
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80039704
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039738
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003976C
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039854
void TownHealer__Fv() {
}


// address: 0x8003987C
void TownStory__Fv() {
}


// address: 0x800398A4
void TownDrunk__Fv() {
}


// address: 0x800398CC
void TownBoy__Fv() {
}


// address: 0x800398F4
void TownWitch__Fv() {
}


// address: 0x8003991C
void TownBarMaid__Fv() {
}


// address: 0x80039944
void TownCow__Fv() {
}


// address: 0x8003996C
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


// address: 0x80039BBC
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039C90
void CowSFX__Fi(int pnum) {
	// address: 0x801172D0
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80120BCC
	static int snLastCowSFX;
}


// address: 0x80039DAC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039DEC
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


