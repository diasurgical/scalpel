// C:\diabpsx\SOURCE\ITEMS.CPP

#include "types.h"

// address: 0x8003E1B8
// line start: 556
// line end:   567
void InitItemGFX__Fv() {
}


// address: 0x8003E1E4
// line start: 573
// line end:   581
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003E280
// line start: 588
// line end:   634
void AddInitItems__Fv() {
	// register: 22
	register int j;
	{
		// register: 20
		register int i;
		{
			// register: 19
			register int ii;
			// register: 18
			register int xx;
			// register: 17
			register int yy;
		}
	}
}


// address: 0x8003E49C
// line start: 641
// line end:   677
void InitItems__Fb(bool re_init) {
	// register: 5
	register int i;
}


// address: 0x8003E654
// line start: 684
// line end:   940
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 11
	register int mind;
	// register: 10
	register int maxd;
	// register: 15
	register int tac;
	// register: 5
	register int g;
	// address: 0xFFFFFFD0
	auto int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF60
	auto int bac;
	// address: 0xFFFFFF68
	auto int sadd;
	// register: 19
	register int madd;
	// address: 0xFFFFFF70
	auto int dadd;
	// register: 18
	register int vadd;
	// register: 23
	register int fr;
	// register: 30
	register int lr;
	// register: 22
	register int mr;
	// register: 13
	register int dmod;
	// register: 14
	register int ghit;
	// register: 17
	register int lrad;
	// address: 0xFFFFFF78
	auto int ihp;
	// address: 0xFFFFFF80
	auto int imana;
	// address: 0xFFFFFF88
	auto int spllvladd;
	// address: 0xFFFFFF90
	auto int enac;
	// address: 0xFFFFFF98
	auto int fmin;
	// address: 0xFFFFFFA0
	auto int fmax;
	// address: 0xFFFFFFA8
	auto int lmin;
	// address: 0xFFFFFFB0
	auto int lmax;
	// address: 0xFFFFFFB8
	auto long iflgs;
	// register: 20
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 5
			// size: 0x6C
			register struct ItemStruct *itm;
			{
				{
					// register: 3
					register int tmpac;
				}
			}
		}
	}
}


// address: 0x8003F0CC
// line start: 945
// line end:   975
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003F44C
// line start: 984
// line end:   1000
void CalcPlrStaff__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003F508
// line start: 1004
// line end:   1044
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 5
	register unsigned char sf;
	// register: 11
	register unsigned char changeflag;
	// register: 10
	register int sa;
	// register: 9
	register int ma;
	// register: 8
	register int da;
}


// address: 0x8003F668
// line start: 1050
// line end:   1054
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F6B4
// line start: 1058
// line end:   1059
void SetItemMinStats__FPC12PlayerStructP10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003F6E0
// line start: 1065
// line end:   1080
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x8003F7C0
// line start: 1086
// line end:   1109
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003FAA4
// line start: 1114
// line end:   1124
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003FB54
// line start: 1130
// line end:   1161
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003FC6C
// line start: 1167
// line end:   1170
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FC98
// line start: 1178
// line end:   1196
void GetGoldSeed__FiP10ItemStruct(int pnum, struct ItemStruct *h) {
	// register: 4
	register int i;
	// register: 2
	register int ii;
	// register: 7
	register int s;
	// register: 17
	register unsigned char doneflag;
}


// address: 0x8003FE00
// line start: 1203
// line end:   1206
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003FE08
// line start: 1214
// line end:   1219
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003FE38
// line start: 1225
// line end:   1351
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80040398
// line start: 1358
// line end:   1389
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 3
	register int oi;
}


// address: 0x80040618
// line start: 1397
// line end:   1445
unsigned char GetItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int i;
	// register: 19
	register int j;
	// register: 5
	register int xx;
	// register: 18
	register int yy;
	// register: 4
	register int rs;
	// register: 16
	register unsigned char savail;
}


