// C:\diabpsx\SOURCE\COREMON.CPP

#include "types.h"

// address: 0x8007EEE4
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007EF0C
// line start: 139
// line end:   163
void M_ClearSquares__Fi(int i) {
	// register: 7
	register int mx;
	// register: 10
	register int my;
	// register: 11
	register int mt;
	// register: 4
	register int mt2;
	{
		// register: 6
		register int y;
		{
			{
				// register: 5
				register int x;
			}
		}
	}
}


// address: 0x8007F04C
// line start: 168
// line end:   173
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x8007F0AC
// line start: 178
// line end:   190
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8007F100
// line start: 209
// line end:   221
unsigned char M_Talker__Fi(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x8007F168
// line start: 225
// line end:   275
void M_Enemy__Fi(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 5
	register int closest;
	// register: 19
	register int _mx;
	// register: 20
	register int _my;
	// register: 16
	register int _menemy;
	// register: 21
	// size: 0x19E8
	register struct PlayerStruct *plr1;
	// register: 23
	// size: 0x19E8
	register struct PlayerStruct *plr2;
	{
		{
			{
				{
					// register: 2
					// size: 0x19E8
					register struct PlayerStruct *enemy;
					// register: 17
					register int y;
					{
						{
							// register: 17
							register int x1;
							// register: 19
							register int y1;
							// register: 16
							register int x2;
							// register: 3
							register int y2;
						}
					}
				}
			}
		}
	}
}


// address: 0x8007F380
// line start: 370
// line end:   379
void ClearMVars__Fi(int i) {
}


// address: 0x8007F3FC
// line start: 383
// line end:   508
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	{
		{
			// register: 6
			register int slvl;
		}
	}
}


// address: 0x8007F994
// line start: 513
// line end:   521
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x8007FA34
// line start: 526
// line end:   555
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 5
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007FBA4
// line start: 559
// line end:   578
void M_UpdateLeader__Fi(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x8007FCB4
// line start: 582
// line end:   590
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x8007FD54
// line start: 594
// line end:   640
unsigned char SpawnSkeleton__Fiii(int ii, int x, int y) {
	// address: 0xFFFFFF98
	// size: 0x24
	auto int monstok[3][3];
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 20
	register unsigned char savail;
}


// address: 0x8007FF44
// line start: 644
// line end:   661
void M_StartSpStand__Fii(int i, int md) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8008002C
// line start: 665
// line end:   694
unsigned char PosOkMonst__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int mi;
	// register: 19
	register unsigned char fire;
}


// address: 0x80080280
// line start: 699
// line end:   731
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80080534
// line start: 739
// line end:   744
int encode_enemy__Fi(int m) {
}


