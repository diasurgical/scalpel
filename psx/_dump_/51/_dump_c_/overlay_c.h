#include "types.h"

// === [ Overlay ID c ] ===

// address: 0x80129014
// line start: 63
// line end:   66
void GameOnlyTestRoutine__Fv() {
}


// address: 0x8012901C
// line start: 106
// line end:   107
int vecleny__Fii(int a, int b) {
}


// address: 0x80129040
// line start: 111
// line end:   112
int veclenx__Fii(int a, int b) {
}


// address: 0x8012906C
// line start: 265
// line end:   416
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x80129664
// line start: 434
// line end:   450
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 2
	register int pn;
	// register: 20
	register int coll;
}


// address: 0x8012974C
// line start: 456
// line end:   478
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


// address: 0x801298E8
// line start: 485
// line end:   495
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x8012995C
// line start: 517
// line end:   557
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


// address: 0x80129B78
// line start: 563
// line end:   603
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


// address: 0x80129D94
// line start: 609
// line end:   616
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x80129DEC
// line start: 623
// line end:   634
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x80129FA0
// line start: 640
// line end:   654
void PutMissile__Fi(int i) {
	// register: 6
	register int mx;
	// register: 5
	register int my;
}


// address: 0x8012A0A4
// line start: 671
// line end:   702
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


// address: 0x8012A1CC
// line start: 713
// line end:   770
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8012A334
// line start: 778
// line end:   851
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


// address: 0x8012A6A8
// line start: 858
// line end:   966
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
}


// address: 0x8012AE08
// line start: 973
// line end:   1096
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
	// register: 18
	register int resper;
}


// address: 0x8012B874
// line start: 1103
// line end:   1195
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


// address: 0x8012C050
// line start: 1202
// line end:   1293
void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel) {
	// register: 2
	register int pn;
	// register: 5
	register int oi;
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 21
	// size: 0xC
	register struct map_info *dm;
}


// address: 0x8012C4CC
// line start: 1296
// line end:   1310
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x8012C560
// line start: 1316
// line end:   1335
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x8012C630
// line start: 1340
// line end:   1343
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8012C674
// line start: 1496
// line end:   1516
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C854
// line start: 1522
// line end:   1541
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x8012CA10
// line start: 1547
// line end:   1566
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


// address: 0x8012CB34
// line start: 1577
// line end:   1628
void AddRndTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 2
	register int pn;
	// register: 18
	register int r1;
	// register: 17
	register int r2;
	// register: 19
	register unsigned char dirok;
	// register: 21
	register int nTries;
	{
		{
			// register: 3
			register int oi;
		}
	}
}


// address: 0x8012CEA4
// line start: 1639
// line end:   1681
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x8012D110
// line start: 1689
// line end:   1703
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D224
// line start: 1723
// line end:   1759
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 10
	register int i;
	// register: 2
	register int pn;
	// register: 11
	register int k;
	// register: 2
	register int l;
	// register: 9
	register int j;
	// register: 5
	register int tx;
	// register: 6
	register int ty;
	// address: 0xFFFFFFE0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012D41C
// line start: 1767
// line end:   1783
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D570
// line start: 1789
// line end:   1805
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8012D758
// line start: 1814
// line end:   1852
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x8012D9B4
// line start: 1860
// line end:   1871
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012DA9C
// line start: 1875
// line end:   1902
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012DC64
// line start: 1911
// line end:   1935
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012DE70
// line start: 1941
// line end:   1955
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012DF58
// line start: 1959
// line end:   1967
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x8012E03C
// line start: 1971
// line end:   2036
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
	// register: 4
	register int pn;
	// register: 21
	register int k;
	// register: 2
	register int l;
	// register: 18
	register int j;
	// register: 19
	register int tx;
	// register: 20
	register int ty;
	// register: 3
	register int mx;
	// address: 0xFFFFFFB8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012E460
