// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80056E30
// line start: 273
// line end:   274
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056E74
// line start: 278
// line end:   279
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056E88
// line start: 415
// line end:   421
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EA8
// line start: 531
// line end:   550
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EB0
// line start: 557
// line end:   568
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x80056ECC
// line start: 577
// line end:   588
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80056EF0
// line start: 594
// line end:   675
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005712C
// line start: 722
// line end:   839
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80057548
// line start: 846
// line end:   852
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x800575B0
// line start: 858
// line end:   894
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80057720
// line start: 901
// line end:   964
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


// address: 0x8005792C
// line start: 970
// line end:   977
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


// address: 0x800579B0
// line start: 986
// line end:   1156
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


// address: 0x80057D50
// line start: 1166
// line end:   1172
void InitMultiView__Fv() {
}


// address: 0x80057D58
// line start: 1273
// line end:   1299
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x80057DF0
// line start: 1303
// line end:   1308
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80057E78
// line start: 1362
// line end:   1371
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80057F0C
// line start: 1378
// line end:   1391
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80058000
// line start: 1397
// line end:   1401
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058014
// line start: 1436
// line end:   1457
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800580A0
// line start: 1462
// line end:   1481
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058104
// line start: 1489
// line end:   1547
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800DED80
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x80058140
// line start: 1555
// line end:   1577
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005816C
// line start: 1674
// line end:   1706
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x800582A4
// line start: 1732
// line end:   1747
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005833C
// line start: 1753
// line end:   1794
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x800584D8
// line start: 1827
// line end:   1843
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


// address: 0x800585F8
// line start: 1850
// line end:   1883
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80058718
// line start: 1890
// line end:   1919
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x800588B4
// line start: 1925
// line end:   1962
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


// address: 0x80058A7C
// line start: 1967
// line end:   2100
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


// address: 0x80058DC4
// line start: 2105
// line end:   2271
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005920C
// line start: 2278
// line end:   2303
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 6
	register int i;
	// register: 5
	register int mx;
	// register: 4
	register int pnum;
}


// address: 0x80059364
// line start: 2309
// line end:   2311
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80059384
// line start: 2317
// line end:   2342
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


// address: 0x8005966C
// line start: 2348
// line end:   2370
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059730
// line start: 2377
// line end:   2432
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x80059874
// line start: 2437
// line end:   2455
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059904
// line start: 2463
// line end:   2479
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x800599C0
// line start: 2487
// line end:   2488
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800599C8
// line start: 2516
// line end:   2533
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x80059A50
// line start: 2537
// line end:   2654
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x80059DBC
// line start: 2661
// line end:   2710
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x80059F5C
// line start: 2717
// line end:   2831
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


// address: 0x8005A58C
// line start: 2838
// line end:   2901
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


// address: 0x8005A93C
// line start: 2908
// line end:   2915
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005A9CC
// line start: 2923
// line end:   2994
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


// address: 0x8005AD58
// line start: 3002
// line end:   3023
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005AE58
// line start: 3031
// line end:   3056
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF1C
// line start: 3062
// line end:   3074
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AFBC
// line start: 3078
// line end:   3242
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


// address: 0x8005BF80
// line start: 3249
// line end:   3307
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C2C0
// line start: 3313
// line end:   3338
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


// address: 0x8005C3C0
// line start: 3343
// line end:   3359
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005C43C
// line start: 3366
// line end:   3391
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C57C
// line start: 3398
// line end:   3399
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C584
// line start: 3406
// line end:   3713
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005C9C4
// line start: 3725
// line end:   3733
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005CA2C
// line start: 3740
// line end:   3779
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


// address: 0x8005CF14
// line start: 3826
// line end:   3843
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005CFB0
// line start: 3852
// line end:   3973
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


// address: 0x8005D2E4
// line start: 3979
// line end:   3982
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D30C
// line start: 3990
// line end:   4015
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


// address: 0x8005D4B4
// line start: 4022
// line end:   4074
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005D4BC
// line start: 4080
// line end:   4173
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


// address: 0x8005D8CC
// line start: 4240
// line end:   4264
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x8005D9F4
// line start: 4268
// line end:   4273
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DA24
// line start: 4290
// line end:   4324
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005DBC0
// line start: 4331
// line end:   4343
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DCDC
// line start: 4351
// line end:   4368
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DDC8
// line start: 4376
// line end:   4386
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DEAC
// line start: 4394
// line end:   4408
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005DF88
// line start: 4416
// line end:   4421
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005DFCC
// line start: 4428
// line end:   4437
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E0A8
// line start: 4444
// line end:   4453
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E118
// line start: 4460
// line end:   4469
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E1F4
// line start: 4476
// line end:   4485
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E260
// line start: 4492
// line end:   4495
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E268
// line start: 4502
// line end:   4569
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8005E598
// line start: 4572
// line end:   4572
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E5C0
// line start: 4573
// line end:   4573
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005E604
// line start: 4574
// line end:   4574
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E638
// line start: 4575
// line end:   4575
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E66C
// line start: 4576
// line end:   4576
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E6A0
// line start: 4577
// line end:   4577
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005E6D4
// line start: 4578
// line end:   4578
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E708
// line start: 4579
// line end:   4579
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005E740
// line start: 4580
// line end:   4580
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E774
// line start: 4581
// line end:   4581
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E79C
// line start: 4582
// line end:   4582
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7C4
// line start: 4583
// line end:   4583
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7EC
// line start: 4584
// line end:   4584
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8005E834
// line start: 4585
// line end:   4585
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E85C
// line start: 4586
// line end:   4586
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E884
// line start: 4587
// line end:   4587
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005E8B8
// line start: 4588
// line end:   4588
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E8E0
// line start: 4589
// line end:   4589
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005E924
// line start: 4590
// line end:   4590
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8005E958
// line start: 4591
// line end:   4591
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005E98C
// line start: 4593
// line end:   4593
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8005E9D8
// line start: 4594
// line end:   4594
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8005EA24
// line start: 4595
// line end:   4595
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8005EA70
// line start: 4596
// line end:   4596
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8005EAC4
// line start: 4597
// line end:   4597
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8005EB10
// line start: 4598
// line end:   4598
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x8005EB5C
// line start: 4599
// line end:   4599
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005EBAC
// line start: 4600
// line end:   4600
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x8005EBF8
// line start: 4601
// line end:   4601
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x8005EC44
// line start: 4602
// line end:   4602
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x8005EC90
// line start: 4603
// line end:   4603
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x8005ECDC
// line start: 4604
// line end:   4604
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x8005ED28
// line start: 4605
// line end:   4605
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x8005ED74
// line start: 4606
// line end:   4606
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x8005EDC4
// line start: 4607
// line end:   4607
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x8005EE10
// line start: 4609
// line end:   4609
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x8005EE60
// line start: 4611
// line end:   4611
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x8005EEAC
// line start: 4612
// line end:   4612
void CheckNewPath__Fi(int pnum) {
}


// address: 0x8005EEF8
// line start: 4613
// line end:   4613
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8005EF44
// line start: 4614
// line end:   4614
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x8005EF90
// line start: 4615
// line end:   4615
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x8005EFDC
// line start: 4616
// line end:   4616
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x8005F028
// line start: 4617
// line end:   4617
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8005F074
// line start: 4618
// line end:   4618
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x8005F0C0
// line start: 4619
// line end:   4619
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x8005F10C
// line start: 4620
// line end:   4620
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x8005F158
// line start: 4621
// line end:   4621
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x8005F1A4
// line start: 4629
// line end:   4630
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


