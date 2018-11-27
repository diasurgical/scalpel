// C:\diabpsx\SOURCE\MISSILES.CPP

#include "types.h"

// address: 0x8012EA1C
// line start: 98
// line end:   99
int vecleny__Fii(int a, int b) {
}


// address: 0x8012EA40
// line start: 103
// line end:   104
int veclenx__Fii(int a, int b) {
}


// address: 0x8012EA6C
// line start: 257
// line end:   408
void GetDamageAmt__FiPiT1(int i, int *mind, int *maxd) {
	// register: 5
	register int k;
	// register: 4
	register int sl;
	// register: 18
	register int myplr;
	// register: 20
	// size: 0x22D0
	register struct PlayerStruct *plr;
	// register: 5
	register int _pMagic;
	// register: 6
	register char _pLevel;
	// register: 8
	register char _pClass;
}


// address: 0x8012F0DC
// line start: 426
// line end:   442
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 17
	register int pn;
	// register: 21
	register int coll;
}


// address: 0x8012F22C
// line start: 448
// line end:   470
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


// address: 0x8012F3C8
// line start: 477
// line end:   487
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x8012F49C
// line start: 509
// line end:   549
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


// address: 0x8012F6B8
// line start: 601
// line end:   608
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x8012F778
// line start: 615
// line end:   623
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x8012F8FC
// line start: 629
// line end:   643
void PutMissile__Fi(int i) {
	// register: 5
	register int mx;
	// register: 4
	register int my;
}


// address: 0x8012FA38
// line start: 660
// line end:   691
void GetMissilePos__Fi(int i) {
	// register: 7
	register long mx;
	// register: 10
	register long my;
	// register: 8
	register long dx;
	// register: 9
	register long dy;
	// register: 4
	register long lx;
	// register: 3
	register long ly;
}


// address: 0x8012FB88
// line start: 702
// line end:   759
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x8012FD10
// line start: 767
// line end:   840
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


// address: 0x801300D0
// line start: 847
// line end:   955
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


// address: 0x801308AC
// line start: 962
// line end:   1085
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


// address: 0x8013133C
// line start: 1092
// line end:   1184
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


// address: 0x80131B3C
// line start: 1191
// line end:   1280
void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel) {
	// register: 16
	register int pn;
	// register: 5
	register int oi;
}


// address: 0x801322B8
// line start: 1283
// line end:   1297
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 6
	register int dir;
}


// address: 0x801323A8
// line start: 1302
// line end:   1305
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x80132420
// line start: 1458
// line end:   1478
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80132620
// line start: 1484
// line end:   1503
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x801327FC
// line start: 1509
// line end:   1528
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


// address: 0x8013293C
// line start: 1539
// line end:   1590
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


// address: 0x80132CDC
// line start: 1601
// line end:   1643
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 17
	register int i;
	// register: 16
	register int mx;
}


// address: 0x80132FBC
// line start: 1651
// line end:   1665
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801330F0
// line start: 1685
// line end:   1721
void AddTeleport__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 9
	register int i;
	// register: 2
	register int pn;
	// register: 10
	register int k;
	// register: 2
	register int l;
	// register: 8
	register int j;
	// register: 5
	register int tx;
	// register: 6
	register int ty;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013335C
// line start: 1729
// line end:   1745
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801334D0
// line start: 1751
// line end:   1767
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x801336D4
// line start: 1776
// line end:   1814
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x8013394C
// line start: 1822
// line end:   1833
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80133A54
// line start: 1837
// line end:   1864
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80133C4C
// line start: 1873
// line end:   1897
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80133EC0
// line start: 1921
// line end:   1929
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x80133FCC
// line start: 1933
// line end:   1998
void AddTown__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int i;
	// register: 16
	register int pn;
	// register: 23
	register int k;
	// register: 2
	register int l;
	// register: 20
	register int j;
	// register: 21
	register int tx;
	// register: 22
	register int ty;
	// register: 3
	register int mx;
	// address: 0xFFFFFFB0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013442C
// line start: 2006
// line end:   2025
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013465C
// line start: 2034
// line end:   2061
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80134870
// line start: 2065
// line end:   2075
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80134970
// line start: 2084
// line end:   2096
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80134AE8
// line start: 2101
// line end:   2159
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
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80134FD0
// line start: 2162
// line end:   2169
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80135068
// line start: 2305
// line end:   2342
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x801352C8
// line start: 2380
// line end:   2425
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801355E0
// line start: 2433
// line end:   2445
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80135704
// line start: 2515
// line end:   2539
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x801357FC
// line start: 2543
// line end:   2604
void AddStone__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 6
	register int i;
	// register: 7
	register int j;
	// register: 8
	register int k;
	// register: 2
	register int l;
	// register: 16
	register int tx;
	// register: 17
	register int ty;
	// register: 4
	register int mid;
	// address: 0xFFFFFFC8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80135B48
// line start: 2618
// line end:   2663
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFC0
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80135D4C
// line start: 2742
// line end:   2753
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80135E34
// line start: 2759
// line end:   2778
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8013607C
// line start: 2786
// line end:   2792
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013610C
// line start: 2800
// line end:   2830
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x80136354
// line start: 2838
// line end:   2847
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80136424
// line start: 2855
// line end:   2902
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
	// address: 0xFFFFFFA8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x80136700
