#include "types.h"

// === [ Overlay ID c ] ===

// address: 0x80138C2C
void GameOnlyTestRoutine__Fv() {
}


// address: 0x80138C34
int vecleny__Fii(int a, int b) {
}


// address: 0x80138C58
int veclenx__Fii(int a, int b) {
}


// address: 0x80138C84
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


// address: 0x8013927C
int CheckBlock__Fiiii(int fx, int fy, int tx, int ty) {
	// register: 2
	register int pn;
	// register: 20
	register int coll;
}


// address: 0x80139364
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


// address: 0x80139500
int GetSpellLevel__Fii(int id, int sn) {
	// register: 2
	register int rv;
}


// address: 0x80139574
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


// address: 0x80139790
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


// address: 0x801399AC
void DeleteMissile__Fii(int mi, int i) {
}


// address: 0x80139A04
void GetMissileVel__Fiiiiii(int i, int sx, int sy, int dx, int dy, int v) {
	// register: 16
	register long dxp;
	// register: 18
	register long dyp;
	// register: 20
	register long dr;
}


// address: 0x80139BB8
void PutMissile__Fi(int i) {
	// register: 6
	register int mx;
	// register: 5
	register int my;
}


// address: 0x80139CBC
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


// address: 0x80139DE4
void MoveMissilePos__Fi(int i) {
	// register: 18
	register int dx;
	// register: 17
	register int dy;
}


// address: 0x80139F4C
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


// address: 0x8013A2C0
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


// address: 0x8013AA20
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


// address: 0x8013B48C
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


// address: 0x8013BC68
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


// address: 0x8013C0E4
unsigned char GetTableValue__FUci(unsigned char code, int dir) {
	// register: 3
	register unsigned char hicode;
	// register: 7
	register unsigned char locode;
}


// address: 0x8013C178
void SetMissAnim__Fii(int mi, int animtype) {
	// register: 18
	register int dir;
}


// address: 0x8013C248
void SetMissDir__Fii(int mi, int dir) {
}


// address: 0x8013C28C
void AddLArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013C46C
void AddArrow__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 3
	register int av;
}


// address: 0x8013C628
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


// address: 0x8013C74C
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


// address: 0x8013CABC
void AddFirebolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
	// register: 4
	register int i;
	// register: 2
	register int mx;
}


// address: 0x8013CD28
void AddMagmaball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013CE3C
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


// address: 0x8013D034
void AddLightball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D188
void AddFirewall__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x8013D370
void AddFireball__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int i;
}


// address: 0x8013D5CC
void AddLightctrl__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D6B4
void AddLightning__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013D87C
void AddMisexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013DA88
void AddWeapexp__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013DB70
unsigned char CheckIfTrig__Fii(int x, int y) {
	// register: 18
	register int i;
}


// address: 0x8013DC54
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


// address: 0x8013E078
void AddFlash__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013E288
void AddFlash2__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x8013E468
void AddManashield__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E530
void AddFiremove__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013E68C
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


// address: 0x8013EAF8
void AddChain__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013EB54
void AddRhino__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	// size: 0x2
	register struct AnimStruct *anim;
}


// address: 0x8013ED10
void AddFlare__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F008
void AddAcid__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F10C
void AddAcidpud__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 17
	register int monst;
}


// address: 0x8013F1E4
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


// address: 0x8013F4DC
void AddGolem__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
	// register: 3
	register int mx;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto int CrawlNum[6];
}


// address: 0x8013F694
void AddBoom__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F728
void AddHeal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
	// register: 17
	register long l;
}


// address: 0x8013F950
void AddHealOther__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013F9B8
void AddElement__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int i;
}


// address: 0x8013FBE4
void AddIdentify__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8013FC94
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


// address: 0x8013FF44
void AddInfra__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 4
	register int i;
}


// address: 0x80140040
void AddWave__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801400C4
void AddNova__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 5
	register int k;
}


// address: 0x801402DC
void AddRepair__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8014038C
void AddRecharge__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x8014043C
void AddDisarm__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801404A4
void AddApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 16
	register int i;
}