// address: 0x80040834
// line start: 1452
// line end:   1475
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 20
	register int yy;
	{
		// register: 18
		register int l;
		{
			{
				// register: 21
				register int j;
				{
					{
						// register: 17
						register int i;
					}
				}
			}
		}
	}
}


// address: 0x8004098C
// line start: 1481
// line end:   1493
void GetSuperItemLoc__FiiRiT2(int x, int y, int *xx, int *yy) {
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


// address: 0x80040A54
// line start: 1499
// line end:   1505
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x80040B0C
// line start: 1512
// line end:   1557
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x80040D70
// line start: 1564
// line end:   1626
void GetStaffPower__FiiiUc(int i, int lvl, int bs, unsigned char onlygood) {
	// address: 0xFFFFFB68
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 6
	register int j;
	// register: 17
	register int preidx;
	// address: 0xFFFFFF68
	// size: 0x80
	auto char istr[128];
	// register: 2
	register unsigned char addok;
}


// address: 0x80040F60
// line start: 1634
// line end:   1709
void GetStaffSpell__FiiUc(int i, int lvl, unsigned char onlygood) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int l;
	// register: 19
	register int bs;
	// register: 5
	register int maxc;
	// register: 17
	register int minc;
	{
		{
			// register: 8
			register int v;
		}
	}
}


// address: 0x8004123C
// line start: 1750
// line end:   1850
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 19
	register int rndv;
}


// address: 0x800417E8
// line start: 1857
// line end:   1858
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80041820
// line start: 1865
// line end:   1868
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80041894
// line start: 1875
// line end:   2157
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x80042FC4
// line start: 2165
// line end:   2267
void GetItemPower__FiiilUc(int i, int minlvl, int maxlvl, long flgs, int onlygood) {
	// register: 16
	register int pre;
	// register: 23
	register int post;
	// address: 0xFFFFFB48
	// size: 0x400
	auto int l[256];
	// register: 5
	register int nl;
	// register: 7
	register int j;
	// register: 20
	register int preidx;
	// register: 30
	register int sufidx;
	// address: 0xFFFFFF48
	// size: 0x80
	auto char istr[128];
	// register: 21
	register unsigned char goe;
}


// address: 0x8004342C
// line start: 2274
// line end:   2308
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80043528
// line start: 2314
// line end:   2343
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80043658
// line start: 2352
// line end:   2388
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
}


// address: 0x80043898
// line start: 2396
// line end:   2427
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 9
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x80043ADC
// line start: 2435
// line end:   2458
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80043C44
// line start: 2466
// line end:   2491
int RndTypeItems__Fii(int itype, int imid) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 8
	register int ri;
	// register: 9
	register int i;
	// register: 7
	register unsigned char okflag;
}


// address: 0x80043DB4
// line start: 2498
// line end:   2532
int CheckUnique__FiiiUc(int i, int lvl, int uper, unsigned char recreate) {
	// register: 4
	register int j;
	// register: 2
	register int idata;
	// address: 0xFFFFFF68
	// size: 0x80
	auto unsigned char uok[128];
	// register: 16
	register int numu;
}


// address: 0x80043F64
// line start: 2539
// line end:   2568
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004421C
// line start: 2603
// line end:   2635
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x8004435C
// line start: 2647
// line end:   2651
void ItemRndDur__Fi(int ii) {
}


// address: 0x800443F8
// line start: 2658
// line end:   2727
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80044740
// line start: 2735
// line end:   2789
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80044998
// line start: 2797
// line end:   2820
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x80044AF4
// line start: 2830
// line end:   2848
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80044C3C
// line start: 2860
// line end:   2879
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 16
	register int idx;
}


// address: 0x80044D28
// line start: 2883
// line end:   2893
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x80044DE8
// line start: 2902
// line end:   2918
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x80044F2C
// line start: 2930
// line end:   2959
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x8004512C
// line start: 2968
// line end:   3014
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 18
	register int i;
	// register: 16
	register int j;
	// register: 3
	register unsigned char failed;
	{
		{
			// register: 21
			register int tries;
		}
	}
}


// address: 0x80045380
// line start: 3023
// line end:   3047
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 4
	register unsigned char done;
}


