// C:\diabpsx\SOURCE\COREMON.CPP

#include "types.h"

// address: 0x80079200
// line start: 504
// line end:   512
void ActivateSpawn__Fiiii(int i, int x, int y, int dir) {
}


// address: 0x80078F14
// line start: 436
// line end:   444
int AddMonster__FiiiiUc(int x, int y, int dir, int mtype, int InMap) {
	// register: 16
	register int i;
}


// address: 0x800797F4
// line start: 620
// line end:   651
unsigned char CanPut__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80078A54
// line start: 311
// line end:   320
void ClearMVars__Fi(int i) {
}


// address: 0x80078AC8
// line start: 324
// line end:   431
void InitMonster__Fiiiii(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *pmonster;
}


// address: 0x8007F4C4
// line start: 383
// line end:   508
void InitMonster__Fiiiii_addr_8007F4C4(int i, int rd, int mtype, int x, int y) {
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


// address: 0x8007F594
// line start: 383
// line end:   508
void InitMonster__Fiiiii_addr_8007F594(int i, int rd, int mtype, int x, int y) {
	// register: 17
	// size: 0x1C
	register struct CMonster *monst;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	{
		{
			// register: 6
			register int slvl;
		}
	}
}


// address: 0x80078364
// line start: 168
// line end:   171
unsigned char IsSkel__Fi(int mt) {
}


// address: 0x800781D8
// line start: 110
// line end:   135
void M_CheckEFlag__Fi(int i) {
}


// address: 0x8007F0A4
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


// address: 0x800781F8
// line start: 139
// line end:   163
void M_ClearSquares__Fi_addr_800781F8(int i) {
	// register: 8
	register int mx;
	// register: 10
	register int my;
	// register: 12
	register int mt;
	// register: 11
	register int mt2;
	{
		// register: 5
		register int y;
		{
			{
				// register: 3
				register int x;
			}
		}
	}
}


// address: 0x8007F230
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
	register struct PlayerStruct_dup_18 *plr1;
	// register: 23
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *plr2;
	{
		{
			{
				{
					// register: 2
					// size: 0x19E8
					register struct PlayerStruct_dup_18 *enemy;
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


// address: 0x80076ECC
// line start: 221
// line end:   305
void M_Enemy__Fi_addr_80076ECC(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 21
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 21
			register int _my;
		}
	}
}


// address: 0x8007F168
// line start: 225
// line end:   275
void M_Enemy__Fi_addr_8007F168(int i) {
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


// address: 0x8007B770
// line start: 221
// line end:   306
void M_Enemy__Fi_addr_8007B770(int i) {
	// register: 30
	register int j;
	// register: 19
	register int mi;
	// register: 19
	register int pnum;
	// address: 0xFFFFFFA8
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB0
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFB8
	auto unsigned char bestsameroom;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC0
	auto unsigned char enemyx;
	// address: 0xFFFFFFC8
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// address: 0xFFFFFFD0
	auto int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 21
			register int _my;
		}
	}
}


// address: 0x80077DD8
// line start: 221
// line end:   304
void M_Enemy__Fi_addr_80077DD8(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 22
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 21
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 22
			register int _my;
		}
	}
}


// address: 0x80078494
// line start: 221
// line end:   306
void M_Enemy__Fi_addr_80078494(int i) {
	// address: 0xFFFFFFA8
	auto int j;
	// register: 19
	register int mi;
	// register: 19
	register int pnum;
	// address: 0xFFFFFFB0
	auto int closest;
	// register: 3
	register int dist;
	// address: 0xFFFFFFB8
	auto int bestdist;
	// register: 20
	register unsigned char sameroom;
	// address: 0xFFFFFFC0
	auto unsigned char bestsameroom;
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// address: 0xFFFFFFC8
	auto unsigned char enemyx;
	// address: 0xFFFFFFD0
	auto unsigned char enemyy;
	// register: 23
	register int _mxi;
	// register: 30
	register int _myi;
	{
		{
			// register: 17
			register int _mx;
			// register: 21
			register int _my;
		}
	}
}


// address: 0x8007F300
// line start: 225
// line end:   275
void M_Enemy__Fi_addr_8007F300(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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
	register struct PlayerStruct_dup_17 *plr1;
	// register: 23
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *plr2;
	{
		{
			{
				{
					// register: 2
					// size: 0x19E8
					register struct PlayerStruct_dup_17 *enemy;
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


// address: 0x800783EC
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi(int i) {
}


// address: 0x8007B654
// line start: 192
// line end:   201
unsigned char M_Ranged__Fi_addr_8007B654(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x8008000C
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


// address: 0x80079498
// line start: 565
// line end:   582
void M_StartSpStand__Fii_addr_80079498(int i, int md) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x800800DC
// line start: 644
// line end:   661
void M_StartSpStand__Fii_addr_800800DC(int i, int md) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8007FBCC
// line start: 526
// line end:   555
void M_StartStand__Fii(int i, int md) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 5
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x80078FC4
// line start: 449
// line end:   477
void M_StartStand__Fii_addr_80078FC4(int i, int md) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 6
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007FAFC
// line start: 526
// line end:   555
void M_StartStand__Fii_addr_8007FAFC(int i, int md) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 5
	register int _mx;
	// register: 3
	register int _my;
}


// address: 0x8007B6D8
// line start: 205
// line end:   217
unsigned char M_Talker__Fi(int i) {
	// register: 16
	register unsigned char _mAi;
}


// address: 0x80078434
// line start: 205
// line end:   217
unsigned char M_Talker__Fi_addr_80078434(int i) {
	// register: 4
	register unsigned char _mAi;
}


// address: 0x8007C538
// line start: 481
// line end:   500
void M_UpdateLeader__Fi(int i) {
	// register: 4
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x80079108
// line start: 481
// line end:   500
void M_UpdateLeader__Fi_addr_80079108(int i) {
	// register: 5
	register int x;
	// register: 2
	register int tmp;
}


// address: 0x800783A0
// line start: 176
// line end:   188
void NewMonsterAnim__FiR10AnimStructii(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8007F244
// line start: 178
// line end:   190
void NewMonsterAnim__FiR10AnimStructii_addr_8007F244(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8007F174
// line start: 178
// line end:   190
void NewMonsterAnim__FiR10AnimStructii_addr_8007F174(int i, struct AnimStruct *anim, int md, int AnimType) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80079578
// line start: 586
// line end:   615
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


// address: 0x800792A8
// line start: 516
// line end:   561
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


