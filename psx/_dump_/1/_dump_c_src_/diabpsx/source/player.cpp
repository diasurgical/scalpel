// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058E7C
// line start: 269
// line end:   270
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EC0
// line start: 274
// line end:   275
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058ED4
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EF4
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058EFC
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80058F18
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058F3C
// line start: 590
// line end:   671
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x80059178
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80059594
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800595FC
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005976C
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


// address: 0x80059978
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


// address: 0x800599FC
// line start: 982
// line end:   1151
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


// address: 0x80059DE4
// line start: 1161
// line end:   1165
void InitMultiView__Fv() {
}


// address: 0x80059E40
// line start: 1266
// line end:   1267
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80059E84
// line start: 1321
// line end:   1330
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059F18
// line start: 1337
// line end:   1350
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005A00C
// line start: 1356
// line end:   1360
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A020
// line start: 1366
// line end:   1386
void FixPlayerLocation__FP12PlayerStructi(struct PlayerStruct *ptrplr, int bDir) {
}


// address: 0x8005A084
// line start: 1394
// line end:   1413
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A110
// line start: 1418
// line end:   1437
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A174
// line start: 1445
// line end:   1503
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800CB4D4
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005A1B0
// line start: 1511
// line end:   1533
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005A1DC
// line start: 1630
// line end:   1645
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
}


// address: 0x8005A278
// line start: 1671
// line end:   1686
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005A328
// line start: 1692
// line end:   1733
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005A4E0
// line start: 1766
// line end:   1782
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


// address: 0x8005A600
// line start: 1789
// line end:   1822
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
	// register: 16
	register int pd;
}


// address: 0x8005A730
// line start: 1829
// line end:   1858
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005A8C8
// line start: 1864
// line end:   1901
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


// address: 0x8005AA8C
// line start: 1907
// line end:   2021
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


// address: 0x8005AE40
// line start: 2026
// line end:   2192
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005B288
// line start: 2199
// line end:   2221
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005B3CC
// line start: 2227
// line end:   2229
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005B3EC
// line start: 2235
// line end:   2260
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


// address: 0x8005B6D4
// line start: 2266
// line end:   2286
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B790
// line start: 2293
// line end:   2347
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005B8D4
// line start: 2352
// line end:   2370
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005B964
// line start: 2378
// line end:   2394
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005BA20
// line start: 2402
// line end:   2403
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BA28
// line start: 2431
// line end:   2448
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005BAB0
// line start: 2452
// line end:   2571
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005BE1C
// line start: 2578
// line end:   2627
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005BFBC
// line start: 2634
// line end:   2748
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


// address: 0x8005C5EC
// line start: 2755
// line end:   2818
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


// address: 0x8005C99C
// line start: 2825
// line end:   2832
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005CA2C
// line start: 2840
// line end:   2911
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


// address: 0x8005CDB8
// line start: 2919
// line end:   2940
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005CEB8
// line start: 2948
// line end:   2973
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CF78
// line start: 2979
// line end:   2991
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D018
// line start: 2995
// line end:   3148
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


// address: 0x8005DF88
// line start: 3155
// line end:   3216
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E2F8
// line start: 3222
// line end:   3247
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


// address: 0x8005E3F4
// line start: 3252
// line end:   3268
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005E470
// line start: 3275
// line end:   3297
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E584
// line start: 3304
// line end:   3305
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E58C
// line start: 3312
// line end:   3615
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005E9A4
// line start: 3627
// line end:   3635
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005EA0C
// line start: 3642
// line end:   3680
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


// address: 0x8005EEE8
// line start: 3727
// line end:   3744
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF84
// line start: 3753
// line end:   3879
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 19
	register int pnum;
	// register: 23
	register int tplayer;
	{
		{
			{
				// register: 17
				// size: 0x22D0
				register struct PlayerStruct *ptrplr;
			}
		}
	}
}


// address: 0x8005F3B8
// line start: 3885
// line end:   3888
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F3E0
// line start: 3896
// line end:   3920
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
}


// address: 0x8005F5F4
// line start: 3927
// line end:   3977
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005F604
// line start: 3983
// line end:   4075
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 16
	register int pnum;
	// register: 5
	register unsigned char addflag;
	// register: 4
	register int rspell;
}


