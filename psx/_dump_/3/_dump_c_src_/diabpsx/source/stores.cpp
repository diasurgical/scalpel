// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80066C44
void FreeStoreMem__Fv() {
}


// address: 0x80066C4C
void DrawSTextBack__Fv() {
}


// address: 0x80066CBC
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
	// address: 0x80120DD8
	static unsigned char DaveFix;
}


// address: 0x8006704C
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x800670E0
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80067178
void AddSLine__Fi(int y) {
}


// address: 0x800671C8
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x800671F0
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800672A4
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800676E8
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


// address: 0x80067D04
void S_StartSmith__Fv() {
}


// address: 0x80067E8C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80068038
void S_StartSBuy__Fv() {
}


// address: 0x80068168
void S_ScrollSPBuy__Fi(int idx) {
	// register: 19
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80068330
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80068480
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80068568
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


// address: 0x80068754
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80068B7C
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x80068C24
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80068E00
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x800692CC
void S_StartWitch__Fv() {
}


// address: 0x8006940C
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800695B8
void S_StartWBuy__Fv() {
}


// address: 0x800696E0
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80069804
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80069E50
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
}


// address: 0x80069EDC
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006A058
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006A46C
void S_StartNoMoney__Fv() {
}


// address: 0x8006A4D4
void S_StartNoRoom__Fv() {
}


// address: 0x8006A534
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x8006A868
void S_StartBoy__Fv() {
}


// address: 0x8006A9F8
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006AB44
void S_StartHealer__Fv() {
}


// address: 0x8006AD18
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x8006AE78
void S_StartHBuy__Fv() {
}


// address: 0x8006AF98
void S_StartStory__Fv() {
}


// address: 0x8006B088
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x8006B0BC
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x8006B18C
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006BBC8
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006BD58
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


// address: 0x8006BF88
void S_StartTavern__Fv() {
}


// address: 0x8006C080
void S_StartBarMaid__Fv() {
}


// address: 0x8006C154
void S_StartDrunk__Fv() {
}


// address: 0x8006C228
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x8006C510
void DrawSText__Fv() {
}


// address: 0x8006C550
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006C618
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006C7C4
void STextESC__Fv() {
}


// address: 0x8006C974
void STextUp__Fv() {
}


// address: 0x8006CAFC
void STextDown__Fv() {
}


// address: 0x8006CC94
void S_SmithEnter__Fv() {
}


// address: 0x8006CD68
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CDE8
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006CE68
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006D2B4
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006D498
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006D694
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006D814
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


// address: 0x8006DA58
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


// address: 0x8006DD28
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


// address: 0x8006DF8C
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006E274
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006E368
void SmithRepairItem__Fv() {
	// register: 4
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006E5D0
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006E71C
void S_WitchEnter__Fv() {
}


// address: 0x8006E7CC
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006E9C0
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006EBBC
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006ECB0
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006EE20
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006EF6C
void S_BoyEnter__Fv() {
}


// address: 0x8006F0A4
void BoyBuyItem__Fv() {
}


// address: 0x8006F128
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006F3B4
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006F5B0
void StoryIdItem__Fv() {
	// register: 4
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006F8F8
void S_ConfirmEnter__Fv() {
}


// address: 0x8006FA14
void S_HealerEnter__Fv() {
}


// address: 0x8006FAAC
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006FCC8
void S_StoryEnter__Fv() {
}


// address: 0x8006FD60
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006FECC
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


// address: 0x800700C4
void S_TavernEnter__Fv() {
}


// address: 0x80070134
void S_BarmaidEnter__Fv() {
}


// address: 0x800701A4
void S_DrunkEnter__Fv() {
}


// address: 0x80070214
void STextEnter__Fv() {
}


// address: 0x80070424
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8007053C
void ReleaseStoreBtn__Fv() {
}


// address: 0x80070550
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x80070578
void _GLOBAL__I_pSTextBoxCels() {
}


