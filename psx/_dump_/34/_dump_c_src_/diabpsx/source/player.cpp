// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058DA0
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DE4
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DF8
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E18
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E20
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E3C
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E60
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005909C
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800594B8
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059520
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059690
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


// address: 0x8005989C
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


// address: 0x80059920
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


// address: 0x80059CC0
void InitMultiView__Fv() {
}


// address: 0x80059CC8
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80059D60
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059DE8
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059E7C
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F70
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F84
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A010
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A074
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800E03B8
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A0B0
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0DC
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A214
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A2AC
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A448
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


// address: 0x8005A568
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A688
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A824
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


// address: 0x8005A9EC
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
	// address: 0xFFFFFF50
	// size: 0x98
	auto struct ItemStruct ear;
	// register: 16
	register int i;
	// register: 19
	// size: 0x23A8
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


// address: 0x8005ACF4
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B13C
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005B294
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B2B4
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


// address: 0x8005B59C
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B660
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B7A4
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B834
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B8F0
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B8F8
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B980
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BCEC
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BE8C
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


// address: 0x8005C4BC
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


// address: 0x8005C86C
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C8FC
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


// address: 0x8005CC88
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CD88
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CE48
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEE8
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


// address: 0x8005DEAC
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E1EC
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x23A8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x98
	register struct ItemStruct *pi;
}


// address: 0x8005E2E8
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E364
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4A4
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4AC
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E8EC
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E954
void ValidatePlayer__Fv() {
	// register: 5
	register int i;
	// register: 8
	register int gt;
	// register: 2
	register int pc;
	// register: 10
	register unsigned long msk;
	// register: 14
	register unsigned long b;
}


// address: 0x8005EE3C
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EED8
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
			// size: 0x23A8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005F20C
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F234
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


// address: 0x8005F3DC
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F3E4
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x18
	register struct Spell_Target *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005F7F4
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F91C
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F94C
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FAE8
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC04
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FCF0
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDD4
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FEB0
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FEF4
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFD0
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060040
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006011C
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060188
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060190
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800604C0
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604E8
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8006052C
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060560
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060594
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800605C8
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800605FC
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060630
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060668
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006069C
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606C4
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606EC
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060714
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8006075C
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060784
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607AC
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800607E0
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060808
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8006084C
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060880
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800608B4
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060900
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8006094C
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060998
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800609EC
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060A38
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060A84
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060AD4
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060B20
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060B6C
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060BB8
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060C04
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060C50
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060C9C
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060CEC
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060D38
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060D88
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060DD4
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060E20
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060E6C
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060EB8
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060F04
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060F50
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060F9C
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060FE8
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061034
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061080
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800610CC
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}

