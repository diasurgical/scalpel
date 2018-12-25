#include "types.h"

// === [ Overlay ID c ] ===

// address: 0x8012427C
// line start: 63
// line end:   66
void GameOnlyTestRoutine__Fv() {
}


// address: 0x80124284
// line start: 106
// line end:   107
int vecleny__Fii(int a, int b) {
}


// address: 0x801242A8
// line start: 111
// line end:   112
int veclenx__Fii(int a, int b) {
}


// address: 0x801242D4
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


// address: 0x801248CC
// line start: 434
// line end:   450
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 2
	register int pn;
	// register: 20
	register int coll;
}


// address: 0x801249B4
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


// address: 0x80124B50
// line start: 485
// line end:   495
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x80124BC4
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


// address: 0x80124DE0
// line start: 609
// line end:   616
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x80124E38
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


// address: 0x80124FEC
// line start: 640
// line end:   654
void PutMissile__Fi(int i) {
	// register: 6
	register int mx;
	// register: 5
	register int my;
}


// address: 0x801250F0
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


// address: 0x80125218
// line start: 713
// line end:   770
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80125380
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


// address: 0x801256F4
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


// address: 0x80125E54
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


// address: 0x801268C0
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


// address: 0x8012709C
// line start: 1202
// line end:   1291
void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel) {
	// register: 2
	register int pn;
	// register: 5
	register int oi;
}


// address: 0x801277DC
// line start: 1294
// line end:   1308
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x80127870
// line start: 1314
// line end:   1333
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x80127940
// line start: 1338
// line end:   1341
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x80127984
// line start: 1494
// line end:   1514
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80127B64
// line start: 1520
// line end:   1539
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x80127D20
// line start: 1545
// line end:   1564
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


// address: 0x80127E44
// line start: 1575
// line end:   1626
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


// address: 0x801281B4
// line start: 1637
// line end:   1679
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x80128420
// line start: 1687
// line end:   1701
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128534
// line start: 1721
// line end:   1757
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


// address: 0x8012872C
// line start: 1765
// line end:   1781
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128880
// line start: 1787
// line end:   1803
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80128A68
// line start: 1812
// line end:   1850
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x80128CC4
// line start: 1858
// line end:   1869
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128DAC
// line start: 1873
// line end:   1900
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80128F74
// line start: 1909
// line end:   1933
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129180
// line start: 1957
// line end:   1965
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x80129264
// line start: 1969
// line end:   2034
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


// address: 0x80129688
// line start: 2042
// line end:   2061
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80129898
// line start: 2070
// line end:   2097
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x80129A78
// line start: 2101
// line end:   2111
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129B40
// line start: 2120
// line end:   2132
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129C9C
// line start: 2137
// line end:   2195
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


// address: 0x8012A108
// line start: 2198
// line end:   2205
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A164
// line start: 2341
// line end:   2378
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x8012A320
// line start: 2416
// line end:   2461
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A618
// line start: 2469
// line end:   2481
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A71C
// line start: 2551
// line end:   2575
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x8012A7F4
// line start: 2579
// line end:   2640
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


// address: 0x8012AAEC
// line start: 2654
// line end:   2699
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012ACA4
// line start: 2778
// line end:   2789
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AD38
// line start: 2795
// line end:   2814
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8012AF60
// line start: 2822
// line end:   2828
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012AFC8
// line start: 2836
// line end:   2866
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x8012B1F4
// line start: 2874
// line end:   2883
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B2A4
// line start: 2891
// line end:   2938
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


// address: 0x8012B554
// line start: 2941
// line end:   2950
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8012B650
// line start: 2957
// line end:   2965
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B6D4
// line start: 2972
// line end:   2989
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x8012B8EC
// line start: 3012
// line end:   3021
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B99C
// line start: 3029
// line end:   3038
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012BA4C
// line start: 3046
// line end:   3052
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012BAB4
// line start: 3060
// line end:   3082
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012BCF0
// line start: 3089
// line end:   3118
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x8012BF0C
// line start: 3126
// line end:   3143
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012BFFC
// line start: 3150
// line end:   3185
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x8012C1F0
// line start: 3194
// line end:   3218
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x8012C3B0
// line start: 3227
// line end:   3235
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C424
// line start: 3239
// line end:   3249
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C4AC
// line start: 3256
// line end:   3262
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C514
// line start: 3270
// line end:   3307
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C710
// line start: 3317
// line end:   3328
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C7B0
// line start: 3332
// line end:   3343
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x8012C8EC
// line start: 3347
// line end:   3415
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
}


