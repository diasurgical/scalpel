// C:\diabpsx\SOURCE\MONSTER.CPP

#include "types.h"

// address: 0x80140704
// line start: 446
// line end:   465
void MonstPartJump__Fi(int m) {
	// register: 17
	register int ScrX;
	// register: 19
	register int ScrXOff;
	// register: 20
	register int ScrYOff;
	// address: 0xFFFFFFD8
	auto int WorldX;
	// address: 0xFFFFFFDC
	auto int WorldY;
	// register: 21
	// size: 0xDC
	register struct CBlocks *gblocks;
}


// address: 0x80140898
// line start: 484
// line end:   491
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x80140930
// line start: 510
// line end:   512
int M_GetDir__Fi(int i) {
}


// address: 0x801409B4
// line start: 531
// line end:   539
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x80140A40
// line start: 554
// line end:   576
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 16
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80140BA4
// line start: 584
// line end:   607
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 16
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80140D14
// line start: 614
// line end:   634
void M_StartSpAttack__Fi(int i) {
	// register: 16
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80140E48
// line start: 642
// line end:   658
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80140F64
// line start: 665
// line end:   694
void M_GetKnockback__Fi(int i) {
	// register: 17
	register int d;
	{
		{
			// register: 2
			// size: 0x70
			register struct MonsterStruct *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x801411C0
// line start: 701
// line end:   757
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x70
			register struct MonsterStruct *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x801414F0
// line start: 762
// line end:   818
void M_DiabloDeath__FiUc(int i, unsigned char sendmsg) {
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 30
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	// register: 3
	register int steps;
	{
		// register: 20
		register int j;
		{
			// register: 19
			register int k;
			{
				{
					// register: 18
					register int _moldx;
					// register: 17
					register int _moldy;
				}
			}
		}
	}
}


// address: 0x80141838
// line start: 825
// line end:   877
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80141B28
// line start: 883
// line end:   947
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 16
	register int _mx;
	// register: 19
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x80141E40
// line start: 954
// line end:   1017
void M2MStartKill__Fii(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x80142260
// line start: 1024
// line end:   1043
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80142370
// line start: 1077
// line end:   1097
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x80142510
// line start: 1105
// line end:   1123
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x801426A4
// line start: 1131
// line end:   1142
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80142778
// line start: 1149
// line end:   1184
void M_ChangeLightOffset__Fi(int monst) {
	// register: 5
	register int lx;
	// register: 3
	register int ly;
	// register: 2
	register int sign;
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 2
	register int _mxoff;
	// register: 3
	register int _myoff;
}


// address: 0x80142840
// line start: 1191
// line end:   1209
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801428F8
// line start: 1216
// line end:   1247
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80142BC4
// line start: 1254
// line end:   1281
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80142DF8
// line start: 1288
// line end:   1319
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80143104
// line start: 1326
// line end:   1363
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80143314
// line start: 1369
// line end:   1496
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 19
	register int hit;
	// register: 17
	register int hper;
	// register: 4
	register int tac;
	// register: 19
	register long dam;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 6
	register int blk;
	// register: 3
	register int blkper;
	// register: 6
	register int mdam;
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *pPlayer;
	// address: 0xFFFFFFC8
	auto int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
	// register: 23
	register int _px;
	// register: 30
	register int _py;
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// register: 19
											register int newx;
											// register: 16
											register int newy;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80143B38
// line start: 1502
// line end:   1541
int M_DoAttack__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 21
	register unsigned char mMinDamage;
	// register: 19
	register unsigned char mMaxDamage;
	// register: 20
	register unsigned char mHit;
	// register: 18
	register int _menemy;
}


// address: 0x80143D24
// line start: 1549
// line end:   1571
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x80143EDC
// line start: 1579
// line end:   1601
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x80144118
// line start: 1609
// line end:   1619
int M_DoSAttack__Fi(int i) {
}


// address: 0x80144230
// line start: 1627
// line end:   1636
int M_DoFadein__Fi(int i) {
}


// address: 0x80144328
// line start: 1643
// line end:   1661
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x80144494
// line start: 1668
// line end:   1688
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80144570
// line start: 1695
// line end:   1785
int M_DoTalk__Fi(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 21
	register int _mx;
	// register: 20
	register int _my;
	// register: 19
	register int mType;
}


// address: 0x80144A78
// line start: 1795
// line end:   1841
void M_Teleport__Fi(int i) {
	// register: 19
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 23
	register unsigned char done;
	// address: 0xFFFFFFC8
	auto int mulx;
	// register: 30
	register int muly;
	// register: 21
	register int x;
	// register: 22
	register int y;
	// register: 18
	register int a;
	// register: 16
	register int b;
	// register: 16
	register int px;
	// address: 0xFFFFFFD0
	auto int py;
}


// address: 0x80144D14
// line start: 1847
// line end:   1855
int M_DoGotHit__Fi(int i) {
}


// address: 0x80144DCC
// line start: 1866
// line end:   1914
void DoEnding__Fv() {
}


// address: 0x80144DD4
// line start: 1919
// line end:   1941
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80144F30
// line start: 1948
// line end:   1978
int M_DoDeath__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x801451F4
// line start: 1985
// line end:   1995
int M_DoSpStand__Fi(int i) {
}


// address: 0x801452DC
// line start: 2000
// line end:   2019
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x80145414
// line start: 2026
// line end:   2033
int M_DoStone__Fi(int i) {
}


// address: 0x801454D4
// line start: 2040
// line end:   2099
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x80145750
// line start: 2108
// line end:   2184
void GroupUnity__Fi(int i) {
	// register: 20
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 21
	register int _mx;
	// register: 22
	register int _my;
}


// address: 0x80145B84
// line start: 2193
// line end:   2211
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x80145D70
// line start: 2219
// line end:   2233
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x80145E50
// line start: 2244
// line end:   2257
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80145F64
// line start: 2265
// line end:   2272
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x80145FB8
// line start: 2279
// line end:   2311
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80146158
// line start: 2323
// line end:   2350
void MAI_Zombie__Fi(int i) {
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x8014636C
// line start: 2364
// line end:   2386
void MAI_SkelSd__Fi(int i) {
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x80146520
// line start: 2401
// line end:   2458
void MAI_Snake__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 18
	register int fx;
	// register: 21
	register int fy;
	// register: 19
	register int mx;
	// register: 23
	register int my;
	// register: 22
	register int md;
	// register: 30
	register int pnum;
	// address: 0xFFFFFFD0
	// size: 0x6
	auto char pattern[6];
	// register: 3
	register int tmp;
}


// address: 0x80146944
// line start: 2470
// line end:   2537
void MAI_Bat__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 23
	register int mx;
	// register: 30
	register int my;
	// register: 19
	register int md;
	// register: 20
	register int v;
	// address: 0xFFFFFFD0
	auto int pnum;
	// register: 17
	register int fx;
	// register: 21
	register int fy;
}


// address: 0x80146D18
// line start: 2550
// line end:   2582
void MAI_SkelBow__Fi(int i) {
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 18
	register int fx;
	// register: 20
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80146F20
// line start: 2593
// line end:   2614
void MAI_Fat__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 16
	register int v;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801470F0
// line start: 2627
// line end:   2708
void MAI_Sneak__Fi(int i) {
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 18
	register int md;
	// register: 30
	register int v;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 23
	register int dist;
}


// address: 0x801474F8
// line start: 2720
// line end:   2796
void MAI_Fireman__Fi(int i) {
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 20
	register int md;
	// register: 21
	register int pnum;
	// register: 18
	register int fx;
	// register: 19
	register int fy;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014780C
// line start: 2808
// line end:   2886
void MAI_Fallen__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 6
	register int x;
	// register: 7
	register int y;
	// register: 5
	register int xpos;
	// register: 4
	register int ypos;
	// register: 3
	register int m;
	// register: 8
	register int rad;
	// register: 16
	register int my;
	// register: 2
	register int aitype;
}


// address: 0x80147B44
// line start: 2894
// line end:   2910
void MAI_Cleaver__Fi(int i) {
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x80147C48
// line start: 2921
// line end:   2988
void MAI_Round__FiUc(int i, unsigned char special) {
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// register: 23
	register int md;
	// register: 30
	register int v;
	// register: 18
	register int fx;
	// register: 20
	register int fy;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801480D4
// line start: 2998
// line end:   2999
void MAI_GoatMc__Fi(int i) {
}


// address: 0x801480F4
// line start: 3006
// line end:   3059
void MAI_Ranged__FiiUc(int i, int missile_type, unsigned char special) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 17
	register int mx;
	// register: 18
	register int my;
	// register: 20
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80148338
// line start: 3065
// line end:   3066
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8014835C
// line start: 3070
// line end:   3071
void MAI_Succ__Fi(int i) {
}


// address: 0x80148380
// line start: 3075
// line end:   3076
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x801483A4
// line start: 3090
// line end:   3176
void MAI_Scav__Fi(int i) {
	// register: 18
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x801487D8
// line start: 3186
// line end:   3226
void MAI_Garg__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x801489D8
// line start: 3239
// line end:   3330
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	// register: 21
	register int fx;
	// register: 30
	register int fy;
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 19
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80148F10
// line start: 3335
// line end:   3336
void MAI_Magma__Fi(int i) {
}


// address: 0x80148F3C
// line start: 3340
// line end:   3341
void MAI_Storm__Fi(int i) {
}


// address: 0x80148F68
// line start: 3345
// line end:   3346
void MAI_Acid__Fi(int i) {
}


// address: 0x80148F98
// line start: 3351
// line end:   3352
void MAI_Diablo__Fi(int i) {
}


// address: 0x80148FC4
// line start: 3356
// line end:   3448
void MAI_RR2__Fiii(int i, int mistype, int dam) {
	// register: 22
	register int fx;
	// register: 23
	register int fy;
	// register: 18
	register int mx;
	// register: 19
	register int my;
	// register: 30
	register int md;
	// register: 21
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801494E0
// line start: 3453
// line end:   3454
void MAI_Mega__Fi(int i) {
}


// address: 0x80149504
// line start: 3461
// line end:   3551
void MAI_SkelKing__Fi(int i) {
	// register: 19
	register int fx;
	// register: 23
	register int fy;
	// register: 30
	register int mx;
	// address: 0xFFFFFFC8
	auto int my;
	// register: 22
	register int md;
	// address: 0xFFFFFFD0
	auto int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int nx;
	// register: 16
	register int ny;
	// register: 18
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x80149A5C
// line start: 3565
// line end:   3643
void MAI_Rhino__Fi(int i) {
	// register: 23
	register int fx;
	// register: 30
	register int fy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// address: 0xFFFFFFC8
	auto int md;
	// address: 0xFFFFFFD0
	auto int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 20
	register int _my;
}


// address: 0x80149F20
// line start: 3656
// line end:   3750
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	// address: 0xFFFFFFB8
	auto int fx;
	// address: 0xFFFFFFC0
	auto int fy;
	// register: 19
	register int mx;
	// register: 21
	register int my;
	// register: 22
	register int md;
	// address: 0xFFFFFFC8
	auto int v;
	// register: 30
	register int dist;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014A408
// line start: 3758
// line end:   3787
void MAI_Garbud__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014A5D4
// line start: 3796
// line end:   3827
void MAI_Zhar__Fi(int i) {
	// register: 19
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014A7E8
// line start: 3836
// line end:   3879
void MAI_SnotSpil__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
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


// address: 0x8014AA38
// line start: 3888
// line end:   3935
void MAI_Lazurus__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014ACCC
// line start: 3944
// line end:   3974
void MAI_Lazhelp__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014AE08
// line start: 3982
// line end:   4012
void MAI_Lachdanan__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014AFB4
// line start: 4021
// line end:   4053
void MAI_Warlord__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8014B11C
// line start: 4062
// line end:   4085
void DeleteMonsterList__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int mi;
}


// address: 0x8014B268
// line start: 4093
// line end:   4288
void ProcessMonsters__Fv() {
	// register: 23
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// register: 16
	register int _menemy;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 3
	register int oldmode;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int tmp;
						}
					}
				}
			}
		}
	}
}


// address: 0x8014B8B8
// line start: 4297
// line end:   4359
unsigned char DirOK__Fii(int i, int mdir) {
	// register: 20
	register long fx;
	// register: 23
	register long fy;
	// register: 16
	register int tmp;
	{
		{
			// register: 21
			register int mcount;
			{
				// register: 18
				register int x;
				{
					{
						// register: 17
						register int y;
					}
				}
			}
		}
	}
}


// address: 0x8014BD10
// line start: 4366
// line end:   4367
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x8014BD78
// line start: 4374
// line end:   4375
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x8014BDBC
// line start: 4402
// line end:   4521
unsigned char LineClearF__FPFii_Uciiii(unsigned char (*Clear)(), int x1, int y1, int x2, int y2) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 16
	register int d;
	// register: 22
	register int dincH;
	// register: 18
	register int dincD;
	// register: 17
	register int xincD;
	// register: 17
	register int yincD;
	// address: 0xFFFFFFC8
	auto int xorg;
	// address: 0xFFFFFFD0
	auto int yorg;
	// register: 21
	register unsigned char done;
	// register: 2
	register int tmp;
}


// address: 0x8014C044
// line start: 4529
// line end:   4530
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8014C084
// line start: 4541
// line end:   4656
unsigned char LineClearF1__FPFiii_Uciiiii(unsigned char (*Clear)(), int monst, int x1, int y1, int x2, int y2) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
	// register: 16
	register int d;
	// register: 22
	register int dincH;
	// register: 18
	register int dincD;
	// register: 17
	register int xincD;
	// register: 17
	register int yincD;
	// address: 0xFFFFFFC8
	auto int xorg;
	// address: 0xFFFFFFD0
	auto int yorg;
	// register: 21
	register unsigned char done;
	// register: 2
	register int tmp;
}


// address: 0x8014C318
// line start: 4753
// line end:   4793
void M_FallenFear__Fii(int x, int y) {
	// register: 19
	register int i;
	// register: 4
	register int mi;
	// register: 18
	register int rundist;
	// register: 3
	register int aitype;
}


// address: 0x8014C50C
// line start: 4800
// line end:   4859
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x8014C734
// line start: 4866
// line end:   4892
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x8014C858
// line start: 4902
// line end:   4983
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 22
	register int oldy;
	// register: 17
	register int newx;
	// register: 18
	register int newy;
	// register: 16
	// size: 0x50
	register struct MissileStruct *Miss;
	// register: 18
	register int m;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int pnum;
}


// address: 0x8014CD40
// line start: 5005
// line end:   5034
unsigned char PosOkMonst2__Fiii(int i, int x, int y) {
	// register: 7
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int mi;
	// register: 18
	register unsigned char fire;
}


// address: 0x8014CF5C
// line start: 5045
// line end:   5085
unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	// register: 19
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int objtype;
	// register: 4
	register int mi;
	// register: 20
	register unsigned char fire;
	// register: 18
	register unsigned char isdoor;
}


