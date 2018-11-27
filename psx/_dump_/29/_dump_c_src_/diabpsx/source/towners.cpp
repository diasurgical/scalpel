// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800371A8
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800371FC
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x8003721C
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037264
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800373C4
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x8003747C
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375A8
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376DC
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003780C
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003793C
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A6C
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BA4
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CD4
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E04
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F34
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


// address: 0x800381F8
void InitTowners__Fv() {
}


// address: 0x80038284
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


// address: 0x80038328
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038448
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003847C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384B0
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80038598
void TownHealer__Fv() {
}


// address: 0x800385C0
void TownStory__Fv() {
}


// address: 0x800385E8
void TownDrunk__Fv() {
}


// address: 0x80038610
void TownBoy__Fv() {
}


// address: 0x80038638
void TownWitch__Fv() {
}


// address: 0x80038660
void TownBarMaid__Fv() {
}


// address: 0x80038688
void TownCow__Fv() {
}


// address: 0x800386B0
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


// address: 0x80038900
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800389D4
void CowSFX__Fi(int pnum) {
	// address: 0x80121464
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B614
	static int snLastCowSFX;
}


// address: 0x80038AF0
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038B30
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


