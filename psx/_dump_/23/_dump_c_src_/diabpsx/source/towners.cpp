// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800371D0
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037224
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037244
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x8003728C
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800373EC
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800374A4
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800375D0
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037704
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037834
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037964
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037A94
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BCC
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037CFC
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E2C
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037F5C
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


// address: 0x80038220
void InitTowners__Fv() {
}


// address: 0x800382AC
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


// address: 0x80038350
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038470
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384A4
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800384D8
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800385C0
void TownHealer__Fv() {
}


// address: 0x800385E8
void TownStory__Fv() {
}


// address: 0x80038610
void TownDrunk__Fv() {
}


// address: 0x80038638
void TownBoy__Fv() {
}


// address: 0x80038660
void TownWitch__Fv() {
}


// address: 0x80038688
void TownBarMaid__Fv() {
}


// address: 0x800386B0
void TownCow__Fv() {
}


// address: 0x800386D8
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


// address: 0x80038928
// size: 0x98
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800389FC
void CowSFX__Fi(int pnum) {
	// address: 0x8010EB70
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80118B9C
	static int snLastCowSFX;
}


// address: 0x80038B18
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038B58
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


