// C:\diabpsx\SOURCE\MISSILES.CPP

#include "types.h"

// address: 0x80139E5C
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


// address: 0x8013A454
// line start: 443
// line end:   463
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 20
	register int coll;
}


// address: 0x8013A508
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


// address: 0x8013A694
// line start: 498
// line end:   508
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x8013A708
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


// address: 0x8013A924
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


// address: 0x8013AB40
// line start: 622
// line end:   630
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x8013ABD8
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


// address: 0x8013AD8C
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


// address: 0x8013AFC0
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


// address: 0x8013B0E8
// line start: 761
// line end:   818
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8013B250
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


// address: 0x8013B5DC
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


// address: 0x8013BDA4
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


// address: 0x8013C80C
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


// address: 0x8013CFC0
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


// address: 0x8013D4E8
// line start: 1358
// line end:   1372
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x8013D57C
// line start: 1378
// line end:   1397
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x8013D64C
// line start: 1402
// line end:   1405
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8013D690
// line start: 1558
// line end:   1584
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D870
// line start: 1591
// line end:   1610
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x8013DA2C
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


// address: 0x8013DB50
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


// address: 0x8013DE80
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


// address: 0x8013E0A0
// line start: 1757
// line end:   1771
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E1B4
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


// address: 0x8013E3D8
// line start: 1836
// line end:   1852
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E534
// line start: 1858
// line end:   1874
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8013E71C
// line start: 1883
// line end:   1921
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x8013E978
// line start: 1929
// line end:   1940
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EA60
// line start: 1944
// line end:   1971
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EC28
// line start: 1980
// line end:   2004
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EE3C
// line start: 2010
// line end:   2024
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EF24
// line start: 2028
// line end:   2046
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 19
	register int i;
}


// address: 0x8013F0CC
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


// address: 0x8013F51C
// line start: 2130
// line end:   2149
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F734
// line start: 2158
// line end:   2185
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013F914
// line start: 2189
// line end:   2199
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F9DC
// line start: 2208
// line end:   2220
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FB38
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


// address: 0x8013FF7C
// line start: 2287
// line end:   2294
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FFD8
// line start: 2430
// line end:   2468
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x80140154
// line start: 2506
// line end:   2551
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140454
// line start: 2559
// line end:   2571
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140560
// line start: 2641
// line end:   2665
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int monst;
}


// address: 0x80140640
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


// address: 0x8014094C
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


// address: 0x80140C70
// line start: 2869
// line end:   2880
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140D04
// line start: 2886
// line end:   2905
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80140F2C
// line start: 2913
// line end:   2919
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140F94
// line start: 2927
// line end:   2957
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x801411C0
// line start: 2965
// line end:   2974
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8014125C
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


// address: 0x80141500
// line start: 3033
// line end:   3042
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x801415FC
// line start: 3049
// line end:   3057
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141680
// line start: 3064
// line end:   3081
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x80141898
// line start: 3104
// line end:   3113
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141948
// line start: 3121
// line end:   3130
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801419F8
// line start: 3138
// line end:   3144
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141A60
// line start: 3153
// line end:   3180
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80141CBC
// line start: 3184
// line end:   3213
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x80141EE0
// line start: 3221
// line end:   3238
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141FD0
// line start: 3245
// line end:   3280
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x801421CC
// line start: 3289
// line end:   3313
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x8014238C
// line start: 3322
// line end:   3330
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142400
// line start: 3334
// line end:   3344
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80142488
// line start: 3351
// line end:   3357
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801424F0
// line start: 3365
// line end:   3402
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801426EC
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


// address: 0x8014280C
// line start: 3435
// line end:   3446
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 19
	register int pnum;
}


// address: 0x80142948
// line start: 3451
// line end:   3525
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
	// address: 0xFFFFFF98
	// size: 0x40
	auto int xyoffs[16];
}


// address: 0x80142DB4
// line start: 3561
// line end:   3581
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x80142F8C
// line start: 3587
// line end:   3588
void MI_Dummy__Fi(int i) {
}


// address: 0x80142F94
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


// address: 0x801431F4
// line start: 3627
// line end:   3630
void MI_SetManashield__Fi(int i) {
}


// address: 0x80143230
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


// address: 0x80143A04
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


// address: 0x80143C34
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


// address: 0x80144310
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


// address: 0x801445A8
// line start: 3901
// line end:   3926
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x801446C0
// line start: 3930
// line end:   3966
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x801449C0
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


// address: 0x801452E8
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


// address: 0x8014569C
// line start: 4140
// line end:   4159
void MI_Lightning__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x8014578C
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


// address: 0x80145ACC
// line start: 4219
// line end:   4252
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80145E38
// line start: 4257
// line end:   4282
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x8014600C
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


// address: 0x80146304
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


// address: 0x801465A0
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


// address: 0x80146850
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


// address: 0x80146AAC
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


// address: 0x80146DF0
// line start: 4718
// line end:   4770
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x801470F0
// line start: 4773
// line end:   4794
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x80147294
// line start: 4797
// line end:   4847
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0x108
	register struct CBlocks *gblocks;
}


// address: 0x801475F8
// line start: 4964
// line end:   4991
void MI_Stone__Fi(int i) {
	// register: 4
	register int m;
}


// address: 0x801477B4
// line start: 4997
// line end:   5004
void MI_Boom__Fi(int i) {
}


// address: 0x801478B0
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


// address: 0x80147CA0
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


// address: 0x80147EC8
// line start: 5205
// line end:   5213
void MI_Infra__Fi(int i) {
}


// address: 0x80147F80
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


// address: 0x801481F8
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


// address: 0x8014866C
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


// address: 0x8014892C
// line start: 5422
// line end:   5445
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x80148B30
// line start: 5450
// line end:   5477
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
}


// address: 0x80148D94
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


// address: 0x801490C4
// line start: 5529
// line end:   5566
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x801493D8
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


// address: 0x80149AC4
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


// address: 0x80149ED8
// line start: 5727
// line end:   5732
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x80149F48
// line start: 5737
// line end:   5757
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8014A16C
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


// address: 0x8014A570
// line start: 5869
// line end:   5872
void ClearMissileSpot__Fi(int mi) {
}


