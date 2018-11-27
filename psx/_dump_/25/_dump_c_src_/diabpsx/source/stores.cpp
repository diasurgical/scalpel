// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800633D4
void FreeStoreMem__Fv() {
}


// address: 0x800633DC
void DrawSTextBack__Fv() {
}


// address: 0x8006344C
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
	// address: 0x80119580
	static unsigned char DaveFix;
}


// address: 0x80063824
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800638B8
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063950
void AddSLine__Fi(int y) {
}


// address: 0x800639A0
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800639C8
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063A7C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063F04
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


// address: 0x80064524
void S_StartSmith__Fv() {
}


// address: 0x800646AC
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064864
void S_StartSBuy__Fv() {
}


// address: 0x80064994
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


// address: 0x80064BB4
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064D04
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064DE8
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


// address: 0x80065010
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065440
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800654E4
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800656C4
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065B94
void S_StartWitch__Fv() {
}


// address: 0x80065CD4
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


// address: 0x80065EAC
void S_StartWBuy__Fv() {
}


// address: 0x80065FD8
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800660FC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066754
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800667DC
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006695C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066D7C
void S_StartNoMoney__Fv() {
}


// address: 0x80066DE4
void S_StartNoRoom__Fv() {
}


// address: 0x80066E44
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067194
void S_StartBoy__Fv() {
}


// address: 0x80067324
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067480
void S_StartHealer__Fv() {
}


// address: 0x80067654
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800677C0
void S_StartHBuy__Fv() {
}


// address: 0x800678E0
void S_StartStory__Fv() {
}


// address: 0x800679D0
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067A04
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067AD8
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068538
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006870C
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


// address: 0x8006893C
void S_StartTavern__Fv() {
}


// address: 0x80068A34
void S_StartBarMaid__Fv() {
}


// address: 0x80068B08
void S_StartDrunk__Fv() {
}


// address: 0x80068BDC
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068ECC
void DrawSText__Fv() {
}


// address: 0x80068F0C
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068FD4
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069180
void STextESC__Fv() {
}


// address: 0x800692FC
void STextUp__Fv() {
}


// address: 0x80069484
void STextDown__Fv() {
}


// address: 0x8006961C
void S_SmithEnter__Fv() {
}


// address: 0x800696F0
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006976C
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800697E8
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069C34
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069E28
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A04C
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A1D4
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


// address: 0x8006A404
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


// address: 0x8006A6BC
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


// address: 0x8006A920
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AC14
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AD18
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AF88
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B0E4
void S_WitchEnter__Fv() {
}


// address: 0x8006B194
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B394
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B580
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B684
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B7FC
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B958
void S_BoyEnter__Fv() {
}


// address: 0x8006BA90
void BoyBuyItem__Fv() {
}


// address: 0x8006BB14
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDB8
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BF90
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C2DC
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C3F8
void S_HealerEnter__Fv() {
}


// address: 0x8006C490
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C69C
void S_StoryEnter__Fv() {
}


// address: 0x8006C734
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C8B0
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


// address: 0x8006CAA8
void S_TavernEnter__Fv() {
}


// address: 0x8006CB18
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CB88
void S_DrunkEnter__Fv() {
}


// address: 0x8006CBF8
void STextEnter__Fv() {
}


// address: 0x8006CDF8
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CF14
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CF28
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CF50
void _GLOBAL__I_pSTextBoxCels() {
}


