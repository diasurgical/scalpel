// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x8003516C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800351C0
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800351E0
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80035228
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80035388
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80035440
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003556C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800356A0
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800357D0
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035900
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035A30
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035B68
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035C98
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035DC8
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80035EF8
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


// address: 0x800361BC
void InitTowners__Fv() {
}


// address: 0x80036248
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


// address: 0x800362EC
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003641C
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80036450
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80036484
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003656C
void TownHealer__Fv() {
}


// address: 0x80036594
void TownStory__Fv() {
}


// address: 0x800365BC
void TownDrunk__Fv() {
}


// address: 0x800365E4
void TownBoy__Fv() {
}


// address: 0x8003660C
void TownWitch__Fv() {
}


// address: 0x80036634
void TownBarMaid__Fv() {
}


// address: 0x8003665C
void TownCow__Fv() {
}


// address: 0x80036684
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


// address: 0x800368D4
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800369A8
void CowSFX__Fi(int pnum) {
	// address: 0x80120040
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012A3BC
	static int snLastCowSFX;
}


// address: 0x80036AC4
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80036B04
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


