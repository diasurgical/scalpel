// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005F898
// line start: 262
// line end:   265
unsigned char IsDplayer__Fii(int x, int y) {
}


// address: 0x8005F924
// line start: 282
// line end:   283
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F968
// line start: 287
// line end:   288
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F97C
// line start: 424
// line end:   430
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F99C
// line start: 540
// line end:   559
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F9A4
// line start: 566
// line end:   577
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005F9C0
// line start: 586
// line end:   597
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005F9DC
// line start: 604
// line end:   685
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005FC18
// line start: 732
// line end:   851
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x80060020
// line start: 858
// line end:   864
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x80060088
// line start: 870
// line end:   910
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x80060204
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


// address: 0x80060428
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


// address: 0x800604AC
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


// address: 0x800607D4
// line start: 1200
// line end:   1206
void InitMultiView__Fv() {
}


// address: 0x800607DC
// line start: 1339
// line end:   1345
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x800607FC
// line start: 1402
// line end:   1411
void PlrClrTrans__Fii(int x, int y) {
	// register: 6
	register int i;
	// register: 7
	register int j;
}


// address: 0x80060874
// line start: 1418
// line end:   1435
void PlrDoTrans__Fii(int x, int y) {
	// register: 16
	register int i;
	// register: 18
	register int j;
}


// address: 0x8006098C
// line start: 1441
// line end:   1445
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800609A0
// line start: 1480
// line end:   1501
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060A2C
// line start: 1506
// line end:   1525
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060A90
// line start: 1533
// line end:   1595
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060AC8
// line start: 1603
// line end:   1625
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060AF4
// line start: 1722
// line end:   1758
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x80060C38
// line start: 1786
// line end:   1801
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x80060CD0
// line start: 1807
// line end:   1849
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x80060E84
// line start: 1882
// line end:   1902
void RemovePlrFromMap__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060E8C
// line start: 1908
// line end:   1946
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x80060FD8
// line start: 1953
// line end:   1981
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8006116C
// line start: 1987
// line end:   2024
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


// address: 0x8006133C
// line start: 2032
// line end:   2034
void StartPlayerDropItems__FP12PlayerStructi(struct PlayerStruct *ptrplr, int EarFlag) {
}


// address: 0x8006139C
// line start: 2038
// line end:   2082
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


// address: 0x800614D8
// line start: 2086
// line end:   2205
void StartPlayerKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct ear;
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x800616D4
// line start: 2213
// line end:   2247
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


// address: 0x800617E4
// line start: 2254
// line end:   2280
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x80061930
// line start: 2286
// line end:   2288
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x80061950
// line start: 2294
// line end:   2319
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


// address: 0x80061C4C
// line start: 2325
// line end:   2349
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061CFC
// line start: 2355
// line end:   2361
void CheckPlrDead__Fi(int pnum) {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80061D50
// line start: 2368
// line end:   2437
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
	// register: 20
	register bool oldpause;
}


// address: 0x80061F04
// line start: 2442
// line end:   2465
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061FAC
// line start: 2474
// line end:   2507
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
	// register: 19
	register bool oldpause;
}


// address: 0x800620C4
// line start: 2513
// line end:   2514
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800620CC
// line start: 2542
// line end:   2562
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8006217C
// line start: 2566
// line end:   2683
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int owx;
	// register: 18
	register int owy;
}


// address: 0x8006238C
// line start: 2690
// line end:   2739
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x80062550
// line start: 2746
// line end:   2863
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


// address: 0x80062BB4
// line start: 2870
// line end:   2936
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


// address: 0x80062F6C
// line start: 2943
// line end:   2950
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x80062FEC
// line start: 2958
// line end:   3030
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


// address: 0x80063380
// line start: 3040
// line end:   3094
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x80063480
// line start: 3102
// line end:   3127
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063554
// line start: 3133
// line end:   3145
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800635F4
// line start: 3149
// line end:   3249
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


// address: 0x80063AD4
// line start: 3258
// line end:   3320
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80063EA0
// line start: 3326
// line end:   3351
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


// address: 0x80063FAC
// line start: 3356
// line end:   3373
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int rv;
}


// address: 0x80064040
// line start: 3380
// line end:   3433
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


