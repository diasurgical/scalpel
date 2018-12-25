// C:\diabpsx\SOURCE\MONSTER.CPP

#include "types.h"

// address: 0x8014A61C
// line start: 431
// line end:   438
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x8014A654
// line start: 457
// line end:   459
int M_GetDir__Fi(int i) {
}


// address: 0x8014A6B8
// line start: 478
// line end:   486
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x8014A708
// line start: 501
// line end:   523
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A828
// line start: 531
// line end:   556
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 21
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014A99C
// line start: 563
// line end:   583
void M_StartSpAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014AA8C
// line start: 591
// line end:   607
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014AB64
// line start: 614
// line end:   674
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			// register: 19
			// size: 0x6C
			register struct MonsterStruct *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x8014AD80
// line start: 681
// line end:   739
void M_StartHit__Fiii(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x6C
			register struct MonsterStruct *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x8014B068
// line start: 744
// line end:   802
void M_DiabloDeath__FiUci(int i, unsigned char sendmsg, int pnum) {
	// register: 22
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 30
	// size: 0x6C
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


// address: 0x8014B390
// line start: 809
// line end:   861
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014B64C
// line start: 867
// line end:   943
void MonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 3
	// size: 0x6C
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


// address: 0x8014B958
// line start: 950
// line end:   989
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014BAAC
// line start: 996
// line end:   1059
void M2MStartKill__Fii(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 21
	register int _mx;
	// register: 22
	register int _my;
	{
		{
			// register: 16
			register int omp;
		}
	}
}


// address: 0x8014BE74
// line start: 1066
// line end:   1085
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014BF6C
// line start: 1092
// line end:   1109
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}


// address: 0x8014C07C
// line start: 1115
// line end:   1135
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C1D8
// line start: 1143
// line end:   1161
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C328
// line start: 1169
// line end:   1181
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C3B8
// line start: 1188
// line end:   1259
void M_ChangeLightOffset__Fi(int monst) {
	// register: 5
	register int lx;
	// register: 4
	register int ly;
	// register: 6
	register int xm;
	// register: 9
	register int ym;
	// register: 5
	register int x2;
	// register: 4
	register int y2;
	// register: 2
	register int ox;
	// register: 4
	register int oy;
	// register: 10
	// size: 0x6C
	register struct MonsterStruct *pmonster;
}


// address: 0x8014C520
// line start: 1268
// line end:   1287
int M_DoStand__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C580
// line start: 1294
// line end:   1341
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014C7F0
// line start: 1348
// line end:   1375
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014C9DC
// line start: 1382
// line end:   1413
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014CC80
// line start: 1420
// line end:   1465
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 19
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8014CEC0
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	// register: 22
	register int hit;
	// register: 16
	register int hper;
	// register: 4
	register int tac;
	// register: 16
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
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pMonster;
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
											// register: 20
											register bool KnockOk;
											// register: 18
											register int newx;
											// register: 16
											register int newy;
											{
												{
													// register: 3
													// size: 0x19E8
													register struct PlayerStruct *plr2;
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
	}
}


// address: 0x8014D4D8
// line start: 1627
// line end:   1666
int M_DoAttack__Fi(int i) {
	// register: 16
	// size: 0x6C
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


// address: 0x8014D684
// line start: 1674
// line end:   1696
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x8014D80C
// line start: 1704
// line end:   1726
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8014DA14
// line start: 1734
// line end:   1744
int M_DoSAttack__Fi(int i) {
}


// address: 0x8014DAF0
// line start: 1752
// line end:   1761
int M_DoFadein__Fi(int i) {
}


// address: 0x8014DBD0
// line start: 1768
// line end:   1786
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x8014DCFC
// line start: 1793
// line end:   1813
int M_DoHeal__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014DD98
// line start: 1820
// line end:   1927
int M_DoTalk__Fi(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8014E33C
// line start: 1937
// line end:   1983
void M_Teleport__Fi(int i) {
	// register: 21
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 22
	register unsigned char done;
	// address: 0xFFFFFFC0
	auto int mulx;
	// register: 3
	register int muly;
	// register: 19
	register int x;
	// register: 23
	register int y;
	// register: 18
	register int a;
	// register: 16
	register int b;
	// register: 16
	register int px;
	// address: 0xFFFFFFC8
	auto int py;
}


// address: 0x8014E558
// line start: 1989
// line end:   1997
int M_DoGotHit__Fi(int i) {
}


// address: 0x8014E5C0
// line start: 2009
// line end:   2054
void DoEnding__Fi(int p) {
}


// address: 0x8014E668
// line start: 2060
// line end:   2083
void PrepDoEnding__Fi(int pnum) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8014E7B0
// line start: 2090
// line end:   2133
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	{
		{
		}
	}
}


// address: 0x8014E974
// line start: 2140
// line end:   2150
int M_DoSpStand__Fi(int i) {
}


// address: 0x8014EA20
// line start: 2155
// line end:   2178
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x8014EB34
// line start: 2185
// line end:   2192
int M_DoStone__Fi(int i) {
}


// address: 0x8014EBB0
// line start: 2199
// line end:   2258
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8014EDE0
// line start: 2267
// line end:   2343
void GroupUnity__Fi(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x8014F1F4
// line start: 2352
// line end:   2370
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F39C
// line start: 2403
// line end:   2416
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F498
// line start: 2424
// line end:   2431
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8014F4EC
// line start: 2438
// line end:   2470
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8014F638
// line start: 2482
// line end:   2516
void MAI_Zombie__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x8014F83C
// line start: 2525
// line end:   2551
void MAI_SkelSd__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8014F9F0
// line start: 2563
// line end:   2626
void MAI_Snake__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int fx;
	// register: 21
	register int fy;
	// register: 20
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


// address: 0x8014FDEC
// line start: 2634
// line end:   2707
void MAI_Bat__Fi(int i) {
	// register: 16
	// size: 0x6C
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


// address: 0x801501A8
// line start: 2716
// line end:   2752
void MAI_SkelBow__Fi(int i) {
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 21
	register int md;
	// register: 19
	register int fx;
	// register: 20
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801503A4
// line start: 2760
// line end:   2787
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
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80150570
// line start: 2796
// line end:   2878
void MAI_Sneak__Fi(int i) {
	// register: 20
	register int mx;
	// register: 22
	register int my;
	// register: 18
	register int md;
	// register: 30
	register int v;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 23
	register int dist;
}


// address: 0x80150950
// line start: 2889
// line end:   2965
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
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80150C5C
// line start: 2977
// line end:   3055
void MAI_Fallen__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 5
	register int x;
	// register: 6
	register int y;
	// register: 4
	register int xpos;
	// register: 3
	register int ypos;
	// register: 3
	register int m;
	// register: 7
	register int rad;
	// register: 16
	register int my;
	// register: 2
	register int aitype;
}


// address: 0x80150F74
// line start: 3063
// line end:   3083
void MAI_Cleaver__Fi(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x80151078
// line start: 3091
// line end:   3164
void MAI_Round__FiUc(int i, unsigned char special) {
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 23
	register int md;
	// register: 30
	register int v;
	// register: 19
	register int fx;
	// register: 22
	register int fy;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801514BC
// line start: 3169
// line end:   3170
void MAI_GoatMc__Fi(int i) {
}


// address: 0x801514DC
// line start: 3177
// line end:   3230
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
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80151704
// line start: 3236
// line end:   3237
void MAI_GoatBow__Fi(int i) {
}


// address: 0x80151728
// line start: 3241
// line end:   3242
void MAI_Succ__Fi(int i) {
}


// address: 0x8015174C
// line start: 3246
// line end:   3247
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x80151770
// line start: 3261
// line end:   3347
void MAI_Scav__Fi(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x80151B34
// line start: 3357
// line end:   3397
void MAI_Garg__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x80151D14
// line start: 3410
// line end:   3501
void MAI_RoundRanged__FiiUciUc(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
	// register: 23
	register int fx;
	// register: 30
	register int fy;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 19
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80152210
// line start: 3506
// line end:   3507
void MAI_Magma__Fi(int i) {
}


// address: 0x8015223C
// line start: 3511
// line end:   3512
void MAI_Storm__Fi(int i) {
}


// address: 0x80152268
// line start: 3516
// line end:   3517
void MAI_Acid__Fi(int i) {
}


// address: 0x80152298
// line start: 3522
// line end:   3523
void MAI_Diablo__Fi(int i) {
}


// address: 0x801522C4
// line start: 3527
// line end:   3619
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
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x801527AC
// line start: 3624
// line end:   3625
void MAI_Mega__Fi(int i) {
}


// address: 0x801527D0
// line start: 3632
// line end:   3730
void MAI_SkelKing__Fi(int i) {
	// register: 19
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 22
	register int mx;
	// register: 23
	register int my;
	// register: 21
	register int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int nx;
	// register: 16
	register int ny;
	// register: 18
	register int _mx;
	// address: 0xFFFFFFD0
	auto int _my;
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


// address: 0x80152D18
// line start: 3739
// line end:   3825
void MAI_Rhino__Fi(int i) {
	// register: 22
	register int fx;
	// address: 0xFFFFFFC8
	auto int fy;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// address: 0xFFFFFFD0
	auto int md;
	// register: 30
	register int v;
	// register: 4
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 23
	register int _my;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int mi;
						}
					}
				}
			}
		}
	}
}


// address: 0x801531D8
// line start: 3834
// line end:   3928
void MAI_Counselor__Fi(int i, unsigned char counsmiss[4], int _mx, int _my) {
	// register: 30
	register int fx;
	// address: 0xFFFFFFB8
	auto int fy;
	// register: 19
	register int mx;
	// register: 21
	register int my;
	// register: 20
	register int md;
	// address: 0xFFFFFFC0
	auto int v;
	// register: 23
	register int dist;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80153684
// line start: 3936
// line end:   3975
void MAI_Garbud__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153894
// line start: 3983
// line end:   4016
void MAI_Zhar__Fi(int i) {
	// register: 20
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80153A90
// line start: 4024
// line end:   4069
void MAI_SnotSpil__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
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


// address: 0x80153CE0
// line start: 4077
// line end:   4129
void MAI_Lazurus__Fi(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80153F84
// line start: 4137
// line end:   4171
void MAI_Lazhelp__Fi(int i) {
	// register: 4
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x801540BC
// line start: 4178
// line end:   4212
void MAI_Lachdanan__Fi(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8015426C
// line start: 4220
// line end:   4254
void MAI_Warlord__Fi(int i) {
	// register: 18
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 19
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


// address: 0x801543D4
// line start: 4262
// line end:   4285
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x801544F8
// line start: 4293
// line end:   4537
void ProcessMonsters__Fv(unsigned int WipeCount, bool DoWipe, struct MonsterStruct *Monst, int oldmode) {
	// register: 22
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 20
	register int mx;
	// register: 21
	register int my;
	// register: 16
	register int _menemy;
}


// address: 0x80154AC4
// line start: 4546
// line end:   4611
unsigned char DirOK__Fii(int i, int mdir) {
	// register: 16
	register long fx;
	// register: 17
	register long fy;
}


// address: 0x80154C70
// line start: 4618
// line end:   4620
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x80154CE8
// line start: 4627
// line end:   4629
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x80154D08
// line start: 4656
// line end:   4775
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


// address: 0x80154F90
// line start: 4783
// line end:   4784
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80154FD0
// line start: 4795
// line end:   4910
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


// address: 0x80155264
// line start: 5007
// line end:   5047
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


// address: 0x80155440
// line start: 5054
// line end:   5137
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x801556C4
// line start: 5144
// line end:   5170
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x801557F0
// line start: 5180
// line end:   5282
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 18
	register int newy;
	// register: 3
	// size: 0x50
	register struct MissileStruct *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							// register: 22
							register bool KnockOk;
							{
								{
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80155CB4
// line start: 5346
// line end:   5386
unsigned char PosOkMonst3__Fiii(int i, int x, int y) {
	// register: 18
	register unsigned char ret;
	// register: 3
	register int oi;
	// register: 4
	register int objtype;
	// register: 4
	register int mi;
	// register: 20
	register unsigned char fire;
	// register: 17
	register unsigned char isdoor;
}


// address: 0x80155F80
// line start: 5399
// line end:   5422
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


// address: 0x801560D8
// line start: 5438
// line end:   5471
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80156218
// line start: 5478
// line end:   5505
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x8015645C
// line start: 5512
// line end:   5517
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x8015649C
// line start: 5524
// line end:   5540
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x80156578
// line start: 5549
// line end:   5555
bool gSameRoom__Fii(int m, int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *m1;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *m2;
}


// address: 0x80156610
// line start: 5559
// line end:   5734
void MAI_Golum__Fi(int i) {
	// register: 18
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
	// register: 17
	register int md;
	// register: 30
	register int cursm;
	// address: 0xFFFFFFC0
	auto int sdata;
	// register: 23
	register int omp;
	// register: 19
	// size: 0x6C
	register struct MonsterStruct *Monst;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct *pMonster;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 2
									register int nd;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80156B3C
// line start: 5778
// line end:   5798
void M_StartAttack__Fi(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80156C2C
// line start: 5802
// line end:   5833
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 11
	register long fy;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 9
	register int _mx;
	// register: 10
	register int _my;
}


