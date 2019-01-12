// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800691F4
// line start: 170
// line end:   171
void FreeStoreMem__Fv() {
}


// address: 0x800691FC
// line start: 176
// line end:   180
void DrawSTextBack__Fv() {
}


// address: 0x8006926C
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


// address: 0x800693EC
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
	// address: 0x8011BBF4
	static unsigned char DaveFix;
}


// address: 0x80069894
// line start: 384
// line end:   391
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80069928
// line start: 398
// line end:   411
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x800699C0
// line start: 417
// line end:   421
void AddSLine__Fi(int y) {
}


// address: 0x80069A10
// line start: 427
// line end:   428
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80069A38
// line start: 433
// line end:   434
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x80069A60
// line start: 441
// line end:   452
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80069B1C
// line start: 456
// line end:   592
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x8006A020
// line start: 602
// line end:   660
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


// address: 0x8006A660
// line start: 667
// line end:   681
void S_StartSmith__Fv() {
}


// address: 0x8006A7E8
// line start: 687
// line end:   713
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 16
	register char iclr;
}


// address: 0x8006A9F0
// line start: 720
// line end:   755
void S_StartSBuy__Fv() {
}


// address: 0x8006ABC0
// line start: 760
// line end:   809
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


// address: 0x8006AE20
// line start: 815
// line end:   851
unsigned char S_StartSPBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006AFE0
// line start: 857
// line end:   868
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006B0C8
// line start: 874
// line end:   945
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


// address: 0x8006B31C
// line start: 951
// line end:   997
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006B754
// line start: 1005
// line end:   1013
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006B7FC
// line start: 1018
// line end:   1039
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006B9E4
// line start: 1044
// line end:   1102
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006BEB4
// line start: 1110
// line end:   1124
void S_StartWitch__Fv() {
}


// address: 0x8006C03C
// line start: 1129
// line end:   1142
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006C0E0
// line start: 1167
// line end:   1217
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


// address: 0x8006C324
// line start: 1223
// line end:   1274
void S_StartWBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C678
// line start: 1279
// line end:   1301
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pI;
}


// address: 0x8006C7C4
// line start: 1307
// line end:   1370
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006CE3C
// line start: 1380
// line end:   1386
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8006CEC8
// line start: 1392
// line end:   1401
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006D050
// line start: 1407
// line end:   1448
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006D480
// line start: 1457
// line end:   1463
void S_StartNoMoney__Fv() {
}


// address: 0x8006D4E8
// line start: 1469
// line end:   1474
void S_StartNoRoom__Fv() {
}


// address: 0x8006D548
// line start: 1479
// line end:   1494
void S_StartNoItems__Fv() {
}


// address: 0x8006D5FC
// line start: 1501
// line end:   1578
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006D964
// line start: 1584
// line end:   1602
void S_StartBoy__Fv() {
}


// address: 0x8006DB0C
// line start: 1609
// line end:   1643
void S_StartBBoy__Fv() {
	// register: 16
	register int iclr;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DD40
// line start: 1652
// line end:   1672
void S_StartHealer__Fv() {
}


// address: 0x8006DF14
// line start: 1678
// line end:   1705
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


// address: 0x8006E0FC
// line start: 1711
// line end:   1728
void S_StartHBuy__Fv() {
}


// address: 0x8006E234
// line start: 1734
// line end:   1743
void S_StartStory__Fv() {
}


// address: 0x8006E324
// line start: 1749
// line end:   1753
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E358
// line start: 1761
// line end:   1766
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E434
// line start: 1772
// line end:   1843
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006EED4
// line start: 1856
// line end:   1885
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006F0AC
// line start: 1891
// line end:   1925
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


// address: 0x8006F2DC
// line start: 1932
// line end:   1942
void S_StartTavern__Fv() {
}


// address: 0x8006F3D4
// line start: 1948
// line end:   1957
void S_StartBarMaid__Fv() {
}


// address: 0x8006F4A8
// line start: 1963
// line end:   1972
void S_StartDrunk__Fv() {
}


// address: 0x8006F57C
// line start: 1978
// line end:   2066
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006F8D8
// line start: 2070
// line end:   2101
void DrawStoreHelpText__Fv() {
}


// address: 0x8006F974
// line start: 2111
// line end:   2115
void DrawSText__Fv() {
}


// address: 0x8006F9B4
// line start: 2122
// line end:   2140
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006FABC
// line start: 2146
// line end:   2219
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
	// register: 18
	register int YOfs;
}


