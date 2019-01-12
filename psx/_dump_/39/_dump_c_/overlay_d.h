#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80139D4C
// line start: 63
// line end:   66
void GameOnlyTestRoutine__Fv() {
}


// address: 0x80139D54
// line start: 274
// line end:   425
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x8013A34C
// line start: 443
// line end:   463
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 20
	register int coll;
}


// address: 0x8013A400
// line start: 469
// line end:   491
int FindClosest__Fiii(int sx, int sy, int rad) {
	// register: 19
	register int cr;
	// register: 2
	register int cidx;
	// register: 17
	register int cent;
	// register: 18
	register int cne;
	// register: 16
	register int mid;
	// register: 6
	register int tx;
	// register: 7
	register int ty;
	// address: 0xFFFFFF90
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x8013A58C
// line start: 498
// line end:   508
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x8013A600
// line start: 530
// line end:   570
int GetDirection8__Fiiii(int x1, int y1, int x2, int y2) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto unsigned char Dirs[16][16];
	// address: 0xFFFFFFB8
	// size: 0x3
	auto unsigned char lrtoul[3];
	// address: 0xFFFFFFC0
	// size: 0x3
	auto unsigned char urtoll[3];
	// address: 0xFFFFFFC8
	// size: 0x3
	auto unsigned char lltour[3];
	// address: 0xFFFFFFD0
	// size: 0x3
	auto unsigned char ultolr[3];
	// register: 16
	register int mx;
	// register: 3
	register int my;
	// register: 3
	register int md;
}


// address: 0x8013A81C
// line start: 576
// line end:   616
int GetDirection16__Fiiii(int x1, int y1, int x2, int y2) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto unsigned char Dirs[16][16];
	// address: 0xFFFFFFB8
	// size: 0x5
	auto unsigned char lrtoul[5];
	// address: 0xFFFFFFC0
	// size: 0x5
	auto unsigned char urtoll[5];
	// address: 0xFFFFFFC8
	// size: 0x5
	auto unsigned char lltour[5];
	// address: 0xFFFFFFD0
	// size: 0x5
	auto unsigned char ultolr[5];
	// register: 16
	register int mx;
	// register: 3
	register int my;
	// register: 3
	register int md;
}


// address: 0x8013AA38
// line start: 622
// line end:   630
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x8013AAD0
// line start: 637
// line end:   648
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x8013AC84
// line start: 656
// line end:   705
void PutMissile__Fi(int i) {
	// register: 8
	register int mx;
	// register: 9
	register int my;
	// register: 4
	register char m;
	{
		{
			{
				{
					// register: 5
					register char dMiss;
				}
			}
		}
	}
}


// address: 0x8013AEB8
// line start: 719
// line end:   750
void GetMissilePos__Fi(int i) {
	// register: 8
	register long mx;
	// register: 10
	register long my;
	// register: 5
	register long dx;
	// register: 6
	register long dy;
	// register: 11
	register long lx;
	// register: 9
	register long ly;
}


