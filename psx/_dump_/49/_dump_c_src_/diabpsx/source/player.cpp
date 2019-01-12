// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x80058408
// line start: 269
// line end:   270
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058444
// line start: 274
// line end:   275
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058458
// line start: 411
// line end:   417
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058478
// line start: 527
// line end:   546
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80058480
// line start: 553
// line end:   564
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005849C
// line start: 573
// line end:   584
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800584C0
// line start: 590
// line end:   671
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x800586FC
// line start: 718
// line end:   835
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80058B18
// line start: 842
// line end:   848
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80058B80
// line start: 854
// line end:   890
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80058CF0
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


// address: 0x80058EFC
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


// address: 0x80058F80
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


// address: 0x8005934C
// line start: 1162
// line end:   1166
void InitMultiView__Fv() {
}


// address: 0x800593A0
// line start: 1267
// line end:   1268
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x800593E4
// line start: 1322
// line end:   1331
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x80059478
// line start: 1338
// line end:   1351
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005956C
// line start: 1357
// line end:   1361
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059580
// line start: 1396
// line end:   1415
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005960C
// line start: 1420
// line end:   1439
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80059670
// line start: 1447
// line end:   1505
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 4
	register int lx;
	// register: 2
	register int ly;
	// address: 0x800C8610
	// size: 0x9
	static unsigned char fix[9];
}


// address: 0x800596AC
// line start: 1513
// line end:   1535
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800596D8
// line start: 1632
// line end:   1664
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80059810
// line start: 1690
// line end:   1705
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x800598A8
// line start: 1711
// line end:   1752
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80059A44
// line start: 1785
// line end:   1801
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


// address: 0x80059B64
// line start: 1808
// line end:   1841
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80059C84
// line start: 1848
// line end:   1877
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x80059E1C
// line start: 1883
// line end:   1920
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


// address: 0x80059FE0
// line start: 1926
// line end:   2036
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
	// size: 0x22C8
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


// address: 0x8005A364
// line start: 2041
// line end:   2207
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005A7AC
// line start: 2214
// line end:   2236
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005A8F0
// line start: 2242
// line end:   2244
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005A910
// line start: 2250
// line end:   2275
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


// address: 0x8005ABF8
// line start: 2281
// line end:   2301
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005ACB4
// line start: 2308
// line end:   2362
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005ADF0
// line start: 2367
// line end:   2385
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AE80
// line start: 2393
// line end:   2409
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005AF3C
// line start: 2417
// line end:   2418
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AF44
// line start: 2446
// line end:   2463
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005AFCC
// line start: 2467
// line end:   2586
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005B338
// line start: 2593
// line end:   2642
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005B4D8
// line start: 2649
// line end:   2763
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


// address: 0x8005BB08
// line start: 2770
// line end:   2833
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


// address: 0x8005BEA8
// line start: 2840
// line end:   2847
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005BF38
// line start: 2855
// line end:   2926
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


// address: 0x8005C2C4
// line start: 2934
// line end:   2955
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005C3C4
// line start: 2963
// line end:   2988
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C484
// line start: 2994
// line end:   3006
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C524
// line start: 3010
// line end:   3163
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


// address: 0x8005D494
// line start: 3170
// line end:   3231
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D804
// line start: 3237
// line end:   3262
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *p;
	// register: 4
	register int a;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8005D900
// line start: 3267
// line end:   3283
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x8005D97C
// line start: 3290
// line end:   3315
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DABC
// line start: 3322
// line end:   3323
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005DAC4
// line start: 3330
// line end:   3633
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x8005DED4
// line start: 3645
// line end:   3653
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x8005DF34
// line start: 3660
// line end:   3698
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


// address: 0x8005E3B0
// line start: 3745
// line end:   3762
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E44C
// line start: 3771
// line end:   3892
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
			// size: 0x22C8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x8005E778
// line start: 3898
// line end:   3901
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005E7A0
// line start: 3909
// line end:   3934
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


