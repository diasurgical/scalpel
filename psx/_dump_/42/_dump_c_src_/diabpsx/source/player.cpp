// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058DA0
// line start: 271
// line end:   272
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DE4
// line start: 276
// line end:   277
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058DF8
// line start: 413
// line end:   419
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E18
// line start: 529
// line end:   548
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E20
// line start: 555
// line end:   566
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058E3C
// line start: 575
// line end:   586
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058E60
// line start: 592
// line end:   673
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005909C
// line start: 720
// line end:   837
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x800594B8
// line start: 844
// line end:   850
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80059520
// line start: 856
// line end:   892
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059690
// line start: 899
// line end:   962
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
// line start: 968
// line end:   975
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
// line start: 984
// line end:   1154
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
// line start: 1164
// line end:   1170
void InitMultiView__Fv() {
}


// address: 0x80059CC8
// line start: 1271
// line end:   1297
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
// line start: 1301
// line end:   1306
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059DE8
// line start: 1360
// line end:   1369
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059E7C
// line start: 1376
// line end:   1389
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F70
// line start: 1395
// line end:   1399
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059F84
// line start: 1434
// line end:   1455
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A010
// line start: 1460
// line end:   1479
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A074
// line start: 1487
// line end:   1545
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
// line start: 1553
// line end:   1575
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0DC
// line start: 1672
// line end:   1704
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005A214
// line start: 1730
// line end:   1745
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A2AC
// line start: 1751
// line end:   1792
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A448
// line start: 1825
// line end:   1841
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
// line start: 1848
// line end:   1881
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A688
// line start: 1888
// line end:   1917
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A824
// line start: 1923
// line end:   1960
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
// line start: 1965
// line end:   2090
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
// line start: 2095
// line end:   2261
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B13C
// line start: 2268
// line end:   2293
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x8005B294
// line start: 2299
// line end:   2301
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B2B4
// line start: 2307
// line end:   2332
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
// line start: 2338
// line end:   2360
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B660
// line start: 2367
// line end:   2422
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B7A4
// line start: 2427
// line end:   2445
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B834
// line start: 2453
// line end:   2469
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B8F0
// line start: 2477
// line end:   2478
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B8F8
// line start: 2506
// line end:   2523
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005B980
// line start: 2527
// line end:   2644
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BCEC
// line start: 2651
// line end:   2700
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BE8C
// line start: 2707
// line end:   2821
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
// line start: 2828
// line end:   2891
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
// line start: 2898
// line end:   2905
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005C8FC
// line start: 2913
// line end:   2984
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
// line start: 2992
// line end:   3013
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CD88
// line start: 3021
// line end:   3046
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CE48
// line start: 3052
// line end:   3064
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CEE8
// line start: 3068
// line end:   3232
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
// line start: 3239
// line end:   3297
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E1EC
// line start: 3303
// line end:   3328
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
// line start: 3333
// line end:   3349
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E364
// line start: 3356
// line end:   3381
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4A4
// line start: 3388
// line end:   3389
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E4AC
// line start: 3396
// line end:   3703
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E8EC
// line start: 3715
// line end:   3723
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E954
// line start: 3730
// line end:   3769
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
// line start: 3816
// line end:   3833
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EED8
// line start: 3842
// line end:   3963
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
// line start: 3969
// line end:   3972
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F234
// line start: 3980
// line end:   4005
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
// line start: 4012
// line end:   4064
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F3E4
// line start: 4070
// line end:   4163
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
// line start: 4230
// line end:   4254
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005F91C
// line start: 4258
// line end:   4263
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F94C
// line start: 4280
// line end:   4314
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
// line start: 4321
// line end:   4333
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC04
// line start: 4341
// line end:   4358
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FCF0
// line start: 4366
// line end:   4376
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FDD4
// line start: 4384
// line end:   4398
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FEB0
// line start: 4406
// line end:   4411
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FEF4
// line start: 4418
// line end:   4427
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005FFD0
// line start: 4434
// line end:   4443
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060040
// line start: 4450
// line end:   4459
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006011C
// line start: 4466
// line end:   4475
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80060188
// line start: 4482
// line end:   4485
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060190
// line start: 4492
// line end:   4559
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800604C0
// line start: 4562
// line end:   4562
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604E8
// line start: 4563
// line end:   4563
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8006052C
// line start: 4564
// line end:   4564
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060560
// line start: 4565
// line end:   4565
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060594
// line start: 4566
// line end:   4566
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800605C8
// line start: 4567
// line end:   4567
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x800605FC
// line start: 4568
// line end:   4568
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060630
// line start: 4569
// line end:   4569
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80060668
// line start: 4570
// line end:   4570
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006069C
// line start: 4571
// line end:   4571
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606C4
// line start: 4572
// line end:   4572
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800606EC
// line start: 4573
// line end:   4573
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060714
// line start: 4574
// line end:   4574
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8006075C
// line start: 4575
// line end:   4575
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060784
// line start: 4576
// line end:   4576
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607AC
// line start: 4577
// line end:   4577
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800607E0
// line start: 4578
// line end:   4578
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060808
// line start: 4579
// line end:   4579
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8006084C
// line start: 4580
// line end:   4580
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80060880
// line start: 4581
// line end:   4581
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800608B4
// line start: 4583
// line end:   4583
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80060900
// line start: 4584
// line end:   4584
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8006094C
// line start: 4585
// line end:   4585
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060998
// line start: 4586
// line end:   4586
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800609EC
// line start: 4587
// line end:   4587
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060A38
// line start: 4588
// line end:   4588
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060A84
// line start: 4589
// line end:   4589
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060AD4
// line start: 4590
// line end:   4590
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060B20
// line start: 4591
// line end:   4591
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060B6C
// line start: 4592
// line end:   4592
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060BB8
// line start: 4593
// line end:   4593
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060C04
// line start: 4594
// line end:   4594
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060C50
// line start: 4595
// line end:   4595
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060C9C
// line start: 4596
// line end:   4596
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060CEC
// line start: 4597
// line end:   4597
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060D38
// line start: 4599
// line end:   4599
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060D88
// line start: 4601
// line end:   4601
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060DD4
// line start: 4602
// line end:   4602
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060E20
// line start: 4603
// line end:   4603
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060E6C
// line start: 4604
// line end:   4604
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060EB8
// line start: 4605
// line end:   4605
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060F04
// line start: 4606
// line end:   4606
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80060F50
// line start: 4607
// line end:   4607
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80060F9C
// line start: 4608
// line end:   4608
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060FE8
// line start: 4609
// line end:   4609
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061034
// line start: 4610
// line end:   4610
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061080
// line start: 4611
// line end:   4611
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x800610CC
// line start: 4619
// line end:   4620
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