// address: 0x8013AFE0
// line start: 761
// line end:   818
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8013B148
// line start: 826
// line end:   899
unsigned char MonsterTrapHit__FiiiiiUc(int m, int mindam, int maxdam, int dist, int t, int shift) {
	// register: 19
	register int hit;
	// register: 16
	register int hper;
	// register: 6
	register long dam;
	// register: 4
	register int mor;
	// register: 5
	register int mir;
	// register: 20
	register unsigned char resist;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8013B4D4
// line start: 906
// line end:   1023
unsigned char MonsterMHit__FiiiiiiUc(int pnum, int m, int mindam, int maxdam, int dist, int t, int shift) {
	// register: 21
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register long dam;
	// register: 4
	register int mor;
	// register: 5
	register int mir;
	// register: 23
	register unsigned char resist;
	// address: 0xFFFFFFC8
	auto unsigned char ret;
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
											{
												{
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


// address: 0x8013BC9C
// line start: 1030
// line end:   1155
unsigned char PlayerMHit__FiiiiiiUcUc(int pnum, int m, int dist, int mind, int maxd, int mtype, int shift, int earflag) {
	// address: 0xFFFFFFD0
	auto int hit;
	// register: 17
	register int hper;
	// register: 4
	register int tac;
	// register: 5
	register long dam;
	// register: 21
	register int blk;
	// register: 20
	register int blkper;
	// register: 2
	register int blkdir;
	// register: 19
	register int resper;
}


// address: 0x8013C704
// line start: 1162
// line end:   1254
unsigned char Plr2PlrMHit__FiiiiiiUc(int pnum, int p, int mindam, int maxdam, int dist, int mtype, int shift) {
	// register: 7
	register int hit;
	// register: 6
	register int hper;
	// register: 5
	register int tac;
	// register: 16
	register long dam;
	// register: 21
	register int blk;
	// register: 20
	register int blkper;
	// register: 23
	register int resper;
}


// address: 0x8013CEB8
// line start: 1261
// line end:   1355
void CheckMissileCol__FiiiUciiUcb(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel, bool HurtPlr) {
	// register: 5
	register int oi;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 30
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x8013D3E0
// line start: 1358
// line end:   1372
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x8013D474
// line start: 1378
// line end:   1397
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x8013D544
// line start: 1402
// line end:   1405
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8013D588
// line start: 1558
// line end:   1584
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D768
// line start: 1591
// line end:   1610
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x8013D924
// line start: 1616
// line end:   1635
void GetVileMissPos__Fiii(int mi, int dx, int dy) {
	// register: 17
	register int xx;
	// register: 20
	register int yy;
	{
		// register: 18
		register int l;
		{
			{
				// register: 19
				register int j;
				{
					{
						// register: 16
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8013DA48
// line start: 1646
// line end:   1698
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int r1;
	// register: 18
	register int r2;
	// register: 17
	register unsigned char dirok;
	// register: 20
	register int nTries;
	{
		{
			// register: 3
			register int oi;
		}
	}
}


// address: 0x8013DD78
// line start: 1709
// line end:   1749
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x8013DF98
// line start: 1757
// line end:   1771
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E0AC
// line start: 1791
// line end:   1828
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFC0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013E2D0
// line start: 1836
// line end:   1852
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E42C
// line start: 1858
// line end:   1874
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8013E614
// line start: 1883
// line end:   1921
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x8013E870
// line start: 1929
// line end:   1940
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E958
// line start: 1944
// line end:   1971
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EB20
// line start: 1980
// line end:   2004
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013ED34
// line start: 2010
// line end:   2024
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EE1C
// line start: 2028
// line end:   2046
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 19
	register int i;
}


// address: 0x8013EFC4
// line start: 2050
// line end:   2123
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 30
	register int k;
	// register: 2
	register int l;
	// register: 23
	register int j;
	// register: 19
	register int tx;
	// register: 20
	register int ty;
	// register: 3
	register int mx;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
	// register: 16
	register int omp;
}


// address: 0x8013F414
// line start: 2130
// line end:   2149
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F62C
// line start: 2158
// line end:   2185
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F80C
// line start: 2189
// line end:   2199
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F8D4
// line start: 2208
// line end:   2220
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FA30
// line start: 2225
// line end:   2284
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int j;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013FE74
// line start: 2287
// line end:   2294
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FED0
// line start: 2430
// line end:   2468
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x8014004C
// line start: 2506
// line end:   2551
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8014034C
// line start: 2559
// line end:   2571
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140458
// line start: 2641
// line end:   2665
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int monst;
}


// address: 0x80140538
// line start: 2669
// line end:   2731
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 6
	register int i;
	// register: 8
	register int j;
	// register: 10
	register int k;
	// register: 2
	register int l;
	// register: 9
	register int tx;
	// register: 11
	register int ty;
	// register: 4
	register int mid;
	// address: 0xFFFFFFE0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80140844
// line start: 2745
// line end:   2790
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
	{
		// register: 21
		register int k;
		{
			// register: 2
			register int l;
			// register: 20
			register int j;
			{
				{
					// register: 17
					register int tx;
					// register: 18
					register int ty;
				}
			}
		}
	}
}


// address: 0x80140B68
// line start: 2869
// line end:   2880
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140BFC
// line start: 2886
// line end:   2905
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80140E24
// line start: 2913
// line end:   2919
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140E8C
// line start: 2927
// line end:   2957
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x801410B8
// line start: 2965
// line end:   2974
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141154
// line start: 2982
// line end:   3030
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 21
	register int i;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFFB0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x801413F8
// line start: 3033
// line end:   3042
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x801414F4
// line start: 3049
// line end:   3057
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141578
// line start: 3064
// line end:   3081
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x80141790
// line start: 3104
// line end:   3113
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141840
// line start: 3121
// line end:   3130
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801418F0
// line start: 3138
// line end:   3144
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141958
// line start: 3153
// line end:   3180
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80141BB4
// line start: 3184
// line end:   3213
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x80141DD8
// line start: 3221
// line end:   3238
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141EC8
// line start: 3245
// line end:   3280
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x801420C4
// line start: 3289
// line end:   3313
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x80142284
// line start: 3322
// line end:   3330
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801422F8
// line start: 3334
// line end:   3344
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142380
// line start: 3351
// line end:   3357
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801423E8
// line start: 3365
// line end:   3402
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801425E4
// line start: 3412
// line end:   3431
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int m2;
	{
		{
			// register: 2
			// size: 0x50
			register struct MissileStruct *miss;
		}
	}
}


// address: 0x80142704
// line start: 3435
// line end:   3446
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int pnum;
}


// address: 0x80142840
// line start: 3451
// line end:   3525
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
	// address: 0xFFFFFF98
	// size: 0x40
	auto int xyoffs[16];
}


// address: 0x80142CAC
// line start: 3561
// line end:   3581
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x80142E84
// line start: 3587
// line end:   3588
void MI_Dummy__Fi(int i) {
}


// address: 0x80142E8C
// line start: 3591
// line end:   3622
void MI_Golem__Fi(int i) {
	// register: 30
	register int id;
	// register: 19
	register int j;
	// register: 22
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int m;
	// register: 17
	register int tx;
	// register: 18
	register int ty;
	// address: 0xFFFFFFC0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x801430EC
// line start: 3627
// line end:   3630
void MI_SetManashield__Fi(int i) {
}


// address: 0x80143128
// line start: 3635
// line end:   3721
void MI_LArrow__Fi(int i) {
	// register: 17
	register int p;
	// register: 18
	register int mind;
	// register: 6
	register int maxd;
	// register: 20
	register int rst;
}


// address: 0x801438FC
// line start: 3725
// line end:   3750
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x80143B2C
// line start: 3754
// line end:   3852
void MI_Firebolt__Fi(int i) {
	// register: 20
	register int omx;
	// register: 21
	register int omy;
	// register: 19
	register int d;
	// register: 17
	register int p;
}


// address: 0x80144208
// line start: 3855
// line end:   3883
void MI_Lightball__Fi(int i) {
	// register: 20
	register int j;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 3
	register int oi;
}


// address: 0x801444A0
// line start: 3901
// line end:   3926
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x801445B8
// line start: 3930
// line end:   3966
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x801448B8
// line start: 3971
// line end:   4067
void MI_Fireball__Fi(int i) {
	// register: 18
	register int dam;
	// register: 23
	register int px;
	// register: 22
	register int py;
	// register: 4
	register int id;
	// register: 19
	register int mx;
	// register: 20
	register int my;
}


// address: 0x801451E0
// line start: 4070
// line end:   4137
void MI_Lightctrl__Fi(int i) {
	// register: 19
	register int dam;
	// register: 3
	register int p;
	// register: 16
	register int mx;
	// register: 18
	register int my;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145594
// line start: 4140
// line end:   4159
void MI_Lightning__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145684
// line start: 4166
// line end:   4216
void MI_Town__Fi(int i) {
	// register: 4
	register int p;
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 5
			// size: 0x19E8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x801459C4
// line start: 4219
// line end:   4252
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145D30
// line start: 4257
// line end:   4282
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145F04
// line start: 4288
// line end:   4379
void MI_Manashield__Fi(int i, int xoffset[8][3]) {
	// register: 3
	register int j;
	// register: 18
	register int id;
	// register: 5
	register long diff;
	// register: 4
	register long pct;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x801461FC
// line start: 4426
// line end:   4469
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80146498
// line start: 4473
// line end:   4540
void MI_Guardian__Fi(int i) {
	// register: 18
	register int j;
	// register: 22
	register int k;
	// register: 30
	register int sx1;
	// register: 23
	register int sy1;
	// register: 3
	register int ex;
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80146748
// line start: 4545
// line end:   4581
void MI_Chain__Fi(int i) {
	// register: 20
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 23
	register int sx;
	// register: 22
	register int sy;
	// address: 0xFFFFFFD0
	auto int id;
	// register: 18
	register int l;
	// register: 2
	register int n;
	// register: 21
	register int m;
	// register: 19
	register int k;
	// register: 30
	register int rad;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFF80
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x801469A4
// line start: 4674
// line end:   4715
void MI_Weapexp__Fi(int i) {
	// register: 4
	register int id;
	// register: 7
	register int mind;
	// register: 6
	register int maxd;
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x80146CE8
// line start: 4718
// line end:   4770
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x80146FE8
// line start: 4773
// line end:   4794
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x8014718C
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x801474F0
// line start: 4964
// line end:   4991
void MI_Stone__Fi(int i) {
	// register: 4
	register int m;
}


// address: 0x801476AC
// line start: 4997
// line end:   5004
void MI_Boom__Fi(int i) {
}


// address: 0x801477A8
// line start: 5008
// line end:   5081
void MI_Rhino__Fi(int i) {
	// register: 16
	register int mix;
	// register: 17
	register int miy;
	// register: 23
	register int mix2;
	// register: 22
	register int miy2;
	// register: 21
	register int omx;
	// register: 30
	register int omy;
	// register: 18
	register int monst;
}


// address: 0x80147B98
// line start: 5163
// line end:   5199
void MI_FirewallC__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 18
	register int tx;
	// register: 19
	register int ty;
	// register: 17
	register int id;
}


// address: 0x80147DC0
// line start: 5205
// line end:   5213
void MI_Infra__Fi(int i) {
}


// address: 0x80147E78
// line start: 5219
// line end:   5244
void MI_Apoca__Fi(int i) {
	// register: 18
	register int j;
	// register: 17
	register int k;
	// register: 21
	register int id;
	// register: 20
	register unsigned char exit;
}


// address: 0x801480F0
// line start: 5249
// line end:   5305
void MI_Wave__Fi(int i) {
	// address: 0xFFFFFF88
	auto int dira;
	// address: 0xFFFFFF90
	auto int dirb;
	// register: 17
	register int nxa;
	// register: 16
	register int nya;
	// register: 20
	register int nxb;
	// register: 18
	register int nyb;
	// register: 2
	register int sd;
	// register: 21
	register int j;
	// address: 0xFFFFFF98
	auto int f1;
	// address: 0xFFFFFFA0
	auto int f2;
	// register: 22
	register int id;
	// register: 30
	register int sx;
	// address: 0xFFFFFFA8
	auto int sy;
}


// address: 0x80148564
// line start: 5312
// line end:   5357
void MI_Nova__Fi(int i) {
	// address: 0xFFFFFFD0
	auto int k;
	// register: 21
	register int id;
	// register: 19
	register int sx;
	// register: 18
	register int sy;
	// register: 22
	register int dir;
	// register: 2
	register int en;
	// register: 4
	register int sx1;
	// register: 5
	register int sy1;
	// register: 30
	register int dam;
}


// address: 0x80148824
// line start: 5422
// line end:   5445
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x80148A28
// line start: 5450
// line end:   5477
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
}


// address: 0x80148C8C
// line start: 5482
// line end:   5524
void MI_Cbolt__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x40
	auto int bpath[16];
	// register: 5
	register int sx;
	// register: 6
	register int sy;
	// register: 2
	register int dy;
	// register: 2
	register int md;
}


// address: 0x80148FBC
// line start: 5529
// line end:   5566
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x801492D0
// line start: 5571
// line end:   5651
void MI_Element__Fi(int i) {
	// register: 2
	register int mid;
	// register: 16
	register int sd;
	// register: 18
	register int dam;
	// register: 19
	register int cx;
	// register: 21
	register int cy;
	// register: 17
	register int px;
	// register: 22
	register int py;
	// register: 17
	register int id;
}


// address: 0x801499BC
// line start: 5654
// line end:   5724
void MI_Bonespirit__Fi(int i) {
	// register: 2
	register int mid;
	// register: 16
	register int sd;
	// register: 18
	register int dam;
	// register: 19
	register int cx;
	// register: 20
	register int cy;
	// register: 21
	register int id;
}


// address: 0x80149DD0
// line start: 5727
// line end:   5732
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x80149E40
// line start: 5737
// line end:   5757
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8014A064
// line start: 5764
// line end:   5828
void ProcessMissiles__Fv() {
	// register: 17
	register short i;
	// register: 3
	register short j;
	// register: 3
	register short mi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 18
	register short *pmissileactive;
}


// address: 0x8014A468
// line start: 5869
// line end:   5872
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x8014A500
// line start: 205
// line end:   205
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014A514
// line start: 431
// line end:   438
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x8014A54C
// line start: 457
// line end:   459
int M_GetDir__Fi(int i) {
}


// address: 0x8014A5B0
// line start: 478
// line end:   486
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x8014A600
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


// address: 0x8014A720
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


// address: 0x8014A894
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


// address: 0x8014A984
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


// address: 0x8014AA5C
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


// address: 0x8014AC78
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


// address: 0x8014B288
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


// address: 0x8014B544
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


// address: 0x8014B850
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


// address: 0x8014B9A4
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


// address: 0x8014BD6C
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


// address: 0x8014BE64
// line start: 1092
// line end:   1109
void M_SyncStartKill__Fiiii(int i, int x, int y, int pnum) {
}


// address: 0x8014BF74
// line start: 1115
// line end:   1135
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C0D0
// line start: 1143
// line end:   1161
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014C220
// line start: 1169
// line end:   1181
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C2B0
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


// address: 0x8014C418
// line start: 1268
// line end:   1287
int M_DoStand__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014C478
// line start: 1294
// line end:   1341
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014C6E8
// line start: 1348
// line end:   1375
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014C8D4
// line start: 1382
// line end:   1413
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014CB78
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


// address: 0x8014CDB8
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


// address: 0x8014D3D0
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


// address: 0x8014D57C
// line start: 1674
// line end:   1696
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x8014D704
// line start: 1704
// line end:   1726
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8014D90C
// line start: 1734
// line end:   1744
int M_DoSAttack__Fi(int i) {
}


// address: 0x8014D9E8
// line start: 1752
// line end:   1761
int M_DoFadein__Fi(int i) {
}


// address: 0x8014DAC8
// line start: 1768
// line end:   1786
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x8014DBF4
// line start: 1793
// line end:   1813
int M_DoHeal__Fi(int i) {
	// register: 4
	// size: 0x6C
	register struct MonsterStruct *Monst;
}


// address: 0x8014DC90
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


// address: 0x8014E234
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


// address: 0x8014E450
// line start: 1989
// line end:   1997
int M_DoGotHit__Fi(int i) {
}


// address: 0x8014E4B8
// line start: 2009
// line end:   2054
void DoEnding__Fi(int p) {
}


// address: 0x8014E560
// line start: 2060
// line end:   2083
void PrepDoEnding__Fi(int pnum) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8014E6A8
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


// address: 0x8014E86C
// line start: 2140
// line end:   2150
int M_DoSpStand__Fi(int i) {
}


// address: 0x8014E918
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


// address: 0x8014EA2C
// line start: 2185
// line end:   2192
int M_DoStone__Fi(int i) {
}


// address: 0x8014EAA8
// line start: 2199
// line end:   2258
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8014ECD8
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


// address: 0x8014F0EC
// line start: 2352
// line end:   2370
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F294
// line start: 2403
// line end:   2416
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014F390
// line start: 2424
// line end:   2431
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8014F3E4
// line start: 2438
// line end:   2470
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8014F530
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


// address: 0x8014F734
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


// address: 0x8014F8E8
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


// address: 0x8014FCE4
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


// address: 0x801500A0
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


// address: 0x8015029C
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


// address: 0x80150468
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


// address: 0x80150848
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


// address: 0x80150B54
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


// address: 0x80150E6C
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


// address: 0x80150F70
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


// address: 0x801513B4
// line start: 3169
// line end:   3170
void MAI_GoatMc__Fi(int i) {
}


// address: 0x801513D4
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


// address: 0x801515FC
// line start: 3236
// line end:   3237
void MAI_GoatBow__Fi(int i) {
}


// address: 0x80151620
// line start: 3241
// line end:   3242
void MAI_Succ__Fi(int i) {
}


// address: 0x80151644
// line start: 3246
// line end:   3247
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x80151668
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


// address: 0x80151A2C
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


// address: 0x80151C0C
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


// address: 0x80152108
// line start: 3506
// line end:   3507
void MAI_Magma__Fi(int i) {
}


// address: 0x80152134
// line start: 3511
// line end:   3512
void MAI_Storm__Fi(int i) {
}


// address: 0x80152160
// line start: 3516
// line end:   3517
void MAI_Acid__Fi(int i) {
}


// address: 0x80152190
// line start: 3522
// line end:   3523
void MAI_Diablo__Fi(int i) {
}


// address: 0x801521BC
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


// address: 0x801526A4
// line start: 3624
// line end:   3625
void MAI_Mega__Fi(int i) {
}


// address: 0x801526C8
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


// address: 0x80152C10
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


// address: 0x801530D0
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


// address: 0x8015357C
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


// address: 0x8015378C
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


// address: 0x80153988
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


// address: 0x80153BD8
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


// address: 0x80153E7C
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


// address: 0x80153FB4
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


// address: 0x80154164
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


// address: 0x801542CC
// line start: 4262
// line end:   4285
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x801543F0
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


// address: 0x801549BC
// line start: 4546
// line end:   4611
unsigned char DirOK__Fii(int i, int mdir) {
	// register: 16
	register long fx;
	// register: 17
	register long fy;
}


// address: 0x80154B68
// line start: 4618
// line end:   4620
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x80154BE0
// line start: 4627
// line end:   4629
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x80154C00
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


// address: 0x80154E88
// line start: 4783
// line end:   4784
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80154EC8
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


// address: 0x8015515C
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


// address: 0x80155338
// line start: 5054
// line end:   5137
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x801555BC
// line start: 5144
// line end:   5170
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x801556E8
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


// address: 0x80155BAC
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


// address: 0x80155E78
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


// address: 0x80155FD0
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


// address: 0x80156110
// line start: 5478
// line end:   5505
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x80156354
// line start: 5512
// line end:   5517
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x80156394
// line start: 5524
// line end:   5540
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x80156470
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


// address: 0x80156508
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


// address: 0x80156A34
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


// address: 0x80156B24
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


// address: 0x80156C7C
// line start: 443
// line end:   444
void FreeInvGFX__Fv() {
}


// address: 0x80156C84
// line start: 448
// line end:   455
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80156D08
// line start: 462
// line end:   501
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80156FC0
// line start: 508
// line end:   523
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x70
	register struct TextDat *TData;
}


// address: 0x80157090
// line start: 529
// line end:   587
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x801573A8
// line start: 597
// line end:   599
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80157474
// line start: 605
// line end:   764
void DrawInvStats__Fv() {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 18
	register char c;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto char chrstr[10];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
}


// address: 0x80157F90
// line start: 769
// line end:   778
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8015803C
// line start: 783
// line end:   904
void DrawInvCursor__Fv() {
	// register: 17
	register int ItemX;
	// register: 16
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 18
	// size: 0x70
	register struct TextDat *TData;
	{
		{
			{
				{
					{
						{
							// register: 3
							register int GoldAmount;
						}
					}
				}
			}
		}
	}
}


// address: 0x80158608
// line start: 910
// line end:   958
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 2
	register int InfoY;
	// register: 2
	register int InfoW;
	// register: 20
	register int InfoH;
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 17
	register int OldOt;
}


// address: 0x801587D4
// line start: 966
// line end:   1021
void DrawInvHelpTxt__Fv() {
	// address: 0xFFFFFF78
	// size: 0x80
	auto char TempStr[128];
}


// address: 0x80158ABC
// line start: 1041
// line end:   1048
void DrawInv__Fv() {
}


// address: 0x80158B04
// line start: 1053
// line end:   1242
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 21
	register int omp;
	// register: 20
	register int osel;
	// register: 19
	// size: 0x108
	register struct CBlocks *BgBlocks;
	{
		// register: 16
		register int OldOt;
		{
			{
				{
					{
						// register: 16
						register int PInvNo;
					}
				}
			}
		}
	}
}


// address: 0x80159128
// line start: 1249
// line end:   1482
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 8
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
	// address: 0xFFFFFFE0
	// size: 0x8
	auto struct RECT ClipRect;
}


// address: 0x80159938
// line start: 1487
// line end:   1534
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x80159C60
// line start: 1539
// line end:   1603
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x8015A004
// line start: 1608
// line end:   1703
unsigned char GoldAutoPlace__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 19
	register int ii;
	// register: 10
	register int xx;
	// register: 8
	register int yy;
	// register: 3
	register long gt;
	// register: 6
	register unsigned char done;
}


// address: 0x8015A4DC
// line start: 1708
// line end:   1735
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8015A770
// line start: 1741
// line end:   1747
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x8015A884
// line start: 1754
// line end:   2185
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 20
	register int r;
	// register: 22
	register int sx;
	// register: 23
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// address: 0xFFFFFF68
	auto unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 19
	register int il;
	// register: 21
	register int cn;
	// register: 2
	register int it;
	// register: 17
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFEF8
	// size: 0x6C
	auto struct ItemStruct tempitem;
}


// address: 0x8015C60C
// line start: 2227
// line end:   2343
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8015D110
// line start: 2368
// line end:   2391
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8015D3C0
// line start: 2399
// line end:   2404
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8015D4B4
// line start: 2412
// line end:   2416
void CheckInvScrn__Fv() {
}


// address: 0x8015D52C
// line start: 2430
// line end:   2439
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x8015D5B0
// line start: 2445
// line end:   2459
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8015D6E4
// line start: 2465
// line end:   2548
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015DB94
// line start: 2558
// line end:   2617
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8015DE70
// line start: 2624
// line end:   2761
void AutoGetItem__Fii(int pnum, int ii) {
	// register: 16
	register int i;
	// register: 2
	register int g;
	// register: 20
	register int w;
	// register: 21
	register int h;
	// register: 4
	register int idx;
	// register: 17
	register unsigned char done;
	{
		{
			// register: 5
			register int j;
			// register: 2
			register int jj;
		}
	}
}


// address: 0x8015E8D8
// line start: 2811
// line end:   2882
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	// register: 16
	register int ii;
	{
		{
			// register: 5
			register int j;
			// register: 4
			register int jj;
		}
	}
}


