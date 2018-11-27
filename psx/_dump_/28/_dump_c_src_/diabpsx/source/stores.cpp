// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063548
// line start: 158
// line end:   159
void FreeStoreMem__Fv() {
}


// address: 0x80063550
// line start: 167
// line end:   170
void DrawSTextBack__Fv() {
}


// address: 0x800635C0
// line start: 175
// line end:   250
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
	// address: 0x8012BA38
	static unsigned char DaveFix;
}


// address: 0x80063998
// line start: 257
// line end:   264
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063A2C
// line start: 271
// line end:   284
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063AC4
// line start: 290
// line end:   294
void AddSLine__Fi(int y) {
}


// address: 0x80063B14
// line start: 300
// line end:   301
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063B3C
// line start: 310
// line end:   319
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063BF0
// line start: 324
// line end:   416
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80064078
// line start: 424
// line end:   482
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


// address: 0x80064698
// line start: 489
// line end:   503
void S_StartSmith__Fv() {
}


// address: 0x80064820
// line start: 509
// line end:   536
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800649D8
// line start: 542
// line end:   560
void S_StartSBuy__Fv() {
}


// address: 0x80064B08
// line start: 566
// line end:   607
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


// address: 0x80064D28
// line start: 613
// line end:   643
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064E78
// line start: 649
// line end:   660
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064F5C
// line start: 666
// line end:   718
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


// address: 0x80065184
// line start: 724
// line end:   770
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655B4
// line start: 778
// line end:   786
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065658
// line start: 791
// line end:   812
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065838
// line start: 817
// line end:   875
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D08
// line start: 884
// line end:   896
void S_StartWitch__Fv() {
}


// address: 0x80065E48
// line start: 902
// line end:   939
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


// address: 0x80066020
// line start: 945
// line end:   965
void S_StartWBuy__Fv() {
}


// address: 0x8006614C
// line start: 971
// line end:   991
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80066270
// line start: 997
// line end:   1057
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668C8
// line start: 1066
// line end:   1072
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066950
// line start: 1078
// line end:   1087
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066AD0
// line start: 1093
// line end:   1134
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066EF0
// line start: 1143
// line end:   1149
void S_StartNoMoney__Fv() {
}


// address: 0x80066F58
// line start: 1155
// line end:   1160
void S_StartNoRoom__Fv() {
}


// address: 0x80066FB8
// line start: 1166
// line end:   1226
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067308
// line start: 1232
// line end:   1250
void S_StartBoy__Fv() {
}


// address: 0x80067498
// line start: 1257
// line end:   1281
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x800675F4
// line start: 1289
// line end:   1309
void S_StartHealer__Fv() {
}


// address: 0x800677C8
// line start: 1315
// line end:   1337
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067934
// line start: 1343
// line end:   1360
void S_StartHBuy__Fv() {
}


// address: 0x80067A54
// line start: 1366
// line end:   1375
void S_StartStory__Fv() {
}


// address: 0x80067B44
// line start: 1381
// line end:   1385
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B78
// line start: 1393
// line end:   1398
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067C4C
// line start: 1404
// line end:   1475
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800686AC
// line start: 1484
// line end:   1508
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068880
// line start: 1514
// line end:   1548
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


// address: 0x80068AB0
// line start: 1555
// line end:   1565
void S_StartTavern__Fv() {
}


// address: 0x80068BA8
// line start: 1571
// line end:   1580
void S_StartBarMaid__Fv() {
}


// address: 0x80068C7C
// line start: 1586
// line end:   1595
void S_StartDrunk__Fv() {
}


// address: 0x80068D50
// line start: 1601
// line end:   1675
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80069040
// line start: 1682
// line end:   1686
void DrawSText__Fv() {
}


// address: 0x80069080
// line start: 1691
// line end:   1705
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069148
// line start: 1709
// line end:   1762
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800692F4
// line start: 1770
// line end:   1834
void STextESC__Fv() {
}


// address: 0x80069470
// line start: 1839
// line end:   1873
void STextUp__Fv() {
}


// address: 0x800695F8
// line start: 1883
// line end:   1915
void STextDown__Fv() {
}


// address: 0x80069790
// line start: 1927
// line end:   1949
void S_SmithEnter__Fv() {
}


// address: 0x80069864
// line start: 1956
// line end:   1967
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698E0
// line start: 1975
// line end:   1985
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006995C
// line start: 1993
// line end:   2084
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069DA8
// line start: 2093
// line end:   2117
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069F9C
// line start: 2123
// line end:   2157
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A1C0
// line start: 2165
// line end:   2191
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A348
// line start: 2198
// line end:   2237
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


// address: 0x8006A578
// line start: 2244
// line end:   2274
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


// address: 0x8006A830
// line start: 2283
// line end:   2307
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


// address: 0x8006AA94
// line start: 2313
// line end:   2369
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AD88
// line start: 2376
// line end:   2393
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AE8C
// line start: 2400
// line end:   2418
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B0FC
// line start: 2424
// line end:   2443
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B258
// line start: 2450
// line end:   2467
void S_WitchEnter__Fv() {
}


// address: 0x8006B308
// line start: 2474
// line end:   2507
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B508
// line start: 2512
// line end:   2543
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B6F4
// line start: 2551
// line end:   2568
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B7F8
// line start: 2575
// line end:   2590
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B970
// line start: 2596
// line end:   2615
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BACC
// line start: 2622
// line end:   2650
void S_BoyEnter__Fv() {
}


// address: 0x8006BC04
// line start: 2657
// line end:   2668
void BoyBuyItem__Fv() {
}


// address: 0x8006BC88
// line start: 2674
// line end:   2721
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BF2C
// line start: 2726
// line end:   2760
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C104
// line start: 2766
// line end:   2788
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C450
// line start: 2795
// line end:   2830
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C56C
// line start: 2835
// line end:   2853
void S_HealerEnter__Fv() {
}


// address: 0x8006C604
// line start: 2860
// line end:   2891
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C810
// line start: 2899
// line end:   2912
void S_StoryEnter__Fv() {
}


// address: 0x8006C8A8
// line start: 2919
// line end:   2938
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CA24
// line start: 2945
// line end:   2987
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


// address: 0x8006CC1C
// line start: 2996
// line end:   3007
void S_TavernEnter__Fv() {
}


// address: 0x8006CC8C
// line start: 3014
// line end:   3026
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CCFC
// line start: 3033
// line end:   3044
void S_DrunkEnter__Fv() {
}


// address: 0x8006CD6C
// line start: 3051
// line end:   3113
void STextEnter__Fv() {
}


// address: 0x8006CF6C
// line start: 3118
// line end:   3202
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D088
// line start: 3207
// line end:   3209
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D09C
// line start: 3288
// line end:   3288
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D0C4
// line start: 3288
// line end:   3288
void _GLOBAL__I_pSTextBoxCels() {
}