// line start: 2044
// line end:   2063
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012E670
// line start: 2072
// line end:   2099
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012E850
// line start: 2103
// line end:   2113
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012E918
// line start: 2122
// line end:   2134
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012EA74
// line start: 2139
// line end:   2197
void AddGuardian__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 20
	register int i;
	// register: 19
	register int pn;
	// register: 23
	register int k;
	// register: 2
	register int l;
	// register: 22
	register int j;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFFA0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012EEE0
// line start: 2200
// line end:   2207
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012EF3C
// line start: 2343
// line end:   2380
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x8012F0F8
// line start: 2418
// line end:   2463
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012F3F0
// line start: 2471
// line end:   2483
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012F4F4
// line start: 2553
// line end:   2577
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x8012F5CC
// line start: 2581
// line end:   2642
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 6
	register int i;
	// register: 9
	register int j;
	// register: 11
	register int k;
	// register: 2
	register int l;
	// register: 8
	register int tx;
	// register: 10
	register int ty;
	// register: 4
	register int mid;
	// address: 0xFFFFFFE0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012F8C4
// line start: 2656
// line end:   2701
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012FA7C
// line start: 2780
// line end:   2791
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012FB10
// line start: 2797
// line end:   2816
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8012FD38
// line start: 2824
// line end:   2830
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012FDA0
// line start: 2838
// line end:   2868
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x8012FFCC
// line start: 2876
// line end:   2885
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013007C
// line start: 2893
// line end:   2940
void AddFirewallC__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 22
	register int i;
	// register: 19
	register int pn;
	// register: 23
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int j;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFFB0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013032C
// line start: 2943
// line end:   2952
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80130428
// line start: 2959
// line end:   2967
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801304AC
// line start: 2974
// line end:   2991
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x801306C4
// line start: 3014
// line end:   3023
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80130774
// line start: 3031
// line end:   3040
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80130824
// line start: 3048
// line end:   3054
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013088C
// line start: 3062
// line end:   3084
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80130AC8
// line start: 3091
// line end:   3120
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x80130CE4
// line start: 3128
// line end:   3145
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80130DD4
// line start: 3152
// line end:   3187
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x80130FC8
// line start: 3196
// line end:   3220
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x80131188
// line start: 3229
// line end:   3237
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801311FC
// line start: 3241
// line end:   3251
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80131284
// line start: 3258
// line end:   3264
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801312EC
// line start: 3272
// line end:   3309
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801314E8
// line start: 3319
// line end:   3330
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80131588
// line start: 3334
// line end:   3345
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x801316C4
// line start: 3349
// line end:   3418
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
	// address: 0xFFFFFF98
	// size: 0x40
	auto int xyoffs[16];
}


// address: 0x80131B14
// line start: 3454
// line end:   3474
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x80131CF8
// line start: 3480
// line end:   3481
void MI_Dummy__Fi(int i) {
}


