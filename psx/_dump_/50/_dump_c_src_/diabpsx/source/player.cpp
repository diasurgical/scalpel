// C:\diabpsx\SOURCE\PLAYER.CPP

#include "types.h"

// address: 0x8005AE20
// line start: 272
// line end:   273
bool ismyplr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AE64
// line start: 277
// line end:   278
int plrind__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AE78
// line start: 414
// line end:   420
void InitPlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AE98
// line start: 530
// line end:   549
void FreePlayerGFX__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AEA0
// line start: 556
// line end:   567
void NewPlrAnim__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int Peq, int numFrames, int Delay) {
}


// address: 0x8005AEBC
// line start: 576
// line end:   587
void ClearPlrPVars__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005AED8
// line start: 593
// line end:   674
void SetPlrAnims__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 3
	register int gn;
	// register: 5
	register int pc;
}


// address: 0x8005B114
// line start: 721
// line end:   838
void CreatePlayer__FP12PlayerStructc(struct PlayerStruct *ptrplr, char c) {
	// register: 2
	register int i;
	// register: 3
	register char vc;
}


// address: 0x8005B530
// line start: 845
// line end:   851
int CalcStatDiff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 6
	register int c;
	// register: 3
	register int d;
}


// address: 0x8005B598
// line start: 857
// line end:   893
void NextPlrLevel__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 5
	register long l;
}


// address: 0x8005B708
// line start: 900
// line end:   963
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


// address: 0x8005B914
// line start: 969
// line end:   976
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


// address: 0x8005B998
// line start: 985
// line end:   1155
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


// address: 0x8005BD08
// line start: 1165
// line end:   1171
void InitMultiView__Fv() {
}


// address: 0x8005BD10
// line start: 1272
// line end:   1298
bool CheckLeighSolid__Fii(int x, int y) {
	// address: 0xFFFFFFA0
	// size: 0x60
	auto struct bbssbb bodge[12];
	{
		// register: 4
		register int i;
	}
}


// address: 0x8005BDA8
// line start: 1302
// line end:   1307
unsigned char SolidLoc__Fii(int x, int y) {
}


// address: 0x8005BE30
// line start: 1361
// line end:   1370
void PlrClrTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BEC4
// line start: 1377
// line end:   1390
void PlrDoTrans__Fii(int x, int y) {
	// register: 3
	register int i;
	// register: 7
	register int j;
}


// address: 0x8005BFB8
// line start: 1396
// line end:   1400
void SetPlayerOld__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005BFCC
// line start: 1435
// line end:   1456
void StartStand__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005C058
// line start: 1461
// line end:   1480
void StartWalkStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C0BC
// line start: 1488
// line end:   1550
void PM_ChangeLightOff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C0F4
// line start: 1558
// line end:   1580
void PM_ChangeOffset__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005C120
// line start: 1677
// line end:   1709
void StartAttack__FP12PlayerStructi(struct PlayerStruct *ptrplr, int d) {
	// register: 17
	register int co;
	// register: 18
	register unsigned char closeattack;
}


// address: 0x8005C258
// line start: 1735
// line end:   1750
void StartPlrBlock__FP12PlayerStructi(struct PlayerStruct *ptrplr, int dir) {
}


// address: 0x8005C2F0
// line start: 1756
// line end:   1797
void StartSpell__FP12PlayerStructiii(struct PlayerStruct *ptrplr, int d, int cx, int cy) {
}


// address: 0x8005C48C
// line start: 1830
// line end:   1846
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


// address: 0x8005C5AC
// line start: 1853
// line end:   1886
void StartPlrHit__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int dam, unsigned char forcehit) {
}


// address: 0x8005C6CC
// line start: 1893
// line end:   1922
void RespawnDeadItem__FP10ItemStructii(struct ItemStruct *itm, int x, int y) {
	// register: 8
	register int ii;
}


// address: 0x8005C868
// line start: 1928
// line end:   1965
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


// address: 0x8005CA30
// line start: 1970
// line end:   2103
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


