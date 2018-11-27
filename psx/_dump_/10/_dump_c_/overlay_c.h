#include "types.h"

// === [ Overlay ID c ] ===

// address: 0x80122CDC
// line start: 63
// line end:   66
void GameOnlyTestRoutine__Fv() {
}


// address: 0x80122CE4
// line start: 106
// line end:   107
int vecleny__Fii(int a, int b) {
}


// address: 0x80122D08
// line start: 111
// line end:   112
int veclenx__Fii(int a, int b) {
}


// address: 0x80122D34
// line start: 265
// line end:   416
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 4
	register int k;
	// register: 5
	register int sl;
	// register: 5
	// size: 0x22D0
	register struct PlayerStruct *plr;
	// register: 9
	register int _pMagic;
	// register: 8
	register char _pLevel;
	// register: 10
	register char _pClass;
}


// address: 0x8012332C
// line start: 434
// line end:   450
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 2
	register int pn;
	// register: 20
	register int coll;
}


// address: 0x80123414
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


// address: 0x801235B0
// line start: 485
// line end:   495
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x80123624
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


// address: 0x80123840
// line start: 609
// line end:   616
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x80123898
// line start: 623
// line end:   631
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 16
	register long dr;
}


// address: 0x801239F4
// line start: 637
// line end:   651
void PutMissile__Fi(int i) {
	// register: 6
	register int mx;
	// register: 5
	register int my;
}


// address: 0x80123AF8
// line start: 668
// line end:   699
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


// address: 0x80123C20
// line start: 710
// line end:   767
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80123D88
// line start: 775
// line end:   848
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


// address: 0x801240FC
// line start: 855
// line end:   963
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


// address: 0x8012485C
// line start: 970
// line end:   1093
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


// address: 0x801252C8
// line start: 1100
// line end:   1192
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


// address: 0x80125AA4
// line start: 1199
// line end:   1288
void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel) {
	// register: 2
	register int pn;
	// register: 5
	register int oi;
}


// address: 0x801261E4
// line start: 1291
// line end:   1305
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x80126278
// line start: 1311
// line end:   1330
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x80126348
// line start: 1335
// line end:   1338
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8012638C
// line start: 1491
// line end:   1511
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012656C
// line start: 1517
// line end:   1536
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x80126728
// line start: 1542
// line end:   1561
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


// address: 0x8012684C
// line start: 1572
// line end:   1623
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


// address: 0x80126BBC
// line start: 1634
// line end:   1676
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x80126E28
// line start: 1684
// line end:   1698
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80126F3C
// line start: 1718
// line end:   1754
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


// address: 0x80127134
// line start: 1762
// line end:   1778
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80127288
// line start: 1784
// line end:   1800
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80127470
// line start: 1809
// line end:   1847
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x801276CC
// line start: 1855
// line end:   1866
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801277B4
// line start: 1870
// line end:   1897
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012797C
// line start: 1906
// line end:   1930
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80127B88
// line start: 1954
// line end:   1962
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x80127C6C
// line start: 1966
// line end:   2031
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


// address: 0x80128090
// line start: 2039
// line end:   2058
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x801282A0
// line start: 2067
// line end:   2094
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80128480
// line start: 2098
// line end:   2108
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128548
// line start: 2117
// line end:   2129
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801286A4
// line start: 2134
// line end:   2192
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


// address: 0x80128B10
// line start: 2195
// line end:   2202
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128B6C
// line start: 2338
// line end:   2375
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x80128D28
// line start: 2413
// line end:   2458
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129020
// line start: 2466
// line end:   2478
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129124
// line start: 2548
// line end:   2572
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x801291FC
// line start: 2576
// line end:   2637
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


// address: 0x801294F4
// line start: 2651
// line end:   2696
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x801296AC
// line start: 2775
// line end:   2786
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129740
// line start: 2792
// line end:   2811
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x80129968
// line start: 2819
// line end:   2825
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801299D0
// line start: 2833
// line end:   2863
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x80129BFC
// line start: 2871
// line end:   2880
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129CAC
// line start: 2888
// line end:   2935
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


