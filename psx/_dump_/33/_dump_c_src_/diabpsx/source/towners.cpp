// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x8003729C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800372F0
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037310
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037358
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800374B8
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037570
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003769C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377D0
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037900
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A30
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B60
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037C98
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DC8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037EF8
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038028
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


// address: 0x800382EC
void InitTowners__Fv() {
}


// address: 0x80038378
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


// address: 0x8003841C
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003854C
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038580
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385B4
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003869C
void TownHealer__Fv() {
}


// address: 0x800386C4
void TownStory__Fv() {
}


// address: 0x800386EC
void TownDrunk__Fv() {
}


// address: 0x80038714
void TownBoy__Fv() {
}


// address: 0x8003873C
void TownWitch__Fv() {
}


// address: 0x80038764
void TownBarMaid__Fv() {
}


// address: 0x8003878C
void TownCow__Fv() {
}


// address: 0x800387B4
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


// address: 0x80038A04
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038AD8
void CowSFX__Fi(int pnum) {
	// address: 0x8012258C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012C858
	static int snLastCowSFX;
}


// address: 0x80038BF4
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C34
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