// address: 0x8012CC38
// line start: 3451
// line end:   3471
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x8012CE1C
// line start: 3477
// line end:   3478
void MI_Dummy__Fi(int i) {
}


// address: 0x8012CE24
// line start: 3481
// line end:   3511
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


// address: 0x8012D080
// line start: 3516
// line end:   3519
void MI_SetManashield__Fi(int i) {
}


// address: 0x8012D0BC
// line start: 3524
// line end:   3610
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


// address: 0x8012D878
// line start: 3614
// line end:   3639
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x8012DA94
// line start: 3643
// line end:   3730
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


// address: 0x8012E160
// line start: 3733
// line end:   3761
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


// address: 0x8012E3E8
// line start: 3779
// line end:   3804
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x8012E4F8
// line start: 3808
// line end:   3842
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x8012E7BC
// line start: 3847
// line end:   3939
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


// address: 0x8012F180
// line start: 3942
// line end:   4000
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


// address: 0x8012F6EC
// line start: 4003
// line end:   4020
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
}


// address: 0x8012F868
// line start: 4025
// line end:   4064
void MI_Town__Fi(int i) {
	// register: 17
	register int p;
	// address: 0xFFFFFFA0
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x8012FB0C
// line start: 4069
// line end:   4100
void MI_Flash__Fi(int i) {
}


// address: 0x8012FF44
// line start: 4105
// line end:   4129
void MI_Flash2__Fi(int i) {
}


// address: 0x8013018C
// line start: 4134
// line end:   4207
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


// address: 0x80130794
// line start: 4251
// line end:   4293
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x80130BD0
// line start: 4297
// line end:   4363
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


// address: 0x80130F9C
// line start: 4368
// line end:   4403
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


// address: 0x80131298
// line start: 4534
// line end:   4562
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x80131598
// line start: 4565
// line end:   4586
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x80131734
// line start: 4589
// line end:   4638
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80131AFC
// line start: 4755
// line end:   4782
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x80131CA8
// line start: 4788
// line end:   4795
void MI_Boom__Fi(int i) {
}


// address: 0x80131DA0
// line start: 4799
// line end:   4870
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


// address: 0x8013214C
// line start: 4952
// line end:   4985
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


// address: 0x801324B4
// line start: 4991
// line end:   4999
void MI_Infra__Fi(int i) {
}


// address: 0x8013256C
// line start: 5005
// line end:   5029
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


// address: 0x80132800
// line start: 5034
// line end:   5089
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


// address: 0x80132CFC
// line start: 5096
// line end:   5141
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


// address: 0x80132FBC
// line start: 5206
// line end:   5229
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x801331B4
// line start: 5234
// line end:   5260
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
	// register: 2
	register int pn;
}


// address: 0x8013343C
// line start: 5265
// line end:   5307
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


// address: 0x80133740
// line start: 5312
// line end:   5349
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80133A4C
// line start: 5354
// line end:   5434
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


// address: 0x80134104
// line start: 5437
// line end:   5507
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


// address: 0x8013450C
// line start: 5510
// line end:   5515
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x8013457C
// line start: 5520
// line end:   5540
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x801347A0
// line start: 5547
// line end:   5599
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x80134B94
// line start: 5639
// line end:   5642
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x80134C4C
// line start: 128
// line end:   128
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80134C60
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


// address: 0x80134DF4
// line start: 485
// line end:   492
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x80134E2C
// line start: 511
// line end:   513
int M_GetDir__Fi(int i) {
}


// address: 0x80134E88
// line start: 532
// line end:   540
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x80134ED0
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


// address: 0x80134FE8
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


// address: 0x8013510C
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


// address: 0x801351F4
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


// address: 0x801352C4
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


// address: 0x8013549C
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


// address: 0x80135794
// line start: 763
// line end:   819
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


// address: 0x80135AB8
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


// address: 0x80135D64
// line start: 884
// line end:   948
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


// address: 0x80136038
// line start: 955
// line end:   1018
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


