// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058F38
// line start: 269
// line end:   270
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F7C
// line start: 274
// line end:   275
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F90
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB0
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FB8
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058FD4
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058FF8
// line start: 590
// line end:   671
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059234
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059650
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800596B8
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80059828
// line start: 897
// line end:   960
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
// line start: 966
// line end:   973
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
// line start: 982
// line end:   1152
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
// line start: 1162
// line end:   1166
void InitMultiView__Fv() {
}


// address: 0x80059EE0
// line start: 1267
// line end:   1268
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059F24
// line start: 1322
// line end:   1331
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059FB8
// line start: 1338
// line end:   1351
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A0AC
// line start: 1357
// line end:   1361
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A0C0
// line start: 1396
// line end:   1415
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A14C
// line start: 1420
// line end:   1439
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1B0
// line start: 1447
// line end:   1505
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
// line start: 1513
// line end:   1535
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A218
// line start: 1632
// line end:   1647
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A2A0
// line start: 1673
// line end:   1688
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A338
// line start: 1694
// line end:   1735
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A4D4
// line start: 1768
// line end:   1784
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
// line start: 1791
// line end:   1824
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005A714
// line start: 1831
// line end:   1860
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8AC
// line start: 1866
// line end:   1903
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
// line start: 1909
// line end:   2023
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
// line start: 2028
// line end:   2194
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B260
// line start: 2201
// line end:   2223
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3A4
// line start: 2229
// line end:   2231
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3C4
// line start: 2237
// line end:   2262
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
// line start: 2268
// line end:   2288
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B768
// line start: 2295
// line end:   2349
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8AC
// line start: 2354
// line end:   2372
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B93C
// line start: 2380
// line end:   2396
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005B9F8
// line start: 2404
// line end:   2405
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA00
// line start: 2433
// line end:   2450
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BA88
// line start: 2454
// line end:   2573
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BDF4
// line start: 2580
// line end:   2629
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BF94
// line start: 2636
// line end:   2750
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
// line start: 2757
// line end:   2820
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
// line start: 2827
// line end:   2834
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA04
// line start: 2842
// line end:   2913
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
// line start: 2921
// line end:   2942
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CE90
// line start: 2950
// line end:   2975
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF50
// line start: 2981
// line end:   2993
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFF0
// line start: 2997
// line end:   3150
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
// line start: 3157
// line end:   3218
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E2D0
// line start: 3224
// line end:   3249
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
// line start: 3254
// line end:   3270
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E448
// line start: 3277
// line end:   3299
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E55C
// line start: 3306
// line end:   3307
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E564
// line start: 3314
// line end:   3617
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E97C
// line start: 3629
// line end:   3637
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005E9E4
// line start: 3644
// line end:   3682
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
// line start: 3729
// line end:   3746
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF5C
// line start: 3755
// line end:   3876
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
// line start: 3882
// line end:   3885
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F2B8
// line start: 3893
// line end:   3918
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
// line start: 3925
// line end:   3977
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F468
// line start: 3983
// line end:   4074
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
// line start: 4141
// line end:   4165
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005F9B0
// line start: 4169
// line end:   4174
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F9E0
// line start: 4191
// line end:   4225
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
// line start: 4232
// line end:   4244
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FC98
// line start: 4252
// line end:   4269
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FD84
// line start: 4277
// line end:   4287
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FE68
// line start: 4295
// line end:   4309
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005FF44
// line start: 4317
// line end:   4322
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005FF88
// line start: 4329
// line end:   4338
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060064
// line start: 4345
// line end:   4354
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800600D4
// line start: 4361
// line end:   4370
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x800601B0
// line start: 4377
// line end:   4386
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x8006021C
// line start: 4393
// line end:   4396
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060224
// line start: 4403
// line end:   4470
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80060554
// line start: 4473
// line end:   4473
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006057C
// line start: 4474
// line end:   4474
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800605C0
// line start: 4475
// line end:   4475
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800605F4
// line start: 4476
// line end:   4476
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060628
// line start: 4477
// line end:   4477
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006065C
// line start: 4478
// line end:   4478
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060690
// line start: 4479
// line end:   4479
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800606C4
// line start: 4480
// line end:   4480
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800606FC
// line start: 4481
// line end:   4481
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060730
// line start: 4482
// line end:   4482
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060758
// line start: 4483
// line end:   4483
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060780
// line start: 4484
// line end:   4484
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800607A8
// line start: 4485
// line end:   4485
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800607F0
// line start: 4486
// line end:   4486
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060818
// line start: 4487
// line end:   4487
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060840
// line start: 4488
// line end:   4488
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060874
// line start: 4489
// line end:   4489
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006089C
// line start: 4490
// line end:   4490
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608C4
// line start: 4491
// line end:   4491
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80060908
// line start: 4492
// line end:   4492
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8006093C
// line start: 4493
// line end:   4493
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060970
// line start: 4495
// line end:   4495
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800609BC
// line start: 4496
// line end:   4496
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80060A08
// line start: 4497
// line end:   4497
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80060A54
// line start: 4498
// line end:   4498
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80060AA8
// line start: 4499
// line end:   4499
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80060AF4
// line start: 4500
// line end:   4500
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80060B40
// line start: 4501
// line end:   4501
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80060B90
// line start: 4502
// line end:   4502
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060BDC
// line start: 4503
// line end:   4503
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80060C28
// line start: 4504
// line end:   4504
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80060C74
// line start: 4505
// line end:   4505
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80060CC0
// line start: 4506
// line end:   4506
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060D0C
// line start: 4507
// line end:   4507
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80060D58
// line start: 4508
// line end:   4508
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80060DA8
// line start: 4509
// line end:   4509
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060DF4
// line start: 4511
// line end:   4511
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060E44
// line start: 4513
// line end:   4513
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060E90
// line start: 4514
// line end:   4514
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80060EDC
// line start: 4515
// line end:   4515
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80060F28
// line start: 4516
// line end:   4516
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060F74
// line start: 4517
// line end:   4517
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80060FC0
// line start: 4518
// line end:   4518
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8006100C
// line start: 4519
// line end:   4519
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80061058
// line start: 4520
// line end:   4520
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x800610A4
// line start: 4521
// line end:   4521
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800610F0
// line start: 4522
// line end:   4522
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8006113C
// line start: 4523
// line end:   4523
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061188
// line start: 4531
// line end:   4532
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