// address: 0x8005E940
// line start: 3941
// line end:   3993
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005E948
// line start: 3999
// line end:   4090
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 5
	register unsigned char addflag;
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
}


// address: 0x8005ED50
// line start: 4157
// line end:   4181
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 16
			register int i;
		}
	}
}


// address: 0x8005EE8C
// line start: 4185
// line end:   4190
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EEBC
// line start: 4207
// line end:   4241
void CheckStats__Fi(int p) {
	// register: 5
	register int c;
	// register: 6
	register int i;
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F050
// line start: 4248
// line end:   4260
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F164
// line start: 4268
// line end:   4285
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F248
// line start: 4293
// line end:   4303
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F324
// line start: 4311
// line end:   4325
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x8005F3F8
// line start: 4333
// line end:   4338
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x8005F43C
// line start: 4345
// line end:   4354
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F510
// line start: 4361
// line end:   4370
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F578
// line start: 4377
// line end:   4386
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F64C
// line start: 4393
// line end:   4402
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F6B0
// line start: 4409
// line end:   4412
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F6B8
// line start: 4419
// line end:   4486
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x8005F9E0
// line start: 4489
// line end:   4489
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FA08
// line start: 4490
// line end:   4490
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8005FA4C
// line start: 4491
// line end:   4491
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FA80
// line start: 4492
// line end:   4492
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FAB4
// line start: 4493
// line end:   4493
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FAE8
// line start: 4494
// line end:   4494
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8005FB1C
// line start: 4495
// line end:   4495
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FB50
// line start: 4496
// line end:   4496
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8005FB88
// line start: 4497
// line end:   4497
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FBBC
// line start: 4498
// line end:   4498
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FBE4
// line start: 4499
// line end:   4499
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC0C
// line start: 4500
// line end:   4500
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FC34
// line start: 4501
// line end:   4501
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8005FC7C
// line start: 4502
// line end:   4502
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FCA4
// line start: 4503
// line end:   4503
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FCCC
// line start: 4504
// line end:   4504
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8005FD00
// line start: 4505
// line end:   4505
void InvisStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD28
// line start: 4506
// line end:   4506
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005FD50
// line start: 4507
// line end:   4507
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8005FD94
// line start: 4508
// line end:   4508
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x8005FDC8
// line start: 4509
// line end:   4509
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x8005FDFC
// line start: 4511
// line end:   4511
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x8005FE40
// line start: 4512
// line end:   4512
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8005FE84
// line start: 4513
// line end:   4513
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x8005FEC8
// line start: 4514
// line end:   4514
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8005FF14
// line start: 4515
// line end:   4515
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x8005FF58
// line start: 4516
// line end:   4516
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x8005FF9C
// line start: 4517
// line end:   4517
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x8005FFE4
// line start: 4518
// line end:   4518
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80060028
// line start: 4519
// line end:   4519
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x8006006C
// line start: 4520
// line end:   4520
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800600B0
// line start: 4521
// line end:   4521
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x800600F4
// line start: 4522
// line end:   4522
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80060138
// line start: 4523
// line end:   4523
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x8006017C
// line start: 4524
// line end:   4524
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x800601C4
// line start: 4525
// line end:   4525
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80060208
// line start: 4527
// line end:   4527
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80060250
// line start: 4529
// line end:   4529
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80060294
// line start: 4530
// line end:   4530
void CheckNewPath__Fi(int pnum) {
}


// address: 0x800602D8
// line start: 4531
// line end:   4531
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x8006031C
// line start: 4532
// line end:   4532
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80060360
// line start: 4533
// line end:   4533
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x800603A4
// line start: 4534
// line end:   4534
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x800603E8
// line start: 4535
// line end:   4535
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x8006042C
// line start: 4536
// line end:   4536
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80060470
// line start: 4537
// line end:   4537
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x800604B4
// line start: 4538
// line end:   4538
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x800604F8
// line start: 4539
// line end:   4539
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x8006053C
// line start: 4547
// line end:   4548
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


