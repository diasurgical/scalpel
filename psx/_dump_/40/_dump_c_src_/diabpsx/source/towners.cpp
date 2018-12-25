// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80039F00
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80039F54
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80039F74
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80039FC4
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x8003A11C
// line start: 166
// line end:   175
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 7
		register int quest;
	}
}


// address: 0x8003A1DC
// line start: 181
// line end:   191
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A30C
// line start: 197
// line end:   208
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A444
// line start: 213
// line end:   223
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A578
// line start: 228
// line end:   238
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A6AC
// line start: 243
// line end:   253
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A7E0
// line start: 258
// line end:   269
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003A91C
// line start: 274
// line end:   284
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AA50
// line start: 290
// line end:   300
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003AB84
// line start: 305
// line end:   315
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003ACB8
// line start: 321
// line end:   347
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
	// register: 2
	register int y2;
}


// address: 0x8003AF54
// line start: 354
// line end:   368
void InitTowners__Fv() {
}


// address: 0x8003AFE0
// line start: 373
// line end:   387
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


// address: 0x8003B084
// line start: 394
// line end:   401
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x8003B16C
// line start: 417
// line end:   425
void TownBlackSmith__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B1F8
// line start: 433
// line end:   440
void TownBarOwner__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B294
// line start: 448
// line end:   461
void TownDead__Fv() {
	// register: 16
	register int tidx;
}


// address: 0x8003B37C
// line start: 467
// line end:   469
void TownHealer__Fv() {
}


// address: 0x8003B3A4
// line start: 476
// line end:   479
void TownStory__Fv() {
}


// address: 0x8003B3CC
// line start: 486
// line end:   489
void TownDrunk__Fv() {
}


// address: 0x8003B3F4
// line start: 496
// line end:   499
void TownBoy__Fv() {
}


// address: 0x8003B41C
// line start: 507
// line end:   510
void TownWitch__Fv() {
}


// address: 0x8003B444
// line start: 517
// line end:   519
void TownBarMaid__Fv() {
}


// address: 0x8003B46C
// line start: 526
// line end:   529
void TownCow__Fv() {
}


// address: 0x8003B494
// line start: 536
// line end:   587
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


// address: 0x8003B6E4
// size: 0x6C
// line start: 593
// line end:   598
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x8003B7B8
// line start: 607
// line end:   653
void CowSFX__Fi(int pnum) {
	// address: 0x8011153C
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x8011BA50
	static int snLastCowSFX;
}


// address: 0x8003B8D4
// line start: 659
// line end:   666
void TownerTalk__Fii(int first, int t) {
}


// address: 0x8003B914
// line start: 673
// line end:   1090
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x6C
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