// address: 0x801406E0
void AddFlame__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int seqno) {
	// register: 8
	register int i;
}


// address: 0x801408FC
void AddFlamec__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801409EC
void AddCbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
}


// address: 0x80140BE0
void AddHbolt__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int micaster, int id, int dam) {
	// register: 3
	register int sp;
}


// address: 0x80140DA0
void AddResurrect__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140E14
void AddResurrectBeam__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140E9C
void AddTelekinesis__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80140F04
void AddBoneSpirit__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x80141100
void AddRportal__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
}


// address: 0x801411A0
void AddDiabApoca__Fiiiiiicii(int mi, int sx, int sy, int dx, int dy, int midir, int mienemy, int id, int dam) {
	// register: 18
	register int pnum;
}


// address: 0x801412DC
int AddMissile__Fiiiiiiciii(int sx, int sy, int v1, int v2, int midir, int mitype, int micaster, int id, int v3, int spllvl) {
	// register: 16
	register int mi;
}


// address: 0x80141628
int Sentfire__Fiii(int i, int sx, int sy) {
	// register: 21
	register int ex;
	// register: 16
	register int dir;
}


// address: 0x8014180C
void MI_Dummy__Fi(int i) {
}


// address: 0x80141814
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


// address: 0x80141A70
void MI_SetManashield__Fi(int i) {
}


// address: 0x80141AAC
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


// address: 0x80142268
void MI_Arrow__Fi(int i) {
	// register: 3
	register int p;
	// register: 5
	register int mind;
	// register: 6
	register int maxd;
}


// address: 0x80142484
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


// address: 0x80142B50
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


// address: 0x80142DD8
void MI_Acidpud__Fi(int i) {
	// register: 16
	register int range;
}


// address: 0x80142EE8
void MI_Firewall__Fi(int i) {
	// address: 0xFFFFFFB8
	// size: 0x38
	auto int ExpLight[14];
}


// address: 0x801431AC
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


// address: 0x80143B70
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


// address: 0x80143EEC
void MI_Lightning__Fi(int i) {
	// register: 18
	register int j;
	// register: 16
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80143FD8
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


// address: 0x80144210
void MI_Flash__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x80144564
void MI_Flash2__Fi(int i) {
	// register: 17
	// size: 0x50
	register struct MissileStruct *miss;
}


// address: 0x8014472C
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


// address: 0x80144A50
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


// address: 0x80144CDC
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


// address: 0x80144F8C
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


// address: 0x801451F8
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


// address: 0x801454B0
void MI_Misexp__Fi(int i) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto int ExpLight[10];
}


// address: 0x801457B0
void MI_Acidsplat__Fi(int i) {
	// register: 3
	register int monst;
	// register: 8
	register int dam;
}


// address: 0x8014594C
void MI_Teleport__Fi(int i) {
	// register: 18
	register int id;
	// register: 19
	// size: 0xE0
	register struct CBlocks *gblocks;
}


// address: 0x80145D14
void MI_Stone__Fi(int i) {
	// register: 5
	register int m;
}


// address: 0x80145EC0
void MI_Boom__Fi(int i) {
}


// address: 0x80145FB8
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


// address: 0x80146364
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


// address: 0x801465EC
void MI_Infra__Fi(int i) {
}


// address: 0x801466A4
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


// address: 0x80146938
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


// address: 0x80146E34
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


// address: 0x801470F4
void MI_Flame__Fi(int i) {
	// register: 17
	register int k;
}


// address: 0x801472EC
void MI_Flamec__Fi(int i) {
	// register: 18
	register int id;
	// register: 2
	register int pn;
}


// address: 0x80147574
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


// address: 0x80147878
void MI_Hbolt__Fi(int i) {
	// register: 5
	register int dam;
}


// address: 0x80147B84
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


// address: 0x8014823C
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


// address: 0x80148644
void MI_ResurrectBeam__Fi(int i) {
}


// address: 0x801486B4
void MI_Rportal__Fi(int i) {
	// address: 0xFFFFFFA8
	// size: 0x44
	auto int ExpLight[17];
}


