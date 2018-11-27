// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x8006402C
void FreeStoreMem__Fv() {
}


// address: 0x80064034
void DrawSTextBack__Fv() {
}


// address: 0x800640A4
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
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800644C8
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80064560
void AddSLine__Fi(int y) {
}


// address: 0x800645B0
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800645D8
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x8006468C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80064AD0
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
void S_StartSmith__Fv() {
}


// address: 0x80065274
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065420
void S_StartSBuy__Fv() {
}


// address: 0x80065550
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80065718
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80065868
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80065950
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
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065F64
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006600C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800661E8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800666B4
void S_StartWitch__Fv() {
}


// address: 0x800667F4
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800669A0
void S_StartWBuy__Fv() {
}


// address: 0x80066AC8
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066BEC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80067238
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x800672C4
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067440
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80067854
void S_StartNoMoney__Fv() {
}


// address: 0x800678BC
void S_StartNoRoom__Fv() {
}


// address: 0x8006791C
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x80067C50
void S_StartBoy__Fv() {
}


// address: 0x80067DE0
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067F2C
void S_StartHealer__Fv() {
}


// address: 0x80068100
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80068260
void S_StartHBuy__Fv() {
}


// address: 0x80068380
void S_StartStory__Fv() {
}


// address: 0x80068470
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800684A4
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80068574
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80068FB0
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80069140
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
void S_StartTavern__Fv() {
}


// address: 0x80069468
void S_StartBarMaid__Fv() {
}


// address: 0x8006953C
void S_StartDrunk__Fv() {
}


// address: 0x80069610
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800698F8
void DrawSText__Fv() {
}


// address: 0x80069938
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80069A00
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069BAC
void STextESC__Fv() {
}


// address: 0x80069D5C
void STextUp__Fv() {
}


// address: 0x80069EE4
void STextDown__Fv() {
}


// address: 0x8006A07C
void S_SmithEnter__Fv() {
}


// address: 0x8006A150
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A1D0
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006A250
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A69C
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A880
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AA7C
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006ABFC
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
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B65C
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B750
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B9B8
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BB04
void S_WitchEnter__Fv() {
}


// address: 0x8006BBB4
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BDA8
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BFA4
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006C098
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006C208
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C354
void S_BoyEnter__Fv() {
}


// address: 0x8006C48C
void BoyBuyItem__Fv() {
}


// address: 0x8006C510
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C79C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C998
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006CCE0
void S_ConfirmEnter__Fv() {
}


// address: 0x8006CDFC
void S_HealerEnter__Fv() {
}


// address: 0x8006CE94
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D0B0
void S_StoryEnter__Fv() {
}


// address: 0x8006D148
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006D2B4
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
void S_TavernEnter__Fv() {
}


// address: 0x8006D51C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006D58C
void S_DrunkEnter__Fv() {
}


// address: 0x8006D5FC
void STextEnter__Fv() {
}


// address: 0x8006D80C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D924
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D938
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D960
void _GLOBAL__I_pSTextBoxCels() {
}