// address: 0x80129F5C
// line start: 2938
// line end:   2947
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8012A058
// line start: 2954
// line end:   2962
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A0DC
// line start: 2969
// line end:   2986
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x8012A2F4
// line start: 3009
// line end:   3018
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A3A4
// line start: 3026
// line end:   3035
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A454
// line start: 3043
// line end:   3049
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A4BC
// line start: 3057
// line end:   3078
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012A6F8
// line start: 3085
// line end:   3114
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x8012A914
// line start: 3122
// line end:   3139
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AA04
// line start: 3146
// line end:   3181
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x8012ABF8
// line start: 3190
// line end:   3214
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x8012ADB8
// line start: 3223
// line end:   3231
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AE2C
// line start: 3235
// line end:   3245
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AEB4
// line start: 3252
// line end:   3258
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AF1C
// line start: 3266
// line end:   3303
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B118
// line start: 3313
// line end:   3324
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B1B8
// line start: 3328
// line end:   3339
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x8012B2F4
// line start: 3343
// line end:   3411
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
}


// address: 0x8012B640
// line start: 3447
// line end:   3467
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x8012B824
// line start: 3473
// line end:   3474
void MI_Dummy__Fi(int i) {
}


// address: 0x8012B82C
// line start: 3477
// line end:   3507
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


// address: 0x8012BA88
// line start: 3512
// line end:   3515
void MI_SetManashield__Fi(int i) {
}


// address: 0x8012BAC4
// line start: 3520
// line end:   3606
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


// address: 0x8012C280
// line start: 3610
// line end:   3635
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x8012C49C
// line start: 3639
// line end:   3726
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


// address: 0x8012CB68
// line start: 3729
// line end:   3757
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


// address: 0x8012CDF0
// line start: 3775
// line end:   3800
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x8012CF00
// line start: 3804
// line end:   3838
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x8012D1C4
// line start: 3843
// line end:   3935
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


// address: 0x8012DB88
// line start: 3938
// line end:   3996
void MI_Lightctrl__Fi(int i) {
	// register: 3
	register int pn;
	// register: 20
	register int dam;
	// register: 3
	register int p;
	// register: 18
	register int mx;
	// register: 19
	register int my;
}


// address: 0x8012E0F4
// line start: 3999
// line end:   4016
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
}


// address: 0x8012E270
// line start: 4021
// line end:   4060
void MI_Town__Fi(int i) {
	// register: 17
	register int p;
	// address: 0xFFFFFFA0
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8012E514
// line start: 4065
// line end:   4096
void MI_Flash__Fi(int i) {
}


// address: 0x8012E94C
// line start: 4101
// line end:   4125
void MI_Flash2__Fi(int i) {
}


// address: 0x8012EB94
// line start: 4130
// line end:   4203
void MI_Manashield__Fi(int i) {
	// register: 4
	register int j;
	// register: 17
	register int id;
	// register: 6
	register long diff;
	// register: 5
	register long pct;
}


// address: 0x8012F19C
// line start: 4247
// line end:   4289
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x8012F5D8
// line start: 4293
// line end:   4359
void MI_Guardian__Fi(int i) {
	// register: 19
	register int j;
	// register: 22
	register int k;
	// register: 30
	register int sx1;
	// register: 23
	register int sy1;
	// register: 3
	register int ex;
}


// address: 0x8012F9A4
// line start: 4364
// line end:   4399
void MI_Chain__Fi(int i) {
	// register: 22
	register int sx;
	// register: 21
	register int sy;
	// address: 0xFFFFFFD0
	auto int id;
	// register: 18
	register int l;
	// register: 2
	register int n;
	// register: 20
	register int m;
	// register: 19
	register int k;
	// register: 23
	register int rad;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// address: 0xFFFFFF78
	// size: 0x4C
	auto int CrawlNum[19];
}


// address: 0x8012FCA0
// line start: 4530
// line end:   4558
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x8012FFA0
// line start: 4561
// line end:   4582
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x8013013C
// line start: 4585
// line end:   4634
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80130504
// line start: 4751
// line end:   4778
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x801306B0
// line start: 4784
// line end:   4791
void MI_Boom__Fi(int i) {
}


// address: 0x801307A8
// line start: 4795
// line end:   4866
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


// address: 0x80130B54
// line start: 4948
// line end:   4981
void MI_FirewallC__Fi(int i) {
	// register: 20
	register int tx;
	// register: 19
	register int ty;
	// register: 3
	register int pn;
	// register: 17
	register int id;
}


// address: 0x80130EBC
// line start: 4987
// line end:   4995
void MI_Infra__Fi(int i) {
}


// address: 0x80130F74
// line start: 5001
// line end:   5025
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


// address: 0x80131208
// line start: 5030
// line end:   5085
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


// address: 0x80131704
// line start: 5092
// line end:   5137
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


// address: 0x801319C4
// line start: 5202
// line end:   5225
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x80131BBC
// line start: 5230
// line end:   5256
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
	// register: 2
	register int pn;
}


