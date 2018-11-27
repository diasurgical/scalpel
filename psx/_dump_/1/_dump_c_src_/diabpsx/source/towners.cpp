// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80038138
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8003818C
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381AC
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800381F4
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80038354
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x8003840C
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038538
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003866C
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003879C
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388CC
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800389FC
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B34
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C64
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038D94
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EC4
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


// address: 0x80039188
void InitTowners__Fv() {
}


// address: 0x80039214
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


// address: 0x800392B8
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x800393D8
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003940C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039440
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039528
void TownHealer__Fv() {
}


// address: 0x80039550
void TownStory__Fv() {
}


// address: 0x80039578
void TownDrunk__Fv() {
}


// address: 0x800395A0
void TownBoy__Fv() {
}


// address: 0x800395C8
void TownWitch__Fv() {
}


// address: 0x800395F0
void TownBarMaid__Fv() {
}


// address: 0x80039618
void TownCow__Fv() {
}


// address: 0x80039640
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


// address: 0x80039890
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039964
void CowSFX__Fi(int pnum) {
	// address: 0x8010D8E4
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80116F38
	static int snLastCowSFX;
}


// address: 0x80039A80
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AC0
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


