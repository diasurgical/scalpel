// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x8006402C
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80064034
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x800640A4
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
	// address: 0x8011713C
	static unsigned char DaveFix;
}


// address: 0x80064434
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800644C8
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80064560
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x800645B0
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800645D8
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006468C
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80064AD0
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


// address: 0x800650EC
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x80065274
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


// address: 0x80065420
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80065550
// line start: 533
// line end:   592
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80065718
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80065868
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80065950
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


// address: 0x80065B3C
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065F64
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006600C
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800661E8
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800666B4
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x800667F4
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


// address: 0x800669A0
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x80066AC8
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066BEC
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80067238
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x800672C4
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067440
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80067854
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x800678BC
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x8006791C
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067C50
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x80067DE0
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067F2C
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x80068100
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80068260
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x80068380
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x80068470
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800684A4
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80068574
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068FB0
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80069140
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


// address: 0x80069370
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x80069468
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x8006953C
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x80069610
// line start: 1552
// line end:   1624
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800698F8
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x80069938
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069A00
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069BAC
// line start: 1719
// line end:   1783
void STextESC__Fv() {
}


// address: 0x80069D5C
// line start: 1788
// line end:   1822
void STextUp__Fv() {
}


// address: 0x80069EE4
// line start: 1832
// line end:   1864
void STextDown__Fv() {
}


// address: 0x8006A07C
// line start: 1876
// line end:   1898
void S_SmithEnter__Fv() {
}


// address: 0x8006A150
// line start: 1905
// line end:   1916
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A1D0
// line start: 1924
// line end:   1934
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A250
// line start: 1942
// line end:   2033
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A69C
// line start: 2042
// line end:   2065
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A880
// line start: 2071
// line end:   2100
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AA7C
// line start: 2108
// line end:   2133
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006ABFC
// line start: 2140
// line end:   2177
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


// address: 0x8006AE40
// line start: 2184
// line end:   2213
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


// address: 0x8006B110
// line start: 2222
// line end:   2246
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


// address: 0x8006B374
// line start: 2252
// line end:   2307
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B65C
// line start: 2314
// line end:   2330
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B750
// line start: 2337
// line end:   2354
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B9B8
// line start: 2360
// line end:   2378
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB04
// line start: 2385
// line end:   2402
void S_WitchEnter__Fv() {
}


// address: 0x8006BBB4
// line start: 2409
// line end:   2441
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDA8
// line start: 2446
// line end:   2475
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFA4
// line start: 2483
// line end:   2499
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006C098
// line start: 2506
// line end:   2520
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006C208
// line start: 2526
// line end:   2544
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C354
// line start: 2551
// line end:   2579
void S_BoyEnter__Fv() {
}


// address: 0x8006C48C
// line start: 2586
// line end:   2597
void BoyBuyItem__Fv() {
}


// address: 0x8006C510
// line start: 2603
// line end:   2648
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C79C
// line start: 2653
// line end:   2687
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C998
// line start: 2693
// line end:   2715
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006CCE0
// line start: 2722
// line end:   2757
void S_ConfirmEnter__Fv() {
}


// address: 0x8006CDFC
// line start: 2762
// line end:   2780
void S_HealerEnter__Fv() {
}


// address: 0x8006CE94
// line start: 2787
// line end:   2816
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D0B0
// line start: 2824
// line end:   2837
void S_StoryEnter__Fv() {
}


// address: 0x8006D148
// line start: 2844
// line end:   2862
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D2B4
// line start: 2869
// line end:   2911
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


// address: 0x8006D4AC
// line start: 2920
// line end:   2931
void S_TavernEnter__Fv() {
}


// address: 0x8006D51C
// line start: 2938
// line end:   2950
void S_BarmaidEnter__Fv() {
}


// address: 0x8006D58C
// line start: 2957
// line end:   2968
void S_DrunkEnter__Fv() {
}


// address: 0x8006D5FC
// line start: 2975
// line end:   3037
void STextEnter__Fv() {
}


// address: 0x8006D80C
// line start: 3042
// line end:   3124
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D924
// line start: 3129
// line end:   3131
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D938
// line start: 3210
// line end:   3210
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D960
// line start: 3210
// line end:   3210
void _GLOBAL__I_pSTextBoxCels() {
}


