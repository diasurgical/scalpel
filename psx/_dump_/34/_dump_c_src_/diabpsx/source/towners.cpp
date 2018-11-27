// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800372A4
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800372F8
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037318
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037360
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800374C0
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80037578
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800376A4
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377D8
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037908
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A38
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B68
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CA0
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DD0
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F00
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038030
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


// address: 0x800382F4
void InitTowners__Fv() {
}


// address: 0x80038380
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


// address: 0x80038424
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038554
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038588
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385BC
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800386A4
void TownHealer__Fv() {
}


// address: 0x800386CC
void TownStory__Fv() {
}


// address: 0x800386F4
void TownDrunk__Fv() {
}


// address: 0x8003871C
void TownBoy__Fv() {
}


// address: 0x80038744
void TownWitch__Fv() {
}


// address: 0x8003876C
void TownBarMaid__Fv() {
}


// address: 0x80038794
void TownCow__Fv() {
}


// address: 0x800387BC
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


// address: 0x80038A0C
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038AE0
void CowSFX__Fi(int pnum) {
	// address: 0x80122B0C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012CE40
	static int snLastCowSFX;
}


// address: 0x80038BFC
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C3C
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


