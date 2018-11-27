// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062948
// line start: 150
// line end:   151
void FreeStoreMem__Fv() {
}


// address: 0x80062950
// line start: 159
// line end:   162
void DrawSTextBack__Fv() {
}


// address: 0x800629C0
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
	// address: 0x80114294
	static unsigned char DaveFix;
}


// address: 0x80062D50
// line start: 241
// line end:   248
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80062DE4
// line start: 255
// line end:   268
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80062E7C
// line start: 274
// line end:   278
void AddSLine__Fi(int y) {
}


// address: 0x80062ECC
// line start: 284
// line end:   285
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80062EF4
// line start: 294
// line end:   303
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80062FA8
// line start: 308
// line end:   383
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800633EC
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


// address: 0x800639F0
// line start: 456
// line end:   470
void S_StartSmith__Fv() {
}


// address: 0x80063B78
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


// address: 0x80063D30
// line start: 509
// line end:   527
void S_StartSBuy__Fv() {
}


// address: 0x80063E58
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


// address: 0x8006402C
// line start: 598
// line end:   628
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064174
// line start: 634
// line end:   645
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064254
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


// address: 0x80064454
// line start: 693
// line end:   739
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006484C
// line start: 747
// line end:   755
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800648EC
// line start: 760
// line end:   781
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064AC8
// line start: 786
// line end:   844
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80064F44
// line start: 853
// line end:   865
void S_StartWitch__Fv() {
}


// address: 0x80065084
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


// address: 0x8006523C
// line start: 906
// line end:   926
void S_StartWBuy__Fv() {
}


// address: 0x8006535C
// line start: 932
// line end:   952
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80065470
// line start: 958
// line end:   1018
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80065A7C
// line start: 1027
// line end:   1033
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80065B00
// line start: 1039
// line end:   1048
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065C7C
// line start: 1054
// line end:   1095
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066058
// line start: 1104
// line end:   1110
void S_StartNoMoney__Fv() {
}


// address: 0x800660C0
// line start: 1116
// line end:   1121
void S_StartNoRoom__Fv() {
}


// address: 0x80066120
// line start: 1127
// line end:   1184
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 4
	register unsigned char idprint;
}


// address: 0x80066438
// line start: 1190
// line end:   1208
void S_StartBoy__Fv() {
}


// address: 0x800665C8
// line start: 1215
// line end:   1239
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006671C
// line start: 1247
// line end:   1267
void S_StartHealer__Fv() {
}


// address: 0x800668E0
// line start: 1273
// line end:   1295
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80066A4C
// line start: 1301
// line end:   1318
void S_StartHBuy__Fv() {
}


// address: 0x80066B64
// line start: 1324
// line end:   1333
void S_StartStory__Fv() {
}


// address: 0x80066C54
// line start: 1339
// line end:   1343
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80066C88
// line start: 1351
// line end:   1356
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066D58
// line start: 1362
// line end:   1433
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800676EC
// line start: 1442
// line end:   1459
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80067870
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


// address: 0x80067AA0
// line start: 1506
// line end:   1516
void S_StartTavern__Fv() {
}


// address: 0x80067B98
// line start: 1522
// line end:   1531
void S_StartBarMaid__Fv() {
}


// address: 0x80067C6C
// line start: 1537
// line end:   1546
void S_StartDrunk__Fv() {
}


// address: 0x80067D40
// line start: 1552
// line end:   1624
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068028
// line start: 1631
// line end:   1635
void DrawSText__Fv() {
}


// address: 0x80068068
// line start: 1640
// line end:   1654
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068130
// line start: 1658
// line end:   1711
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800682DC
// line start: 1719
// line end:   1783
void STextESC__Fv() {
}


// address: 0x80068468
// line start: 1788
// line end:   1822
void STextUp__Fv() {
}


// address: 0x800685F0
// line start: 1832
// line end:   1864
void STextDown__Fv() {
}


// address: 0x80068788
// line start: 1876
// line end:   1898
void S_SmithEnter__Fv() {
}


// address: 0x8006885C
// line start: 1905
// line end:   1916
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800688D4
// line start: 1924
// line end:   1934
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006894C
// line start: 1942
// line end:   2033
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80068D50
// line start: 2042
// line end:   2065
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80068F24
// line start: 2071
// line end:   2101
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800690EC
// line start: 2109
// line end:   2134
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069254
// line start: 2141
// line end:   2179
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


// address: 0x80069464
// line start: 2186
// line end:   2216
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 5
	register int i;
	// register: 17
	register long cost;
}


// address: 0x800696FC
// line start: 2225
// line end:   2249
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


// address: 0x80069944
// line start: 2255
// line end:   2310
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80069C14
// line start: 2317
// line end:   2333
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x80069D00
// line start: 2340
// line end:   2357
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x80069F38
// line start: 2363
// line end:   2381
void S_SRepairEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A074
// line start: 2388
// line end:   2405
void S_WitchEnter__Fv() {
}


// address: 0x8006A124
// line start: 2412
// line end:   2444
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A308
// line start: 2449
// line end:   2479
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A4D0
// line start: 2487
// line end:   2503
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A5BC
// line start: 2510
// line end:   2524
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A714
// line start: 2530
// line end:   2548
void S_WRechargeEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A850
// line start: 2555
// line end:   2583
void S_BoyEnter__Fv() {
}


// address: 0x8006A980
// line start: 2590
// line end:   2601
void BoyBuyItem__Fv() {
}


// address: 0x8006A9FC
// line start: 2607
// line end:   2652
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AC70
// line start: 2657
// line end:   2692
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AE34
// line start: 2698
// line end:   2720
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006B12C
// line start: 2727
// line end:   2762
void S_ConfirmEnter__Fv() {
}


// address: 0x8006B248
// line start: 2767
// line end:   2785
void S_HealerEnter__Fv() {
}


// address: 0x8006B2E0
// line start: 2792
// line end:   2822
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B4C8
// line start: 2830
// line end:   2843
void S_StoryEnter__Fv() {
}


// address: 0x8006B560
// line start: 2850
// line end:   2868
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B6BC
// line start: 2875
// line end:   2917
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


// address: 0x8006B8B4
// line start: 2926
// line end:   2937
void S_TavernEnter__Fv() {
}


// address: 0x8006B924
// line start: 2944
// line end:   2956
void S_BarmaidEnter__Fv() {
}


// address: 0x8006B994
// line start: 2963
// line end:   2974
void S_DrunkEnter__Fv() {
}


// address: 0x8006BA04
// line start: 2981
// line end:   3043
void STextEnter__Fv() {
}


// address: 0x8006BC04
// line start: 3048
// line end:   3130
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006BD08
// line start: 3135
// line end:   3137
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006BD1C
// line start: 3216
// line end:   3216
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006BD44
// line start: 3216
// line end:   3216
void _GLOBAL__I_pSTextBoxCels() {
}


