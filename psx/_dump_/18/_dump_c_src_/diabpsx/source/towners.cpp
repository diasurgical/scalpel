// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800373F0
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037444
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037464
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x800374AC
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003760C
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800376C4
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800377F0
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037924
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A54
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037B84
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CB4
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037DEC
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F1C
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003804C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003817C
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


// address: 0x80038440
void InitTowners__Fv() {
}


// address: 0x800384CC
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


// address: 0x80038570
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038690
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800386C4
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800386F8
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800387E0
void TownHealer__Fv() {
}


// address: 0x80038808
void TownStory__Fv() {
}


// address: 0x80038830
void TownDrunk__Fv() {
}


// address: 0x80038858
void TownBoy__Fv() {
}


// address: 0x80038880
void TownWitch__Fv() {
}


// address: 0x800388A8
void TownBarMaid__Fv() {
}


// address: 0x800388D0
void TownCow__Fv() {
}


// address: 0x800388F8
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


// address: 0x80038B48
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80038C1C
void CowSFX__Fi(int pnum) {
	// address: 0x8010D70C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117528
	static int snLastCowSFX;
}


// address: 0x80038D38
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038D78
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