// address: 0x80131E44
// line start: 5261
// line end:   5303
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


// address: 0x80132148
// line start: 5308
// line end:   5345
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80132454
// line start: 5350
// line end:   5430
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


// address: 0x80132B0C
// line start: 5433
// line end:   5503
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


// address: 0x80132F14
// line start: 5506
// line end:   5511
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x80132F84
// line start: 5516
// line end:   5536
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x801331A8
// line start: 5543
// line end:   5595
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x8013359C
// line start: 5635
// line end:   5638
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x80133654
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80133668
// line start: 451
// line end:   470
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


// address: 0x801337FC
// line start: 489
// line end:   496
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x80133834
// line start: 515
// line end:   517
int M_GetDir__Fi(int i) {
}


// address: 0x80133890
// line start: 536
// line end:   544
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x801338D8
// line start: 559
// line end:   581
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


// address: 0x801339F0
// line start: 589
// line end:   612
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


// address: 0x80133B14
// line start: 619
// line end:   639
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


// address: 0x80133BFC
// line start: 647
// line end:   663
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x80133CCC
// line start: 670
// line end:   699
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


// address: 0x80133EA4
// line start: 706
// line end:   762
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


// address: 0x8013419C
// line start: 767
// line end:   823
void M_DiabloDeath__FiUc(int i, unsigned char sendmsg) {
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


// address: 0x801344C0
// line start: 830
// line end:   882
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x8013476C
// line start: 888
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


// address: 0x80134A40
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


// address: 0x80134E08
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


// address: 0x80134EF8
// line start: 1082
// line end:   1102
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8013504C
// line start: 1110
// line end:   1128
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x80135194
// line start: 1136
// line end:   1147
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80135214
// line start: 1154
// line end:   1189
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


// address: 0x801352B4
// line start: 1196
// line end:   1214
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013531C
// line start: 1221
// line end:   1252
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x801355A0
// line start: 1259
// line end:   1286
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8013578C
// line start: 1293
// line end:   1324
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80135A50
// line start: 1331
// line end:   1368
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80135C18
// line start: 1374
// line end:   1504
void M_TryH2HHit__Fiiiii(int i, int pnum, int Hit, int MinDam, int MaxDam) {
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


// address: 0x8013622C
// line start: 1510
// line end:   1549
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


// address: 0x801363D0
// line start: 1557
// line end:   1579
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x80136548
// line start: 1587
// line end:   1609
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x80136738
// line start: 1617
// line end:   1627
int M_DoSAttack__Fi(int i) {
}


// address: 0x8013680C
// line start: 1635
// line end:   1644
int M_DoFadein__Fi(int i) {
}


// address: 0x801368DC
// line start: 1651
// line end:   1669
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x801369F0
// line start: 1676
// line end:   1696
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80136A9C
// line start: 1703
// line end:   1793
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


// address: 0x80136F08
// line start: 1803
// line end:   1849
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


// address: 0x8013713C
// line start: 1855
// line end:   1863
int M_DoGotHit__Fi(int i) {
}


// address: 0x8013719C
// line start: 1875
// line end:   1915
void DoEnding__Fv() {
	// register: 16
	register unsigned char bMusicOn;
}


// address: 0x80137258
// line start: 1922
// line end:   1944
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8013737C
// line start: 1951
// line end:   1981
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 16
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x8013754C
// line start: 1988
// line end:   1998
int M_DoSpStand__Fi(int i) {
}


// address: 0x801375F0
// line start: 2003
// line end:   2022
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x801376E0
// line start: 2029
// line end:   2036
int M_DoStone__Fi(int i) {
}


// address: 0x80137764
// line start: 2043
// line end:   2102
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8013798C
// line start: 2111
// line end:   2187
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


// address: 0x80137D78
// line start: 2196
// line end:   2214
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x80137F64
// line start: 2222
// line end:   2236
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x80138028
// line start: 2247
// line end:   2260
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8013813C
// line start: 2268
// line end:   2275
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x80138190
// line start: 2282
// line end:   2314
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80138330
// line start: 2326
// line end:   2353
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


// address: 0x80138528
// line start: 2367
// line end:   2389
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


// address: 0x801386C0
// line start: 2404
// line end:   2461
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


// address: 0x80138AA4
// line start: 2473
// line end:   2540
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


// address: 0x80138E5C
// line start: 2553
// line end:   2585
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


// address: 0x80139040
// line start: 2596
// line end:   2617
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


// address: 0x801391F0
// line start: 2630
// line end:   2711
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


// address: 0x801395DC
// line start: 2723
// line end:   2799
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


// address: 0x801398D4
// line start: 2811
// line end:   2889
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


// address: 0x80139BF0
// line start: 2897
// line end:   2913
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


// address: 0x80139CD8
// line start: 2924
// line end:   2991
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


// address: 0x8013A144
// line start: 3001
// line end:   3002
void MAI_GoatMc__Fi(int i) {
}


// address: 0x8013A164
// line start: 3009
// line end:   3062
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


// address: 0x8013A384
// line start: 3068
// line end:   3069
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8013A3A8
// line start: 3073
// line end:   3074
void MAI_Succ__Fi(int i) {
}


// address: 0x8013A3CC
// line start: 3078
// line end:   3079
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x8013A3F0
// line start: 3093
// line end:   3179
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


// address: 0x8013A808
// line start: 3189
// line end:   3229
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


// address: 0x8013A9E8
// line start: 3242
// line end:   3333
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


// address: 0x8013AEFC
// line start: 3338
// line end:   3339
void MAI_Magma__Fi(int i) {
}


// address: 0x8013AF28
// line start: 3343
// line end:   3344
void MAI_Storm__Fi(int i) {
}


// address: 0x8013AF54
// line start: 3348
// line end:   3349
void MAI_Acid__Fi(int i) {
}


// address: 0x8013AF84
// line start: 3354
// line end:   3355
void MAI_Diablo__Fi(int i) {
}


// address: 0x8013AFB0
// line start: 3359
// line end:   3451
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


// address: 0x8013B4B0
// line start: 3456
// line end:   3457
void MAI_Mega__Fi(int i) {
}


// address: 0x8013B4D4
// line start: 3464
// line end:   3554
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


// address: 0x8013BA10
// line start: 3568
// line end:   3646
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


// address: 0x8013BEB8
// line start: 3659
// line end:   3753
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


// address: 0x8013C384
// line start: 3761
// line end:   3790
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


// address: 0x8013C534
// line start: 3799
// line end:   3830
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


// address: 0x8013C72C
// line start: 3839
// line end:   3882
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


// address: 0x8013C960
// line start: 3891
// line end:   3938
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


// address: 0x8013CBD8
// line start: 3947
// line end:   3977
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


// address: 0x8013CCF8
// line start: 3985
// line end:   4015
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


// address: 0x8013CE88
// line start: 4024
// line end:   4056
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


// address: 0x8013CFD4
// line start: 4065
// line end:   4088
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x8013D0F0
// line start: 4096
// line end:   4291
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


// address: 0x8013D6CC
// line start: 4300
// line end:   4362
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


// address: 0x8013DAB4
// line start: 4369
// line end:   4370
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x8013DB1C
// line start: 4377
// line end:   4378
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x8013DB60
// line start: 4405
// line end:   4524
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


// address: 0x8013DDE8
// line start: 4532
// line end:   4533
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8013DE28
// line start: 4544
// line end:   4659
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


// address: 0x8013E0BC
// line start: 4756
// line end:   4796
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


// address: 0x8013E28C
// line start: 4803
// line end:   4862
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x8013E4B4
// line start: 4869
// line end:   4895
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x8013E5D8
// line start: 4905
// line end:   4986
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


// address: 0x8013EA3C
// line start: 5008
// line end:   5037
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


// address: 0x8013EC58
// line start: 5048
// line end:   5088
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


// address: 0x8013EF4C
// line start: 5101
// line end:   5124
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


// address: 0x8013F0A4
// line start: 5140
// line end:   5167
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013F1C4
// line start: 5174
// line end:   5199
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x8013F41C
// line start: 5206
// line end:   5211
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x8013F454
// line start: 5218
// line end:   5234
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x8013F520
// line start: 5243
// line end:   5307
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


// address: 0x8013F894
// line start: 5315
// line end:   5346
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013F9F8
// line start: 5350
// line end:   5370
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


// address: 0x8013FAE0
// line start: 5374
// line end:   5405
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


// address: 0x8013FC40
// line start: 70
// line end:   92
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x8013FD48
// line start: 98
// line end:   112
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8013FE50
// line start: 120
// line end:   121
void AddInTownPortal__Fi(int i) {
}


// address: 0x8013FE8C
// line start: 128
// line end:   136
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8013FEFC
// line start: 144
// line end:   146
void DeactivatePortal__Fi(int i) {
}


// address: 0x8013FF1C
// line start: 153
// line end:   157
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8013FF54
// line start: 164
// line end:   176
void RemovePortalMissile__Fi(int id) {
	// register: 16
	register int i;
	// register: 17
	register int mi;
}


// address: 0x801400F0
// line start: 182
// line end:   183
void SetCurrentPortal__Fi(int p) {
}


// address: 0x801400FC
// line start: 188
// line end:   214
void GetPortalLevel__Fv() {
}


// address: 0x801402C8
// line start: 220
// line end:   233
void GetPortalLvlPos__Fv() {
}


// address: 0x8014037C
// line start: 423
// line end:   424
void FreeInvGFX__Fv() {
}


// address: 0x80140384
// line start: 429
// line end:   436
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80140408
// line start: 441
// line end:   472
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014065C
// line start: 478
// line end:   491
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8014072C
// line start: 496
// line end:   545
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x80140A40
// line start: 551
// line end:   553
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80140B0C
// line start: 558
// line end:   707
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


// address: 0x80141698
// line start: 712
// line end:   719
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80141720
// line start: 724
// line end:   827
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


// address: 0x80141BFC
// line start: 833
// line end:   864
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


// address: 0x80141DC4
// line start: 877
// line end:   878
void DrawInv__Fv() {
}


// address: 0x80141DF4
// line start: 883
// line end:   957
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x801420D4
// line start: 962
// line end:   1165
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
}


// address: 0x80142928
// line start: 1170
// line end:   1217
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


// address: 0x80142C44
// line start: 1222
// line end:   1286
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


// address: 0x80142FDC
// line start: 1291
// line end:   1384
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


// address: 0x801434A8
// line start: 1389
// line end:   1416
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80143730
// line start: 1422
// line end:   1428
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80143820
// line start: 1435
// line end:   1842
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
	// size: 0x94
	auto struct ItemStruct tempitem;
}


