// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x8006355C
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x80063564
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x800635D4
// line start: 177
// line end:   252
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
	// address: 0x8012D040
	static unsigned char DaveFix;
}


// address: 0x800639AC
// line start: 259
// line end:   266
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A40
// line start: 273
// line end:   286
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AD8
// line start: 292
// line end:   296
void AddSLine__Fi(int y) {
}


// address: 0x80063B28
// line start: 302
// line end:   303
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B50
// line start: 312
// line end:   321
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063C04
// line start: 326
// line end:   418
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006408C
// line start: 426
// line end:   484
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


// address: 0x800646AC
// line start: 491
// line end:   505
void S_StartSmith__Fv() {
}


// address: 0x80064834
// line start: 511
// line end:   538
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649EC
// line start: 544
// line end:   562
void S_StartSBuy__Fv() {
}


// address: 0x80064B1C
// line start: 568
// line end:   609
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


// address: 0x80064D3C
// line start: 615
// line end:   645
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E8C
// line start: 651
// line end:   662
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F70
// line start: 668
// line end:   720
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


// address: 0x80065198
// line start: 726
// line end:   772
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655C8
// line start: 780
// line end:   788
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006566C
// line start: 793
// line end:   814
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006584C
// line start: 819
// line end:   877
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D1C
// line start: 886
// line end:   898
void S_StartWitch__Fv() {
}


// address: 0x80065E5C
// line start: 904
// line end:   941
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


// address: 0x80066034
// line start: 947
// line end:   967
void S_StartWBuy__Fv() {
}


// address: 0x80066160
// line start: 973
// line end:   993
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066284
// line start: 999
// line end:   1059
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668DC
// line start: 1068
// line end:   1074
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066964
// line start: 1080
// line end:   1089
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AE4
// line start: 1095
// line end:   1136
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066F04
// line start: 1145
// line end:   1151
void S_StartNoMoney__Fv() {
}


// address: 0x80066F6C
// line start: 1157
// line end:   1162
void S_StartNoRoom__Fv() {
}


// address: 0x80066FCC
// line start: 1168
// line end:   1242
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067344
// line start: 1248
// line end:   1266
void S_StartBoy__Fv() {
}


// address: 0x800674D4
// line start: 1273
// line end:   1302
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006765C
// line start: 1310
// line end:   1330
void S_StartHealer__Fv() {
}


// address: 0x80067830
// line start: 1336
// line end:   1358
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006799C
// line start: 1364
// line end:   1381
void S_StartHBuy__Fv() {
}


// address: 0x80067ABC
// line start: 1387
// line end:   1396
void S_StartStory__Fv() {
}


// address: 0x80067BAC
// line start: 1402
// line end:   1406
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067BE0
// line start: 1414
// line end:   1419
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067CB4
// line start: 1425
// line end:   1496
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068714
// line start: 1505
// line end:   1529
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800688E8
// line start: 1535
// line end:   1569
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


// address: 0x80068B18
// line start: 1576
// line end:   1586
void S_StartTavern__Fv() {
}


// address: 0x80068C10
// line start: 1592
// line end:   1601
void S_StartBarMaid__Fv() {
}


// address: 0x80068CE4
// line start: 1607
// line end:   1616
void S_StartDrunk__Fv() {
}


// address: 0x80068DB8
// line start: 1622
// line end:   1696
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800690A0
// line start: 1703
// line end:   1707
void DrawSText__Fv() {
}


// address: 0x800690E0
// line start: 1712
// line end:   1726
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800691A8
// line start: 1730
// line end:   1786
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069354
// line start: 1794
// line end:   1861
void STextESC__Fv() {
}


// address: 0x800694C8
// line start: 1868
// line end:   1903
void STextUp__Fv() {
}


// address: 0x80069660
// line start: 1913
// line end:   1946
void STextDown__Fv() {
}


// address: 0x80069810
// line start: 1955
// line end:   1977
void S_SmithEnter__Fv() {
}


// address: 0x800698E4
// line start: 1984
// line end:   1995
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069960
// line start: 2003
// line end:   2013
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800699DC
// line start: 2021
// line end:   2112
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069E28
// line start: 2121
// line end:   2145
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A01C
// line start: 2151
// line end:   2185
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A240
// line start: 2193
// line end:   2219
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A3C8
// line start: 2226
// line end:   2265
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


// address: 0x8006A5F8
// line start: 2272
// line end:   2302
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


// address: 0x8006A8B0
// line start: 2310
// line end:   2334
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


// address: 0x8006AB14
// line start: 2339
// line end:   2395
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AE08
// line start: 2402
// line end:   2419
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AF0C
// line start: 2426
// line end:   2444
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B17C
// line start: 2450
// line end:   2469
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B2D8
// line start: 2476
// line end:   2493
void S_WitchEnter__Fv() {
}


// address: 0x8006B388
// line start: 2500
// line end:   2533
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B588
// line start: 2538
// line end:   2569
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B774
// line start: 2577
// line end:   2594
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B878
// line start: 2601
// line end:   2616
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B9F0
// line start: 2622
// line end:   2641
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB4C
// line start: 2648
// line end:   2676
void S_BoyEnter__Fv() {
}


// address: 0x8006BC84
// line start: 2683
// line end:   2694
void BoyBuyItem__Fv() {
}


// address: 0x8006BD08
// line start: 2700
// line end:   2747
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BFAC
// line start: 2752
// line end:   2784
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C194
// line start: 2790
// line end:   2812
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C4E0
// line start: 2819
// line end:   2854
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C5FC
// line start: 2859
// line end:   2877
void S_HealerEnter__Fv() {
}


// address: 0x8006C694
// line start: 2884
// line end:   2915
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C8A0
// line start: 2923
// line end:   2936
void S_StoryEnter__Fv() {
}


// address: 0x8006C938
// line start: 2943
// line end:   2962
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CAB4
// line start: 2969
// line end:   3011
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


// address: 0x8006CCAC
// line start: 3020
// line end:   3031
void S_TavernEnter__Fv() {
}


// address: 0x8006CD1C
// line start: 3038
// line end:   3050
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CD8C
// line start: 3057
// line end:   3068
void S_DrunkEnter__Fv() {
}


// address: 0x8006CDFC
// line start: 3075
// line end:   3140
void STextEnter__Fv() {
}


// address: 0x8006D008
// line start: 3145
// line end:   3238
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D138
// line start: 3243
// line end:   3245
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D14C
// line start: 3324
// line end:   3324
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D174
// line start: 3324
// line end:   3324
void _GLOBAL__I_pSTextBoxCels() {
}