// address: 0x801488D8
void ProcessMissiles__Fv() {
	// register: 17
	register int i;
	// register: 4
	register int mi;
}


// address: 0x80148CCC
void ClearMissileSpot__Fi(int mi) {
}


// address: 0x80148D84
void MoveToScrollTarget__7CBlocks(struct CBlocks *this) {
}


// address: 0x80148D98
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


// address: 0x80148F2C
void DeleteMonster__Fi(int i) {
	// register: 6
	register int temp;
}


// address: 0x80148F64
int M_GetDir__Fi(int i) {
}


// address: 0x80148FC0
void M_StartDelay__Fii(int i, int len) {
}


// address: 0x80149008
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


// address: 0x80149120
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


// address: 0x80149244
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


// address: 0x8014932C
void M_StartEat__Fi(int i) {
	// register: 2
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 3
	register int _mx;
	// register: 5
	register int _my;
}


// address: 0x801493FC
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


// address: 0x801495D4
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


// address: 0x801498CC
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


// address: 0x80149BDC
void M2MStartHit__Fiii(int mid, int i, int dam) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 18
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x80149E88
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


// address: 0x8014A174
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


// address: 0x8014A53C
void M_StartKill__Fii(int i, int pnum) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pmonster;
	// register: 17
	register int _mx;
	// register: 18
	register int _my;
}


// address: 0x8014A62C
void M_StartFadein__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014A780
void M_StartFadeout__FiiUc(int i, int md, unsigned char backwards) {
}


// address: 0x8014A8C8
void M_StartHeal__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014A948
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


// address: 0x8014A9E8
int M_DoStand__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014AA50
int M_DoWalk__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014ACD4
int M_DoWalk2__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014AEC0
int M_DoWalk3__Fi(int i) {
	// register: 16
	register int rv;
}


// address: 0x8014B184
void M_TryM2MHit__Fiiiii(int i, int mid, int hper, int mind, int maxd) {
	// register: 18
	register int hit;
	// register: 6
	register int dam;
	// address: 0xFFFFFFD0
	auto unsigned char ret;
}


// address: 0x8014B34C
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


// address: 0x8014B960
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


// address: 0x8014BB04
int M_DoRAttack__Fi(int i) {
	// register: 19
	register int multimissiles;
	// register: 17
	register int mi;
}


// address: 0x8014BC7C
int M_DoRSpAttack__Fi(int i) {
}


// address: 0x8014BE6C
int M_DoSAttack__Fi(int i) {
}


// address: 0x8014BF40
int M_DoFadein__Fi(int i) {
}


// address: 0x8014C010
int M_DoFadeout__Fi(int i) {
	// register: 2
	register int mtype;
}


