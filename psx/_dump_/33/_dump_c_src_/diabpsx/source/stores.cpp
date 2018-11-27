// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063058
void FreeStoreMem__Fv() {
}


// address: 0x80063060
void DrawSTextBack__Fv() {
}


// address: 0x800630D0
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
	// address: 0x8012CA58
	static unsigned char DaveFix;
}


// address: 0x800634A8
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x8006353C
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x800635D4
void AddSLine__Fi(int y) {
}


// address: 0x80063624
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x8006364C
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063700
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x80063B88
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


// address: 0x800641A8
void S_StartSmith__Fv() {
}


// address: 0x80064330
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800644E8
void S_StartSBuy__Fv() {
}


// address: 0x80064618
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


// address: 0x80064838
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064988
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064A6C
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


// address: 0x80064C94
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800650C4
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065168
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065348
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065818
void S_StartWitch__Fv() {
}


// address: 0x80065958
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


// address: 0x80065B30
void S_StartWBuy__Fv() {
}


// address: 0x80065C5C
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065D80
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800663D8
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066460
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800665E0
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066A00
void S_StartNoMoney__Fv() {
}


// address: 0x80066A68
void S_StartNoRoom__Fv() {
}


// address: 0x80066AC8
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066E40
void S_StartBoy__Fv() {
}


// address: 0x80066FD0
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067158
void S_StartHealer__Fv() {
}


// address: 0x8006732C
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067498
void S_StartHBuy__Fv() {
}


// address: 0x800675B8
void S_StartStory__Fv() {
}


// address: 0x800676A8
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800676DC
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800677B0
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068210
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x800683E4
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


// address: 0x80068614
void S_StartTavern__Fv() {
}


// address: 0x8006870C
void S_StartBarMaid__Fv() {
}


// address: 0x800687E0
void S_StartDrunk__Fv() {
}


// address: 0x800688B4
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068BA4
void DrawSText__Fv() {
}


// address: 0x80068BE4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068CAC
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80068E58
void STextESC__Fv() {
}


// address: 0x80068FB4
void STextUp__Fv() {
}


// address: 0x8006914C
void STextDown__Fv() {
}


// address: 0x800692FC
void S_SmithEnter__Fv() {
}


// address: 0x800693D0
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006944C
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800694C8
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069914
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069B08
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069D2C
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069EB4
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


// address: 0x8006A0E4
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


// address: 0x8006A39C
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


// address: 0x8006A600
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006A8F4
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006A9F8
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006AC68
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ADC4
void S_WitchEnter__Fv() {
}


// address: 0x8006AE74
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B074
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B260
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B364
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B4DC
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B638
void S_BoyEnter__Fv() {
}


// address: 0x8006B770
void BoyBuyItem__Fv() {
}


// address: 0x8006B7F4
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BA98
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BC70
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006BFBC
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C0D8
void S_HealerEnter__Fv() {
}


// address: 0x8006C170
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C37C
void S_StoryEnter__Fv() {
}


// address: 0x8006C414
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C590
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


// address: 0x8006C788
void S_TavernEnter__Fv() {
}


// address: 0x8006C7F8
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C868
void S_DrunkEnter__Fv() {
}


// address: 0x8006C8D8
void STextEnter__Fv() {
}


// address: 0x8006CAE4
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CC14
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CC28
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CC50
void _GLOBAL__I_pSTextBoxCels() {
}