// address: 0x801454AC
// line start: 1884
// line end:   2000
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80145F38
// line start: 2025
// line end:   2046
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x801461DC
// line start: 2054
// line end:   2060
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x801462DC
// line start: 2066
// line end:   2070
void CheckInvScrn__Fv() {
}


// address: 0x80146354
// line start: 2084
// line end:   2093
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x801463D8
// line start: 2099
// line end:   2111
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8014650C
// line start: 2117
// line end:   2175
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x80146934
// line start: 2185
// line end:   2243
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80146C2C
// line start: 2250
// line end:   2385
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


// address: 0x80147690
// line start: 2429
// line end:   2443
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80147744
// line start: 2449
// line end:   2510
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


// address: 0x801478D0
// line start: 2525
// line end:   2547
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80147A98
// line start: 2577
// line end:   2676
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


// address: 0x80147F3C
// line start: 2688
// line end:   2792
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


// address: 0x80148498
// line start: 2797
// line end:   2906
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x801487DC
// line start: 2913
// line end:   2936
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x801489C0
// line start: 2942
// line end:   2964
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80148C28
// line start: 2971
// line end:   2978
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80148C90
// line start: 2986
// line end:   2994
unsigned char UseStaff__Fv() {
}


// address: 0x80148D50
// line start: 3045
// line end:   3059
void StartGoldDrop__Fv() {
}