// address: 0x8014D250
// line start: 5098
// line end:   5121
int M_SpawnSkel__Fiii(int x, int y, int dir) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 18
	register int skeltypes;
	// register: 16
	register int skel;
}


// address: 0x8014D3CC
// line start: 5137
// line end:   5164
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014D50C
// line start: 5171
// line end:   5196
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x8014D7A4
// line start: 5203
// line end:   5208
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x8014D814
// line start: 5215
// line end:   5231
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x8014D924
// line start: 5240
// line end:   5304
void MAI_Golum__Fi(int i) {
	// register: 3
	register int ok;
	// register: 16
	register int j;
	// register: 5
	register int k;
	// register: 3
	register int mid;
	// register: 16
	register int mx;
	// register: 21
	register int my;
	// register: 18
	register int md;
	// address: 0xFFFFFFC0
	auto unsigned char have_enemy;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 3
	register int _menemy;
	// address: 0xFFFFFFD0
	auto int _mex;
	// register: 30
	register int _mey;
}


// address: 0x8014DCB4
// line start: 5312
// line end:   5343
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014DE34
// line start: 5347
// line end:   5367
void M_StartAttack__Fi(int i) {
	// register: 16
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014DF68
// line start: 5371
// line end:   5402
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 17
	register long fx;
	// register: 18
	register long fy;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
}