// address: 0x8014C124
int M_DoHeal__Fi(int i) {
	// register: 5
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x8014C1D0
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


// address: 0x8014C65C
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


// address: 0x8014C890
int M_DoGotHit__Fi(int i) {
}


// address: 0x8014C8F0
void DoEnding__Fv() {
}


// address: 0x8014C984
void PrepDoEnding__Fv() {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8014CA9C
int M_DoDeath__Fi(int i) {
	// register: 3
	// size: 0x70
	register struct MonsterStruct *pMonster;
	// register: 16
	register int _mx;
	// register: 17
	register int _my;
}


// address: 0x8014CC6C
int M_DoSpStand__Fi(int i) {
}


// address: 0x8014CD10
int M_DoDelay__Fi(int i) {
	{
		{
			// register: 16
			register int tmp;
		}
	}
}


// address: 0x8014CE00
int M_DoStone__Fi(int i) {
}


// address: 0x8014CE84
void M_WalkDir__Fii(int i, int md) {
	// register: 3
	register int mwi;
}


// address: 0x8014D0AC
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


// address: 0x8014D498
unsigned char M_CallWalk__Fii(int i, int md) {
	// register: 19
	register int mdtemp;
	// register: 16
	register unsigned char ok;
}


// address: 0x8014D684
unsigned char M_PathWalk__Fi(int i, char plr2monst[9], unsigned char (*Check)()) {
	// address: 0xFFFFFFD8
	// size: 0x19
	auto char path[25];
}


// address: 0x8014D748
unsigned char M_CallWalk2__Fii(int i, int md) {
	// register: 20
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8014D85C
unsigned char M_DumbWalk__Fii(int i, int md) {
}


// address: 0x8014D8B0
unsigned char M_RoundWalk__FiiRi(int i, int md, int *dir) {
	// register: 19
	register int mdtemp;
	// register: 17
	register unsigned char ok;
}


// address: 0x8014DA50
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


// address: 0x8014DC48
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


// address: 0x8014DDE0
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


// address: 0x8014E1C4
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


// address: 0x8014E57C
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


// address: 0x8014E760
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


// address: 0x8014E910
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


// address: 0x8014ECFC
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


// address: 0x8014EFF4
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


// address: 0x8014F310
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


// address: 0x8014F3F8
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


// address: 0x8014F864
void MAI_GoatMc__Fi(int i) {
}


// address: 0x8014F884
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


// address: 0x8014FAA4
void MAI_GoatBow__Fi(int i) {
}


// address: 0x8014FAC8
void MAI_Succ__Fi(int i) {
}


// address: 0x8014FAEC
void MAI_AcidUniq__Fi(int i) {
}


// address: 0x8014FB10
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


// address: 0x8014FF28
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


// address: 0x80150108
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


// address: 0x8015061C
void MAI_Magma__Fi(int i) {
}


// address: 0x80150648
void MAI_Storm__Fi(int i) {
}


// address: 0x80150674
void MAI_Acid__Fi(int i) {
}


// address: 0x801506A4
void MAI_Diablo__Fi(int i) {
}


// address: 0x801506D0
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


// address: 0x80150BD0
void MAI_Mega__Fi(int i) {
}


// address: 0x80150BF4
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


// address: 0x80151130
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


// address: 0x801515D8
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


// address: 0x80151AA4
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


// address: 0x80151C54
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


// address: 0x80151E4C
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


// address: 0x80152080
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


// address: 0x801522C0
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


// address: 0x801523E0
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


// address: 0x80152570
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


// address: 0x801526BC
void DeleteMonsterList__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int mi;
}


// address: 0x801527D8
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


// address: 0x80152D60
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


// address: 0x80153148
unsigned char PosOkMissile__Fii(int x, int y) {
}


// address: 0x801531B0
unsigned char CheckNoSolid__Fii(int x, int y) {
}


// address: 0x801531F4
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


// address: 0x8015347C
unsigned char LineClear__Fiiii(int x1, int y1, int x2, int y2) {
}


// address: 0x801534BC
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


// address: 0x80153750
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


// address: 0x80153920
void PrintMonstHistory__Fi(int mt) {
	// register: 17
	register int res;
}


// address: 0x80153BD4
void PrintUniqueHistory__Fv() {
	// register: 16
	register int res;
}


// address: 0x80153CF8
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


// address: 0x8015415C
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


// address: 0x80154378
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


// address: 0x8015466C
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


// address: 0x801547C4
void TalktoMonster__Fi(int i) {
	// register: 17
	register int pnum;
	// address: 0xFFFFFFE8
	auto int itm;
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x801548E4
void SpawnGolum__Fiiii(int i, int x, int y, int mi) {
}


// address: 0x80154B3C
unsigned char CanTalkToMonst__Fi(int m) {
}


// address: 0x80154B74
unsigned char CheckMonsterHit__FiRUc(int m, unsigned char *ret) {
}


// address: 0x80154C40
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


// address: 0x80154FB4
unsigned char MAI_Path__Fi(int i) {
	// register: 16
	// size: 0x70
	register struct MonsterStruct *Monst;
}


// address: 0x80155118
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


// address: 0x80155200
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


// address: 0x80155360
void FreeInvGFX__Fv() {
}


// address: 0x80155368
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x801553EC
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x80155640
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x80155710
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x801559E8
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x80155AB4
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


// address: 0x801565D0
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x80156658
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


// address: 0x80156B34
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


// address: 0x80156CFC
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


// address: 0x80156E20
void DrawInv__Fv() {
}


// address: 0x80156E60
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	register int omp;
	// register: 19
	register int osel;
	// register: 16
	// size: 0xE0
	register struct CBlocks *BgBlocks;
}


// address: 0x801571AC
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


// address: 0x80157974
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


// address: 0x80157C94
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


// address: 0x80158030
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


// address: 0x80158500
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x8015878C
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x98
	auto struct ItemStruct h;
}


// address: 0x80158888
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


// address: 0x8015A574
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x8015B024
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x8015B2CC
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x8015B3C0
void CheckInvScrn__Fv() {
}


// address: 0x8015B438
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *p;
}