// address: 0x80148E54
// line start: 3068
// line end:   3154
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x94
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x8014937C
// line start: 3160
// line end:   3172
void DoTelekinesis__Fv() {
}


// address: 0x801494A4
// line start: 3179
// line end:   3198
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x801495DC
// line start: 3212
// line end:   3219
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80149634
// line start: 3333
// line end:   3393
void ControlInv__Fv() {
}


// address: 0x801499BC
// line start: 3399
// line end:   3408
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x80149AB4
// line start: 3414
// line end:   3433
void InvAlignObject__Fv() {
}


// address: 0x80149C68
// line start: 3440
// line end:   3458
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x80149DFC
// line start: 3465
// line end:   3546
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
}


// address: 0x80149FD8
// line start: 3551
// line end:   3638
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x8014A2F0
// line start: 3643
// line end:   3734
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x8014A4D8
// line start: 3739
// line end:   3837
void InvMoveCursDown__Fv() {
	// register: 16
	register int ItemInc;
}


// address: 0x8014A7F0
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014A818
// line start: 113
// line end:   117
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8014A83C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014A85C
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014A864
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014A86C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8014A878
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014A8A0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8014A8FC
// line start: 84
// line end:   87
void StartAutomap__Fv() {
}


// address: 0x8014A914
// line start: 92
// line end:   93
void AutomapUp__Fv() {
}


