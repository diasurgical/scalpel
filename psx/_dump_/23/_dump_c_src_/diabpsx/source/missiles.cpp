// C:\diabpsx\SOURCE\MISSILES.CPP

#include "types.h"

// address: 0x80124F14
int vecleny__Fii(int a, int b) {
}


// address: 0x80124F38
int veclenx__Fii(int a, int b) {
}


// address: 0x80124F64
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


// address: 0x8012555C
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 2
	register int pn;
	// register: 20
	register int coll;
}


// address: 0x80125644
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


// address: 0x801257E0
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x80125854
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


// address: 0x80125A70
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x80125AC8
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x80125C7C
void PutMissile__Fi(int i) {
	// register: 6
	register int mx;
	// register: 5
	register int my;
}


// address: 0x80125D80
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


// address: 0x80125EA8
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80126010
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


// address: 0x80126384
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


// address: 0x80126AE4
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


// address: 0x80127550
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


// address: 0x80127D2C
void CheckMissileCol__FiiiUciiUc(int i, int mindam, int maxdam, unsigned char shift, int mx, int my, int nodel) {
	// register: 2
	register int pn;
	// register: 5
	register int oi;
}


// address: 0x8012846C
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x80128500
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x801285D0
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x80128614
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801287F4
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x801289B0
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


// address: 0x80128AD4
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


// address: 0x80128E44
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x801290B0
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801291C4
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


// address: 0x801293BC
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129510
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x801296F8
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x80129954
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129A3C
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129C04
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80129E10
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x80129EF4
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


// address: 0x8012A318
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012A528
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012A708
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A7D0
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012A92C
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


// address: 0x8012AD98
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012ADF4
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x8012AFB0
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B2A8
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B3AC
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x8012B484
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


// address: 0x8012B77C
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8012B934
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012B9C8
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8012BBF0
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012BC58
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x8012BE84
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012BF34
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


// address: 0x8012C1E4
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8012C2E0
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C364
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x8012C57C
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C62C
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C6DC
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012C744
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8012C980
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x8012CB9C
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012CC8C
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x8012CE80
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x8012D040
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D0B4
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D13C
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D1A4
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D3A0
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8012D440
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x8012D57C
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
}


// address: 0x8012D8C8
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x8012DAAC
void MI_Dummy__Fi(int i) {
}


// address: 0x8012DAB4
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


// address: 0x8012DD10
void MI_SetManashield__Fi(int i) {
}


// address: 0x8012DD4C
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


// address: 0x8012E508
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x8012E724
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


// address: 0x8012EDF0
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


// address: 0x8012F078
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x8012F188
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x8012F44C
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


// address: 0x8012FE10
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


// address: 0x8013037C
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
}


// address: 0x801304F8
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


// address: 0x80130740
void MI_Flash__Fi(int i) {
}


// address: 0x80130B78
void MI_Flash2__Fi(int i) {
}


// address: 0x80130DC0
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


// address: 0x801313C8
void MI_Firemove__Fi(int i) {
	// register: 18
	register int j;
	// address: 0xFFFFFFA8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x80131804
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


// address: 0x80131BD0
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


// address: 0x80131ECC
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x801321CC
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x80132368
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80132730
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x801328DC
void MI_Boom__Fi(int i) {
}


// address: 0x801329D4
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


// address: 0x80132D80
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


// address: 0x801330E8
void MI_Infra__Fi(int i) {
}


// address: 0x801331A0
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


// address: 0x80133434
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


// address: 0x80133930
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


// address: 0x80133BF0
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x80133DE8
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
	// register: 2
	register int pn;
}


// address: 0x80134070
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


// address: 0x80134374
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80134680
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


// address: 0x80134D38
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


// address: 0x80135140
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x801351B0
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x801353D4
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x801357C8
void ClearMissileSpot__Fi(int mi) {
}


