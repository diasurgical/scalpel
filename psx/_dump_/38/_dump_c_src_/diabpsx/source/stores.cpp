// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800692B8
// line start: 170
// line end:   171
void FreeStoreMem__Fv() {
}


// address: 0x800692C0
// line start: 176
// line end:   180
void DrawSTextBack__Fv() {
}


// address: 0x80069330
// line start: 194
// line end:   242
void DrawStoreArrows__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *PanelGfx;
	// register: 6
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int OtPos;
	// register: 5
	register int Flagy;
}


// address: 0x800694B0
// line start: 247
// line end:   376
void PrintSString__FiiUcPcci(int x, int y, unsigned char cjustflag, char *str, int col, int val) {
	// register: 16
	register int yy;
	// address: 0xFFFFFFA8
	// size: 0x20
	auto char valstr[32];
	// register: 30
	register int SpinnerY;
	// register: 19
	register unsigned char R;
	// register: 18
	register unsigned char G;
	// register: 17
	register unsigned char B;
	// address: 0x8011BCFC
	static unsigned char DaveFix;
}


// address: 0x80069958
// line start: 384
// line end:   391
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800699EC
// line start: 398
// line end:   411
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80069A84
// line start: 417
// line end:   421
void AddSLine__Fi(int y) {
}


// address: 0x80069AD4
// line start: 427
// line end:   428
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80069AFC
// line start: 433
// line end:   434
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x80069B24
// line start: 441
// line end:   452
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80069BE0
// line start: 456
// line end:   597
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006A0F0
// line start: 607
// line end:   665
void StoreAutoPlace__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int w;
	// register: 19
	register int h;
	// register: 5
	register int idx;
	// register: 4
	register unsigned char done;
}


// address: 0x8006A730
// line start: 672
// line end:   686
void S_StartSmith__Fv() {
}


// address: 0x8006A8B8
// line start: 692
// line end:   718
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 16
	register char iclr;
}


// address: 0x8006AAC0
// line start: 725
// line end:   760
void S_StartSBuy__Fv() {
}


// address: 0x8006AC90
// line start: 765
// line end:   814
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 18
	register char iclr;
	// register: 4
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


// address: 0x8006AEF0
// line start: 820
// line end:   856
unsigned char S_StartSPBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006B0B0
// line start: 862
// line end:   873
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006B198
// line start: 879
// line end:   950
void S_ScrollSSell__Fi(int idx) {
	// register: 20
	register int l;
	// register: 23
	register int ls;
	// register: 19
	register int v;
	// register: 16
	register char iclr;
	// register: 30
	register int Jumpy;
	{
		{
			{
				{
					// register: 18
					register char *StrPtr;
				}
			}
		}
	}
}


// address: 0x8006B3EC
// line start: 956
// line end:   1002
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006B824
// line start: 1010
// line end:   1018
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006B8CC
// line start: 1023
// line end:   1044
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006BAB4
// line start: 1049
// line end:   1107
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006BF84
// line start: 1115
// line end:   1129
void S_StartWitch__Fv() {
}


// address: 0x8006C10C
// line start: 1134
// line end:   1147
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006C1B0
// line start: 1172
// line end:   1222
void S_ScrollWBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 21
	register int ls;
	// register: 16
	register char iclr;
	// register: 22
	register int Jumpy;
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


// address: 0x8006C3F4
// line start: 1228
// line end:   1279
void S_StartWBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C748
// line start: 1284
// line end:   1306
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pI;
}


// address: 0x8006C894
// line start: 1312
// line end:   1375
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006CF0C
// line start: 1385
// line end:   1391
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8006CF98
// line start: 1397
// line end:   1406
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006D120
// line start: 1412
// line end:   1453
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006D550
// line start: 1462
// line end:   1468
void S_StartNoMoney__Fv() {
}


// address: 0x8006D5B8
// line start: 1474
// line end:   1479
void S_StartNoRoom__Fv() {
}


// address: 0x8006D618
// line start: 1484
// line end:   1499
void S_StartNoItems__Fv() {
}


// address: 0x8006D6CC
// line start: 1506
// line end:   1583
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DA34
// line start: 1589
// line end:   1607
void S_StartBoy__Fv() {
}