// address: 0x80136400
// line start: 1025
// line end:   1044
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x801364F0
// line start: 1078
// line end:   1098
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x80136644
// line start: 1106
// line end:   1124
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8013678C
// line start: 1132
// line end:   1143
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8013680C
// line start: 1150
// line end:   1185
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


// address: 0x801368AC
// line start: 1192
// line end:   1210
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80136914
// line start: 1217
// line end:   1248
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80136B98
// line start: 1255
// line end:   1282
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80136D84
// line start: 1289
// line end:   1320
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x80137048
// line start: 1327
// line end:   1364
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x80137210
// line start: 1370
// line end:   1500
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


// address: 0x80137824
// line start: 1506
// line end:   1545
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


// address: 0x801379C8
// line start: 1553
// line end:   1575
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x80137B40
// line start: 1583
// line end:   1605
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x80137D30
// line start: 1613
// line end:   1623
int M_DoSAttack__Fi(int i) {
}


// address: 0x80137E04
// line start: 1631
// line end:   1640
int M_DoFadein__Fi(int i) {
}


// address: 0x80137ED4
// line start: 1647
// line end:   1665
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x80137FE8
// line start: 1672
// line end:   1692
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80138094
// line start: 1699
// line end:   1789
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


// address: 0x80138500
// line start: 1799
// line end:   1845
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


// address: 0x80138734
// line start: 1851
// line end:   1859
int M_DoGotHit__Fi(int i) {
}


// address: 0x80138794
// line start: 1871
// line end:   1911
void DoEnding__Fv() {
	// register: 16
	register unsigned char bMusicOn;
}


// address: 0x80138840
// line start: 1918
// line end:   1940
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80138964
// line start: 1947
// line end:   1977
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 16
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80138B34
// line start: 1984
// line end:   1994
int M_DoSpStand__Fi(int i) {
}


// address: 0x80138BD8
// line start: 1999
// line end:   2018
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x80138CC8
// line start: 2025
// line end:   2032
int M_DoStone__Fi(int i) {
}


// address: 0x80138D4C
// line start: 2039
// line end:   2098
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x80138F74
// line start: 2107
// line end:   2183
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


// address: 0x80139360
// line start: 2192
// line end:   2210
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8013954C
// line start: 2218
// line end:   2232
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x80139610
// line start: 2243
// line end:   2256
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80139724
// line start: 2264
// line end:   2271
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x80139778
// line start: 2278
// line end:   2310
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x80139918
// line start: 2322
// line end:   2349
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


// address: 0x80139B10
// line start: 2363
// line end:   2385
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


// address: 0x80139CA8
// line start: 2400
// line end:   2457
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


// address: 0x8013A08C
// line start: 2469
// line end:   2536
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


// address: 0x8013A444
// line start: 2549
// line end:   2581
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


// address: 0x8013A628
// line start: 2592
// line end:   2613
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


// address: 0x8013A7D8
// line start: 2626
// line end:   2707
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


// address: 0x8013ABC4
// line start: 2719
// line end:   2795
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


// address: 0x8013AEBC
// line start: 2807
// line end:   2885
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


// address: 0x8013B1D8
// line start: 2893
// line end:   2909
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


// address: 0x8013B2C0
// line start: 2920
// line end:   2987
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


// address: 0x8013B72C
// line start: 2997
// line end:   2998
void MAI_GoatMc__Fi(int i) {
}


// address: 0x8013B74C
// line start: 3005
// line end:   3058
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


// address: 0x8013B96C
// line start: 3064
// line end:   3065
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8013B990
// line start: 3069
// line end:   3070
void MAI_Succ__Fi(int i) {
}


// address: 0x8013B9B4
// line start: 3074
// line end:   3075
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x8013B9D8
// line start: 3089
// line end:   3175
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


// address: 0x8013BDF0
// line start: 3185
// line end:   3225
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


// address: 0x8013BFD0
// line start: 3238
// line end:   3329
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


// address: 0x8013C4E4
// line start: 3334
// line end:   3335
void MAI_Magma__Fi(int i) {
}


// address: 0x8013C510
// line start: 3339
// line end:   3340
void MAI_Storm__Fi(int i) {
}


// address: 0x8013C53C
// line start: 3344
// line end:   3345
void MAI_Acid__Fi(int i) {
}


