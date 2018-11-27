// C:\diabpsx\SOURCE\ITEMS.CPP

#include "types.h"

// address: 0x8003C554
// line start: 508
// line end:   519
void InitItemGFX__Fv() {
}


// address: 0x8003C580
// line start: 525
// line end:   532
unsigned char ItemPlace__Fii(int xp, int yp) {
}


// address: 0x8003C648
// line start: 539
// line end:   578
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


// address: 0x8003C860
// line start: 585
// line end:   632
void InitItems__Fv() {
	// register: 4
	register int i;
	{
		{
		}
	}
}


// address: 0x8003CA20
// line start: 639
// line end:   890
void CalcPlrItemVals__FiUc(int p, unsigned char Loadgfx) {
	// register: 12
	register int mind;
	// register: 11
	register int maxd;
	// address: 0xFFFFFFD0
	auto int tac;
	// register: 5
	register int g;
	// register: 10
	register int i;
	// register: 2
	register int mi;
	// register: 24
	register int bdam;
	// register: 25
	register int btohit;
	// address: 0xFFFFFF58
	auto int bac;
	// address: 0xFFFFFF60
	auto int sadd;
	// register: 20
	register int madd;
	// address: 0xFFFFFF68
	auto int dadd;
	// register: 19
	register int vadd;
	// register: 30
	register int fr;
	// address: 0xFFFFFF70
	auto int lr;
	// register: 21
	register int mr;
	// register: 13
	register int dmod;
	// address: 0xFFFFFFC8
	auto int ghit;
	// register: 18
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
	// register: 22
	register unsigned long spl;
	// register: 6
	register unsigned long t;
	{
		{
			// register: 5
			// size: 0x94
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


// address: 0x8003DA44
// line start: 895
// line end:   925
void CalcPlrScrolls__Fi(int p) {
	// register: 11
	register int i;
	// register: 8
	register unsigned long t;
}


// address: 0x8003DDC4
// line start: 933
// line end:   941
void CalcPlrStaff__Fi(int p) {
	{
		{
			// register: 4
			register unsigned long t;
		}
	}
}


// address: 0x8003DEC0
// line start: 945
// line end:   985
void CalcSelfItems__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 7
	// size: 0x22D0
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


// address: 0x8003E020
// line start: 991
// line end:   995
unsigned char ItemMinStats__FPC12PlayerStructPC10ItemStruct(struct PlayerStruct *p, struct ItemStruct *x) {
}


// address: 0x8003E06C
// line start: 1001
// line end:   1016
void CalcPlrItemMin__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 19
	// size: 0x22D0
	register struct PlayerStruct *p;
}


// address: 0x8003E14C
// line start: 1022
// line end:   1045
void CalcPlrBookVals__Fi(int p) {
	// register: 18
	register int i;
	// register: 6
	register int slvl;
}


// address: 0x8003E3E0
// line start: 1050
// line end:   1060
void CalcPlrInv__FiUc(int p, unsigned char Loadgfx) {
}


// address: 0x8003E478
// line start: 1066
// line end:   1097
void SetPlrHandItem__FP10ItemStructi(struct ItemStruct *h, int idata) {
	// register: 17
	// size: 0x20
	register struct ItemDataStruct *pAllItem;
}


// address: 0x8003E590
// line start: 1103
// line end:   1104
void GetPlrHandSeed__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E5BC
// line start: 1110
// line end:   1126
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


// address: 0x8003E738
// line start: 1132
// line end:   1133
void SetPlrHandSeed__FP10ItemStructi(struct ItemStruct *h, int iseed) {
}


// address: 0x8003E740
// line start: 1139
// line end:   1144
void SetPlrHandGoldCurs__FP10ItemStruct(struct ItemStruct *h) {
}


// address: 0x8003E770
// line start: 1150
// line end:   1261
void CreatePlrItems__Fi(int p) {
	// register: 3
	register int i;
	// register: 2
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8003EBA8
// line start: 1268
// line end:   1297
unsigned char ItemSpaceOk__Fii(int i, int j) {
	// register: 2
	register int pn;
	// register: 3
	register int oi;
}


// address: 0x8003EE80
// line start: 1305
// line end:   1353
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


// address: 0x8003F0AC
// line start: 1360
// line end:   1383
void GetSuperItemSpace__Fiic(int x, int y, char inum) {
	// register: 16
	register int xx;
	// register: 18
	register int yy;
	{
		// register: 19
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


// address: 0x8003F214
// line start: 1389
// line end:   1401
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


// address: 0x8003F2DC
// line start: 1407
// line end:   1413
void CalcItemValue__Fi(int i) {
	// register: 4
	register int v;
}


// address: 0x8003F394
// line start: 1420
// line end:   1465
void GetBookSpell__Fii(int i, int lvl) {
	// register: 5
	register int rv;
	// register: 3
	register int s;
	// register: 16
	register int bs;
}


// address: 0x8003F5FC
// line start: 1472
// line end:   1532
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


// address: 0x8003F7EC
// line start: 1540
// line end:   1608
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


// address: 0x8003FAA0
// line start: 1649
// line end:   1739
void GetItemAttrs__Fiii(int i, int idata, int lvl) {
	// register: 20
	register int rndv;
}


// address: 0x8003FFEC
// line start: 1748
// line end:   1749
int RndPL__Fii(int param1, int param2) {
}


// address: 0x80040024
// line start: 1756
// line end:   1759
int PLVal__Fiiiii(int pv, int p1, int p2, int minv, int maxv) {
}


// address: 0x80040098
// line start: 1766
// line end:   2047
void SaveItemPower__Fiiiiiii(int i, int power, int param1, int param2, int minval, int maxval, int multval) {
	// register: 19
	register int r;
	// register: 17
	register int r2;
}


// address: 0x800416A4
// line start: 2055
// line end:   2153
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


// address: 0x80041B0C
// line start: 2160
// line end:   2190
void GetItemBonus__FiiiiUc(int i, int idata, int minlvl, int maxlvl, int onlygood) {
}


// address: 0x80041C08
// line start: 2196
// line end:   2223
void SetupItem__Fi(int i) {
	// register: 2
	register int it;
}


// address: 0x80041D1C
// line start: 2232
// line end:   2268
int RndItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 7
	register int i;
}


// address: 0x80041F60
// line start: 2276
// line end:   2307
int RndUItem__Fi(int m) {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 8
	register int i;
	// register: 6
	register unsigned char okflag;
}


// address: 0x800421A0
// line start: 2315
// line end:   2338
int RndAllItems__Fv() {
	// address: 0xFFFFF7F8
	// size: 0x800
	auto int ril[512];
	// register: 5
	register int ri;
	// register: 6
	register int i;
}


// address: 0x80042314
// line start: 2346
// line end:   2361
int RndTypeItems__Fii(int itype, int imid) {
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


// address: 0x80042414
// line start: 2368
// line end:   2402
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


// address: 0x800425C4
// line start: 2409
// line end:   2431
void GetUniqueItem__Fii(int i, int uid) {
}


// address: 0x8004286C
// line start: 2438
// line end:   2451
void SpawnUnique__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int itype;
}


// address: 0x80042978
// line start: 2461
// line end:   2465
void ItemRndDur__Fi(int ii) {
}


// address: 0x80042A08
// line start: 2472
// line end:   2510
void SetupAllItems__FiiiiiUcUcUc(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, int pregen) {
	// register: 16
	register int iblvl;
	// register: 2
	register int uid;
}


// address: 0x80042D14
// line start: 2518
// line end:   2561
void SpawnItem__FiiiUc(int m, int x, int y, unsigned char sendmsg) {
	// register: 19
	register int ii;
	// register: 17
	register int idx;
	// register: 21
	register unsigned char onlygood;
}


// address: 0x80042F5C
// line start: 2569
// line end:   2583
void CreateItem__Fiii(int uid, int x, int y) {
	// register: 17
	register int ii;
	// register: 7
	register int idx;
}


// address: 0x8004308C
// line start: 2593
// line end:   2608
void CreateRndItem__FiiUcUcUc(int x, int y, unsigned char onlygood, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800431D4
// line start: 2620
// line end:   2630
void SetupAllUseful__Fiii(int ii, int iseed, int lvl) {
	// register: 17
	register int idx;
}


// address: 0x800432AC
// line start: 2634
// line end:   2644
void CreateRndUseful__FiiiUc(int pnum, int x, int y, unsigned char sendmsg) {
	// register: 17
	register int ii;
}


// address: 0x8004336C
// line start: 2653
// line end:   2668
void CreateTypeItem__FiiUciiUcUc(int x, int y, unsigned char onlygood, int itype, int imisc, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 18
	register int idx;
}


// address: 0x800434B0
// line start: 2680
// line end:   2704
void RecreateEar__FiUsiUciiiiii(int ii, unsigned short ic, int iseed, unsigned char Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff) {
}


// address: 0x8004369C
// line start: 2711
// line end:   2746
void SpawnQuestItem__Fiiiii(int itemid, int x, int y, int randarea, int selflag) {
	// register: 17
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


// address: 0x800438C8
// line start: 2753
// line end:   2778
void SpawnRock__Fv() {
	// register: 3
	register int i;
	// register: 17
	register int ii;
	// register: 5
	register int ostand;
	// register: 5
	register int xx;
	// register: 2
	register int yy;
	// register: 4
	register unsigned char done;
}


// address: 0x80043A88
// line start: 2786
// line end:   2818
void RespawnItem__FiUc(int i, unsigned char FlipFlag) {
	// register: 7
	register int it;
}


// address: 0x80043C4C
// line start: 2825
// line end:   2829
void DeleteItem__Fii(int ii, int i) {
}


// address: 0x80043CA0
// line start: 2839
// line end:   2854
void ItemDoppel__Fv() {
	// register: 5
	register int idoppelx;
	// register: 3
	// size: 0x94
	register struct ItemStruct *i;
}


// address: 0x80043D68
// line start: 2860
// line end:   2899
void ProcessItems__Fv() {
	// register: 6
	register int i;
	// register: 5
	register int ii;
}


// address: 0x80043EAC
// line start: 2906
// line end:   2911
void FreeItemGFX__Fv() {
}


// address: 0x80043EB4
// line start: 2930
// line end:   2954
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


// address: 0x8004403C
// line start: 2960
// line end:   2970
void CheckIdentify__Fii(int pnum, int cii) {
	// register: 3
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x8004412C
// line start: 2975
// line end:   2999
void RepairItem__FP10ItemStructi(struct ItemStruct *i, int lvl) {
	// register: 4
	register int d;
	// register: 17
	register int rep;
}


// address: 0x800441FC
// line start: 3003
// line end:   3016
void DoRepair__Fii(int pnum, int cii) {
	// register: 18
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 4
	// size: 0x94
	register struct ItemStruct *pi;
}


// address: 0x800442C0
// line start: 3021
// line end:   3034
void RechargeItem__FP10ItemStructi(struct ItemStruct *i, int r) {
}


// address: 0x80044330
// line start: 3038
// line end:   3056
void DoRecharge__Fii(int pnum, int cii) {
	// register: 4
	// size: 0x22D0
	register struct PlayerStruct *p;
	// register: 16
	// size: 0x94
	register struct ItemStruct *pi;
	{
		{
			// register: 2
			register int r;
		}
	}
}


// address: 0x80044430
// line start: 3161
// line end:   3285
void PrintItemOil__Fc(char IDidx) {
}


// address: 0x80044524
// line start: 3291
// line end:   3500
void PrintItemPower__FcPC10ItemStruct(char plidx, struct ItemStruct *x) {
	// register: 16
	register int v;
}


// address: 0x80044BD0
// line start: 3584
// line end:   3622
void PrintItemMisc__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x80044E5C
// line start: 3629
// line end:   3674
void PrintItemDetails__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800451C8
// line start: 3680
// line end:   3720
void PrintItemDur__FPC10ItemStruct(struct ItemStruct *x) {
}


// address: 0x800454D8
// line start: 3726
// line end:   3728
void CastScroll__Fi(int pnum) {
}


// address: 0x800454E0
// line start: 3735
// line end:   3923
void UseItem__Fiii(int p, int Mid, int spl) {
	// register: 4
	register long l;
	// register: 6
	register unsigned long t;
}


// address: 0x80045ECC
// line start: 3932
// line end:   3937
unsigned char StoreStatOk__FP10ItemStruct(struct ItemStruct *h) {
	// register: 5
	register unsigned char sf;
}


// address: 0x80045F60
// line start: 3956
// line end:   3971
unsigned char PremiumItemOk__Fi(int i) {
	// register: 4
	register unsigned char rv;
}


// address: 0x80045FDC
// line start: 3977
// line end:   3996
int RndPremiumItem__Fii(int minlvl, int maxlvl) {
	// address: 0xFFFFF7E0
	// size: 0x800
	auto int ril[512];
	// register: 19
	register int ri;
	// register: 17
	register int i;
}


// address: 0x800460E4
// line start: 4004
// line end:   4029
void SpawnOnePremium__Fii(int i, int plvl) {
	// register: 16
	register int itype;
	// register: 20
	register int maxval;
	// address: 0xFFFFFF50
	// size: 0x94
	auto struct ItemStruct holditem;
}


// address: 0x800462F8
// line start: 4038
// line end:   4057
void SpawnPremium__Fi(int lvl) {
	// register: 16
	register int i;
}


// address: 0x8004652C
// line start: 4070
// line end:   4085
void WitchBookLevel__Fi(int ii) {
	// register: 6
	register int slvl;
}


// address: 0x8004667C
// line start: 4116
// line end:   4120
void SpawnStoreGold__Fv() {
}


// address: 0x800466FC
// line start: 4169
// line end:   4180
void RecalcStoreStats__Fv() {
	// register: 17
	register int i;
}


// address: 0x8004689C
// line start: 4192
// line end:   4200
int ItemNoFlippy__Fv() {
	// register: 2
	register int r;
}


// address: 0x80046900
// line start: 4219
// line end:   4241
void CreateSpellBook__FiiiUcUc(int x, int y, int ispell, unsigned char sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 22
	register int idx;
	// register: 19
	register unsigned char done;
}


// address: 0x80046A90
// line start: 4249
// line end:   4270
void CreateMagicArmor__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046C0C
// line start: 4278
// line end:   4299
void CreateMagicWeapon__FiiiiUcUc(int x, int y, int imisc, int icurs, int sendmsg, int delta) {
	// register: 17
	register int ii;
	// register: 16
	register int idx;
	// register: 18
	register unsigned char done;
}


// address: 0x80046D88
// line start: 4621
// line end:   4710
char *MakeItemStr__FP10ItemStructUs(struct ItemStruct *ItemPtr, unsigned short ItemNo) {
	// register: 6
	register int PreIdx;
	// register: 19
	register int SufIdx;
}


