#include "types.h"

// === [ Overlay ID c ] ===

// address: 0x8012EA14
// line start: 63
// line end:   66
void GameOnlyTestRoutine__Fv() {
}


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


// address: 0x801406F0
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
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


// address: 0x8014E194
// line start: 70
// line end:   92
void AddWarpMissile__Fiii(int i, int x, int y) {
	// register: 2
	register int mi;
}


// address: 0x8014E29C
// line start: 98
// line end:   112
void SyncPortals__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8014E3A4
// line start: 120
// line end:   121
void AddInTownPortal__Fi(int i) {
}


// address: 0x8014E3E0
// line start: 128
// line end:   136
void ActivatePortal__FiiiiiUc(int i, int x, int y, int lvl, int lvltype, int sp) {
}


// address: 0x8014E4BC
// line start: 144
// line end:   146
void DeactivatePortal__Fi(int i) {
}


// address: 0x8014E514
// line start: 153
// line end:   157
unsigned char PortalOnLevel__Fi(int i) {
}


// address: 0x8014E584
// line start: 164
// line end:   176
void RemovePortalMissile__Fi(int id) {
	// register: 16
	register int i;
	// register: 17
	register int mi;
}


// address: 0x8014E720
// line start: 182
// line end:   183
void SetCurrentPortal__Fi(int p) {
}


// address: 0x8014E72C
// line start: 188
// line end:   214
void GetPortalLevel__Fv() {
}


// address: 0x8014E91C
// line start: 220
// line end:   233
void GetPortalLvlPos__Fv() {
}


// address: 0x8014EA00
// line start: 423
// line end:   424
void FreeInvGFX__Fv() {
}


// address: 0x8014EA08
// line start: 429
// line end:   436
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014EA8C
// line start: 441
// line end:   472
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8014ECE0
// line start: 478
// line end:   491
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x68
	register struct TextDat *TData;
}


// address: 0x8014EDB0
// line start: 496
// line end:   545
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8014F0C4
// line start: 551
// line end:   553
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8014F190
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


// address: 0x8014FD1C
// line start: 712
// line end:   719
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8014FDA4
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
	// size: 0x68
	register struct TextDat *TData;
}


// address: 0x80150280
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


// address: 0x80150448
// line start: 877
// line end:   878
void DrawInv__Fv() {
}


// address: 0x80150478
// line start: 883
// line end:   954
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 17
	// size: 0xDC
	register struct CBlocks *BgBlocks;
	// register: 18
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x80150744
// line start: 959
// line end:   1162
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 4
	register int ii;
	// register: 9
	register int ItemX;
	// register: 8
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x80151020
// line start: 1167
// line end:   1214
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


// address: 0x8015133C
// line start: 1219
// line end:   1283
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


// address: 0x801516D4
// line start: 1288
// line end:   1381
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


// address: 0x80151BA0
// line start: 1386
// line end:   1413
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80151E28
// line start: 1419
// line end:   1425
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x80151F18
// line start: 1432
// line end:   1839
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


// address: 0x80153BA4
// line start: 1881
// line end:   1997
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80154630
// line start: 2022
// line end:   2043
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x801548D4
// line start: 2051
// line end:   2057
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x801549D4
// line start: 2063
// line end:   2067
void CheckInvScrn__Fv() {
}


// address: 0x80154A4C
// line start: 2081
// line end:   2090
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x80154AD0
// line start: 2096
// line end:   2108
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x80154C04
// line start: 2114
// line end:   2172
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015502C
// line start: 2182
// line end:   2240
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80155324
// line start: 2247
// line end:   2382
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


// address: 0x80155D88
// line start: 2426
// line end:   2440
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x80155E3C
// line start: 2446
// line end:   2512
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


// address: 0x80156048
// line start: 2522
// line end:   2544
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80156210
// line start: 2574
// line end:   2673
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


// address: 0x801566B4
// line start: 2685
// line end:   2789
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


// address: 0x80156C50
// line start: 2794
// line end:   2897
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


// address: 0x80156F94
// line start: 2904
// line end:   2927
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80157178
// line start: 2933
// line end:   2955
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x801573E0
// line start: 2962
// line end:   2969
void UseStaffCharge__Fi(int pnum) {
}


// address: 0x801574A0
// line start: 2977
// line end:   2985
unsigned char UseStaff__Fv() {
}


// address: 0x80157560
// line start: 3036
// line end:   3050
void StartGoldDrop__Fv() {
}


// address: 0x80157664
// line start: 3059
// line end:   3145
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


// address: 0x80157B8C
// line start: 3151
// line end:   3163
void DoTelekinesis__Fv() {
}


// address: 0x80157CB4
// line start: 3170
// line end:   3189
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x80157DEC
// line start: 3203
// line end:   3210
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x80157E44
// line start: 3324
// line end:   3384
void ControlInv__Fv() {
}


// address: 0x801581CC
// line start: 3390
// line end:   3399
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801582C4
// line start: 3405
// line end:   3424
void InvAlignObject__Fv() {
}


// address: 0x80158478
// line start: 3431
// line end:   3449
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x8015860C
// line start: 3456
// line end:   3537
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
}


// address: 0x801587E8
// line start: 3542
// line end:   3629
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x80158B00
// line start: 3634
// line end:   3725
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x80158CE8
// line start: 3730
// line end:   3828
void InvMoveCursDown__Fv() {
	// register: 16
	register int ItemInc;
}


// address: 0x80159000
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x80159028
// line start: 113
// line end:   117
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8015904C
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015906C
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x80159074
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015907C
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x80159088
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x801590B0
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8015910C
// line start: 84
// line end:   87
void StartAutomap__Fv() {
}


// address: 0x80159124
// line start: 92
// line end:   93
void AutomapUp__Fv() {
}


// address: 0x8015913C
// line start: 98
// line end:   99
void AutomapDown__Fv() {
}


// address: 0x80159154
// line start: 104
// line end:   105
void AutomapLeft__Fv() {
}


// address: 0x8015916C
// line start: 110
// line end:   111
void AutomapRight__Fv() {
}


// address: 0x80159184
// size: 0x10
// line start: 132
// line end:   139
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x80159230
// line start: 144
// line end:   151
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x80159298
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


// address: 0x80159610
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


// address: 0x801596B8
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


// address: 0x80159760
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


// address: 0x801598D8
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


// address: 0x80159A58
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


// address: 0x80159AEC
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


// address: 0x80159B80
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


// address: 0x80159C98
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


// address: 0x80159E40
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


// address: 0x8015A19C
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