// address: 0x80131D00
// line start: 3484
// line end:   3514
void MI_Golem__Fi(int i) {
	// address: 0xFFFFFFD0
	auto int id;
	// register: 18
	register int pn;
	// register: 20
	register int j;
	// register: 23
	register int k;
	// register: 2
	register int l;
	// register: 21
	register int m;
	// register: 17
	register int tx;
	// register: 19
	register int ty;
	// address: 0xFFFFFFB8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80131F5C
// line start: 3519
// line end:   3522
void MI_SetManashield__Fi(int i) {
}


// address: 0x80131F98
// line start: 3527
// line end:   3613
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


// address: 0x80132754
// line start: 3617
// line end:   3642
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x80132970
// line start: 3646
// line end:   3733
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


// address: 0x8013303C
// line start: 3736
// line end:   3764
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


// address: 0x801332C4
// line start: 3782
// line end:   3807
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x801333D4
// line start: 3811
// line end:   3845
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x80133698
// line start: 3850
// line end:   3942
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


// address: 0x8013405C
// line start: 3945
// line end:   4004
void MI_Lightctrl__Fi(int i) {
	// register: 3
	register int pn;
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


// address: 0x801343D8
// line start: 4007
// line end:   4025
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x801344C4
// line start: 4030
// line end:   4070
void MI_Town__Fi(int i) {
	// register: 17
	register int p;
	// address: 0xFFFFFFA0
	// size: 0x44
	auto int ExpLight[17];
	{
		{
			// register: 16
			// size: 0x23A8
			register struct PlayerStruct *player;
		}
	}
}


// address: 0x801346FC
// line start: 4075
// line end:   4108
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80134A50
// line start: 4113
// line end:   4138
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80134C18
// line start: 4143
// line end:   4218
void MI_Manashield__Fi(int i) {
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
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80134F3C
// line start: 4262
// line end:   4305
void MI_Firemove__Fi(int i) {
	// register: 17
	register int j;
	// address: 0xFFFFFFB0
	// size: 0x38
	auto int ExpLight[14];
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x801351C8
// line start: 4309
// line end:   4376
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


// address: 0x80135478
// line start: 4381
// line end:   4417
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


// address: 0x801356E4
// line start: 4510
// line end:   4545
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


// address: 0x8013599C
// line start: 4548
// line end:   4576
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x80135C9C
// line start: 4579
// line end:   4600
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x80135E38
// line start: 4603
// line end:   4652
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80136200
// line start: 4769
// line end:   4796
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x801363AC
// line start: 4802
// line end:   4809
void MI_Boom__Fi(int i) {
}


// address: 0x801364A4
// line start: 4813
// line end:   4884
void MI_Rhino__Fi(int i) {
	// register: 16
	register int mix;
	// register: 19
	register int miy;
	// register: 30
	register int mix2;
	// register: 23
	register int miy2;
	// register: 20
	register int omx;
	// register: 22
	register int omy;
	// register: 18
	register int monst;
}


// address: 0x80136850
// line start: 4966
// line end:   5000
void MI_FirewallC__Fi(int i) {
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
	// register: 19
	register int tx;
	// register: 18
	register int ty;
	// register: 3
	register int pn;
	// register: 17
	register int id;
}


// address: 0x80136AD8
// line start: 5006
// line end:   5014
void MI_Infra__Fi(int i) {
}


// address: 0x80136B90
// line start: 5020
// line end:   5044
void MI_Apoca__Fi(int i) {
	// register: 19
	register int j;
	// register: 17
	register int k;
	// register: 20
	register int id;
	// register: 5
	register unsigned char exit;
}


// address: 0x80136E24
// line start: 5049
// line end:   5104
void MI_Wave__Fi(int i) {
	// address: 0xFFFFFF80
	auto int dira;
	// address: 0xFFFFFF88
	auto int dirb;
	// register: 17
	register int nxa;
	// register: 18
	register int nya;
	// register: 16
	register int nxb;
	// register: 19
	register int nyb;
	// register: 4
	register int pn;
	// register: 2
	register int sd;
	// register: 21
	register int j;
	// address: 0xFFFFFF90
	auto int f1;
	// address: 0xFFFFFF98
	auto int f2;
	// register: 22
	register int id;
	// register: 16
	register int sx;
	// register: 23
	register int sy;
}


// address: 0x80137320
// line start: 5111
// line end:   5156
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


// address: 0x801375E0
// line start: 5221
// line end:   5244
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x801377D8
// line start: 5249
// line end:   5275
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
	// register: 2
	register int pn;
}


// address: 0x80137A60
// line start: 5280
// line end:   5322
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


// address: 0x80137D64
// line start: 5327
// line end:   5364
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80138070
// line start: 5369
// line end:   5449
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


// address: 0x80138728
// line start: 5452
// line end:   5522
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


// address: 0x80138B30
// line start: 5525
// line end:   5530
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x80138BA0
// line start: 5535
// line end:   5555
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x80138DC4
// line start: 5562
// line end:   5614
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x801391B8
// line start: 5654
// line end:   5657
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x80139270
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80139284
// line start: 447
// line end:   466
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
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80139418
// line start: 485
// line end:   492
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x80139450
// line start: 511
// line end:   513
int M_GetDir__Fi(int i) {
}


// address: 0x801394AC
// line start: 532
// line end:   540
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x801394F4
// line start: 555
// line end:   577
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


// address: 0x8013960C
// line start: 585
// line end:   608
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


// address: 0x80139730
// line start: 615
// line end:   635
void M_StartSpAttack__Fi(int i) {
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


// address: 0x80139818
// line start: 643
// line end:   659
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x801398E8
// line start: 666
// line end:   695
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


// address: 0x80139AC0
// line start: 702
// line end:   758
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


// address: 0x80139DB8
// line start: 763
// line end:   819
void M_DiabloDeath__FiUc(int i, unsigned char sendmsg) {
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


// address: 0x8013A0CC
// line start: 826
// line end:   878
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x8013A378
// line start: 884
// line end:   952
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


// address: 0x8013A664
// line start: 959
// line end:   1022
void M2MStartKill__Fii(int i, int mid) {
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


// address: 0x8013AA2C
// line start: 1029
// line end:   1048
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8013AB1C
// line start: 1082
// line end:   1102
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8013AC70
// line start: 1110
// line end:   1128
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8013ADB8
// line start: 1136
// line end:   1147
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013AE38
// line start: 1154
// line end:   1229
void M_ChangeLightOffset__Fi(int monst) {
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


// address: 0x8013AFA0
// line start: 1237
// line end:   1255
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013B008
// line start: 1262
// line end:   1293
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8013B28C
// line start: 1300
// line end:   1327
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8013B478
// line start: 1334
// line end:   1365
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8013B73C
// line start: 1372
// line end:   1409
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8013B904
// line start: 1415
// line end:   1545
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
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


// address: 0x8013BF18
// line start: 1551
// line end:   1590
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


// address: 0x8013C0BC
// line start: 1598
// line end:   1620
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x8013C234
// line start: 1628
// line end:   1650
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8013C424
// line start: 1658
// line end:   1668
int M_DoSAttack__Fi(int i) {
}


// address: 0x8013C4F8
// line start: 1676
// line end:   1685
int M_DoFadein__Fi(int i) {
}


// address: 0x8013C5C8
// line start: 1692
// line end:   1710
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x8013C6DC
// line start: 1717
// line end:   1737
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013C788
// line start: 1744
// line end:   1851
int M_DoTalk__Fi(int i) {
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


// address: 0x8013CCF4
// line start: 1861
// line end:   1907
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


// address: 0x8013CF28
// line start: 1913
// line end:   1921
int M_DoGotHit__Fi(int i) {
}


// address: 0x8013CF88
// line start: 1933
// line end:   1976
void DoEnding__Fv() {
}


// address: 0x8013D048
// line start: 1982
// line end:   2004
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8013D160
// line start: 2011
// line end:   2041
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 16
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x8013D330
// line start: 2048
// line end:   2058
int M_DoSpStand__Fi(int i) {
}


// address: 0x8013D3D4
// line start: 2063
// line end:   2082
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x8013D4C4
// line start: 2089
// line end:   2096
int M_DoStone__Fi(int i) {
}


// address: 0x8013D548
// line start: 2103
// line end:   2162
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8013D770
// line start: 2171
// line end:   2247
void GroupUnity__Fi(int i) {
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


// address: 0x8013DB5C
// line start: 2256
// line end:   2274
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8013DD48
// line start: 2282
// line end:   2296
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x8013DE0C
// line start: 2307
// line end:   2320
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8013DF20
// line start: 2328
// line end:   2335
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8013DF74
// line start: 2342
// line end:   2374
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8013E114
// line start: 2386
// line end:   2413
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


// address: 0x8013E30C
// line start: 2427
// line end:   2449
void MAI_SkelSd__Fi(int i) {
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


// address: 0x8013E4A4
// line start: 2464
// line end:   2521
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


// address: 0x8013E888
// line start: 2533
// line end:   2600
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


// address: 0x8013EC40
// line start: 2613
// line end:   2645
void MAI_SkelBow__Fi(int i) {
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


// address: 0x8013EE24
// line start: 2656
// line end:   2677
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


// address: 0x8013EFD4
// line start: 2690
// line end:   2771
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


// address: 0x8013F3C0
// line start: 2783
// line end:   2859
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


// address: 0x8013F6B8
// line start: 2871
// line end:   2949
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


// address: 0x8013F9D4
// line start: 2957
// line end:   2973
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


// address: 0x8013FABC
// line start: 2984
// line end:   3051
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


// address: 0x8013FF28
// line start: 3061
// line end:   3062
void MAI_GoatMc__Fi(int i) {
}


// address: 0x8013FF48
// line start: 3069
// line end:   3122
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


// address: 0x80140168
// line start: 3128
// line end:   3129
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8014018C
// line start: 3133
// line end:   3134
void MAI_Succ__Fi(int i) {
}


// address: 0x801401B0
// line start: 3138
// line end:   3139
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x801401D4
// line start: 3153
// line end:   3239
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


// address: 0x801405EC
// line start: 3249
// line end:   3289
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


// address: 0x801407CC
// line start: 3302
// line end:   3393
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


// address: 0x80140CE0
// line start: 3398
// line end:   3399
void MAI_Magma__Fi(int i) {
}


// address: 0x80140D0C
// line start: 3403
// line end:   3404
void MAI_Storm__Fi(int i) {
}


// address: 0x80140D38
// line start: 3408
// line end:   3409
void MAI_Acid__Fi(int i) {
}


// address: 0x80140D68
// line start: 3414
// line end:   3415
void MAI_Diablo__Fi(int i) {
}


// address: 0x80140D94
// line start: 3419
// line end:   3511
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


// address: 0x80141294
// line start: 3516
// line end:   3517
void MAI_Mega__Fi(int i) {
}


// address: 0x801412B8
// line start: 3524
// line end:   3614
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


// address: 0x801417F4
// line start: 3628
// line end:   3706
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


// address: 0x80141C9C
// line start: 3719
// line end:   3813
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


// address: 0x80142168
// line start: 3821
// line end:   3857
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


// address: 0x80142370
// line start: 3866
// line end:   3897
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


// address: 0x80142568
// line start: 3906
// line end:   3949
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


// address: 0x801427B4
// line start: 3958
// line end:   4008
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


// address: 0x80142A28
// line start: 4017
// line end:   4047
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


// address: 0x80142B48
// line start: 4055
// line end:   4086
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


// address: 0x80142CF4
// line start: 4095
// line end:   4127
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


// address: 0x80142E40
// line start: 4136
// line end:   4159
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x80142F5C
// line start: 4167
// line end:   4362
void ProcessMonsters__Fv() {
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


// address: 0x801434EC
// line start: 4371
// line end:   4433
unsigned char DirOK__Fii(int i, int mdir) {
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


// address: 0x801438D4
// line start: 4440
// line end:   4441
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x8014393C
// line start: 4448
// line end:   4449
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x80143980
// line start: 4476
// line end:   4595
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


// address: 0x80143C08
// line start: 4603
// line end:   4604
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x80143C48
// line start: 4615
// line end:   4730
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


// address: 0x80143EDC
// line start: 4827
// line end:   4867
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


// address: 0x801440AC
// line start: 4874
// line end:   4957
void PrintMonstHistory__Fi(int mt) {
	// register: 17
	register int res;
}


// address: 0x80144360
// line start: 4964
// line end:   4990
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x80144484
// line start: 5000
// line end:   5086
void MissToMonst__Fiii(int i, int x, int y) {
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


// address: 0x80144900
// line start: 5108
// line end:   5137
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


// address: 0x80144B1C
// line start: 5148
// line end:   5188
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


// address: 0x80144E10
// line start: 5201
// line end:   5224
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


// address: 0x80144F68
// line start: 5240
// line end:   5268
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80145094
// line start: 5275
// line end:   5300
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x801452EC
// line start: 5307
// line end:   5312
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x80145324
// line start: 5319
// line end:   5335
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x801453F0
// line start: 5344
// line end:   5408
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


// address: 0x80145764
// line start: 5416
// line end:   5447
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801458C8
// line start: 5451
// line end:   5471
void M_StartAttack__Fi(int i) {
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


// address: 0x801459B0
// line start: 5475
// line end:   5506
void M_StartWalk__Fiiiiii(int i, int xvel, int yvel, int xadd, int yadd, int EndDir) {
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


// address: 0x80145B10
// line start: 434
// line end:   435
void FreeInvGFX__Fv() {
}


// address: 0x80145B18
// line start: 440
// line end:   447
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80145B9C
// line start: 452
// line end:   483
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80145DF0
// line start: 489
// line end:   503
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80145EC0
// line start: 508
// line end:   553
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x80146198
// line start: 563
// line end:   565
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80146264
// line start: 570
// line end:   721
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


// address: 0x80146D80
// line start: 726
// line end:   733
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80146E08
// line start: 738
// line end:   841
void DrawInvCursor__Fv() {
	// register: 6
	register int ItemX;
	// register: 8
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x801472E4
// line start: 847
// line end:   878
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 3
	register int InfoX;
	// register: 16
	register int InfoY;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x801474AC
// line start: 884
// line end:   915
void DrawInvUnique__Fv() {
	// register: 19
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 18
	register int flip;
}


// address: 0x801475D0
// line start: 932
// line end:   936
void DrawInv__Fv() {
}


// address: 0x80147610
// line start: 943
// line end:   1047
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	register int omp;
	// register: 19
	register int osel;
	// register: 16
	// size: 0xE0
	register struct CBlocks *BgBlocks;
}


// address: 0x80147954
// line start: 1053
// line end:   1257
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 9
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x8014811C
// line start: 1262
// line end:   1309
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


// address: 0x8014843C
// line start: 1314
// line end:   1378
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


// address: 0x801487D8
// line start: 1383
// line end:   1476
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


// address: 0x80148CA8
// line start: 1481
// line end:   1508
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80148F34
// line start: 1514
// line end:   1520
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x80149030
// line start: 1527
// line end:   1934
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 21
	register int r;
	// register: 23
	register int sx;
	// register: 30
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
	// register: 17
	register unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 20
	register int il;
	// register: 22
	register int cn;
	// register: 2
	register int it;
	// register: 19
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFED8
	// size: 0x98
	auto struct ItemStruct tempitem;
}


// address: 0x8014AD1C
// line start: 1976
// line end:   2092
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8014B7CC
// line start: 2117
// line end:   2138
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8014BA74
// line start: 2146
// line end:   2150
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8014BB68
// line start: 2158
// line end:   2162
void CheckInvScrn__Fv() {
}


// address: 0x8014BBE0
// line start: 2176
// line end:   2185
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8014BC64
// line start: 2191
// line end:   2203
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8014BD98
// line start: 2209
// line end:   2271
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8014C214
// line start: 2281
// line end:   2340
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8014C510
// line start: 2347
// line end:   2482
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


// address: 0x8014CF80
// line start: 2527
// line end:   2588
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


// address: 0x8014D10C
// line start: 2603
// line end:   2625
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x8014D2D4
// line start: 2655
// line end:   2755
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 23
	register unsigned char done;
	{
		// register: 21
		register int d;
		{
			// register: 16
			register int dy;
			{
				{
					{
						{
							{
								{
									{
										// register: 18
										register int l;
										{
											{
												// register: 19
												register int j;
												{
													// register: 20
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
	}
}


// address: 0x8014D77C
// line start: 2767
// line end:   2871
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


// address: 0x8014DCD8
// line start: 2876
// line end:   2985
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x8014E020
// line start: 2992
// line end:   3015
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8014E204
// line start: 3021
// line end:   3043
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8014E46C
// line start: 3050
// line end:   3057
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8014E4D4
// line start: 3065
// line end:   3073
unsigned char UseStaff__Fv() {
}


// address: 0x8014E594
// line start: 3124
// line end:   3138
void StartGoldDrop__Fv() {
}


// address: 0x8014E690
// line start: 3147
// line end:   3233
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x98
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8014EBB4
// line start: 3239
// line end:   3251
void DoTelekinesis__Fv() {
}


// address: 0x8014ECDC
// line start: 3258
// line end:   3277
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8014EE14
// line start: 3291
// line end:   3298
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8014EE6C
// line start: 3414
// line end:   3492
void ControlInv__Fv() {
}


// address: 0x8014F178
// line start: 3498
// line end:   3507
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8014F26C
// line start: 3513
// line end:   3532
void InvAlignObject__Fv() {
}


// address: 0x8014F420
// line start: 3539
// line end:   3559
void InvSetItemCurs__Fv() {
	// register: 6
	register int ItemNo;
}


// address: 0x8014F5B0
// line start: 3566
// line end:   3661
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014F758
// line start: 3667
// line end:   3770
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014FA0C
// line start: 3775
// line end:   3868
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014FC04
// line start: 3873
// line end:   3973
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014FF0C
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014FF34
// line start: 128
// line end:   132
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8014FF58
// line start: 103
// line end:   106
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014FF78
// line start: 98
// line end:   98
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014FF80
// line start: 95
// line end:   95
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014FF88
// line start: 85
// line end:   88
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8014FF94
// line start: 78
// line end:   78
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014FFBC
// size: 0x10
// line start: 61
// line end:   74
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x80150018
// line start: 120
// line end:   123
void StartAutomap__Fv() {
}


// address: 0x80150028
// line start: 128
// line end:   129
void AutomapUp__Fv() {
}


// address: 0x80150048
// line start: 134
// line end:   135
void AutomapDown__Fv() {
}


// address: 0x80150068
// line start: 140
// line end:   141
void AutomapLeft__Fv() {
}


// address: 0x80150088
// line start: 146
// line end:   147
void AutomapRight__Fv() {
}


// address: 0x801500A8
// size: 0x10
// line start: 168
// line end:   175
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x80150154
// line start: 180
// line end:   187
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x801501BC
// line start: 194
// line end:   201
void AmDrawPlayer__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80150224
// line start: 214
// line end:   297
void DrawAutomapPlr__Fv() {
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 22
	register int automaps3;
	// register: 21
	register int automaps4;
	// register: 20
	register int automaps5;
	{
		// register: 30
		register int pc;
	}
}


// address: 0x80150534
// line start: 302
// line end:   319
void DrawAutoMapVertWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80150628
// line start: 326
// line end:   343
void DrawAutoMapHorzWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8015071C
// line start: 349
// line end:   413
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 17
	register int Lx;
	// register: 22
	register int Ly;
	// register: 16
	register int Frac;
	// register: 22
	register int y0;
	// register: 21
	register int x1;
	// register: 19
	register int y1;
	// register: 18
	register int y2;
	// register: 20
	register int x3;
}


// address: 0x801508F0
// line start: 420
// line end:   485
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 9
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 21
	register int Ly;
	// register: 18
	register int Frac;
	// register: 21
	register int y0;
	// register: 17
	register int x1;
	// register: 20
	register int y1;
	// register: 22
	register int y2;
	// register: 19
	register int x3;
}


// address: 0x80150AC8
// line start: 492
// line end:   508
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80150B7C
// line start: 515
// line end:   531
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x80150C30
// line start: 537
// line end:   586
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


// address: 0x80150D78
// line start: 593
// line end:   662
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 18
	register int Lx;
	// register: 22
	register int Ly;
	// register: 17
	register int Frac;
	// register: 20
	register int x1;
	// register: 19
	register int y1;
	// register: 21
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x80150F78
// line start: 670
// line end:   807
void DrawAutomap__Fv() {
	// register: 20
	register int MapX;
	// register: 19
	register int MapY;
	// register: 17
	register int Sx;
	// register: 21
	register int Sy;
	// register: 18
	register unsigned short Tile;
	// register: 16
	register int Len;
	// address: 0xFFFFFF98
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFA0
	// size: 0x40
	auto char levname[64];
	// register: 2
	register int len;
	{
		{
			// register: 2
			register int Px;
			// register: 3
			register int Py;
		}
	}
}


// address: 0x8015141C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


