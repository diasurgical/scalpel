// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80037300
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037354
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037374
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800373BC
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003751C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800375D4
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037700
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037834
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037964
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A94
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BC4
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CFC
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E2C
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F5C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003808C
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


// address: 0x80038350
void InitTowners__Fv() {
}


// address: 0x800383DC
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


// address: 0x80038480
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800385B0
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800385E4
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038618
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80038700
void TownHealer__Fv() {
}


// address: 0x80038728
void TownStory__Fv() {
}


// address: 0x80038750
void TownDrunk__Fv() {
}


// address: 0x80038778
void TownBoy__Fv() {
}


// address: 0x800387A0
void TownWitch__Fv() {
}


// address: 0x800387C8
void TownBarMaid__Fv() {
}


// address: 0x800387F0
void TownCow__Fv() {
}


// address: 0x80038818
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


// address: 0x80038A68
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038B3C
void CowSFX__Fi(int pnum) {
	// address: 0x80123684
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012D9F8
	static int snLastCowSFX;
}


// address: 0x80038C58
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038C98
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


