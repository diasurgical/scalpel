// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80065400
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x80065408
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x80065478
// line start: 177
// line end:   253
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8011CE68
	static unsigned char DaveFix;
}


// address: 0x8006586C
// line start: 260
// line end:   267
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80065900
// line start: 274
// line end:   287
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80065998
// line start: 293
// line end:   297
void AddSLine__Fi(int y) {
}


// address: 0x800659E8
// line start: 303
// line end:   304
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80065A10
// line start: 313
// line end:   322
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80065AC4
// line start: 327
// line end:   419
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80065F4C
// line start: 427
// line end:   485
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 3
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x8006656C
// line start: 492
// line end:   506
void S_StartSmith__Fv() {
}


// address: 0x800666F4
// line start: 512
// line end:   539
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800668AC
// line start: 545
// line end:   563
void S_StartSBuy__Fv() {
}


// address: 0x800669DC
// line start: 569
// line end:   610
void S_ScrollSPBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 22
	register int ls;
	// register: 16
	register char iclr;
	// register: 3
	register int boughtitems;
	{
		{
			{
				{
					// register: 16
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80066BFC
// line start: 616
// line end:   646
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80066D4C
// line start: 652
// line end:   663
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80066E30
// line start: 669
// line end:   721
void S_ScrollSSell__Fi(int idx) {
	// register: 19
	register int l;
	// register: 23
	register int ls;
	// register: 20
	register int v;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80067058
// line start: 727
// line end:   773
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80067488
// line start: 781
// line end:   789
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006752C
// line start: 794
// line end:   815
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006770C
// line start: 820
// line end:   878
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80067BDC
// line start: 887
// line end:   899
void S_StartWitch__Fv() {
}


// address: 0x80067D1C
// line start: 905
// line end:   942
void S_ScrollWBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 21
	register int ls;
	// register: 18
	register char iclr;
	{
		{
			{
				{
					// register: 17
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x80067EF4
// line start: 948
// line end:   968
void S_StartWBuy__Fv() {
}


// address: 0x80068020
// line start: 974
// line end:   994
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80068144
// line start: 1000
// line end:   1060
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006879C
// line start: 1069
// line end:   1075
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80068824
// line start: 1081
// line end:   1090
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800689A4
// line start: 1096
// line end:   1137
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80068DC4
// line start: 1146
// line end:   1152
void S_StartNoMoney__Fv() {
}


// address: 0x80068E2C
// line start: 1158
// line end:   1163
void S_StartNoRoom__Fv() {
}


// address: 0x80068E8C
// line start: 1169
// line end:   1243
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80069204
// line start: 1249
// line end:   1267
void S_StartBoy__Fv() {
}


// address: 0x80069394
// line start: 1274
// line end:   1303
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006951C
// line start: 1311
// line end:   1331
void S_StartHealer__Fv() {
}


// address: 0x800696F0
// line start: 1337
// line end:   1359
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006985C
// line start: 1365
// line end:   1382
void S_StartHBuy__Fv() {
}


// address: 0x8006997C
// line start: 1388
// line end:   1397
void S_StartStory__Fv() {
}


// address: 0x80069A6C
// line start: 1403
// line end:   1407
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80069AA0
// line start: 1415
// line end:   1420
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80069B74
// line start: 1426
// line end:   1497
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006A5D4
// line start: 1506
// line end:   1530
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006A7A8
// line start: 1536
// line end:   1570
void S_StartTalk__Fv() {
	// register: 18
	register int i;
	// register: 5
	register int tq;
	// register: 17
	register int sn;
	// register: 22
	register int la;
	// register: 20
	register int gl;
}


// address: 0x8006A9D8
// line start: 1577
// line end:   1587
void S_StartTavern__Fv() {
}


// address: 0x8006AAD0
// line start: 1593
// line end:   1602
void S_StartBarMaid__Fv() {
}


// address: 0x8006ABA4
// line start: 1608
// line end:   1617
void S_StartDrunk__Fv() {
}


// address: 0x8006AC78
// line start: 1623
// line end:   1697
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006AF60
// line start: 1704
// line end:   1708
void DrawSText__Fv() {
}


// address: 0x8006AFA0
// line start: 1713
// line end:   1727
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006B068
// line start: 1731
// line end:   1787
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006B214
// line start: 1795
// line end:   1862
void STextESC__Fv() {
}


// address: 0x8006B388
// line start: 1869
// line end:   1904
void STextUp__Fv() {
}


// address: 0x8006B520
// line start: 1914
// line end:   1947
void STextDown__Fv() {
}


// address: 0x8006B6D0
// line start: 1956
// line end:   1978
void S_SmithEnter__Fv() {
}


// address: 0x8006B7A4
// line start: 1985
// line end:   1996
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006B820
// line start: 2004
// line end:   2014
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006B89C
// line start: 2022
// line end:   2113
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006BCE8
// line start: 2122
// line end:   2146
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006BEDC
// line start: 2152
// line end:   2186
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C100
// line start: 2194
// line end:   2220
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006C288
// line start: 2227
// line end:   2266
void S_SPBuyEnter__Fv() {
	// register: 5
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 3
		register int xx;
	}
}


// address: 0x8006C4B8
// line start: 2273
// line end:   2303
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 4
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006C770
// line start: 2311
// line end:   2335
void PlaceStoreGold__Fl(long v) {
	// register: 16
	register int i;
	// register: 18
	register int ii;
	// register: 19
	register int xx;
	// register: 17
	register int yy;
	// register: 5
	register unsigned char done;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006C9D4
// line start: 2340
// line end:   2396
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006CCC8
// line start: 2403
// line end:   2420
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CDCC
// line start: 2427
// line end:   2445
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006D03C
// line start: 2451
// line end:   2470
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D198
// line start: 2477
// line end:   2494
void S_WitchEnter__Fv() {
}


// address: 0x8006D248
// line start: 2501
// line end:   2534
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006D448
// line start: 2539
// line end:   2570
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D634
// line start: 2578
// line end:   2595
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D738
// line start: 2602
// line end:   2617
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006D8B0
// line start: 2623
// line end:   2642
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006DA0C
// line start: 2649
// line end:   2677
void S_BoyEnter__Fv() {
}


// address: 0x8006DB44
// line start: 2684
// line end:   2695
void BoyBuyItem__Fv() {
}


// address: 0x8006DBC8
// line start: 2701
// line end:   2748
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006DE6C
// line start: 2753
// line end:   2785
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006E054
// line start: 2791
// line end:   2813
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006E3A0
// line start: 2820
// line end:   2855
void S_ConfirmEnter__Fv() {
}


// address: 0x8006E4BC
// line start: 2860
// line end:   2878
void S_HealerEnter__Fv() {
}


// address: 0x8006E554
// line start: 2885
// line end:   2916
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006E760
// line start: 2924
// line end:   2937
void S_StoryEnter__Fv() {
}


// address: 0x8006E7F8
// line start: 2944
// line end:   2963
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006E974
// line start: 2970
// line end:   3012
void S_TalkEnter__Fv() {
	// register: 16
	register int i;
	// register: 5
	register int tq;
	// register: 18
	register int sn;
	// register: 21
	register int la;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8006EB6C
// line start: 3021
// line end:   3032
void S_TavernEnter__Fv() {
}


// address: 0x8006EBDC
// line start: 3039
// line end:   3051
void S_BarmaidEnter__Fv() {
}


// address: 0x8006EC4C
// line start: 3058
// line end:   3069
void S_DrunkEnter__Fv() {
}


// address: 0x8006ECBC
// line start: 3076
// line end:   3139
void STextEnter__Fv() {
}


// address: 0x8006EE80
// line start: 3147
// line end:   3240
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006EF6C
// line start: 3245
// line end:   3247
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006EF80
// line start: 3326
// line end:   3326
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006EFA8
// line start: 3326
// line end:   3326
void _GLOBAL__I_pSTextBoxCels() {
}