// address: 0x80064228
// line start: 3440
// line end:   3441
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064230
// line start: 3448
// line end:   3761
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x800646F0
// line start: 3773
// line end:   3781
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x80064758
// line start: 3788
// line end:   3829
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


// address: 0x80064C54
// line start: 3877
// line end:   3894
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064CF0
// line start: 3903
// line end:   4035
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


// address: 0x80064FD4
// line start: 4041
// line end:   4044
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80064FFC
// line start: 4052
// line end:   4079
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


// address: 0x800651D4
// line start: 4086
// line end:   4138
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x800651DC
// line start: 4144
// line end:   4253
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


// address: 0x8006563C
// line start: 4320
// line end:   4344
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80065724
// line start: 4348
// line end:   4353
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065754
// line start: 4370
// line end:   4409
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065928
// line start: 4417
// line end:   4429
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065A44
// line start: 4437
// line end:   4454
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065B30
// line start: 4462
// line end:   4472
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065C14
// line start: 4480
// line end:   4494
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80065CF0
// line start: 4502
// line end:   4507
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80065D34
// line start: 4514
// line end:   4523
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065E10
// line start: 4530
// line end:   4539
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065E80
// line start: 4546
// line end:   4555
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065F5C
// line start: 4562
// line end:   4571
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80065FC8
// line start: 4578
// line end:   4581
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80065FD0
// line start: 4588
// line end:   4655
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x19E8
	register struct PlayerStruct *player;
}


// address: 0x80066300
// line start: 4658
// line end:   4658
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066328
// line start: 4659
// line end:   4659
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x8006636C
// line start: 4660
// line end:   4660
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800663A0
// line start: 4661
// line end:   4661
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800663D4
// line start: 4662
// line end:   4662
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066408
// line start: 4663
// line end:   4663
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x8006643C
// line start: 4664
// line end:   4664
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80066470
// line start: 4665
// line end:   4665
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x800664A8
// line start: 4666
// line end:   4666
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800664DC
// line start: 4667
// line end:   4667
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066504
// line start: 4668
// line end:   4668
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006652C
// line start: 4669
// line end:   4669
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066554
// line start: 4670
// line end:   4670
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x8006659C
// line start: 4671
// line end:   4671
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800665C4
// line start: 4672
// line end:   4672
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800665EC
// line start: 4673
// line end:   4673
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80066620
// line start: 4674
// line end:   4674
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80066648
// line start: 4675
// line end:   4675
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x8006668C
// line start: 4676
// line end:   4676
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800666C0
// line start: 4677
// line end:   4677
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800666F4
// line start: 4679
// line end:   4679
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80066740
// line start: 4680
// line end:   4680
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x8006678C
// line start: 4681
// line end:   4681
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x800667D8
// line start: 4682
// line end:   4682
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x8006682C
// line start: 4683
// line end:   4683
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80066878
// line start: 4684
// line end:   4684
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x800668C4
// line start: 4685
// line end:   4685
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80066914
// line start: 4686
// line end:   4686
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80066960
// line start: 4687
// line end:   4687
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x800669AC
// line start: 4688
// line end:   4688
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x800669F8
// line start: 4689
// line end:   4689
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80066A44
// line start: 4690
// line end:   4690
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80066A90
// line start: 4691
// line end:   4691
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80066ADC
// line start: 4692
// line end:   4692
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80066B2C
// line start: 4693
// line end:   4693
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80066B78
// line start: 4695
// line end:   4695
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80066BC8
// line start: 4697
// line end:   4697
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80066C14
// line start: 4698
// line end:   4698
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80066C60
// line start: 4699
// line end:   4699
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80066CAC
// line start: 4700
// line end:   4700
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80066CF8
// line start: 4701
// line end:   4701
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80066D44
// line start: 4702
// line end:   4702
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80066D90
// line start: 4703
// line end:   4703
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80066DDC
// line start: 4704
// line end:   4704
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x80066E28
// line start: 4705
// line end:   4705
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80066E74
// line start: 4706
// line end:   4706
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x80066EC0
// line start: 4707
// line end:   4707
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80066F0C
// line start: 4715
// line end:   4716
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


