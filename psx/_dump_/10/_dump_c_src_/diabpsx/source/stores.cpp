// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800636A8
void FreeStoreMem__Fv() {
}


// address: 0x800636B0
void DrawSTextBack__Fv() {
}


// address: 0x80063720
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
	// address: 0x8011726C
	static unsigned char DaveFix;
}


// address: 0x80063AB0
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063B44
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063BDC
void AddSLine__Fi(int y) {
}


// address: 0x80063C2C
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063C54
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063D08
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x8006414C
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


// address: 0x80064768
void S_StartSmith__Fv() {
}


// address: 0x800648F0
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064A9C
void S_StartSBuy__Fv() {
}


// address: 0x80064BCC
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064D94
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064EE4
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064FCC
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


// address: 0x800651B8
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800655E0
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80065688
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065864
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065D30
void S_StartWitch__Fv() {
}


// address: 0x80065E70
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x8006601C
void S_StartWBuy__Fv() {
}


// address: 0x80066144
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80066268
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x800668B4
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80066940
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066ABC
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066ED0
void S_StartNoMoney__Fv() {
}


// address: 0x80066F38
void S_StartNoRoom__Fv() {
}


// address: 0x80066F98
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x800672CC
void S_StartBoy__Fv() {
}


// address: 0x8006745C
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x800675A8
void S_StartHealer__Fv() {
}


// address: 0x8006777C
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x800678DC
void S_StartHBuy__Fv() {
}


// address: 0x800679FC
void S_StartStory__Fv() {
}


// address: 0x80067AEC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067B20
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067BF0
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006862C
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x800687BC
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


// address: 0x800689EC
void S_StartTavern__Fv() {
}


// address: 0x80068AE4
void S_StartBarMaid__Fv() {
}


// address: 0x80068BB8
void S_StartDrunk__Fv() {
}


// address: 0x80068C8C
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068F74
void DrawSText__Fv() {
}


// address: 0x80068FB4
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006907C
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80069228
void STextESC__Fv() {
}


// address: 0x800693D8
void STextUp__Fv() {
}


// address: 0x80069560
void STextDown__Fv() {
}


// address: 0x800696F8
void S_SmithEnter__Fv() {
}


// address: 0x800697CC
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006984C
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800698CC
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069D18
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069EFC
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A0F8
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A278
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


// address: 0x8006A4BC
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


// address: 0x8006A78C
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


// address: 0x8006A9F0
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006ACD8
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ADCC
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B034
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B180
void S_WitchEnter__Fv() {
}


// address: 0x8006B230
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B424
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B620
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B714
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B884
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B9D0
void S_BoyEnter__Fv() {
}


// address: 0x8006BB08
void BoyBuyItem__Fv() {
}


// address: 0x8006BB8C
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BE18
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C014
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C35C
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C478
void S_HealerEnter__Fv() {
}


// address: 0x8006C510
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C72C
void S_StoryEnter__Fv() {
}


// address: 0x8006C7C4
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C930
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


// address: 0x8006CB28
void S_TavernEnter__Fv() {
}


// address: 0x8006CB98
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CC08
void S_DrunkEnter__Fv() {
}


// address: 0x8006CC78
void STextEnter__Fv() {
}


// address: 0x8006CE88
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CFA0
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CFB4
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CFDC
void _GLOBAL__I_pSTextBoxCels() {
}


