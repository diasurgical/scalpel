// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x8003737C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800373D0
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800373F0
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037438
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80037598
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037650
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003777C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800378B0
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800379E0
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B10
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037C40
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D78
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037EA8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037FD8
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038108
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


// address: 0x800383CC
void InitTowners__Fv() {
}


// address: 0x80038458
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


// address: 0x800384FC
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003861C
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038650
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038684
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003876C
void TownHealer__Fv() {
}


// address: 0x80038794
void TownStory__Fv() {
}


// address: 0x800387BC
void TownDrunk__Fv() {
}


// address: 0x800387E4
void TownBoy__Fv() {
}


// address: 0x8003880C
void TownWitch__Fv() {
}


// address: 0x80038834
void TownBarMaid__Fv() {
}


// address: 0x8003885C
void TownCow__Fv() {
}


// address: 0x80038884
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


// address: 0x80038AD4
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038BA8
void CowSFX__Fi(int pnum) {
	// address: 0x801216A8
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B838
	static int snLastCowSFX;
}


// address: 0x80038CC4
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038D04
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x98
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


