// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800371CC
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037220
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037240
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037288
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800373E8
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800374A0
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375CC
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037700
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037830
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037960
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A90
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BC8
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CF8
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E28
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F58
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


// address: 0x8003821C
void InitTowners__Fv() {
}


// address: 0x800382A8
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


// address: 0x8003834C
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003846C
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384A0
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384D4
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800385BC
void TownHealer__Fv() {
}


// address: 0x800385E4
void TownStory__Fv() {
}


// address: 0x8003860C
void TownDrunk__Fv() {
}


// address: 0x80038634
void TownBoy__Fv() {
}


// address: 0x8003865C
void TownWitch__Fv() {
}


// address: 0x80038684
void TownBarMaid__Fv() {
}


// address: 0x800386AC
void TownCow__Fv() {
}


// address: 0x800386D4
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


// address: 0x80038924
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800389F8
void CowSFX__Fi(int pnum) {
	// address: 0x80121730
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8012B920
	static int snLastCowSFX;
}


// address: 0x80038B14
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038B54
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