// line start: 2905
// line end:   2914
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80136830
// line start: 2921
// line end:   2929
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801368B4
// line start: 2936
// line end:   2953
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x80136AEC
// line start: 2976
// line end:   2985
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80136BBC
// line start: 2993
// line end:   3002
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80136C8C
// line start: 3010
// line end:   3016
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80136D1C
// line start: 3024
// line end:   3045
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80136F7C
// line start: 3052
// line end:   3081
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 3
	register int i;
}


// address: 0x801371F8
// line start: 3089
// line end:   3106
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80137308
// line start: 3113
// line end:   3148
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x80137520
// line start: 3157
// line end:   3181
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x80137700
// line start: 3190
// line end:   3198
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80137794
// line start: 3202
// line end:   3211
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013786C
// line start: 3218
// line end:   3224
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801378FC
// line start: 3232
// line end:   3269
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80137B14
// line start: 3279
// line end:   3290
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80137BF8
// line start: 3294
// line end:   3305
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x80137D54
// line start: 3309
// line end:   3377
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
}


// address: 0x801380A8
// line start: 3413
// line end:   3433
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x801382A8
// line start: 3439
// line end:   3440
void MI_Dummy__Fi(int i) {
}


// address: 0x801382B0
// line start: 3443
// line end:   3473
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


// address: 0x8013852C
// line start: 3478
// line end:   3481
void MI_SetManashield__Fi(int i) {
}


// address: 0x80138568
// line start: 3486
// line end:   3572
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


// address: 0x80138D44
// line start: 3576
// line end:   3601
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x80138F78
// line start: 3605
// line end:   3692
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


// address: 0x80139660
// line start: 3695
// line end:   3723
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


// address: 0x80139904
// line start: 3741
// line end:   3766
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x80139A34
// line start: 3770
// line end:   3804
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x80139D18
// line start: 3809
// line end:   3901
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


// address: 0x8013A6F8
// line start: 3904
// line end:   3962
void MI_Lightctrl__Fi(int i) {
	// register: 17
	register int pn;
	// register: 21
	register int dam;
	// register: 3
	register int p;
	// register: 19
	register int mx;
	// register: 20
	register int my;
}


// address: 0x8013ACA8
// line start: 3965
// line end:   3982
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
}


// address: 0x8013AE40
// line start: 3987
// line end:   4026
void MI_Town__Fi(int i) {
	// register: 17
	register int p;
	// address: 0xFFFFFFA0
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8013B104
// line start: 4031
// line end:   4056
void MI_Flash__Fi(int i) {
}


// address: 0x8013B534
// line start: 4061
// line end:   4077
void MI_Flash2__Fi(int i) {
}


// address: 0x8013B774
// line start: 4082
// line end:   4155
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


// address: 0x8013BD98
// line start: 4199
// line end:   4241
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x8013C1F4
// line start: 4245
// line end:   4311
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


// address: 0x8013C5E0
// line start: 4316
// line end:   4351
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


// address: 0x8013C904
// line start: 4482
// line end:   4510
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x8013CC24
// line start: 4513
// line end:   4534
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x8013CDE8
// line start: 4537
// line end:   4586
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xDC
	register struct CBlocks *gblocks;
}


// address: 0x8013D1D0
// line start: 4703
// line end:   4730
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x8013D398
// line start: 4736
// line end:   4743
void MI_Boom__Fi(int i) {
}


// address: 0x8013D4AC
// line start: 4747
// line end:   4818
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


// address: 0x8013D894
// line start: 4900
// line end:   4933
void MI_FirewallC__Fi(int i) {
	// register: 20
	register int tx;
	// register: 17
	register int ty;
	// register: 17
	register int pn;
	// register: 18
	register int id;
}


// address: 0x8013DC88
// line start: 4939
// line end:   4947
void MI_Infra__Fi(int i) {
}


// address: 0x8013DD68
// line start: 4953
// line end:   4977
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


// address: 0x8013E01C
// line start: 4982
// line end:   5037
void MI_Wave__Fi(int i) {
	// address: 0xFFFFFF88
	auto int dira;
	// address: 0xFFFFFF90
	auto int dirb;
	// register: 18
	register int nxa;
	// register: 19
	register int nya;
	// register: 17
	register int nxb;
	// register: 20
	register int nyb;
	// register: 16
	register int pn;
	// register: 2
	register int sd;
	// register: 22
	register int j;
	// address: 0xFFFFFF98
	auto int f1;
	// address: 0xFFFFFFA0
	auto int f2;
	// register: 23
	register int id;
	// address: 0xFFFFFFA8
	auto int sx;
	// address: 0xFFFFFFB0
	auto int sy;
}


// address: 0x8013E5C4
// line start: 5044
// line end:   5089
void MI_Nova__Fi(int i) {
	// address: 0xFFFFFFC8
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
	// register: 16
	register int sx1;
	// register: 7
	register int sy1;
	// register: 30
	register int dam;
}


// address: 0x8013E8A4
// line start: 5154
// line end:   5177
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x8013EAB8
// line start: 5182
// line end:   5208
void MI_Flamec__Fi(int i) {
	// register: 19
	register int id;
	// register: 17
	register int pn;
}


// address: 0x8013EDE8
// line start: 5213
// line end:   5255
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


// address: 0x8013F10C
// line start: 5260
// line end:   5297
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x8013F438
// line start: 5302
// line end:   5382
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


// address: 0x8013FB0C
// line start: 5385
// line end:   5455
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


// address: 0x8013FF30
// line start: 5458
// line end:   5463
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x8013FFC8
// line start: 5468
// line end:   5488
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8014020C
// line start: 5495
// line end:   5547
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x80140600
// line start: 5587
// line end:   5590
void ClearMissileSpot__Fi(int mi) {
}


