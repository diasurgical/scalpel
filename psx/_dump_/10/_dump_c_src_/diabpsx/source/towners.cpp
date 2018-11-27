// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80038160
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800381B4
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381D4
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003821C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003837C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x80038434
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038560
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038694
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387C4
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388F4
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038A24
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B5C
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C8C
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038DBC
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EEC
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


// address: 0x800391B0
void InitTowners__Fv() {
}


// address: 0x8003923C
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


// address: 0x800392E0
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80039400
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039434
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039468
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039550
void TownHealer__Fv() {
}


// address: 0x80039578
void TownStory__Fv() {
}


// address: 0x800395A0
void TownDrunk__Fv() {
}


// address: 0x800395C8
void TownBoy__Fv() {
}


// address: 0x800395F0
void TownWitch__Fv() {
}


// address: 0x80039618
void TownBarMaid__Fv() {
}


// address: 0x80039640
void TownCow__Fv() {
}


// address: 0x80039668
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


// address: 0x800398B8
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003998C
void CowSFX__Fi(int pnum) {
	// address: 0x8010DA38
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117068
	static int snLastCowSFX;
}


// address: 0x80039AA8
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AE8
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


