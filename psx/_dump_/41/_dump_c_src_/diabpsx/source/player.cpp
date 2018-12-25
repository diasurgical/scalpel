// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005F800
// line start: 262
// line end:   265
unsigned char IsDplayer__Fii(int x, int y) {
}


// address: 0x8005F88C
// line start: 282
// line end:   283
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F8D0
// line start: 287
// line end:   288
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F8E4
// line start: 424
// line end:   430
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F904
// line start: 540
// line end:   559
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F90C
// line start: 566
// line end:   577
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005F928
// line start: 586
// line end:   597
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F944
// line start: 604
// line end:   685
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005FB80
// line start: 732
// line end:   851
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005FF88
// line start: 858
// line end:   864
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005FFF0
// line start: 870
// line end:   910
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8006016C
// line start: 917
// line end:   981
void AddPlrExperience__FP12PlayerStructil(struct PlayerStruct *ptrplr, int lvl, long exp) {
	// register: 19
	register int omp;
	// register: 2
	register unsigned long v;
	// register: 5
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


// address: 0x80060390
// line start: 987
// line end:   994
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


// address: 0x80060414
// line start: 1003
// line end:   1190
void InitPlayer__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char FirstTime) {
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006073C
// line start: 1200
// line end:   1206
void InitMultiView__Fv() {
}


// address: 0x80060744
// line start: 1339
// line end:   1345
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x80060764
// line start: 1402
// line end:   1411
void PlrClrTrans__Fii(int x, int y) {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x800607DC
// line start: 1418
// line end:   1435
void PlrDoTrans__Fii(int x, int y) {
	// register: 16
	register int i;
	// register: 18
	register int j;
}


// address: 0x800608F4
// line start: 1441
// line end:   1445
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060908
// line start: 1480
// line end:   1501
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060994
// line start: 1506
// line end:   1525
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800609F8
// line start: 1533
// line end:   1595
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060A30
// line start: 1603
// line end:   1625
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060A5C
// line start: 1722
// line end:   1758
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80060BA0
// line start: 1786
// line end:   1801
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060C38
// line start: 1807
// line end:   1849
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80060DEC
// line start: 1882
// line end:   1902
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060DF4
// line start: 1908
// line end:   1944
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80060F28
// line start: 1951
// line end:   1979
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x800610BC
// line start: 1985
// line end:   2022
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


// address: 0x8006128C
// line start: 2030
// line end:   2032
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}


// address: 0x800612EC
// line start: 2036
// line end:   2080
void TryDropPlayerItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register unsigned char diablolevel;
	{
		{
			// register: 20
			// size: 0x19E8
			register struct PlayerStruct *p;
			// register: 17
			// size: 0x6C
			register struct ItemStruct *pi;
			// register: 16
			register int i;
			{
				{
					// register: 2
					register int pdd;
				}
			}
		}
	}
}


// address: 0x80061428
// line start: 2084
// line end:   2203
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct ear;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80061624
// line start: 2211
// line end:   2245
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 21
	register long hGold;
	// register: 20
	register int i;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int newgold;
						}
					}
				}
			}
		}
	}
}


// address: 0x80061734
// line start: 2252
// line end:   2278
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x80061880
// line start: 2284
// line end:   2286
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x800618A0
// line start: 2292
// line end:   2317
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


// address: 0x80061B9C
// line start: 2323
// line end:   2347
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061C4C
// line start: 2353
// line end:   2359
void CheckPlrDead__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80061CA0
// line start: 2366
// line end:   2435
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	// register: 20
	register bool oldpause;
}


// address: 0x80061E54
// line start: 2440
// line end:   2463
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061EFC
// line start: 2472
// line end:   2505
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	// register: 19
	register bool oldpause;
}


// address: 0x80062014
// line start: 2511
// line end:   2512
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006201C
// line start: 2540
// line end:   2560
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x800620CC
// line start: 2564
// line end:   2681
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int owx;
	// register: 18
	register int owy;
}


// address: 0x800622DC
// line start: 2688
// line end:   2737
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x800624A0
// line start: 2744
// line end:   2861
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


// address: 0x80062B04
// line start: 2868
// line end:   2934
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


// address: 0x80062EBC
// line start: 2941
// line end:   2948
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x80062F3C
// line start: 2956
// line end:   3028
int PM_DoAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int dx;
	// register: 18
	register int dy;
	// register: 5
	register int m;
	// register: 2
	register char p;
	// register: 19
	register unsigned char didhit;
	// register: 4
	register int frame;
}


// address: 0x800632D0
// line start: 3038
// line end:   3092
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x800633D0
// line start: 3100
// line end:   3125
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800634A4
// line start: 3131
// line end:   3143
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063544
// line start: 3147
// line end:   3247
void do_spell_anim__FiiiP12PlayerStruct(int aframe, int spell, int clss, struct PlayerStruct *ptrplr) {
	// register: 16
	// size: 0x90
	register struct CPlayer *test;
	// register: 22
	register int OtPos;
	// register: 21
	register int ScrX;
	// register: 20
	register int ScrY;
	// register: 19
	// size: 0x70
	register struct TextDat *missdat;
	// register: 17
	// size: 0x70
	register struct TextDat *objdat;
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct POLY_FT4 *FT4a;
	// address: 0xFFFFFFD4
	// size: 0x28
	auto struct POLY_FT4 *FT4b;
	// register: 16
	register int frame;
}


