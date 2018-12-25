// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005AB88
// line start: 273
// line end:   274
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ABCC
// line start: 278
// line end:   279
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ABE0
// line start: 415
// line end:   421
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC00
// line start: 531
// line end:   550
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC08
// line start: 557
// line end:   568
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005AC24
// line start: 577
// line end:   588
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AC40
// line start: 594
// line end:   675
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005AE7C
// line start: 722
// line end:   839
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005B298
// line start: 846
// line end:   852
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005B300
// line start: 858
// line end:   894
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005B470
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


// address: 0x8005B67C
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


// address: 0x8005B700
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


// address: 0x8005BAA0
// line start: 1166
// line end:   1172
void InitMultiView__Fv() {
}


// address: 0x8005BAA8
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


// address: 0x8005BB40
// line start: 1303
// line end:   1308
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005BBC8
// line start: 1362
// line end:   1371
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BC5C
// line start: 1378
// line end:   1391
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BD50
// line start: 1397
// line end:   1401
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BD64
// line start: 1436
// line end:   1457
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005BDF0
// line start: 1462
// line end:   1481
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BE54
// line start: 1489
// line end:   1547
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800D00F0
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x8005BE90
// line start: 1555
// line end:   1577
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BEBC
// line start: 1674
// line end:   1706
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005BFF4
// line start: 1732
// line end:   1747
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005C08C
// line start: 1753
// line end:   1794
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005C228
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


// address: 0x8005C348
// line start: 1850
// line end:   1883
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005C468
// line start: 1890
// line end:   1919
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005C604
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


// address: 0x8005C7CC
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


// address: 0x8005CB14
// line start: 2105
// line end:   2271
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005CF5C
// line start: 2278
// line end:   2301
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005D0A8
// line start: 2307
// line end:   2309
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005D0C8
// line start: 2315
// line end:   2340
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


// address: 0x8005D3B0
// line start: 2346
// line end:   2368
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D474
// line start: 2375
// line end:   2430
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005D5B8
// line start: 2435
// line end:   2453
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D648
// line start: 2461
// line end:   2477
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005D704
// line start: 2485
// line end:   2486
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D70C
// line start: 2514
// line end:   2531
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005D794
// line start: 2535
// line end:   2652
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005DB00
// line start: 2659
// line end:   2708
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005DCA0
// line start: 2715
// line end:   2829
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


// address: 0x8005E2D0
// line start: 2836
// line end:   2899
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


// address: 0x8005E680
// line start: 2906
// line end:   2913
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005E710
// line start: 2921
// line end:   2992
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


// address: 0x8005EA9C
// line start: 3000
// line end:   3021
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005EB9C
// line start: 3029
// line end:   3054
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EC60
// line start: 3060
// line end:   3072
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ED00
// line start: 3076
// line end:   3240
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


// address: 0x8005FCB8
// line start: 3247
// line end:   3307
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060040
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


// address: 0x80060140
// line start: 3343
// line end:   3359
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x800601BC
// line start: 3366
// line end:   3392
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006030C
// line start: 3399
// line end:   3400
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060314
// line start: 3407
// line end:   3714
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80060754
// line start: 3726
// line end:   3734
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800607BC
// line start: 3741
// line end:   3780
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


// address: 0x80060CA4
// line start: 3827
// line end:   3844
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060D40
// line start: 3853
// line end:   3974
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


// address: 0x80061074
// line start: 3980
// line end:   3983
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006109C
// line start: 3991
// line end:   4016
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


// address: 0x80061244
// line start: 4023
// line end:   4075
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006124C
// line start: 4081
// line end:   4174
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


// address: 0x8006165C
// line start: 4241
// line end:   4265
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80061784
// line start: 4269
// line end:   4274
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800617B4
// line start: 4291
// line end:   4325
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061950
// line start: 4332
// line end:   4344
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061A6C
// line start: 4352
// line end:   4369
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061B58
// line start: 4377
// line end:   4387
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061C3C
// line start: 4395
// line end:   4409
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061D18
// line start: 4417
// line end:   4422
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80061D5C
// line start: 4429
// line end:   4438
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061E38
// line start: 4445
// line end:   4454
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061EA8
// line start: 4461
// line end:   4470
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061F84
// line start: 4477
// line end:   4486
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061FF0
// line start: 4493
// line end:   4496
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061FF8
// line start: 4503
// line end:   4570
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80062328
// line start: 4573
// line end:   4573
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062350
// line start: 4574
// line end:   4574
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80062394
// line start: 4575
// line end:   4575
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800623C8
// line start: 4576
// line end:   4576
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800623FC
// line start: 4577
// line end:   4577
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80062430
// line start: 4578
// line end:   4578
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80062464
// line start: 4579
// line end:   4579
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80062498
// line start: 4580
// line end:   4580
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800624D0
// line start: 4581
// line end:   4581
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062504
// line start: 4582
// line end:   4582
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006252C
// line start: 4583
// line end:   4583
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062554
// line start: 4584
// line end:   4584
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006257C
// line start: 4585
// line end:   4585
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800625C4
// line start: 4586
// line end:   4586
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800625EC
// line start: 4587
// line end:   4587
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062614
// line start: 4588
// line end:   4588
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062648
// line start: 4589
// line end:   4589
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062670
// line start: 4590
// line end:   4590
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800626B4
// line start: 4591
// line end:   4591
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800626E8
// line start: 4592
// line end:   4592
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8006271C
// line start: 4594
// line end:   4594
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80062768
// line start: 4595
// line end:   4595
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800627B4
// line start: 4596
// line end:   4596
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80062800
// line start: 4597
// line end:   4597
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80062854
// line start: 4598
// line end:   4598
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800628A0
// line start: 4599
// line end:   4599
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800628EC
// line start: 4600
// line end:   4600
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006293C
// line start: 4601
// line end:   4601
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80062988
// line start: 4602
// line end:   4602
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x800629D4
// line start: 4603
// line end:   4603
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80062A20
// line start: 4604
// line end:   4604
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80062A6C
// line start: 4605
// line end:   4605
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80062AB8
// line start: 4606
// line end:   4606
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80062B04
// line start: 4607
// line end:   4607
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80062B54
// line start: 4608
// line end:   4608
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80062BA0
// line start: 4610
// line end:   4610
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80062BF0
// line start: 4612
// line end:   4612
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80062C3C
// line start: 4613
// line end:   4613
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80062C88
// line start: 4614
// line end:   4614
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80062CD4
// line start: 4615
// line end:   4615
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80062D20
// line start: 4616
// line end:   4616
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80062D6C
// line start: 4617
// line end:   4617
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80062DB8
// line start: 4618
// line end:   4618
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80062E04
// line start: 4619
// line end:   4619
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80062E50
// line start: 4620
// line end:   4620
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80062E9C
// line start: 4621
// line end:   4621
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80062EE8
// line start: 4622
// line end:   4622
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80062F34
// line start: 4630
// line end:   4631
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