// address: 0x8006FCC4
// line start: 2225
// line end:   2299
void STextESC__Fv() {
}


// address: 0x8006FE68
// line start: 2306
// line end:   2347
void STextUp__Fv() {
}


// address: 0x8006FFEC
// line start: 2354
// line end:   2393
void STextDown__Fv() {
}


// address: 0x80070180
// line start: 2399
// line end:   2422
void S_SmithEnter__Fv() {
}


// address: 0x80070258
// line start: 2429
// line end:   2440
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800702D8
// line start: 2448
// line end:   2458
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070358
// line start: 2466
// line end:   2557
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x800707A4
// line start: 2566
// line end:   2590
void SmithBuyItem__Fv() {
	// register: 9
	register int idx;
}


// address: 0x80070A24
// line start: 2596
// line end:   2639
void S_SBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80070C88
// line start: 2644
// line end:   2670
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 4
	register int xx;
}


// address: 0x80070E4C
// line start: 2677
// line end:   2717
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


// address: 0x800710B8
// line start: 2724
// line end:   2754
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


// address: 0x80071370
// line start: 2762
// line end:   2786
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


// address: 0x80071610
// line start: 2791
// line end:   2852
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80071954
// line start: 2859
// line end:   2877
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071A64
// line start: 2884
// line end:   2902
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80071CD8
// line start: 2908
// line end:   2928
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071E3C
// line start: 2935
// line end:   2961
void S_WitchEnter__Fv() {
}


// address: 0x80071F1C
// line start: 2968
// line end:   3031
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x800721A0
// line start: 3036
// line end:   3082
void S_WBuyEnter__Fv() {
	// register: 8
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80072428
// line start: 3090
// line end:   3114
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072568
// line start: 3121
// line end:   3136
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800726E4
// line start: 3142
// line end:   3162
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80072848
// line start: 3169
// line end:   3197
void S_BoyEnter__Fv() {
}


// address: 0x800729E0
// line start: 3204
// line end:   3215
void BoyBuyItem__Fv() {
}


// address: 0x80072A80
// line start: 3221
// line end:   3271
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072DAC
// line start: 3276
// line end:   3308
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80072FC0
// line start: 3314
// line end:   3336
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x80073310
// line start: 3343
// line end:   3378
void S_ConfirmEnter__Fv() {
}


// address: 0x8007342C
// line start: 3383
// line end:   3401
void S_HealerEnter__Fv() {
}


// address: 0x800734C4
// line start: 3408
// line end:   3440
void S_HBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800736F8
// line start: 3448
// line end:   3462
void S_StoryEnter__Fv() {
}


// address: 0x80073794
// line start: 3469
// line end:   3489
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80073918
// line start: 3496
// line end:   3538
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


// address: 0x80073B18
// line start: 3547
// line end:   3559
void S_TavernEnter__Fv() {
}


// address: 0x80073B8C
// line start: 3566
// line end:   3579
void S_BarmaidEnter__Fv() {
}


// address: 0x80073C00
// line start: 3586
// line end:   3598
void S_DrunkEnter__Fv() {
}


// address: 0x80073C74
// line start: 3605
// line end:   3669
void STextEnter__Fv() {
}


// address: 0x80073E38
// line start: 3677
// line end:   3770
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x80073F24
// line start: 3775
// line end:   3777
void ReleaseStoreBtn__Fv() {
}


// address: 0x80073F38
// line start: 3852
// line end:   3852
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80073F60
// line start: 3852
// line end:   3852
void _GLOBAL__I_pSTextBoxCels() {
}