// address: 0x8013C56C
// line start: 3350
// line end:   3351
void MAI_Diablo__Fi(int i) {
}


// address: 0x8013C598
// line start: 3355
// line end:   3447
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


// address: 0x8013CA98
// line start: 3452
// line end:   3453
void MAI_Mega__Fi(int i) {
}


// address: 0x8013CABC
// line start: 3460
// line end:   3550
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


// address: 0x8013CFF8
// line start: 3564
// line end:   3642
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


// address: 0x8013D4A0
// line start: 3655
// line end:   3749
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


// address: 0x8013D96C
// line start: 3757
// line end:   3786
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


// address: 0x8013DB1C
// line start: 3795
// line end:   3826
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


// address: 0x8013DD14
// line start: 3835
// line end:   3877
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


// address: 0x8013DF48
// line start: 3886
// line end:   3933
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


// address: 0x8013E1C0
// line start: 3942
// line end:   3972
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


// address: 0x8013E2E0
// line start: 3980
// line end:   4010
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


// address: 0x8013E470
// line start: 4019
// line end:   4051
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


// address: 0x8013E5BC
// line start: 4060
// line end:   4083
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x8013E6D8
// line start: 4091
// line end:   4286
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


// address: 0x8013EC60
// line start: 4295
// line end:   4357
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


// address: 0x8013F048
// line start: 4364
// line end:   4365
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x8013F0B0
// line start: 4372
// line end:   4373
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x8013F0F4
// line start: 4400
// line end:   4519
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


// address: 0x8013F37C
// line start: 4527
// line end:   4528
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x8013F3BC
// line start: 4539
// line end:   4654
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


// address: 0x8013F650
// line start: 4751
// line end:   4791
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


// address: 0x8013F820
// line start: 4798
// line end:   4857
void PrintMonstHistory__Fi(int mt) {
	// register: 16
	register int res;
}


// address: 0x8013FA48
// line start: 4864
// line end:   4890
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x8013FB6C
// line start: 4900
// line end:   4981
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


// address: 0x8013FFD0
// line start: 5003
// line end:   5032
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


// address: 0x801401EC
// line start: 5043
// line end:   5083
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


// address: 0x801404E0
// line start: 5096
// line end:   5119
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


// address: 0x80140638
// line start: 5135
// line end:   5162
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80140758
// line start: 5169
// line end:   5194
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x801409B0
// line start: 5201
// line end:   5206
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x801409E8
// line start: 5213
// line end:   5229
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x80140AB4
// line start: 5238
// line end:   5302
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


// address: 0x80140E28
// line start: 5310
// line end:   5341
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80140F8C
// line start: 5345
// line end:   5365
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


// address: 0x80141074
// line start: 5369
// line end:   5400
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


// address: 0x801411D4
// line start: 429
// line end:   430
void FreeInvGFX__Fv() {
}


// address: 0x801411DC
// line start: 435
// line end:   442
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80141260
// line start: 447
// line end:   478
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x801414B4
// line start: 484
// line end:   497
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80141584
// line start: 502
// line end:   547
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8014185C
// line start: 557
// line end:   559
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80141928
// line start: 564
// line end:   713
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


// address: 0x801424B4
// line start: 718
// line end:   725
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8014253C
// line start: 730
// line end:   833
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


// address: 0x80142A18
// line start: 839
// line end:   870
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


// address: 0x80142BE0
// line start: 876
// line end:   907
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


// address: 0x80142D04
// line start: 920
// line end:   925
void DrawInv__Fv() {
}


// address: 0x80142D44
// line start: 931
// line end:   1023
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x80143074
// line start: 1028
// line end:   1232
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


// address: 0x8014383C
// line start: 1237
// line end:   1284
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


// address: 0x80143B5C
// line start: 1289
// line end:   1353
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


// address: 0x80143EF8
// line start: 1358
// line end:   1451
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


// address: 0x801443C8
// line start: 1456
// line end:   1483
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x80144654
// line start: 1489
// line end:   1495
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x80144750
// line start: 1502
// line end:   1909
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


// address: 0x8014643C
// line start: 1951
// line end:   2067
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80146EEC
// line start: 2092
// line end:   2113
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x80147194
// line start: 2121
// line end:   2127
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x80147294
// line start: 2133
// line end:   2137
void CheckInvScrn__Fv() {
}


