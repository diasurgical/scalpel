// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063064
// line start: 160
// line end:   161
void FreeStoreMem__Fv() {
}


// address: 0x8006306C
// line start: 169
// line end:   172
void DrawSTextBack__Fv() {
}


// address: 0x800630DC
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
	// address: 0x8012C92C
	static unsigned char DaveFix;
}


// address: 0x800634B4
// line start: 259
// line end:   266
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063548
// line start: 273
// line end:   286
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x800635E0
// line start: 292
// line end:   296
void AddSLine__Fi(int y) {
}


// address: 0x80063630
// line start: 302
// line end:   303
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063658
// line start: 312
// line end:   321
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006370C
// line start: 326
// line end:   418
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063B94
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


// address: 0x800641B4
// line start: 491
// line end:   505
void S_StartSmith__Fv() {
}


// address: 0x8006433C
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


// address: 0x800644F4
// line start: 544
// line end:   562
void S_StartSBuy__Fv() {
}


// address: 0x80064624
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


// address: 0x80064844
// line start: 615
// line end:   645
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064994
// line start: 651
// line end:   662
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064A78
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


// address: 0x80064CA0
// line start: 726
// line end:   772
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800650D0
// line start: 780
// line end:   788
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065174
// line start: 793
// line end:   814
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065354
// line start: 819
// line end:   877
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065824
// line start: 886
// line end:   898
void S_StartWitch__Fv() {
}


// address: 0x80065964
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


// address: 0x80065B3C
// line start: 947
// line end:   967
void S_StartWBuy__Fv() {
}


// address: 0x80065C68
// line start: 973
// line end:   993
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065D8C
// line start: 999
// line end:   1059
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800663E4
// line start: 1068
// line end:   1074
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x8006646C
// line start: 1080
// line end:   1089
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800665EC
// line start: 1095
// line end:   1136
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066A0C
// line start: 1145
// line end:   1151
void S_StartNoMoney__Fv() {
}


// address: 0x80066A74
// line start: 1157
// line end:   1162
void S_StartNoRoom__Fv() {
}


// address: 0x80066AD4
// line start: 1168
// line end:   1240
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066E4C
// line start: 1246
// line end:   1264
void S_StartBoy__Fv() {
}


// address: 0x80066FDC
// line start: 1271
// line end:   1300
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067164
// line start: 1308
// line end:   1328
void S_StartHealer__Fv() {
}


// address: 0x80067338
// line start: 1334
// line end:   1356
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800674A4
// line start: 1362
// line end:   1379
void S_StartHBuy__Fv() {
}


// address: 0x800675C4
// line start: 1385
// line end:   1394
void S_StartStory__Fv() {
}


// address: 0x800676B4
// line start: 1400
// line end:   1404
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800676E8
// line start: 1412
// line end:   1417
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800677BC
// line start: 1423
// line end:   1494
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006821C
// line start: 1503
// line end:   1527
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800683F0
// line start: 1533
// line end:   1567
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


// address: 0x80068620
// line start: 1574
// line end:   1584
void S_StartTavern__Fv() {
}


// address: 0x80068718
// line start: 1590
// line end:   1599
void S_StartBarMaid__Fv() {
}


// address: 0x800687EC
// line start: 1605
// line end:   1614
void S_StartDrunk__Fv() {
}


// address: 0x800688C0
// line start: 1620
// line end:   1694
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068BB0
// line start: 1701
// line end:   1705
void DrawSText__Fv() {
}


// address: 0x80068BF0
// line start: 1710
// line end:   1724
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068CB8
// line start: 1728
// line end:   1781
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068E64
// line start: 1789
// line end:   1854
void STextESC__Fv() {
}


// address: 0x80068FC0
// line start: 1861
// line end:   1896
void STextUp__Fv() {
}


// address: 0x80069158
// line start: 1906
// line end:   1939
void STextDown__Fv() {
}


// address: 0x80069308
// line start: 1951
// line end:   1973
void S_SmithEnter__Fv() {
}


// address: 0x800693DC
// line start: 1980
// line end:   1991
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069458
// line start: 1999
// line end:   2009
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800694D4
// line start: 2017
// line end:   2108
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069920
// line start: 2117
// line end:   2141
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069B14
// line start: 2147
// line end:   2181
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069D38
// line start: 2189
// line end:   2215
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069EC0
// line start: 2222
// line end:   2261
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


// address: 0x8006A0F0
// line start: 2268
// line end:   2298
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


// address: 0x8006A3A8
// line start: 2307
// line end:   2331
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


// address: 0x8006A60C
// line start: 2337
// line end:   2393
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A900
// line start: 2400
// line end:   2417
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AA04
// line start: 2424
// line end:   2442
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AC74
// line start: 2448
// line end:   2467
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ADD0
// line start: 2474
// line end:   2491
void S_WitchEnter__Fv() {
}


// address: 0x8006AE80
// line start: 2498
// line end:   2531
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B080
// line start: 2536
// line end:   2567
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B26C
// line start: 2575
// line end:   2592
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B370
// line start: 2599
// line end:   2614
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B4E8
// line start: 2620
// line end:   2639
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B644
// line start: 2646
// line end:   2674
void S_BoyEnter__Fv() {
}


// address: 0x8006B77C
// line start: 2681
// line end:   2692
void BoyBuyItem__Fv() {
}


// address: 0x8006B800
// line start: 2698
// line end:   2745
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BAA4
// line start: 2750
// line end:   2784
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BC7C
// line start: 2790
// line end:   2812
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BFC8
// line start: 2819
// line end:   2854
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C0E4
// line start: 2859
// line end:   2877
void S_HealerEnter__Fv() {
}


// address: 0x8006C17C
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


// address: 0x8006C388
// line start: 2923
// line end:   2936
void S_StoryEnter__Fv() {
}


// address: 0x8006C420
// line start: 2943
// line end:   2962
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C59C
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


// address: 0x8006C794
// line start: 3020
// line end:   3031
void S_TavernEnter__Fv() {
}


// address: 0x8006C804
// line start: 3038
// line end:   3050
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C874
// line start: 3057
// line end:   3068
void S_DrunkEnter__Fv() {
}


// address: 0x8006C8E4
// line start: 3075
// line end:   3140
void STextEnter__Fv() {
}


// address: 0x8006CAF0
// line start: 3145
// line end:   3238
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CC20
// line start: 3243
// line end:   3245
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CC34
// line start: 3324
// line end:   3324
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CC5C
// line start: 3324
// line end:   3324
void _GLOBAL__I_pSTextBoxCels() {
}