// address: 0x8005CD2C
// line start: 2108
// line end:   2274
void DropHalfPlayersGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 18
	register long hGold;
}


// address: 0x8005D174
// line start: 2281
// line end:   2304
void StartPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
	// register: 5
	register int i;
	// register: 4
	register int mx;
}


// address: 0x8005D2C0
// line start: 2310
// line end:   2312
void SyncPlrKill__FP12PlayerStructi(struct PlayerStruct *ptrplr, int earflag) {
}


// address: 0x8005D2E0
// line start: 2318
// line end:   2343
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


// address: 0x8005D5C8
// line start: 2349
// line end:   2371
void InitLevelChange__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D68C
// line start: 2378
// line end:   2433
void StartNewLvl__FP12PlayerStructii(struct PlayerStruct *ptrplr, int fom, int lvl) {
}


// address: 0x8005D7D0
// line start: 2438
// line end:   2456
void RestartTownLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D860
// line start: 2464
// line end:   2480
void StartWarpLvl__FP12PlayerStructi(struct PlayerStruct *ptrplr, int pidx) {
}


// address: 0x8005D91C
// line start: 2488
// line end:   2489
int PM_DoStand__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005D924
// line start: 2517
// line end:   2534
unsigned char ChkPlrOffsets__Fiiii(int wx1, int wy1, int wx2, int wy2) {
	// register: 17
	register int x;
	// register: 16
	register int y;
}


// address: 0x8005D9AC
// line start: 2538
// line end:   2655
int PM_DoWalk__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 18
	register int owx;
	// register: 19
	register int owy;
}


// address: 0x8005DD18
// line start: 2662
// line end:   2711
unsigned char WeaponDur__FP12PlayerStructi(struct PlayerStruct *ptrplr, int durrnd) {
}


// address: 0x8005DEB8
// line start: 2718
// line end:   2832
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


// address: 0x8005E4E8
// line start: 2839
// line end:   2902
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


// address: 0x8005E898
// line start: 2909
// line end:   2916
unsigned char PlrHitObj__FP12PlayerStructii(struct PlayerStruct *ptrplr, int mx, int my) {
	// register: 5
	register int oi;
}


// address: 0x8005E928
// line start: 2924
// line end:   2995
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


// address: 0x8005ECB4
// line start: 3003
// line end:   3024
int PM_DoRangeAttack__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 8
	register int mistype;
}


// address: 0x8005EDB4
// line start: 3032
// line end:   3057
void ShieldDur__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EE78
// line start: 3063
// line end:   3075
int PM_DoBlock__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8005EF18
// line start: 3079
// line end:   3243
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


// address: 0x8005FED0
// line start: 3250
// line end:   3310
int PM_DoSpell__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060258
// line start: 3316
// line end:   3341
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


// address: 0x80060358
// line start: 3346
// line end:   3362
int PM_DoGotHit__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 2
	register int rv;
}


// address: 0x800603D4
// line start: 3369
// line end:   3395
int PM_DoDeath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604D8
// line start: 3402
// line end:   3403
int PM_DoNewLvl__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800604E0
// line start: 3410
// line end:   3717
void CheckNewPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 17
	register int i;
	// register: 17
	register int d;
	// register: 16
	register int oi;
}


// address: 0x80060920
// line start: 3729
// line end:   3737
unsigned char PlrDeathModeOK__Fi(int p) {
}


// address: 0x80060988
// line start: 3744
// line end:   3783
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


// address: 0x80060E70
// line start: 3830
// line end:   3847
void CheckCheatStats__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80060F0C
// line start: 3856
// line end:   3977
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


// address: 0x80061240
// line start: 3983
// line end:   3986
void ClrPlrPath__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061268
// line start: 3994
// line end:   4019
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


// address: 0x80061410
// line start: 4026
// line end:   4078
void MakePlrPath__FP12PlayerStructiiUc(struct PlayerStruct *ptrplr, int xx, int yy, unsigned char endspace) {
}


// address: 0x80061418
// line start: 4084
// line end:   4177
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