// address: 0x8014A92C
// line start: 98
// line end:   99
void AutomapDown__Fv() {
}


// address: 0x8014A944
// line start: 104
// line end:   105
void AutomapLeft__Fv() {
}


// address: 0x8014A95C
// line start: 110
// line end:   111
void AutomapRight__Fv() {
}


// address: 0x8014A974
// size: 0x10
// line start: 132
// line end:   139
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x8014AA20
// line start: 144
// line end:   151
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8014AA88
// line start: 164
// line end:   241
void DrawAutomapPlr__Fv() {
	// register: 2
	register int Px;
	// register: 3
	register int Py;
	// register: 18
	register int x;
	// register: 19
	register int y;
	// register: 23
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


// address: 0x8014AE00
// line start: 246
// line end:   262
void DrawAutoMapVertWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014AEA8
// line start: 269
// line end:   285
void DrawAutoMapHorzWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014AF50
// line start: 291
// line end:   355
void DrawAutoMapVertDoor__Fii(int X, int Y) {
	// register: 7
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 18
	register int Ly;
	// register: 19
	register int x1;
	// register: 17
	register int x3;
}


// address: 0x8014B0C8
// line start: 362
// line end:   427
void DrawAutoMapHorzDoor__Fii(int X, int Y) {
	// register: 8
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 20
	register int y0;
	// register: 19
	register int x1;
	// register: 18
	register int y1;
	// register: 17
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x8014B248
// line start: 434
// line end:   450
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014B2DC
// line start: 457
// line end:   473
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014B370
// line start: 479
// line end:   528
void DrawAutoMapSquare__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 20
	register int y0;
	// register: 18
	register int x1;
	// register: 19
	register int y1;
	// register: 17
	register int y2;
	// register: 17
	register int x3;
}


// address: 0x8014B488
// line start: 535
// line end:   604
void DrawAutoMapStairs__Fii(int X, int Y) {
	// register: 3
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 17
	register int Ly;
	// register: 18
	register int x1;
	// register: 19
	register int y1;
	// register: 20
	register int y2;
	// register: 18
	register int x3;
}


// address: 0x8014B630
// line start: 611
// line end:   719
void DrawAutomap__Fv() {
	// register: 20
	register int MapX;
	// register: 19
	register int MapY;
	// register: 18
	register int Sx;
	// register: 21
	register int Sy;
	// register: 17
	register unsigned short Tile;
	// register: 16
	register int Len;
	{
		// register: 7
		register int pc;
		{
			{
				{
					// register: 4
					register int Px;
					// register: 5
					register int Py;
				}
			}
		}
	}
}


// address: 0x8014B98C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