// address: 0x8015B4BC
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x8015B5F0
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x8015BA18
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x8015BD14
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


// address: 0x8015C784
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8015C838
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


// address: 0x8015C9C4
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x8015CB8C
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


// address: 0x8015D034
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


// address: 0x8015D590
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


// address: 0x8015D8D8
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x8015DABC
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x8015DD24
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8015DD8C
unsigned char UseStaff__Fv() {
}


// address: 0x8015DE4C
void StartGoldDrop__Fv() {
}


// address: 0x8015DF48
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


// address: 0x8015E46C
void DoTelekinesis__Fv() {
}


// address: 0x8015E594
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8015E6CC
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x8015E724
void ControlInv__Fv() {
}


// address: 0x8015EA04
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x8015EAF8
void InvAlignObject__Fv() {
}


// address: 0x8015ECAC
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x8015EE40
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015EFE8
void InvMoveCursRight__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015F29C
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015F494
void InvMoveCursDown__Fv() {
	// register: 17
	register int ItemInc;
	// register: 16
	register int OldPos;
}


// address: 0x8015F79C
void DumpMonsters__7CBlocks(struct CBlocks *this) {
}


// address: 0x8015F7C4
void Flush__4CPad(struct CPad *this) {
}


// address: 0x8015F7E8
void SetRGB__6DialogUcUcUc(struct Dialog *this, unsigned char R, unsigned char G, unsigned char B) {
}


// address: 0x8015F808
void SetBack__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015F810
void SetBorder__6Dialogi(struct Dialog *this, int Type) {
}


// address: 0x8015F818
int SetOTpos__6Dialogi(struct Dialog *this, int OT) {
	// register: 2
	register int OldOT;
}


// address: 0x8015F824
void ___6Dialog(struct Dialog *this, int __in_chrg) {
}


// address: 0x8015F84C
// size: 0x10
struct Dialog *__6Dialog(struct Dialog *this) {
}


// address: 0x8015F8A8
void StartAutomap__Fv() {
}


// address: 0x8015F8B8
void AutomapUp__Fv() {
}


// address: 0x8015F8D8
void AutomapDown__Fv() {
}


// address: 0x8015F8F8
void AutomapLeft__Fv() {
}


// address: 0x8015F918
void AutomapRight__Fv() {
}


// address: 0x8015F938
// size: 0x10
struct LINE_F2 *AMGetLine__FUcUcUc(unsigned char R, unsigned char G, unsigned char B) {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct LINE_F2 *L2;
}


// address: 0x8015F9E4
void AmDrawLine__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8015FA4C
void AmDrawPlayer__Fiiii(int x0, int y0, int x1, int y1) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
}


// address: 0x8015FAB4
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


// address: 0x8015FDC4
void DrawAutoMapVertWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8015FEB8
void DrawAutoMapHorzWall__Fiiii(int X, int Y, int Length, int asd) {
	// register: 6
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 3
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8015FFAC
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


// address: 0x80160180
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


// address: 0x80160358
void DrawAutoMapVertGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x8016040C
void DrawAutoMapHorzGrate__Fii(int X, int Y) {
	// register: 2
	// size: 0x10
	register struct LINE_F2 *L2;
	// register: 16
	register int Lx;
	// register: 5
	register int Ly;
}


// address: 0x801604C0
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


// address: 0x80160608
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


// address: 0x80160808
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


// address: 0x80160C74
void PRIM_GetPrim__FPP7LINE_F2(struct LINE_F2 **Prim) {
}


