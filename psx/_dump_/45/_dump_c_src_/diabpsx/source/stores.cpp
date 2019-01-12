// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062EAC
// line start: 158
// line end:   159
void FreeStoreMem__Fv() {
}


// address: 0x80062EB4
// line start: 167
// line end:   170
void DrawSTextBack__Fv() {
}


// address: 0x80062F24
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
	// address: 0x8012C314
	static unsigned char DaveFix;
}


// address: 0x800632FC
// line start: 257
// line end:   264
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063390
// line start: 271
// line end:   284
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063428
// line start: 290
// line end:   294
void AddSLine__Fi(int y) {
}


// address: 0x80063478
// line start: 300
// line end:   301
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800634A0
// line start: 310
// line end:   319
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063554
// line start: 324
// line end:   416
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800639DC
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


// address: 0x80063FFC
// line start: 489
// line end:   503
void S_StartSmith__Fv() {
}


// address: 0x80064184
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


// address: 0x8006433C
// line start: 542
// line end:   560
void S_StartSBuy__Fv() {
}


// address: 0x8006446C
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


// address: 0x8006468C
// line start: 613
// line end:   643
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800647DC
// line start: 649
// line end:   660
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800648C0
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


// address: 0x80064AE8
// line start: 724
// line end:   770
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064F18
// line start: 778
// line end:   786
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80064FBC
// line start: 791
// line end:   812
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006519C
// line start: 817
// line end:   875
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006566C
// line start: 884
// line end:   896
void S_StartWitch__Fv() {
}


// address: 0x800657AC
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


// address: 0x80065984
// line start: 945
// line end:   965
void S_StartWBuy__Fv() {
}


// address: 0x80065AB0
// line start: 971
// line end:   991
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065BD4
// line start: 997
// line end:   1057
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006622C
// line start: 1066
// line end:   1072
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800662B4
// line start: 1078
// line end:   1087
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066434
// line start: 1093
// line end:   1134
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066854
// line start: 1143
// line end:   1149
void S_StartNoMoney__Fv() {
}


// address: 0x800668BC
// line start: 1155
// line end:   1160
void S_StartNoRoom__Fv() {
}


// address: 0x8006691C
// line start: 1166
// line end:   1226
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80066C6C
// line start: 1232
// line end:   1250
void S_StartBoy__Fv() {
}


// address: 0x80066DFC
// line start: 1257
// line end:   1286
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066F84
// line start: 1294
// line end:   1314
void S_StartHealer__Fv() {
}


// address: 0x80067158
// line start: 1320
// line end:   1342
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800672C4
// line start: 1348
// line end:   1365
void S_StartHBuy__Fv() {
}


// address: 0x800673E4
// line start: 1371
// line end:   1380
void S_StartStory__Fv() {
}


// address: 0x800674D4
// line start: 1386
// line end:   1390
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067508
// line start: 1398
// line end:   1403
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800675DC
// line start: 1409
// line end:   1480
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006803C
// line start: 1489
// line end:   1513
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068210
// line start: 1519
// line end:   1553
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


// address: 0x80068440
// line start: 1560
// line end:   1570
void S_StartTavern__Fv() {
}


// address: 0x80068538
// line start: 1576
// line end:   1585
void S_StartBarMaid__Fv() {
}


// address: 0x8006860C
// line start: 1591
// line end:   1600
void S_StartDrunk__Fv() {
}


// address: 0x800686E0
// line start: 1606
// line end:   1680
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800689D0
// line start: 1687
// line end:   1691
void DrawSText__Fv() {
}


// address: 0x80068A10
// line start: 1696
// line end:   1710
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068AD8
// line start: 1714
// line end:   1767
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068C84
// line start: 1775
// line end:   1840
void STextESC__Fv() {
}


// address: 0x80068DE0
// line start: 1847
// line end:   1882
void STextUp__Fv() {
}


// address: 0x80068F78
// line start: 1892
// line end:   1925
void STextDown__Fv() {
}


// address: 0x80069128
// line start: 1937
// line end:   1959
void S_SmithEnter__Fv() {
}


// address: 0x800691FC
// line start: 1966
// line end:   1977
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069278
// line start: 1985
// line end:   1995
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800692F4
// line start: 2003
// line end:   2094
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069740
// line start: 2103
// line end:   2127
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069934
// line start: 2133
// line end:   2167
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069B58
// line start: 2175
// line end:   2201
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069CE0
// line start: 2208
// line end:   2247
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


// address: 0x80069F10
// line start: 2254
// line end:   2284
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


// address: 0x8006A1C8
// line start: 2293
// line end:   2317
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


// address: 0x8006A42C
// line start: 2323
// line end:   2379
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A720
// line start: 2386
// line end:   2403
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006A824
// line start: 2410
// line end:   2428
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AA94
// line start: 2434
// line end:   2453
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ABF0
// line start: 2460
// line end:   2477
void S_WitchEnter__Fv() {
}


// address: 0x8006ACA0
// line start: 2484
// line end:   2517
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AEA0
// line start: 2522
// line end:   2553
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B08C
// line start: 2561
// line end:   2578
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B190
// line start: 2585
// line end:   2600
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B308
// line start: 2606
// line end:   2625
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B464
// line start: 2632
// line end:   2660
void S_BoyEnter__Fv() {
}


// address: 0x8006B59C
// line start: 2667
// line end:   2678
void BoyBuyItem__Fv() {
}


// address: 0x8006B620
// line start: 2684
// line end:   2731
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B8C4
// line start: 2736
// line end:   2770
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BA9C
// line start: 2776
// line end:   2798
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BDE8
// line start: 2805
// line end:   2840
void S_ConfirmEnter__Fv() {
}


// address: 0x8006BF04
// line start: 2845
// line end:   2863
void S_HealerEnter__Fv() {
}


// address: 0x8006BF9C
// line start: 2870
// line end:   2901
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C1A8
// line start: 2909
// line end:   2922
void S_StoryEnter__Fv() {
}


// address: 0x8006C240
// line start: 2929
// line end:   2948
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C3BC
// line start: 2955
// line end:   2997
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


// address: 0x8006C5B4
// line start: 3006
// line end:   3017
void S_TavernEnter__Fv() {
}


// address: 0x8006C624
// line start: 3024
// line end:   3036
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C694
// line start: 3043
// line end:   3054
void S_DrunkEnter__Fv() {
}


// address: 0x8006C704
// line start: 3061
// line end:   3126
void STextEnter__Fv() {
}


// address: 0x8006C910
// line start: 3131
// line end:   3222
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CA44
// line start: 3227
// line end:   3229
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CA58
// line start: 3308
// line end:   3308
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CA80
// line start: 3308
// line end:   3308
void _GLOBAL__I_pSTextBoxCels() {
}


