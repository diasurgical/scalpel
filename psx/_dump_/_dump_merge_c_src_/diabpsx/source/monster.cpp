// C:\diabpsx\SOURCE\MONSTER.CPP

#include "types.h"

// address: 0x8013F328
// line start: 5203
// line end:   5208
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x8013F360
// line start: 5215
// line end:   5231
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x8013DA10
// line start: 4374
// line end:   4375
unsigned char CheckNoSolid__Fii(int x, int y) {
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


// address: 0x8013CEC8
// line start: 4062
// line end:   4085
void DeleteMonsterList__Fv_addr_8013CEC8() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x801336E8
// line start: 486
// line end:   493
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
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


// address: 0x8013D5C0
// line start: 4297
// line end:   4359
unsigned char DirOK__Fii_addr_8013D5C0(int i, int mdir) {
	// register: 17
	register long fx;
	// register: 19
	register long fy;
	// register: 3
	register int tmp;
	{
		{
			// register: 8
			register int mcount;
			{
				// register: 7
				register int x;
				{
					{
						// register: 5
						register int y;
					}
				}
			}
		}
	}
}


// address: 0x80144DCC
// line start: 1866
// line end:   1914
void DoEnding__Fv() {
}


// address: 0x80137090
// line start: 1872
// line end:   1912
void DoEnding__Fv_addr_80137090() {
	// register: 16
	register unsigned char bMusicOn;
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


// address: 0x80137880
// line start: 2108
// line end:   2184
void GroupUnity__Fi_addr_80137880(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x8013DD1C
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


// address: 0x8013DA54
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


// address: 0x8013DCDC
// line start: 4529
// line end:   4530
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x801343AC
// line start: 827
// line end:   879
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
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


// address: 0x8013492C
// line start: 956
// line end:   1019
void M2MStartKill__Fii_addr_8013492C(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 20
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


// address: 0x8013A2C0
// line start: 3075
// line end:   3076
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x8013AE48
// line start: 3345
// line end:   3346
void MAI_Acid__Fi(int i) {
}


// address: 0x80138998
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


// address: 0x80139AE4
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


// address: 0x8013BDAC
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


// address: 0x8013AE78
// line start: 3351
// line end:   3352
void MAI_Diablo__Fi(int i) {
}


// address: 0x801397C8
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


// address: 0x80138F34
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


// address: 0x801394D0
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


// address: 0x8013C278
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


// address: 0x8013A6FC
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


// address: 0x8013A278
// line start: 3065
// line end:   3066
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8013A038
// line start: 2998
// line end:   2999
void MAI_GoatMc__Fi(int i) {
}


// address: 0x8013F42C
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


// address: 0x8013CBEC
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


// address: 0x8013CACC
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


// address: 0x8013C854
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


// address: 0x8013ADF0
// line start: 3335
// line end:   3336
void MAI_Magma__Fi(int i) {
}


// address: 0x8013B3A4
// line start: 3453
// line end:   3454
void MAI_Mega__Fi(int i) {
}


// address: 0x8013F7A0
// line start: 5312
// line end:   5343
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013AEA4
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


// address: 0x8013A058
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


// address: 0x8013B904
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


// address: 0x8013A8DC
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


// address: 0x80139BCC
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


// address: 0x8013A2E4
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


// address: 0x80138D50
// line start: 2550
// line end:   2582
void MAI_SkelBow__Fi_addr_80138D50(int i) {
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 18
	register int fx;
	// register: 19
	register int fy;
	// register: 22
	register unsigned char walking;
	// register: 16
	register int v;
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013B3C8
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


// address: 0x8013841C
// line start: 2364
// line end:   2386
void MAI_SkelSd__Fi_addr_8013841C(int i) {
	// register: 17
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 16
	register int md;
}


// address: 0x801385B4
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


// address: 0x801390E4
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


// address: 0x8013C620
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


// address: 0x8013AE1C
// line start: 3340
// line end:   3341
void MAI_Storm__Fi(int i) {
}


// address: 0x8013A29C
// line start: 3070
// line end:   3071
void MAI_Succ__Fi(int i) {
}


// address: 0x8013CD7C
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


// address: 0x8013C428
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


// address: 0x80138224
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
	// register: 19
	register int md;
	// register: 21
	register int v;
}


// address: 0x80146158
// line start: 2323
// line end:   2350
void MAI_Zombie__Fi_addr_80146158(int i) {
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


// address: 0x80137F1C
// line start: 2244
// line end:   2257
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80137C6C
// line start: 2193
// line end:   2211
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x80135100
// line start: 1151
// line end:   1186
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


// address: 0x80140FB8
// line start: 1154
// line end:   1229
void M_ChangeLightOffset__Fi_addr_80140FB8(int monst) {
	// register: 5
	register int lx;
	// register: 4
	register int ly;
	// register: 6
	register int xm;
	// register: 9
	register int ym;
	// register: 2
	register int ox;
	// register: 4
	register int oy;
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 5
	register int _mxoff;
	// register: 4
	register int _myoff;
}


// address: 0x8014BC4C
// line start: 1154
// line end:   1222
void M_ChangeLightOffset__Fi_addr_8014BC4C(int monst) {
	// register: 7
	register int lx;
	// register: 6
	register int ly;
	// register: 4
	register int cx;
	// register: 3
	register int cy;
	// register: 4
	register int xm;
	// register: 5
	register int ym;
	// register: 4
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 2
	register int _mxoff;
	// register: 4
	register int _myoff;
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


// address: 0x8014ABCC
// line start: 763
// line end:   819
void M_DiabloDeath__FiUc_addr_8014ABCC(int i, unsigned char sendmsg) {
	// register: 21
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


// address: 0x80134088
// line start: 764
// line end:   820
void M_DiabloDeath__FiUc_addr_80134088(int i, unsigned char sendmsg) {
	// register: 22
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 23
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


// address: 0x80136120
// line start: 1507
// line end:   1546
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


// address: 0x80137270
// line start: 1948
// line end:   1978
int M_DoDeath__Fi_addr_80137270(int i) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 16
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x801374E4
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


// address: 0x80136700
// line start: 1632
// line end:   1641
int M_DoFadein__Fi(int i) {
}


// address: 0x801367D0
// line start: 1648
// line end:   1666
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x80137030
// line start: 1852
// line end:   1860
int M_DoGotHit__Fi(int i) {
}


// address: 0x801368E4
// line start: 1673
// line end:   1693
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801362C4
// line start: 1554
// line end:   1576
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x8013643C
// line start: 1584
// line end:   1606
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8013662C
// line start: 1614
// line end:   1624
int M_DoSAttack__Fi(int i) {
}


// address: 0x80137440
// line start: 1985
// line end:   1995
int M_DoSpStand__Fi(int i) {
}


// address: 0x801351A0
// line start: 1193
// line end:   1211
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801375D4
// line start: 2026
// line end:   2033
int M_DoStone__Fi(int i) {
}


// address: 0x80136990
// line start: 1700
// line end:   1790
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


// address: 0x8014C1D0
// line start: 1703
// line end:   1793
int M_DoTalk__Fi_addr_8014C1D0(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8013548C
// line start: 1256
// line end:   1283
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80135678
// line start: 1290
// line end:   1321
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80135208
// line start: 1218
// line end:   1249
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80138030
// line start: 2265
// line end:   2272
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8013DFB0
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


// address: 0x80133720
// line start: 512
// line end:   514
int M_GetDir__Fi(int i) {
}


// address: 0x80133BB8
// line start: 667
// line end:   696
void M_GetKnockback__Fi(int i) {
	// register: 16
	register int d;
	{
		{
			// register: 2
			// size: 0x70
			register struct MonsterStruct *pmonster;
			// register: 17
			register int _mx;
			// register: 16
			register int _my;
		}
	}
}


// address: 0x80140F64
// line start: 665
// line end:   694
void M_GetKnockback__Fi_addr_80140F64(int i) {
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


// address: 0x80137E58
// line start: 2219
// line end:   2233
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x80138084
// line start: 2279
// line end:   2311
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8013EE58
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


// address: 0x8013F904
// line start: 5347
// line end:   5367
void M_StartAttack__Fi_addr_8013F904(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8013377C
// line start: 533
// line end:   541
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x80133AE8
// line start: 644
// line end:   660
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80134DE4
// line start: 1079
// line end:   1099
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x80134F38
// line start: 1107
// line end:   1125
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x80135080
// line start: 1133
// line end:   1144
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80133D90
// line start: 703
// line end:   759
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


// address: 0x80134CF4
// line start: 1026
// line end:   1045
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x801337C4
// line start: 556
// line end:   578
void M_StartRAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80140A40
// line start: 554
// line end:   576
void M_StartRAttack__Fiii_addr_80140A40(int i, int missile_type, int dam) {
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


// address: 0x801338DC
// line start: 586
// line end:   609
void M_StartRSpAttack__Fiii(int i, int missile_type, int dam) {
	// register: 18
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
void M_StartRSpAttack__Fiii_addr_80140BA4(int i, int missile_type, int dam) {
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


// address: 0x80133A00
// line start: 616
// line end:   636
void M_StartSpAttack__Fi_addr_80133A00(int i) {
	// register: 18
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


// address: 0x8013F9EC
// line start: 5371
// line end:   5402
void M_StartWalk__Fiiiiii_addr_8013F9EC(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 9
	register long fy;
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 10
	register int _mx;
	// register: 11
	register int _my;
}


// address: 0x80136DFC
// line start: 1800
// line end:   1846
void M_Teleport__Fi(int i) {
	// register: 23
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 22
	register unsigned char done;
	// address: 0xFFFFFFC0
	auto int mulx;
	// register: 3
	register int muly;
	// register: 19
	register int x;
	// register: 20
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


// address: 0x80144A78
// line start: 1795
// line end:   1841
void M_Teleport__Fi_addr_80144A78(int i) {
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


// address: 0x801430F0
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct_dup_6 *ptrplr;
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80132F6C
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii_addr_80132F6C(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct_dup_4 *ptrplr;
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
	// size: 0x70
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
											// register: 18
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


// address: 0x8014B95C
// line start: 1374
// line end:   1504
void M_TryH2HHit__Fiiiii_addr_8014B95C(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct_dup_13 *ptrplr;
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80137864
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii_addr_80137864(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x23A8
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80135B04
// line start: 1371
// line end:   1501
void M_TryH2HHit__Fiiiii_addr_80135B04(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x22D0
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80134704
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii_addr_80134704(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x22C8
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
	// size: 0x70
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
											// register: 18
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


// address: 0x8014A050
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii_addr_8014A050(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct_dup_11 *ptrplr;
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80137E44
// line start: 1370
// line end:   1500
void M_TryH2HHit__Fiiiii_addr_80137E44(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct_dup_7 *ptrplr;
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
	// size: 0x70
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
											// register: 18
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


// address: 0x80143314
// line start: 1369
// line end:   1496
void M_TryH2HHit__Fiiiii_addr_80143314(int i, int pnum, int Hit, int MinDam, int MaxDam) {
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


// address: 0x8013593C
// line start: 1328
// line end:   1365
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80137658
// line start: 2040
// line end:   2099
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8013E4CC
// line start: 4902
// line end:   4983
void MissToMonst__Fiii(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 17
	register int newx;
	// register: 18
	register int newy;
	// register: 5
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


// address: 0x80155260
// line start: 4993
// line end:   5079
void MissToMonst__Fiii_addr_80155260(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 17
	register int newx;
	// register: 18
	register int newy;
	// register: 7
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


// address: 0x8014C858
// line start: 4902
// line end:   4983
void MissToMonst__Fiii_addr_8014C858(int i, int x, int y) {
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


// address: 0x8013B8F8
// line start: 4900
// line end:   4981
void MissToMonst__Fiii_addr_8013B8F8(int i, int x, int y) {
	// register: 20
	register int oldx;
	// register: 21
	register int oldy;
	// register: 16
	register int newx;
	// register: 17
	register int newy;
	// register: 5
	// size: 0x50
	register struct MissileStruct *Miss;
	// register: 17
	register int m;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 18
	register int pnum;
}


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
	register struct CBlocks_dup_1 *gblocks;
}


// address: 0x801309C4
// line start: 447
// line end:   466
void MonstPartJump__Fi_addr_801309C4(int m) {
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
	// size: 0xE0
	register struct CBlocks_dup_4 *gblocks;
}


// address: 0x8014A098
// line start: 447
// line end:   466
void MonstPartJump__Fi_addr_8014A098(int m) {
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
	// size: 0xE0
	register struct CBlocks_dup_14 *gblocks;
}


// address: 0x80133554
// line start: 448
// line end:   467
void MonstPartJump__Fi_addr_80133554(int m) {
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
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80134658
// line start: 885
// line end:   949
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


// address: 0x8013D9A8
// line start: 4366
// line end:   4367
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x8013E948
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


// address: 0x8013EB64
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


// address: 0x8013714C
// line start: 1919
// line end:   1941
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80152338
// line start: 4799
// line end:   4882
void PrintMonstHistory__Fi(int mt) {
	// register: 17
	register int res;
}


// address: 0x8013E180
// line start: 4800
// line end:   4859
void PrintMonstHistory__Fi_addr_8013E180(int mt) {
	// register: 16
	register int res;
}


// address: 0x8013E3A8
// line start: 4866
// line end:   4892
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x8013CFE4
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


// address: 0x8013A414
// line start: 4091
// line end:   4286
void ProcessMonsters__Fv_addr_8013A414() {
	// register: 23
	register int i;
	// register: 18
	register int mi;
	// register: 19
	register int raflag;
	// register: 20
	register int mx;
	// register: 22
	register int my;
	// register: 21
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


// address: 0x8013F30C
// line start: 4091
// line end:   4286
void ProcessMonsters__Fv_addr_8013F30C() {
	// register: 23
	register int i;
	// register: 17
	register int mi;
	// register: 18
	register int raflag;
	// register: 21
	register int mx;
	// register: 22
	register int my;
	// register: 19
	register int _menemy;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
	// register: 3
	register int oldmode;
}


// address: 0x8013F0D0
// line start: 5171
// line end:   5196
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x8013EFB0
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


// address: 0x80154AC4
// line start: 4546
// line end:   4611
unsigned char DirOK__Fii_addr_80154AC4(int i, int mdir) {
	// register: 16
	register long fx;
	// register: 17
	register long fy;
}


// address: 0x8014E5C0
// line start: 2009
// line end:   2054
void DoEnding__Fi(int p) {
}


// address: 0x8014EDE0
// line start: 2267
// line end:   2343
void GroupUnity__Fi_addr_8014EDE0(int i) {
	// register: 19
	register int leader;
	// register: 3
	register int tmp;
	// register: 5
	register int m;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	// register: 22
	register int _mx;
	// register: 21
	register int _my;
}


// address: 0x8014ECD8
// line start: 2267
// line end:   2343
void GroupUnity__Fi_addr_8014ECD8(int i) {
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


// address: 0x8014B288
// line start: 809
// line end:   861
void M2MStartHit__Fiii_addr_8014B288(int mid, int i, int dam) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014B390
// line start: 809
// line end:   861
void M2MStartHit__Fiii_addr_8014B390(int mid, int i, int dam) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014BAAC
// line start: 996
// line end:   1059
void M2MStartKill__Fii_addr_8014BAAC(int i, int mid) {
	// register: 6
	register int md;
	// register: 23
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
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


// address: 0x8014B9A4
// line start: 996
// line end:   1059
void M2MStartKill__Fii_addr_8014B9A4(int i, int mid) {
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


// address: 0x8014FDEC
// line start: 2634
// line end:   2707
void MAI_Bat__Fi_addr_8014FDEC(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x8014FCE4
// line start: 2634
// line end:   2707
void MAI_Bat__Fi_addr_8014FCE4(int i) {
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


// address: 0x80150F74
// line start: 3063
// line end:   3083
void MAI_Cleaver__Fi_addr_80150F74(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x80150E6C
// line start: 3063
// line end:   3083
void MAI_Cleaver__Fi_addr_80150E6C(int i) {
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


// address: 0x801530D0
// line start: 3834
// line end:   3928
void MAI_Counselor__Fi_addr_801530D0(int i, unsigned char counsmiss[4], int _mx, int _my) {
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


// address: 0x801531D8
// line start: 3834
// line end:   3928
void MAI_Counselor__Fi_addr_801531D8(int i, unsigned char counsmiss[4], int _mx, int _my) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150C5C
// line start: 2977
// line end:   3055
void MAI_Fallen__Fi_addr_80150C5C(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x80150B54
// line start: 2977
// line end:   3055
void MAI_Fallen__Fi_addr_80150B54(int i) {
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


// address: 0x8015029C
// line start: 2760
// line end:   2787
void MAI_Fat__Fi_addr_8015029C(int i) {
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


// address: 0x801503A4
// line start: 2760
// line end:   2787
void MAI_Fat__Fi_addr_801503A4(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150848
// line start: 2889
// line end:   2965
void MAI_Fireman__Fi_addr_80150848(int i) {
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


// address: 0x80150950
// line start: 2889
// line end:   2965
void MAI_Fireman__Fi_addr_80150950(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8015357C
// line start: 3936
// line end:   3975
void MAI_Garbud__Fi_addr_8015357C(int i) {
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


// address: 0x80153684
// line start: 3936
// line end:   3975
void MAI_Garbud__Fi_addr_80153684(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80151B34
// line start: 3357
// line end:   3397
void MAI_Garg__Fi_addr_80151B34(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
}


// address: 0x80151A2C
// line start: 3357
// line end:   3397
void MAI_Garg__Fi_addr_80151A2C(int i) {
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


// address: 0x80156508
// line start: 5559
// line end:   5734
void MAI_Golum__Fi_addr_80156508(int i) {
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


// address: 0x80156610
// line start: 5559
// line end:   5734
void MAI_Golum__Fi_addr_80156610(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
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


// address: 0x801540BC
// line start: 4178
// line end:   4212
void MAI_Lachdanan__Fi_addr_801540BC(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x80153FB4
// line start: 4178
// line end:   4212
void MAI_Lachdanan__Fi_addr_80153FB4(int i) {
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


// address: 0x80153E7C
// line start: 4137
// line end:   4171
void MAI_Lazhelp__Fi_addr_80153E7C(int i) {
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


// address: 0x80153F84
// line start: 4137
// line end:   4171
void MAI_Lazhelp__Fi_addr_80153F84(int i) {
	// register: 4
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 19
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x80153BD8
// line start: 4077
// line end:   4129
void MAI_Lazurus__Fi_addr_80153BD8(int i) {
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


// address: 0x80153CE0
// line start: 4077
// line end:   4129
void MAI_Lazurus__Fi_addr_80153CE0(int i) {
	// register: 17
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x801522C4
// line start: 3527
// line end:   3619
void MAI_RR2__Fiii_addr_801522C4(int i, int mistype, int dam) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801521BC
// line start: 3527
// line end:   3619
void MAI_RR2__Fiii_addr_801521BC(int i, int mistype, int dam) {
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


// address: 0x801514DC
// line start: 3177
// line end:   3230
void MAI_Ranged__FiiUc_addr_801514DC(int i, int missile_type, unsigned char special) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801513D4
// line start: 3177
// line end:   3230
void MAI_Ranged__FiiUc_addr_801513D4(int i, int missile_type, unsigned char special) {
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


// address: 0x80152C10
// line start: 3739
// line end:   3825
void MAI_Rhino__Fi_addr_80152C10(int i) {
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


// address: 0x80152D18
// line start: 3739
// line end:   3825
void MAI_Rhino__Fi_addr_80152D18(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x80151D14
// line start: 3410
// line end:   3501
void MAI_RoundRanged__FiiUciUc_addr_80151D14(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80151C0C
// line start: 3410
// line end:   3501
void MAI_RoundRanged__FiiUciUc_addr_80151C0C(int i, int missile_type, unsigned char checkdoors, int dam, int lessmissiles) {
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


// address: 0x80151078
// line start: 3091
// line end:   3164
void MAI_Round__FiUc_addr_80151078(int i, unsigned char special) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80150F70
// line start: 3091
// line end:   3164
void MAI_Round__FiUc_addr_80150F70(int i, unsigned char special) {
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


// address: 0x80151770
// line start: 3261
// line end:   3347
void MAI_Scav__Fi_addr_80151770(int i) {
	// register: 18
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 19
	register unsigned char done;
}


// address: 0x80151668
// line start: 3261
// line end:   3347
void MAI_Scav__Fi_addr_80151668(int i) {
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


// address: 0x801501A8
// line start: 2716
// line end:   2752
void MAI_SkelBow__Fi_addr_801501A8(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x801500A0
// line start: 2716
// line end:   2752
void MAI_SkelBow__Fi_addr_801500A0(int i) {
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


// address: 0x801527D0
// line start: 3632
// line end:   3730
void MAI_SkelKing__Fi_addr_801527D0(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x801526C8
// line start: 3632
// line end:   3730
void MAI_SkelKing__Fi_addr_801526C8(int i) {
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


// address: 0x8014F83C
// line start: 2525
// line end:   2551
void MAI_SkelSd__Fi_addr_8014F83C(int i) {
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int mx;
	// register: 19
	register int my;
	// register: 16
	register int md;
}


// address: 0x8014F734
// line start: 2525
// line end:   2551
void MAI_SkelSd__Fi_addr_8014F734(int i) {
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
void MAI_Snake__Fi_addr_8014F9F0(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x8014F8E8
// line start: 2563
// line end:   2626
void MAI_Snake__Fi_addr_8014F8E8(int i) {
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


// address: 0x80150570
// line start: 2796
// line end:   2878
void MAI_Sneak__Fi_addr_80150570(int i) {
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
	register struct MonsterStruct_dup_17 *Monst;
	// register: 23
	register int dist;
}


// address: 0x80150468
// line start: 2796
// line end:   2878
void MAI_Sneak__Fi_addr_80150468(int i) {
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


// address: 0x80153A90
// line start: 4024
// line end:   4069
void MAI_SnotSpil__Fi_addr_80153A90(int i) {
	// register: 20
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x80153988
// line start: 4024
// line end:   4069
void MAI_SnotSpil__Fi_addr_80153988(int i) {
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


// address: 0x80154164
// line start: 4220
// line end:   4254
void MAI_Warlord__Fi_addr_80154164(int i) {
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


// address: 0x8015426C
// line start: 4220
// line end:   4254
void MAI_Warlord__Fi_addr_8015426C(int i) {
	// register: 18
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x80153894
// line start: 3983
// line end:   4016
void MAI_Zhar__Fi_addr_80153894(int i) {
	// register: 20
	register int mx;
	// register: 18
	register int my;
	// register: 21
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 16
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8015378C
// line start: 3983
// line end:   4016
void MAI_Zhar__Fi_addr_8015378C(int i) {
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


// address: 0x8014F638
// line start: 2482
// line end:   2516
void MAI_Zombie__Fi_addr_8014F638(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 17
	register int mx;
	// register: 19
	register int my;
	// register: 20
	register int md;
	// register: 22
	register int v;
}


// address: 0x8014F530
// line start: 2482
// line end:   2516
void MAI_Zombie__Fi_addr_8014F530(int i) {
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


// address: 0x8014F39C
// line start: 2403
// line end:   2416
unsigned char M_CallWalk2__Fii_addr_8014F39C(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014C3B8
// line start: 1188
// line end:   1259
void M_ChangeLightOffset__Fi_addr_8014C3B8(int monst) {
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
	register struct MonsterStruct_dup_17 *pmonster;
}


// address: 0x8014C2B0
// line start: 1188
// line end:   1259
void M_ChangeLightOffset__Fi_addr_8014C2B0(int monst) {
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


// address: 0x8014AF60
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


// address: 0x8014B068
// line start: 744
// line end:   802
void M_DiabloDeath__FiUci_addr_8014B068(int i, unsigned char sendmsg, int pnum) {
	// register: 22
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 30
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
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


// address: 0x8014D4D8
// line start: 1627
// line end:   1666
int M_DoAttack__Fi_addr_8014D4D8(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 21
	register unsigned char mMinDamage;
	// register: 19
	register unsigned char mMaxDamage;
	// register: 20
	register unsigned char mHit;
	// register: 18
	register int _menemy;
}


// address: 0x8014D3D0
// line start: 1627
// line end:   1666
int M_DoAttack__Fi_addr_8014D3D0(int i) {
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


// address: 0x8014E7B0
// line start: 2090
// line end:   2133
int M_DoDeath__Fi_addr_8014E7B0(int i) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pMonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
	{
		{
		}
	}
}


// address: 0x8014E6A8
// line start: 2090
// line end:   2133
int M_DoDeath__Fi_addr_8014E6A8(int i) {
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


// address: 0x8014DCFC
// line start: 1793
// line end:   1813
int M_DoHeal__Fi_addr_8014DCFC(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014DBF4
// line start: 1793
// line end:   1813
int M_DoHeal__Fi_addr_8014DBF4(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C520
// line start: 1268
// line end:   1287
int M_DoStand__Fi_addr_8014C520(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014C418
// line start: 1268
// line end:   1287
int M_DoStand__Fi_addr_8014C418(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014DD98
// line start: 1820
// line end:   1927
int M_DoTalk__Fi_addr_8014DD98(int i) {
	// register: 16
	register int tren;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 20
	register int _mx;
	// register: 21
	register int _my;
	// register: 19
	register int mName;
}


// address: 0x8014DC90
// line start: 1820
// line end:   1927
int M_DoTalk__Fi_addr_8014DC90(int i) {
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


// address: 0x8014AB64
// line start: 614
// line end:   674
void M_GetKnockback__Fii(int i, int d) {
	{
		{
			// register: 19
			// size: 0x6C
			register struct MonsterStruct_dup_17 *pmonster;
			// register: 18
			register int _mx;
			// register: 17
			register int _my;
		}
	}
}


// address: 0x8014AA5C
// line start: 614
// line end:   674
void M_GetKnockback__Fii_addr_8014AA5C(int i, int d) {
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


// address: 0x80156B3C
// line start: 5778
// line end:   5798
void M_StartAttack__Fi_addr_80156B3C(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80156A34
// line start: 5778
// line end:   5798
void M_StartAttack__Fi_addr_80156A34(int i) {
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


// address: 0x8014A984
// line start: 591
// line end:   607
void M_StartEat__Fi_addr_8014A984(int i) {
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
void M_StartEat__Fi_addr_8014AA8C(int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014C328
// line start: 1169
// line end:   1181
void M_StartHeal__Fi_addr_8014C328(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x8014C220
// line start: 1169
// line end:   1181
void M_StartHeal__Fi_addr_8014C220(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014AD80
// line start: 681
// line end:   739
void M_StartHit__Fiii_addr_8014AD80(int i, int pnum, int dam) {
	{
		{
			// register: 2
			// size: 0x6C
			register struct MonsterStruct_dup_17 *pmonster;
			// register: 17
			register int _moldx;
			// register: 16
			register int _moldy;
		}
	}
}


// address: 0x8014AC78
// line start: 681
// line end:   739
void M_StartHit__Fiii_addr_8014AC78(int i, int pnum, int dam) {
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


// address: 0x8014BE74
// line start: 1066
// line end:   1085
void M_StartKill__Fii_addr_8014BE74(int i, int pnum) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014BD6C
// line start: 1066
// line end:   1085
void M_StartKill__Fii_addr_8014BD6C(int i, int pnum) {
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014A708
// line start: 501
// line end:   523
void M_StartRAttack__Fiii_addr_8014A708(int i, int missile_type, int dam) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x8014A600
// line start: 501
// line end:   523
void M_StartRAttack__Fiii_addr_8014A600(int i, int missile_type, int dam) {
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


// address: 0x8014A720
// line start: 531
// line end:   556
void M_StartRSpAttack__Fiii_addr_8014A720(int i, int missile_type, int dam) {
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


// address: 0x8014A828
// line start: 531
// line end:   556
void M_StartRSpAttack__Fiii_addr_8014A828(int i, int missile_type, int dam) {
	// register: 21
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014A894
// line start: 563
// line end:   583
void M_StartSpAttack__Fi_addr_8014A894(int i) {
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


// address: 0x8014A99C
// line start: 563
// line end:   583
void M_StartSpAttack__Fi_addr_8014A99C(int i) {
	// register: 18
	register int md;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80156C2C
// line start: 5802
// line end:   5833
void M_StartWalk__Fiiiiii_addr_80156C2C(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
	// register: 8
	register long fx;
	// register: 11
	register long fy;
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
	// register: 9
	register int _mx;
	// register: 10
	register int _my;
}


// address: 0x80156B24
// line start: 5802
// line end:   5833
void M_StartWalk__Fiiiiii_addr_80156B24(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
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


// address: 0x8014BF6C
// line start: 1092
// line end:   1109
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}


// address: 0x8014E33C
// line start: 1937
// line end:   1983
void M_Teleport__Fi_addr_8014E33C(int i) {
	// register: 21
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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


// address: 0x8014E234
// line start: 1937
// line end:   1983
void M_Teleport__Fi_addr_8014E234(int i) {
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


// address: 0x8014CDB8
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii_addr_8014CDB8(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct_dup_18 *ptrplr;
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
													register struct PlayerStruct_dup_18 *plr2;
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


// address: 0x8014CEC0
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii_addr_8014CEC0(int i, int pnum, int Hit, int MinDam, int MaxDam) {
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct_dup_17 *ptrplr;
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
	register struct MonsterStruct_dup_17 *pMonster;
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
													register struct PlayerStruct_dup_17 *plr2;
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


// address: 0x80148730
// line start: 1471
// line end:   1621
void M_TryH2HHit__Fiiiii_addr_80148730(int i, int pnum, int Hit, int MinDam, int MaxDam) {
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


// address: 0x8014CC80
// line start: 1420
// line end:   1465
void M_TryM2MHit__Fiiiii_addr_8014CC80(int i, int mid, int hper, int mind, int maxd) {
	// register: 19
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80151060
// line start: 5180
// line end:   5282
void MissToMonst__Fiii_addr_80151060(int i, int x, int y) {
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


// address: 0x801556E8
// line start: 5180
// line end:   5282
void MissToMonst__Fiii_addr_801556E8(int i, int x, int y) {
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
									register struct PlayerStruct_dup_18 *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_18 *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801557F0
// line start: 5180
// line end:   5282
void MissToMonst__Fiii_addr_801557F0(int i, int x, int y) {
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
	register struct MissileStruct_dup_17 *Miss;
	// register: 18
	register int m;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
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
									register struct PlayerStruct_dup_17 *ptrplr;
									// register: 5
									// size: 0x19E8
									register struct PlayerStruct_dup_17 *plr2;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8014B64C
// line start: 867
// line end:   943
void MonstStartKill__FiiUc_addr_8014B64C(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 17
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *pmonster;
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


// address: 0x8014B544
// line start: 867
// line end:   943
void MonstStartKill__FiiUc_addr_8014B544(int i, int pnum, unsigned char sendmsg) {
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


// address: 0x80155CB4
// line start: 5346
// line end:   5386
unsigned char PosOkMonst3__Fiii_addr_80155CB4(int i, int x, int y) {
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


// address: 0x8014E668
// line start: 2060
// line end:   2083
void PrepDoEnding__Fi(int pnum) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x801544F8
// line start: 4293
// line end:   4537
void ProcessMonsters__Fv_addr_801544F8(unsigned int WipeCount, bool DoWipe, struct MonsterStruct_dup_17 *Monst, int oldmode) {
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


// address: 0x801543F0
// line start: 4293
// line end:   4537
void ProcessMonsters__Fv_addr_801543F0(unsigned int WipeCount, bool DoWipe, struct MonsterStruct *Monst, int oldmode) {
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


// address: 0x8014B958
// line start: 950
// line end:   989
void SyncMonstStartKill__FiiUc(int i, int pnum, unsigned char sendmsg) {
	// register: 2
	register int md;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
	// register: 18
	register int _mx;
	// register: 19
	register int _my;
}


// address: 0x8014B850
// line start: 950
// line end:   989
void SyncMonstStartKill__FiiUc_addr_8014B850(int i, int pnum, unsigned char sendmsg) {
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


// address: 0x801560D8
// line start: 5438
// line end:   5471
void TalktoMonster__Fi_addr_801560D8(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct_dup_17 *Monst;
}


// address: 0x80155FD0
// line start: 5438
// line end:   5471
void TalktoMonster__Fi_addr_80155FD0(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x80156578
// line start: 5549
// line end:   5555
bool gSameRoom__Fii(int m, int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct_dup_17 *m1;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct_dup_17 *m2;
}


// address: 0x80156470
// line start: 5549
// line end:   5555
bool gSameRoom__Fii_addr_80156470(int m, int i) {
	// register: 2
	// size: 0x6C
	register struct MonsterStruct *m1;
	// register: 3
	// size: 0x6C
	register struct MonsterStruct *m2;
}