// address: 0x80063A24
// line start: 3256
// line end:   3318
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063DF0
// line start: 3324
// line end:   3349
void ArmorDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 5
	register int a;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80063EFC
// line start: 3354
// line end:   3371
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int rv;
}


// address: 0x80063F90
// line start: 3378
// line end:   3431
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int pnum;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 5
									register int vid;
									// register: 2
									// size: 0xE
									register struct LightListStruct *vl;
									{
										// register: 4
										register int i;
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


// address: 0x80064178
// line start: 3438
// line end:   3439
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064180
// line start: 3446
// line end:   3759
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80064640
// line start: 3771
// line end:   3779
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x800646A8
// line start: 3786
// line end:   3827
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


// address: 0x80064BA4
// line start: 3875
// line end:   3892
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064C40
// line start: 3901
// line end:   4033
void ProcessPlayers__Fv() {
	// register: 16
	register int raflag;
	// register: 18
	register int pnum;
	// register: 21
	register int tplayer;
	{
		{
			// register: 17
			// size: 0x19E8
			register struct PlayerStruct *ptrplr;
		}
	}
}


// address: 0x80064F24
// line start: 4039
// line end:   4042
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064F4C
// line start: 4050
// line end:   4077
unsigned char PosOkPlayer__FP12PlayerStructii(struct PlayerStruct *ptrplr, int px, int py) {
	// register: 2
	register int mi;
	// register: 16
	register int p;
	// register: 2
	register char bv;
	// register: 19
	// size: 0x8
	register struct map_info *dm;
}


// address: 0x80065124
// line start: 4084
// line end:   4136
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x8006512C
// line start: 4142
// line end:   4251
void CheckPlrSpell__Fv() {
	// register: 16
	register int sd;
	// register: 18
	// size: 0x48
	register struct SpellTarget *spl;
	// register: 16
	register unsigned char addflag;
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int rspell;
	{
		{
			{
				{
					// register: 2
					register int SplLvl;
				}
			}
		}
	}
}


// address: 0x8006558C
// line start: 4318
// line end:   4342
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80065674
// line start: 4346
// line end:   4351
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800656A4
// line start: 4368
// line end:   4407
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065878
// line start: 4415
// line end:   4427
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065994
// line start: 4435
// line end:   4452
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065A80
// line start: 4460
// line end:   4470
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065B64
// line start: 4478
// line end:   4492
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065C40
// line start: 4500
// line end:   4505
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80065C84
// line start: 4512
// line end:   4521
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065D60
// line start: 4528
// line end:   4537
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065DD0
// line start: 4544
// line end:   4553
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065EAC
// line start: 4560
// line end:   4569
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065F18
// line start: 4576
// line end:   4579
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065F20
// line start: 4586
// line end:   4653
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066250
// line start: 4656
// line end:   4656
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066278
// line start: 4657
// line end:   4657
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x800662BC
// line start: 4658
// line end:   4658
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800662F0
// line start: 4659
// line end:   4659
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066324
// line start: 4660
// line end:   4660
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066358
// line start: 4661
// line end:   4661
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8006638C
// line start: 4662
// line end:   4662
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800663C0
// line start: 4663
// line end:   4663
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800663F8
// line start: 4664
// line end:   4664
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x8006642C
// line start: 4665
// line end:   4665
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066454
// line start: 4666
// line end:   4666
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006647C
// line start: 4667
// line end:   4667
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800664A4
// line start: 4668
// line end:   4668
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x800664EC
// line start: 4669
// line end:   4669
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066514
// line start: 4670
// line end:   4670
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006653C
// line start: 4671
// line end:   4671
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066570
// line start: 4672
// line end:   4672
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066598
// line start: 4673
// line end:   4673
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x800665DC
// line start: 4674
// line end:   4674
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x80066610
// line start: 4675
// line end:   4675
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066644
// line start: 4677
// line end:   4677
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80066690
// line start: 4678
// line end:   4678
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x800666DC
// line start: 4679
// line end:   4679
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x80066728
// line start: 4680
// line end:   4680
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8006677C
// line start: 4681
// line end:   4681
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x800667C8
// line start: 4682
// line end:   4682
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80066814
// line start: 4683
// line end:   4683
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80066864
// line start: 4684
// line end:   4684
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x800668B0
// line start: 4685
// line end:   4685
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x800668FC
// line start: 4686
// line end:   4686
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80066948
// line start: 4687
// line end:   4687
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80066994
// line start: 4688
// line end:   4688
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x800669E0
// line start: 4689
// line end:   4689
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80066A2C
// line start: 4690
// line end:   4690
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80066A7C
// line start: 4691
// line end:   4691
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80066AC8
// line start: 4693
// line end:   4693
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80066B18
// line start: 4695
// line end:   4695
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80066B64
// line start: 4696
// line end:   4696
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80066BB0
// line start: 4697
// line end:   4697
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80066BFC
// line start: 4698
// line end:   4698
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80066C48
// line start: 4699
// line end:   4699
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80066C94
// line start: 4700
// line end:   4700
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80066CE0
// line start: 4701
// line end:   4701
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80066D2C
// line start: 4702
// line end:   4702
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80066D78
// line start: 4703
// line end:   4703
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80066DC4
// line start: 4704
// line end:   4704
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80066E10
// line start: 4705
// line end:   4705
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80066E5C
// line start: 4713
// line end:   4714
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


