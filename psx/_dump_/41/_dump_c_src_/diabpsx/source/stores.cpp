// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x8006907C
// line start: 170
// line end:   171
void FreeStoreMem__Fv() {
}


// address: 0x80069084
// line start: 176
// line end:   180
void DrawSTextBack__Fv() {
}


// address: 0x800690F4
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


// address: 0x80069274
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
	// address: 0x8011BD0C
	static unsigned char DaveFix;
}


// address: 0x8006971C
// line start: 384
// line end:   391
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800697B0
// line start: 398
// line end:   411
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80069848
// line start: 417
// line end:   421
void AddSLine__Fi(int y) {
}


// address: 0x80069898
// line start: 427
// line end:   428
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800698C0
// line start: 433
// line end:   434
void OffsetSTextY__Fii(int y, int yo) {
}


// address: 0x800698E8
// line start: 441
// line end:   452
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800699A4
// line start: 456
// line end:   592
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80069EA8
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


// address: 0x8006A4E8
// line start: 667
// line end:   681
void S_StartSmith__Fv() {
}


// address: 0x8006A670
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


// address: 0x8006A878
// line start: 720
// line end:   755
void S_StartSBuy__Fv() {
}


// address: 0x8006AA48
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


// address: 0x8006ACA8
// line start: 815
// line end:   851
unsigned char S_StartSPBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006AE68
// line start: 857
// line end:   868
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x8006AF50
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


// address: 0x8006B1A4
// line start: 951
// line end:   997
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006B5DC
// line start: 1005
// line end:   1013
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006B684
// line start: 1018
// line end:   1039
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006B86C
// line start: 1044
// line end:   1102
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x8006BD3C
// line start: 1110
// line end:   1124
void S_StartWitch__Fv() {
}


// address: 0x8006BEC4
// line start: 1129
// line end:   1142
int CheckWitchItem__Fi(int idx) {
}


// address: 0x8006BF68
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


// address: 0x8006C1AC
// line start: 1223
// line end:   1274
void S_StartWBuy__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C500
// line start: 1279
// line end:   1301
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 4
	// size: 0x6C
	register struct ItemStruct *pI;
}


// address: 0x8006C64C
// line start: 1307
// line end:   1370
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x8006CCC4
// line start: 1380
// line end:   1386
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x8006CD50
// line start: 1392
// line end:   1401
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006CED8
// line start: 1407
// line end:   1448
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006D308
// line start: 1457
// line end:   1463
void S_StartNoMoney__Fv() {
}


// address: 0x8006D370
// line start: 1469
// line end:   1474
void S_StartNoRoom__Fv() {
}


// address: 0x8006D3D0
// line start: 1479
// line end:   1494
void S_StartNoItems__Fv() {
}


// address: 0x8006D484
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


// address: 0x8006D7EC
// line start: 1584
// line end:   1602
void S_StartBoy__Fv() {
}


// address: 0x8006D994
// line start: 1609
// line end:   1643
void S_StartBBoy__Fv() {
	// register: 16
	register int iclr;
	// register: 17
	register char *StrPtr;
}


// address: 0x8006DBC8
// line start: 1652
// line end:   1672
void S_StartHealer__Fv() {
}


// address: 0x8006DD9C
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


// address: 0x8006DF84
// line start: 1711
// line end:   1728
void S_StartHBuy__Fv() {
}


// address: 0x8006E0BC
// line start: 1734
// line end:   1743
void S_StartStory__Fv() {
}


// address: 0x8006E1AC
// line start: 1749
// line end:   1753
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006E1E0
// line start: 1761
// line end:   1766
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006E2BC
// line start: 1772
// line end:   1843
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006ED5C
// line start: 1852
// line end:   1881
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006EF34
// line start: 1887
// line end:   1921
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


// address: 0x8006F164
// line start: 1928
// line end:   1938
void S_StartTavern__Fv() {
}


// address: 0x8006F25C
// line start: 1944
// line end:   1953
void S_StartBarMaid__Fv() {
}


// address: 0x8006F330
// line start: 1959
// line end:   1968
void S_StartDrunk__Fv() {
}


