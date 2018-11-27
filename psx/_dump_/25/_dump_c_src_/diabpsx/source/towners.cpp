// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x8003721C
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037270
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037290
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800372D8
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80037438
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800374F0
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003761C
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037750
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037880
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800379B0
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AE0
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037C18
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D48
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E78
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037FA8
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


// address: 0x8003826C
void InitTowners__Fv() {
}


// address: 0x800382F8
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


// address: 0x8003839C
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800384BC
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384F0
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038524
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x8003860C
void TownHealer__Fv() {
}


// address: 0x80038634
void TownStory__Fv() {
}


// address: 0x8003865C
void TownDrunk__Fv() {
}


// address: 0x80038684
void TownBoy__Fv() {
}


// address: 0x800386AC
void TownWitch__Fv() {
}


// address: 0x800386D4
void TownBarMaid__Fv() {
}


// address: 0x800386FC
void TownCow__Fv() {
}


// address: 0x80038724
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


// address: 0x80038974
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038A48
void CowSFX__Fi(int pnum) {
	// address: 0x8010F368
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80119380
	static int snLastCowSFX;
}


// address: 0x80038B64
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038BA4
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