// address: 0x8006DBDC
// line start: 1614
// line end:   1648
void S_StartBBoy__Fv() {
	// register: 16
	register int iclr;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DE10
// line start: 1657
// line end:   1677
void S_StartHealer__Fv() {
}


// address: 0x8006DFE4
// line start: 1683
// line end:   1710
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
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


// address: 0x8006E1CC
// line start: 1716
// line end:   1733
void S_StartHBuy__Fv() {
}


// address: 0x8006E304
// line start: 1739
// line end:   1748
void S_StartStory__Fv() {
}


// address: 0x8006E3F4
// line start: 1754
// line end:   1758
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E428
// line start: 1766
// line end:   1771
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E504
// line start: 1777
// line end:   1848
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006EFA4
// line start: 1861
// line end:   1890
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006F17C
// line start: 1896
// line end:   1930
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


// address: 0x8006F3AC
// line start: 1937
// line end:   1947
void S_StartTavern__Fv() {
}


// address: 0x8006F4A4
// line start: 1953
// line end:   1962
void S_StartBarMaid__Fv() {
}


// address: 0x8006F578
// line start: 1968
// line end:   1977
void S_StartDrunk__Fv() {
}


// address: 0x8006F64C
// line start: 1983
// line end:   2071
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006F9A8
// line start: 2075
// line end:   2106
void DrawStoreHelpText__Fv() {
}


// address: 0x8006FA44
// line start: 2116
// line end:   2120
void DrawSText__Fv() {
}


// address: 0x8006FA84
// line start: 2127
// line end:   2145
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006FB8C
// line start: 2151
// line end:   2224
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
	// register: 18
	register int YOfs;
}


// address: 0x8006FD94
// line start: 2230
// line end:   2304
void STextESC__Fv() {
}


// address: 0x8006FF38
// line start: 2311
// line end:   2352
void STextUp__Fv() {
}


// address: 0x800700BC
// line start: 2359
// line end:   2398
void STextDown__Fv() {
}


// address: 0x80070250
// line start: 2404
// line end:   2427
void S_SmithEnter__Fv() {
}


// address: 0x80070328
// line start: 2434
// line end:   2445
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800703A8
// line start: 2453
// line end:   2463
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070428
// line start: 2471
// line end:   2562
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80070874
// line start: 2571
// line end:   2595
void SmithBuyItem__Fv() {
	// register: 9
	register int idx;
}


// address: 0x80070AF4
// line start: 2601
// line end:   2644
void S_SBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80070D58
// line start: 2649
// line end:   2675
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 4
	register int xx;
}


// address: 0x80070F1C
// line start: 2682
// line end:   2722
void S_SPBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
	{
		// register: 4
		register int xx;
	}
}


// address: 0x80071188
// line start: 2729
// line end:   2759
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


// address: 0x80071440
// line start: 2767
// line end:   2791
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


// address: 0x800716E0
// line start: 2796
// line end:   2857
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80071A24
// line start: 2864
// line end:   2882
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071B34
// line start: 2889
// line end:   2907
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80071DA8
// line start: 2913
// line end:   2933
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071F0C
// line start: 2940
// line end:   2966
void S_WitchEnter__Fv() {
}


// address: 0x80071FEC
// line start: 2973
// line end:   3036
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072270
// line start: 3041
// line end:   3087
void S_WBuyEnter__Fv() {
	// register: 8
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800724F8
// line start: 3095
// line end:   3119
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072638
// line start: 3126
// line end:   3141
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800727B4
// line start: 3147
// line end:   3167
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072918
// line start: 3174
// line end:   3202
void S_BoyEnter__Fv() {
}


// address: 0x80072AB0
// line start: 3209
// line end:   3220
void BoyBuyItem__Fv() {
}


// address: 0x80072B50
// line start: 3226
// line end:   3276
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072E7C
// line start: 3281
// line end:   3313
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80073090
// line start: 3319
// line end:   3341
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x800733E0
// line start: 3348
// line end:   3383
void S_ConfirmEnter__Fv() {
}


// address: 0x800734FC
// line start: 3388
// line end:   3406
void S_HealerEnter__Fv() {
}


// address: 0x80073594
// line start: 3413
// line end:   3445
void S_HBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800737C8
// line start: 3453
// line end:   3467
void S_StoryEnter__Fv() {
}


// address: 0x80073864
// line start: 3474
// line end:   3494
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800739E8
// line start: 3501
// line end:   3543
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


// address: 0x80073BE8
// line start: 3552
// line end:   3564
void S_TavernEnter__Fv() {
}


// address: 0x80073C5C
// line start: 3571
// line end:   3584
void S_BarmaidEnter__Fv() {
}


// address: 0x80073CD0
// line start: 3591
// line end:   3603
void S_DrunkEnter__Fv() {
}


// address: 0x80073D44
// line start: 3610
// line end:   3674
void STextEnter__Fv() {
}


// address: 0x80073F08
// line start: 3682
// line end:   3775
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x80073FF4
// line start: 3780
// line end:   3782
void ReleaseStoreBtn__Fv() {
}


// address: 0x80074008
// line start: 3857
// line end:   3857
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80074030
// line start: 3857
// line end:   3857
void _GLOBAL__I_pSTextBoxCels() {
}