// address: 0x8004552C
// line start: 3056
// line end:   3088
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x800456E4
// line start: 3095
// line end:   3099
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80045738
// line start: 3109
// line end:   3124
void ItemDoppel__Fv() {
	// register: 4
	register int idoppelx;
	// register: 3
	// size: 0x6C
	register struct ItemStruct *i;
}


// address: 0x800457F8
// line start: 3141
// line end:   3216
void ProcessItems__Fv() {
	// register: 19
	register int i;
	// register: 5
	register int ii;
	// register: 20
	register int numitemslist;
	// register: 4
	register int count;
	{
		{
			{
				// register: 3
				register int j;
				{
					{
						{
							{
								{
									{
										{
											{
												// register: 2
												register int it;
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
	}
}


// address: 0x80045A9C
// line start: 3223
// line end:   3228
void FreeItemGFX__Fv() {
}


// address: 0x80045AA4
// line start: 3247
// line end:   3272
void GetItemStr__Fi(int i) {
	{
		{
			{
				// register: 17
				register int nGold;
			}
		}
	}
}


// address: 0x80045C4C
// line start: 3278
// line end:   3291
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x6C
	register struct ItemStruct *pi;
	// register: 2
	// size: 0x19E8
	register struct PlayerStruct *p;
}


// address: 0x80045D48
// line start: 3296
// line end:   3320
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 5
	register int d;
	// register: 17
	register int rep;
}


// address: 0x80045E3C
// line start: 3324
// line end:   3337
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pi;
}


// address: 0x80045F00
// line start: 3342
// line end:   3355
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80045F68
// line start: 3359
// line end:   3379
void DoRecharge__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x19E8
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x6C
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x8004608C
// line start: 3484
// line end:   3599
void PrintItemOil__Fc(char IDidx) {
	// register: 3
	register int StrVal;
}


// address: 0x80046188
// line start: 3605
// line end:   3820
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x8004682C
// line start: 3905
// line end:   3959
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80046A8C
// line start: 3966
// line end:   4042
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80046E8C
// line start: 4048
// line end:   4116
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x8004719C
// line start: 4123
// line end:   4179
void CastScroll__Fii(int pnum, int Spell) {
	// register: 16
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
	{
		{
			// register: 6
			register int dx;
			// register: 7
			register int dy;
		}
	}
}


// address: 0x800473EC
// line start: 4186
// line end:   4384
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 16
	register long l;
	// register: 4
	register unsigned long t;
	// register: 17
	// size: 0x19E8
	register struct PlayerStruct *ptrplr;
}


// address: 0x80047A08
// line start: 4394
// line end:   4399
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80047A9C
// line start: 4418
// line end:   4442
unsigned char PremiumItemOk__Fi(int i) {
	// register: 3
	register unsigned char rv;
}


// address: 0x80047B18
// line start: 4448
// line end:   4467
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80047C20
// line start: 4475
// line end:   4515
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x80047F14
// line start: 4524
// line end:   4543
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x800482B4
// line start: 4556
// line end:   4571
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x80048490
// line start: 4602
// line end:   4606
void SpawnStoreGold__Fv() {
}


// address: 0x80048560
// line start: 4655
// line end:   4666
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x80048844
// line start: 4678
// line end:   4686
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x800488A8
// line start: 4705
// line end:   4727
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80048A38
// line start: 4735
// line end:   4756
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80048BB4
// line start: 4764
// line end:   4785
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80048D30
// line start: 4924
// line end:   4965
void DrawUniqueInfo__Fv() {
	// register: 3
	register int u;
}


// address: 0x80048EA0
// line start: 5119
// line end:   5301
char *MakeItemStr__FP10ItemStructUsUs(struct ItemStruct *ItemPtr, unsigned short ItemNo, unsigned short MaxLen) {
	// register: 3
	register int PreIdx;
	// register: 17
	register int SufIdx;
	// address: 0xFFFFFF28
	// size: 0x40
	auto char PreStr[64];
	// address: 0xFFFFFF68
	// size: 0x40
	auto char ItemStr[64];
	// address: 0xFFFFFFA8
	// size: 0x40
	auto char SufStr[64];
}


// address: 0x80049274
// line start: 5306
// line end:   5322
unsigned char SmithItemOk__Fi(int i) {
	// register: 3
	register unsigned char rv;
}


// address: 0x800492D8
// line start: 5329
// line end:   5349
int RndSmithItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 18
	register int i;
}


// address: 0x800493E4
// line start: 5355
// line end:   5376
unsigned char WitchItemOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80049474
// line start: 5381
// line end:   5452
int RndWitchItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 16
	register int i;
	// register: 20
	register int pi;
	{
		{
			{
				{
					// register: 4
					register int is;
				}
			}
		}
	}
}


// address: 0x80049624
// line start: 5458
// line end:   5463
void BubbleSwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF90
	// size: 0x6C
	auto struct ItemStruct h;
}


// address: 0x8004972C
// line start: 5468
// line end:   5483
void SortWitch__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x800498BC
// line start: 5489
// line end:   5513
int RndBoyItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800499E0
// line start: 5519
// line end:   5549
unsigned char HealerItemOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80049B94
// line start: 5565
// line end:   5614
int RndHealerItem__Fi(int lvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x80049C94
// line start: 5620
// line end:   5633
void RecreatePremiumItem__Fiiii(int ii, int idx, int plvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x80049D70
// line start: 5638
// line end:   5663
void RecreateWitchItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
			// register: 19
			register int itype;
			// register: 17
			register int iblvl;
		}
	}
}


// address: 0x80049EDC
// line start: 5669
// line end:   5680
void RecreateSmithItem__Fiiii(int ii, int idx, int lvl, int iseed) {
}


// address: 0x80049F8C
// line start: 5689
// line end:   5711
void RecreateHealerItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	{
		{
		}
	}
}


// address: 0x8004A060
// line start: 5716
// line end:   5730
void RecreateBoyItem__Fiiii(int ii, int idx, int lvl, int iseed) {
	// register: 17
	register int itype;
}


// address: 0x8004A138
// line start: 5735
// line end:   5746
void RecreateTownItem__FiiUsii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue) {
}


