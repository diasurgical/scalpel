// C:\diabpsx\PSXSRC\SPLTARGT.CPP

#include "types.h"

// address: 0x800AEEA0
// line start: 42
// line end:   48
bool IsAutoTarget__Fi(int Spell) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800AEED8
// line start: 53
// line end:   61
int GetXOff__Fii(int wx, int wy) {
	// register: 2
	register int xo;
}


// address: 0x800AEF20
// line start: 65
// line end:   74
int GetYOff__Fii(int wx, int wy) {
	// register: 2
	register int yo;
}


// address: 0x800AEF6C
// line start: 79
// line end:   99
void GetScrXY__FPiT0(int *wx, int *wy) {
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT R;
	// register: 16
	register int plx;
	// register: 17
	register int ply;
	// register: 18
	register int xo;
	// register: 16
	register int x;
	// register: 17
	register int y;
}


// address: 0x800AF03C
// line start: 103
// line end:   108
void ClearTrails__11SpellTarget(struct SpellTarget *this) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800AF064
// line start: 114
// line end:   170
void Init__11SpellTargeti(struct SpellTarget *this, int plrn) {
	{
		{
			{
				{
					{
						{
							// register: 2
							register int SplLvl;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AF2C8
// line start: 174
// line end:   181
void Remove__11SpellTarget(struct SpellTarget *this) {
}


// address: 0x800AF32C
// line start: 187
// line end:   230
void DrawArrow__11SpellTargetii(struct SpellTarget *this, int x1, int y1) {
	// register: 23
	register int bright;
	// register: 21
	register char r;
	// register: 19
	register char g;
	// register: 20
	register char b;
	// register: 30
	register int otpos;
	{
		// register: 5
		register int ni;
		{
			// register: 17
			register int i;
			// register: 5
			register int ni;
		}
	}
}


// address: 0x800AF5B0
// line start: 239
// line end:   387
void Show__11SpellTarget(struct SpellTarget *this) {
	// address: 0xFFFFFFD8
	auto int x;
	// address: 0xFFFFFFDC
	auto int y;
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
	// register: 20
	register int otx;
	// register: 21
	register int oty;
	// register: 16
	register int cp;
	// register: 18
	register int plx;
	// register: 16
	register int ply;
	// register: 19
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 20
	register int ops;
	{
		{
			// register: 2
			register int vis_flag;
			// register: 4
			register int inthatx;
			// register: 5
			register int inthaty;
			{
				{
					{
						// register: 2
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x800AFACC
// line start: 390
// line end:   426
void ForceTarget__11SpellTargetiii(struct SpellTarget *this, int monst, int x, int y) {
}


// address: 0x800AFC20
// line start: 434
// line end:   437
bool TargetActive__Fi(int pnum) {
}


// address: 0x800AFC48
// size: 0x48
// line start: 441
// line end:   443
struct SpellTarget *GetSpellTarget__Fi(int pnum) {
}


// address: 0x800AFC68
// line start: 449
// line end:   533
void ArrowTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 20
	register int pnum;
	// register: 30
	register int times;
	// address: 0xFFFFFFB8
	auto int bright;
	// register: 22
	// size: 0x4
	register enum TARGET targ;
	// address: 0xFFFFFFA8
	// size: 0x8
	auto struct RECT R;
	// register: 21
	register int angle;
	// address: 0xFFFFFFC0
	auto int r;
	// address: 0xFFFFFFC8
	auto int g;
	// register: 23
	register int b;
	{
		{
			{
				// address: 0xFFFFFFB0
				auto int plx;
				// address: 0xFFFFFFB4
				auto int ply;
				// register: 19
				register int otpos;
				{
					{
						{
							// register: 3
							// size: 0x19E8
							register struct PlayerStruct *ptrplr;
							{
								// register: 2
								// size: 0x6C
								register struct MonsterStruct *Monst;
								{
									// register: 16
									// size: 0x50
									register struct MissileStruct *Miss;
									// register: 2
									register int pxo;
									// register: 2
									register int pyo;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800B000C
// line start: 540
// line end:   550
void SPL_Arrow__F6TARGETiii(enum TARGET t, int pnum, int times, int size) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 2
	// size: 0x5C
	register struct TASK *T;
}