// address: 0x8014730C
// line start: 2151
// line end:   2160
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x80147390
// line start: 2166
// line end:   2178
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x801474C4
// line start: 2184
// line end:   2242
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x801478EC
// line start: 2252
// line end:   2311
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80147BE8
// line start: 2318
// line end:   2453
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


// address: 0x80148658
// line start: 2497
// line end:   2511
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8014870C
// line start: 2517
// line end:   2578
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


// address: 0x80148898
// line start: 2593
// line end:   2615
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80148A60
// line start: 2645
// line end:   2745
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


// address: 0x80148F08
// line start: 2757
// line end:   2861
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


// address: 0x80149464
// line start: 2866
// line end:   2975
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


// address: 0x801497AC
// line start: 2982
// line end:   3005
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80149990
// line start: 3011
// line end:   3033
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80149BF8
// line start: 3040
// line end:   3047
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80149C60
// line start: 3055
// line end:   3063
unsigned char UseStaff__Fv() {
}


// address: 0x80149D20
// line start: 3114
// line end:   3128
void StartGoldDrop__Fv() {
}


// address: 0x80149E1C
// line start: 3137
// line end:   3223
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


// address: 0x8014A340
// line start: 3229
// line end:   3241
void DoTelekinesis__Fv() {
}


// address: 0x8014A468
// line start: 3248
// line end:   3267
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8014A5A0
// line start: 3281
// line end:   3288
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8014A5F8
// line start: 3403
// line end:   3473
void ControlInv__Fv() {
}


// address: 0x8014A8D8
// line start: 3479
// line end:   3488
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8014A9CC
// line start: 3494
// line end:   3513
void InvAlignObject__Fv() {
}


// address: 0x8014AB80
// line start: 3520
// line end:   3538
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x8014AD14
// line start: 3545
// line end:   3628
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014AF00
// line start: 3634
// line end:   3723
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014B228
// line start: 3728
// line end:   3821
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014B420
// line start: 3826
// line end:   3926
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8014B748
// line start: 156
// line end:   156
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8014B770
// line start: 118
// line end:   122
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8014B794
// line start: 102
// line end:   105
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8014B7B4
// line start: 97
// line end:   97
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014B7BC
// line start: 94
// line end:   94
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8014B7C4
// line start: 84
// line end:   87
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8014B7D0
// line start: 77
// line end:   77
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8014B7F8
// size: 0x10
// line start: 60
// line end:   73
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8014B854
// line start: 109
// line end:   112
void StartAutomap__Fv() {
}


// address: 0x8014B86C
// line start: 117
// line end:   118
void AutomapUp__Fv() {
}


// address: 0x8014B884
// line start: 123
// line end:   124
void AutomapDown__Fv() {
}


// address: 0x8014B89C
// line start: 129
// line end:   130
void AutomapLeft__Fv() {
}


// address: 0x8014B8B4
// line start: 135
// line end:   136
void AutomapRight__Fv() {
}


// address: 0x8014B8CC
// size: 0x10
// line start: 157
// line end:   164
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x8014B978
// line start: 169
// line end:   176
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8014B9E0
// line start: 183
// line end:   190
void AmDrawPlayer__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8014BA48
// line start: 203
// line end:   280
void DrawAutomapPlr__Fv() {
	// register: 2
	register int Px;
	// register: 5
	register int Py;
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


// address: 0x8014BDCC
// line start: 285
// line end:   301
void DrawAutoMapVertWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 6
	register int Ly;
}


// address: 0x8014BEA0
// line start: 308
// line end:   324
void DrawAutoMapHorzWall__Fiii(int X, int Y, int Length) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 6
	register int Ly;
}


// address: 0x8014BF74
// line start: 330
// line end:   394
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


// address: 0x8014C148
// line start: 401
// line end:   466
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


// address: 0x8014C320
// line start: 473
// line end:   489
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014C3D4
// line start: 496
// line end:   512
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8014C488
// line start: 518
// line end:   567
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


// address: 0x8014C5D0
// line start: 574
// line end:   643
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


// address: 0x8014C7D0
// line start: 650
// line end:   768
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
	// address: 0xFFFFFFD8
	// size: 0x4
	auto char levno[4];
	// register: 2
	register int len;
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


// address: 0x8014CBEC
// line start: 65
// line end:   71
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