// address: 0x8006F404
// line start: 1974
// line end:   2062
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006F760
// line start: 2066
// line end:   2097
void DrawStoreHelpText__Fv() {
}


// address: 0x8006F7FC
// line start: 2107
// line end:   2111
void DrawSText__Fv() {
}


// address: 0x8006F83C
// line start: 2118
// line end:   2136
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006F944
// line start: 2142
// line end:   2215
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
	// register: 18
	register int YOfs;
}


// address: 0x8006FB4C
// line start: 2221
// line end:   2295
void STextESC__Fv() {
}


// address: 0x8006FCF0
// line start: 2302
// line end:   2343
void STextUp__Fv() {
}


// address: 0x8006FE74
// line start: 2350
// line end:   2389
void STextDown__Fv() {
}


// address: 0x80070008
// line start: 2395
// line end:   2418
void S_SmithEnter__Fv() {
}


// address: 0x800700E0
// line start: 2425
// line end:   2436
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80070160
// line start: 2444
// line end:   2454
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800701E0
// line start: 2462
// line end:   2553
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8007062C
// line start: 2562
// line end:   2586
void SmithBuyItem__Fv() {
	// register: 9
	register int idx;
}


// address: 0x800708AC
// line start: 2592
// line end:   2635
void S_SBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80070B10
// line start: 2640
// line end:   2666
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 4
	register int xx;
}


// address: 0x80070CD4
// line start: 2673
// line end:   2713
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


// address: 0x80070F40
// line start: 2720
// line end:   2750
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


// address: 0x800711F8
// line start: 2758
// line end:   2782
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


// address: 0x80071498
// line start: 2787
// line end:   2848
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x800717DC
// line start: 2855
// line end:   2873
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800718EC
// line start: 2880
// line end:   2898
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80071B60
// line start: 2904
// line end:   2924
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80071CC4
// line start: 2931
// line end:   2957
void S_WitchEnter__Fv() {
}


// address: 0x80071DA4
// line start: 2964
// line end:   3027
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072028
// line start: 3032
// line end:   3078
void S_WBuyEnter__Fv() {
	// register: 8
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800722B0
// line start: 3086
// line end:   3110
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800723F0
// line start: 3117
// line end:   3132
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8007256C
// line start: 3138
// line end:   3158
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800726D0
// line start: 3165
// line end:   3193
void S_BoyEnter__Fv() {
}


// address: 0x80072868
// line start: 3200
// line end:   3211
void BoyBuyItem__Fv() {
}


// address: 0x80072908
// line start: 3217
// line end:   3267
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x80072C34
// line start: 3272
// line end:   3304
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80072E48
// line start: 3310
// line end:   3332
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x80073198
// line start: 3339
// line end:   3374
void S_ConfirmEnter__Fv() {
}


// address: 0x800732B4
// line start: 3379
// line end:   3397
void S_HealerEnter__Fv() {
}


// address: 0x8007334C
// line start: 3404
// line end:   3436
void S_HBuyEnter__Fv() {
	// register: 9
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80073580
// line start: 3444
// line end:   3458
void S_StoryEnter__Fv() {
}


// address: 0x8007361C
// line start: 3465
// line end:   3485
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800737A0
// line start: 3492
// line end:   3534
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


// address: 0x800739A0
// line start: 3543
// line end:   3555
void S_TavernEnter__Fv() {
}


// address: 0x80073A14
// line start: 3562
// line end:   3575
void S_BarmaidEnter__Fv() {
}


// address: 0x80073A88
// line start: 3582
// line end:   3594
void S_DrunkEnter__Fv() {
}


// address: 0x80073AFC
// line start: 3601
// line end:   3665
void STextEnter__Fv() {
}


// address: 0x80073CC0
// line start: 3673
// line end:   3766
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x80073DAC
// line start: 3771
// line end:   3773
void ReleaseStoreBtn__Fv() {
}


// address: 0x80073DC0
// line start: 3848
// line end:   3848
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80073DE8
// line start: 3848
// line end:   3848
void _GLOBAL__I_pSTextBoxCels() {
}