// address: 0x8005FC70
// line start: 4142
// line end:   4166
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005FDAC
// line start: 4170
// line end:   4175
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FDDC
// line start: 4192
// line end:   4226
void CheckStats__Fi(int p) {
	// register: 7
	register int c;
	// register: 6
	register int i;
}


// address: 0x80060014
// line start: 4233
// line end:   4244
void ModifyPlrStr__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060194
// line start: 4252
// line end:   4268
void ModifyPlrMag__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x800602F4
// line start: 4276
// line end:   4285
void ModifyPlrDex__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x80060424
// line start: 4293
// line end:   4306
void ModifyPlrVit__Fii(int p, int l) {
	// register: 3
	register int ms;
}


// address: 0x8006056C
// line start: 4314
// line end:   4319
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x800605B0
// line start: 4326
// line end:   4334
void SetPlrStr__Fii(int p, int v) {
}


// address: 0x800606CC
// line start: 4341
// line end:   4349
void SetPlrMag__Fii(int p, int v) {
}


// address: 0x80060750
// line start: 4356
// line end:   4364
void SetPlrDex__Fii(int p, int v) {
}


// address: 0x8006086C
// line start: 4371
// line end:   4379
void SetPlrVit__Fii(int p, int v) {
}


// address: 0x800608EC
// line start: 4386
// line end:   4389
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800608F4
// line start: 4396
// line end:   4462
void PlayDungMsgs__Fv() {
}


// address: 0x80060E8C
// line start: 4465
// line end:   4465
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060EB4
// line start: 4466
// line end:   4466
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80060EF8
// line start: 4467
// line end:   4467
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80060F2C
// line start: 4468
// line end:   4468
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060F60
// line start: 4469
// line end:   4469
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060F94
// line start: 4470
// line end:   4470
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80060FC8
// line start: 4471
// line end:   4471
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80060FFC
// line start: 4472
// line end:   4472
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x80061034
// line start: 4473
// line end:   4473
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80061068
// line start: 4474
// line end:   4474
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061090
// line start: 4475
// line end:   4475
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610B8
// line start: 4476
// line end:   4476
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800610E0
// line start: 4477
// line end:   4477
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80061128
// line start: 4478
// line end:   4478
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061150
// line start: 4479
// line end:   4479
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061178
// line start: 4480
// line end:   4480
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800611AC
// line start: 4481
// line end:   4481
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800611D4
// line start: 4482
// line end:   4482
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800611FC
// line start: 4483
// line end:   4483
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80061240
// line start: 4484
// line end:   4484
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80061274
// line start: 4485
// line end:   4485
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800612A8
// line start: 4487
// line end:   4487
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x800612F4
// line start: 4488
// line end:   4488
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80061340
// line start: 4489
// line end:   4489
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8006138C
// line start: 4490
// line end:   4490
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x800613E0
// line start: 4491
// line end:   4491
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8006142C
// line start: 4492
// line end:   4492
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80061478
// line start: 4493
// line end:   4493
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x800614C8
// line start: 4494
// line end:   4494
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80061514
// line start: 4495
// line end:   4495
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80061560
// line start: 4496
// line end:   4496
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800615AC
// line start: 4497
// line end:   4497
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x800615F8
// line start: 4498
// line end:   4498
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80061644
// line start: 4499
// line end:   4499
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80061690
// line start: 4500
// line end:   4500
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800616E0
// line start: 4501
// line end:   4501
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x8006172C
// line start: 4502
// line end:   4502
void FixPlayerLocation__Fii(int pnum, int bDir) {
}


// address: 0x80061778
// line start: 4503
// line end:   4503
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x800617C8
// line start: 4505
// line end:   4505
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80061814
// line start: 4506
// line end:   4506
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80061860
// line start: 4507
// line end:   4507
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x800618AC
// line start: 4508
// line end:   4508
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x800618F8
// line start: 4509
// line end:   4509
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80061944
// line start: 4510
// line end:   4510
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80061990
// line start: 4511
// line end:   4511
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x800619DC
// line start: 4512
// line end:   4512
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80061A28
// line start: 4513
// line end:   4513
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80061A74
// line start: 4514
// line end:   4514
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80061AC0
// line start: 4515
// line end:   4515
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80061B0C
// line start: 4523
// line end:   4524
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


