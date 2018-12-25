// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063618
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80063620
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x80063690
// line start: 167
// line end:   234
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 21
	register int xx;
	// register: 19
	register int yy;
	// address: 0xFFFFFFB0
	// size: 0x20
	auto char valstr[32];
	// address: 0xFFFFFFD0
	auto int SpinnerY;
	// register: 20
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x80118128
	static unsigned char DaveFix;
}


// address: 0x80063A20
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063AB4
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063B4C
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x80063B9C
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063BC4
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063C78
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800640BC
// line start: 391
// line end:   449
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


// address: 0x800646DC
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x80064864
// line start: 476
// line end:   503
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064A1C
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80064B4C
// line start: 533
// line end:   592
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064D20
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E70
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F54
// line start: 651
// line end:   687
void S_ScrollSSell__Fi(int idx) {
	// register: 17
	register int l;
	// register: 21
	register int ls;
	// register: 5
	register int v;
	// register: 18
	register char iclr;
}


// address: 0x80065154
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065580
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065624
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065804
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065CD0
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x80065E10
// line start: 871
// line end:   900
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065FC8
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x800660F0
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066214
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066868
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800668F0
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066A70
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066E8C
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x80066EF4
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x80066F54
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067294
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x80067424
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067580
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x80067754
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800678C0
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x800679E0
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x80067AD0
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B04
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067BD8
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068634
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x800687D0
// line start: 1465
// line end:   1499
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


// address: 0x80068A00
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x80068AF8
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x80068BCC
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x80068CA0
// line start: 1552
// line end:   1626
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068F90
// line start: 1633
// line end:   1637
void DrawSText__Fv() {
}


// address: 0x80068FD0
// line start: 1642
// line end:   1656
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069098
// line start: 1660
// line end:   1713
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069244
// line start: 1721
// line end:   1785
void STextESC__Fv() {
}


// address: 0x800693D0
// line start: 1790
// line end:   1824
void STextUp__Fv() {
}


// address: 0x80069558
// line start: 1834
// line end:   1866
void STextDown__Fv() {
}


// address: 0x800696F0
// line start: 1878
// line end:   1900
void S_SmithEnter__Fv() {
}


// address: 0x800697C4
// line start: 1907
// line end:   1918
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069840
// line start: 1926
// line end:   1936
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698BC
// line start: 1944
// line end:   2035
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069D08
// line start: 2044
// line end:   2067
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069EF0
// line start: 2073
// line end:   2103
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A0CC
// line start: 2111
// line end:   2136
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A24C
// line start: 2143
// line end:   2181
void S_SPBuyEnter__Fv() {
	// register: 6
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 5
		register int xx;
	}
}


// address: 0x8006A470
// line start: 2188
// line end:   2218
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


// address: 0x8006A728
// line start: 2227
// line end:   2251
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


// address: 0x8006A98C
// line start: 2257
// line end:   2312
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AC78
// line start: 2319
// line end:   2335
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006AD70
// line start: 2342
// line end:   2359
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006AFD4
// line start: 2365
// line end:   2383
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B124
// line start: 2390
// line end:   2407
void S_WitchEnter__Fv() {
}


// address: 0x8006B1D4
// line start: 2414
// line end:   2446
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B3CC
// line start: 2451
// line end:   2481
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B5A8
// line start: 2489
// line end:   2505
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B6A0
// line start: 2512
// line end:   2526
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B80C
// line start: 2532
// line end:   2550
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B95C
// line start: 2557
// line end:   2585
void S_BoyEnter__Fv() {
}


// address: 0x8006BA94
// line start: 2592
// line end:   2603
void BoyBuyItem__Fv() {
}


// address: 0x8006BB18
// line start: 2609
// line end:   2654
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDA8
// line start: 2659
// line end:   2694
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BF80
// line start: 2700
// line end:   2722
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C2C4
// line start: 2729
// line end:   2764
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C3E0
// line start: 2769
// line end:   2787
void S_HealerEnter__Fv() {
}


// address: 0x8006C478
// line start: 2794
// line end:   2824
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C674
// line start: 2832
// line end:   2845
void S_StoryEnter__Fv() {
}


// address: 0x8006C70C
// line start: 2852
// line end:   2870
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C87C
// line start: 2877
// line end:   2919
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


// address: 0x8006CA74
// line start: 2928
// line end:   2939
void S_TavernEnter__Fv() {
}


// address: 0x8006CAE4
// line start: 2946
// line end:   2958
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CB54
// line start: 2965
// line end:   2976
void S_DrunkEnter__Fv() {
}


// address: 0x8006CBC4
// line start: 2983
// line end:   3045
void STextEnter__Fv() {
}


// address: 0x8006CDC4
// line start: 3050
// line end:   3134
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CEE0
// line start: 3139
// line end:   3141
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CEF4
// line start: 3220
// line end:   3220
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF1C
// line start: 3220
// line end:   3220
void _GLOBAL__I_pSTextBoxCels() {
}