// address: 0x8004A1C4
// line start: 5751
// line end:   5786
void SpawnSmith__Fi(int lvl) {
	// register: 16
	register int i;
	// register: 19
	register int nsi;
	// address: 0xFFFFFF68
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004A4F4
// line start: 5792
// line end:   5857
void SpawnWitch__Fi(int lvl) {
	// register: 17
	register int itype;
	// register: 16
	register int iblvl;
	// register: 18
	register int i;
	// register: 21
	register int nsi;
	// address: 0xFFFFFF68
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004AAEC
// line start: 5861
// line end:   5911
void SpawnHealer__Fi(int lvl) {
	// register: 4
	register int i;
	// register: 17
	register int nsi;
	// register: 16
	register int srnd;
	// address: 0xFFFFFF70
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004B090
// line start: 5915
// line end:   5949
void SpawnBoy__Fi(int lvl) {
	// register: 16
	register int itype;
	// address: 0xFFFFFF78
	// size: 0x6C
	auto struct ItemStruct holditem;
}


// address: 0x8004B394
// line start: 5953
// line end:   5970
void SortSmith__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x8004B518
// line start: 5975
// line end:   5989
void SortHealer__Fv() {
	// register: 4
	register int j;
	// register: 17
	register int k;
	// register: 5
	register unsigned char sorted;
}


// address: 0x8004B6A8
// line start: 5995
// line end:   6086
void RecreateItem__FiiUsiii(int ii, int idx, unsigned short icreateinfo, int iseed, int ivalue, int PlrCreate) {
	// register: 21
	register int OldFePlayerNo;
	// register: 3
	register int uper;
	// register: 9
	register unsigned char onlygood;
	// register: 10
	register unsigned char uavail;
	// register: 11
	register unsigned char pregen;
}