// address: 0x8015EA40
// line start: 2897
// line end:   2923
unsigned char TryInvPut__Fv() {
	// register: 17
	register int Dist;
	{
		{
			// register: 16
			register int d;
			{
			}
		}
	}
}


// address: 0x8015EB80
// line start: 2953
// line end:   3086
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 18
	register unsigned char done;
	{
		{
			{
				// register: 17
				register int Dist;
				{
					{
						// register: 16
						register int d;
					}
				}
			}
		}
	}
}


// address: 0x8015EF08
// line start: 3098
// line end:   3202
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	// register: 16
	register int ii;
	// register: 17
	register int d;
	// register: 16
	register int dy;
	{
		{
			{
				{
					{
						{
							// register: 21
							register unsigned char done;
							{
								// register: 18
								register int l;
								{
									{
										// register: 20
										register int j;
										{
											// register: 19
											register int yy;
											{
												// register: 17
												register int i;
												{
													// register: 16
													register int xx;
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


// address: 0x8015F460
// line start: 3207
// line end:   3330
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8015F7F8
// line start: 3337
// line end:   3360
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015F9DC
// line start: 3366
// line end:   3388
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8015FC44
// line start: 3395
// line end:   3402
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8015FCA8
// line start: 3410
// line end:   3418
unsigned char UseStaff__Fv() {
}


// address: 0x8015FD68
// line start: 3469
// line end:   3483
void StartGoldDrop__Fv() {
}


// address: 0x8015FE6C
// line start: 3492
// line end:   3622
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x80160430
// line start: 3628
// line end:   3640
void DoTelekinesis__Fv() {
}


// address: 0x80160560
// line start: 3647
// line end:   3666
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x80160698
// line start: 3680
// line end:   3687
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x801606F0
// line start: 3801
// line end:   3923
void ControlInv__Fv() {
}


// address: 0x80160A84
// line start: 3929
// line end:   3938
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x80160B7C
// line start: 3944
// line end:   3963
void InvAlignObject__Fv() {
}


// address: 0x80160D30
// line start: 3970
// line end:   3992
void InvSetItemCurs__Fv() {
	// register: 6
	register int ItemNo;
}


// address: 0x80160ED0
// line start: 3999
// line end:   4094
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80161078
// line start: 4100
// line end:   4203
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8016132C
// line start: 4208
// line end:   4301
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x80161524
// line start: 4306
// line end:   4406
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8016182C
// line start: 99
// line end:   102
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8016184C
// line start: 94
// line end:   94
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80161854
// line start: 79
// line end:   79
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8016187C
// size: 0x10
// line start: 62
// line end:   75
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x801618FC
// line start: 228
// line end:   228
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80161924
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks() {
}


// address: 0x8016192C
// line start: 130
// line end:   131
void StartAutomap__Fv() {
}


// address: 0x8016193C
// line start: 136
// line end:   137
void AutomapUp__Fv() {
}


// address: 0x8016195C
// line start: 142
// line end:   143
void AutomapDown__Fv() {
}


// address: 0x8016197C
// line start: 148
// line end:   149
void AutomapLeft__Fv() {
}


// address: 0x8016199C
// line start: 154
// line end:   155
void AutomapRight__Fv() {
}


// address: 0x801619BC
// size: 0x10
// line start: 176
// line end:   185
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x80161A74
// line start: 202
// line end:   209
void AmDrawPlayer__Fiiiii(int x0, int y0, int x1, int y1, int PNum) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80161AF8
// line start: 221
// line end:   285
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
	register int automaps3;
	// register: 22
	register int automaps4;
	// register: 21
	register int automaps5;
	{
		// register: 20
		register int pc;
	}
}


// address: 0x80161E64
// line start: 335
// line end:   377
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 18
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 16
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x80162020
// line start: 383
// line end:   424
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 20
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int y0;
	// register: 17
	register int x1;
	// register: 21
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x801621E0
// line start: 430
// line end:   443
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x80162278
// line start: 449
// line end:   462
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 4
	register int Ly;
}


// address: 0x80162310
// line start: 467
// line end:   501
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 7
	register int Frac;
	// register: 21
	register int y0;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x80162444
// line start: 507
// line end:   540
void DrawVertArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x80162578
// line start: 546
// line end:   579
void DrawHorzArch__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 16
	register int Ly;
	// register: 2
	register int Frac;
	// register: 22
	register int x0;
	// register: 23
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 21
	register int x2;
	// register: 20
	register int y2;
	// register: 17
	register int x3;
	// register: 16
	register int y3;
}


// address: 0x801626AC
// line start: 628
// line end:   658
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 19
	register int Ly;
	// register: 18
	register int Frac;
	// register: 20
	register int x1;
	// register: 21
	register int y1;
	// register: 19
	register int y2;
}


// address: 0x80162824
// line start: 666
// line end:   1167
void DrawAutomap__Fv() {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 5
	register int Lx;
	// register: 4
	register int Ly;
	// register: 3
	register int LineY;
	// register: 21
	register int MapX;
	// register: 20
	register int MapY;
	// address: 0xFFFFFF90
	auto int LLSx;
	// address: 0xFFFFFF98
	auto int LLSy;
	// address: 0xFFFFFFA0
	auto int LRSx;
	// address: 0xFFFFFFA8
	auto int LRSy;
	// address: 0xFFFFFFB0
	auto int LSx;
	// address: 0xFFFFFFB8
	auto int LSy;
	// address: 0xFFFFFFC0
	auto int RSx;
	// address: 0xFFFFFFC8
	auto int RSy;
	// register: 17
	register int LLen;
	// register: 19
	register int RLen;
	// register: 22
	register int LLLen;
	// register: 23
	register int LRLen;
	// register: 18
	register unsigned char AMLWallFlag;
	// register: 18
	register unsigned char AMRWallFlag;
	// address: 0xFFFFFF48
	auto unsigned short AmTile;
	// register: 16
	register unsigned char AmTileType;
	// address: 0xFFFFFFD0
	auto unsigned char *AmTileTypePtr;
	// register: 5
	register int P1x;
	// register: 6
	register int P1y;
	// register: 7
	register int P2x;
	// register: 8
	register int P2y;
	// address: 0xFFFFFF50
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			{
				{
					// register: 3
					register int PAx;
					// register: 4
					register int PAy;
				}
			}
		}
	}
}


// address: 0x80163770
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


// address: 0x801637EC
// line start: 174
// line end:   174
int GetOverlayOtBase__7CBlocks_addr_801637EC() {
}