// address: 0x80061828
// line start: 4244
// line end:   4268
void SyncInitPlrPos__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	// register: 16
	register int i;
}


// address: 0x80061950
// line start: 4272
// line end:   4277
void SyncInitPlr__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80061980
// line start: 4294
// line end:   4328
void CheckStats__Fi(int p) {
	// register: 4
	register int c;
	// register: 6
	register int i;
	// register: 5
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80061B1C
// line start: 4335
// line end:   4347
void ModifyPlrStr__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061C38
// line start: 4355
// line end:   4372
void ModifyPlrMag__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061D24
// line start: 4380
// line end:   4390
void ModifyPlrDex__Fii(int p, int l) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061E08
// line start: 4398
// line end:   4412
void ModifyPlrVit__Fii(int p, int l) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
	// register: 3
	register int ms;
}


// address: 0x80061EE4
// line start: 4420
// line end:   4425
void SetPlayerHitPoints__FP12PlayerStructi(struct PlayerStruct *ptrplr, int newhp) {
}


// address: 0x80061F28
// line start: 4432
// line end:   4441
void SetPlrStr__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80062004
// line start: 4448
// line end:   4457
void SetPlrMag__Fii(int p, int v) {
	// register: 6
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80062074
// line start: 4464
// line end:   4473
void SetPlrDex__Fii(int p, int v) {
	// register: 16
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80062150
// line start: 4480
// line end:   4489
void SetPlrVit__Fii(int p, int v) {
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800621BC
// line start: 4496
// line end:   4499
void InitDungMsgs__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800621C4
// line start: 4506
// line end:   4573
void PlayDungMsgs__Fv() {
	// register: 4
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x800624F4
// line start: 4576
// line end:   4576
void CreatePlrItems__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006251C
// line start: 4577
// line end:   4577
void WorldToOffset__FP12PlayerStructii(struct PlayerStruct *ptrplr, int x, int y) {
}


// address: 0x80062560
// line start: 4578
// line end:   4578
void SetSpdbarGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062594
// line start: 4579
// line end:   4579
int GetSpellLevel__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800625C8
// line start: 4580
// line end:   4580
void BreakObject__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800625FC
// line start: 4581
// line end:   4581
void CalcPlrInv__FP12PlayerStructUc(struct PlayerStruct *ptrplr, unsigned char bl) {
}


// address: 0x80062630
// line start: 4582
// line end:   4582
void RemoveSpdBarItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x80062664
// line start: 4583
// line end:   4583
void M_StartKill__FiP12PlayerStruct(int m, struct PlayerStruct *ptrplr) {
}


// address: 0x8006269C
// line start: 4584
// line end:   4584
void SetGoldCurs__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x800626D0
// line start: 4585
// line end:   4585
void HealStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800626F8
// line start: 4586
// line end:   4586
void HealotherStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062720
// line start: 4587
// line end:   4587
int CalculateGold__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80062748
// line start: 4588
// line end:   4588
void M_StartHit__FiP12PlayerStructi(int m, struct PlayerStruct *ptrplr, int dam) {
}


// address: 0x80062790
// line start: 4589
// line end:   4589
void TeleStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800627B8
// line start: 4590
// line end:   4590
void PhaseStart__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x800627E0
// line start: 4591
// line end:   4591
void RemoveInvItem__FP12PlayerStructi(struct PlayerStruct *ptrplr, int i) {
}


// address: 0x80062814
// line start: 4592
// line end:   4592
void PhaseEnd__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x8006283C
// line start: 4593
// line end:   4593
void OperateObject__FP12PlayerStructiUc(struct PlayerStruct *ptrplr, int oi, unsigned char bl) {
}


// address: 0x80062880
// line start: 4594
// line end:   4594
void TryDisarm__FP12PlayerStructi(struct PlayerStruct *ptrplr, int oi) {
}


// address: 0x800628B4
// line start: 4595
// line end:   4595
void TalkToTowner__FP12PlayerStructi(struct PlayerStruct *ptrplr, int val) {
}


// address: 0x800628E8
// line start: 4597
// line end:   4597
unsigned char PosOkPlayer__Fiii(int pnum, int x, int y) {
}


// address: 0x80062934
// line start: 4598
// line end:   4598
int CalcStatDiff__Fi(int pnum) {
}


// address: 0x80062980
// line start: 4599
// line end:   4599
void StartNewLvl__Fiii(int pnum, int fom, int lvl) {
}


// address: 0x800629CC
// line start: 4600
// line end:   4600
void CreatePlayer__Fic(int pnum, char c) {
}


// address: 0x80062A20
// line start: 4601
// line end:   4601
void StartStand__Fii(int pnum, int dir) {
}


// address: 0x80062A6C
// line start: 4602
// line end:   4602
void SetPlayerHitPoints__Fii(int pnum, int val) {
}


// address: 0x80062AB8
// line start: 4603
// line end:   4603
void MakePlrPath__FiiiUc(int pnum, int xx, int yy, unsigned char endspace) {
}


// address: 0x80062B08
// line start: 4604
// line end:   4604
void StartWarpLvl__Fii(int pnum, int pidx) {
}


// address: 0x80062B54
// line start: 4605
// line end:   4605
void SyncPlrKill__Fii(int pnum, int earflag) {
}


// address: 0x80062BA0
// line start: 4606
// line end:   4606
void StartPlrKill__Fii(int pnum, int val) {
}


// address: 0x80062BEC
// line start: 4607
// line end:   4607
void NewPlrAnim__Fiiii(int pnum, int Peq, int numFrames, int Delay) {
}


// address: 0x80062C38
// line start: 4608
// line end:   4608
void AddPlrExperience__Fiil(int pnum, int lvl, long exp) {
}


// address: 0x80062C84
// line start: 4609
// line end:   4609
void StartPlrBlock__Fii(int pnum, int dir) {
}


// address: 0x80062CD0
// line start: 4610
// line end:   4610
void StartPlrHit__FiiUc(int pnum, int dam, unsigned char forcehit) {
}


// address: 0x80062D20
// line start: 4611
// line end:   4611
void StartSpell__Fiiii(int pnum, int d, int cx, int cy) {
}


// address: 0x80062D6C
// line start: 4613
// line end:   4613
void InitPlayer__FiUc(int pnum, unsigned char FirstTime) {
}


// address: 0x80062DBC
// line start: 4615
// line end:   4615
void PM_ChangeLightOff__Fi(int pnum) {
}


// address: 0x80062E08
// line start: 4616
// line end:   4616
void CheckNewPath__Fi(int pnum) {
}


// address: 0x80062E54
// line start: 4617
// line end:   4617
void FreePlayerGFX__Fi(int pnum) {
}


// address: 0x80062EA0
// line start: 4618
// line end:   4618
void InitDungMsgs__Fi(int pnum) {
}


// address: 0x80062EEC
// line start: 4619
// line end:   4619
void InitPlayerGFX__Fi(int pnum) {
}


// address: 0x80062F38
// line start: 4620
// line end:   4620
void SyncInitPlrPos__Fi(int pnum) {
}


// address: 0x80062F84
// line start: 4621
// line end:   4621
void SetPlrAnims__Fi(int pnum) {
}


// address: 0x80062FD0
// line start: 4622
// line end:   4622
void ClrPlrPath__Fi(int pnum) {
}


// address: 0x8006301C
// line start: 4623
// line end:   4623
void SyncInitPlr__Fi(int pnum) {
}


// address: 0x80063068
// line start: 4624
// line end:   4624
void RestartTownLvl__Fi(int pnum) {
}


// address: 0x800630B4
// line start: 4625
// line end:   4625
void SetPlayerOld__Fi(int pnum) {
}


// address: 0x80063100
// line start: 4633
// line end:   4634
void GetGoldSeed__FP12PlayerStructP10ItemStruct(struct PlayerStruct *ptrplr, struct ItemStruct *h) {
}


