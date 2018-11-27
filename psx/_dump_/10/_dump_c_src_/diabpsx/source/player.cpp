// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058F38
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F7C
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F90
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB0
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB8
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058FD4
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FF8
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059234
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059650
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800596B8
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059828
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 4294967295
	register long v;
	// register: 6
	register long e;
	{
		{
			// register: 4
			register long lLevel;
			// register: 3
			register long lMax;
			{
				{
					// register: 17
					register int l;
					{
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
	}
}


// address: 0x80059A34
void AddPlrMonstExper__Filc(int lvl, long exp, char pmask) {
	// register: 3
	register int totplrs;
	{
		// register: 4
		register int i;
		{
			{
			}
		}
	}
}


// address: 0x80059AB8
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
					// register: 17
					register int i;
				}
			}
		}
	}
}


// address: 0x80059E84
void InitMultiView__Fv() {
}


// address: 0x80059EE0
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059F24
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059FB8
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A0AC
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0C0
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A14C
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1B0
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB5BC
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1EC
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A218
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A2A0
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A338
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A4D4
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 13
	register int pp;
	// register: 4
	register int pn;
	// register: 5
	register int x;
	// register: 10
	register int y;
}


// address: 0x8005A5F4
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A714
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8AC
void PlrDeadItem__FP12PlayerStructP10ItemStructii(struct PlayerStruct *ptrplr, struct ItemStruct *itm, int xx, int yy) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	{
		// register: 17
		register int l;
		{
			{
				// register: 18
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


// address: 0x8005AA70
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// address: 0xFFFFFF48
	// size: 0x94
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 20
	register unsigned char diablolevel;
	{
		{
			{
				{
					{
						// register: 2
						register int pdd;
					}
				}
			}
		}
	}
}


// address: 0x8005AE18
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B260
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3A4
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3C4
void RemovePlrMissiles__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 16
	register int mx;
	{
		{
		}
	}
}


// address: 0x8005B6AC
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B768
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8AC
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B93C
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B9F8
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA00
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BA88
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BDF4
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BF94
unsigned char PlrHitMonst__FP12PlayerStructi(struct PlayerStruct *ptrplr, int m) {
	// register: 18
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 18
	register long dam;
	// register: 20
	register long skdam;
	// register: 4
	register int phanditype;
	// register: 3
	register int tmac;
	// register: 21
	register unsigned char rv;
	// address: 0xFFFFFFD8
	auto unsigned char ret;
}


// address: 0x8005C5C4
unsigned char PlrHitPlr__FP12PlayerStructc(struct PlayerStruct *ptrplr, char p) {
	// register: 20
	register int hit;
	// register: 16
	register int hper;
	// register: 16
	register int mind;
	// register: 5
	register int maxd;
	// register: 16
	register int ddp;
	// register: 17
	register long dam;
	// register: 4
	register long skdam;
	// register: 4
	register int tac;
	// register: 7
	register int blk;
	// register: 3
	register int blkper;
	// register: 21
	register unsigned char rv;
}


// address: 0x8005C974
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA04
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 5
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x8005CD90
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CE90
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF50
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFF0
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x84
	register struct CPlayer *test;
	// register: 30
	register int OtPos;
	// register: 23
	register int ScrX;
	// register: 18
	register int ScrY;
	// register: 20
	// size: 0x6C
	register struct TextDat *missdat;
	// register: 16
	// size: 0x6C
	register struct TextDat *objdat;
	// register: 21
	register int otad;
	// address: 0xFFFFFF88
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFF8C
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// address: 0xFFFFFF90
	// size: 0x28
	auto struct POLY_FT4 *FT4c;
	// register: 19
	register int frame;
	// register: 2
	register unsigned int rnd;
	// register: 18
	register unsigned int rot;
}


// address: 0x8005DF60
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E2D0
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8005E3CC
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E448
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E55C
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E564
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E97C
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E9E4
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 7
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005EEC0
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF5C
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 20
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x22D0
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005F290
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F2B8
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 17
	// size: 0xC
	register struct map_info *dm;
}


// address: 0x8005F460
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F468
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x1C
	register struct Spell_Target *spl;
	// register: 7
	register unsigned char addflag;
	// register: 17
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F874
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005F9B0
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F9E0
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8005FB7C
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC98
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD84
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE68
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FF44
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FF88
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060064
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800600D4
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800601B0
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8006021C
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060224
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060554
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006057C
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800605C0
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800605F4
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060628
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006065C
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060690
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800606C4
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800606FC
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060730
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060758
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060780
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607A8
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800607F0
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060818
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060840
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060874
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006089C
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608C4
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060908
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006093C
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060970
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800609BC
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060A08
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060A54
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060AA8
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060AF4
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060B40
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060B90
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060BDC
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060C28
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060C74
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060CC0
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060D0C
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060D58
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060DA8
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060DF4
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060E44
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060E90
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060EDC
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060F28
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060F74
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060FC0
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8006100C
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80061058
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800610A4
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800610F0
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8006113C
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061188
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


