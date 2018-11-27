// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062948
void FreeStoreMem__Fv() {
}


// address: 0x80062950
void DrawSTextBack__Fv() {
}


// address: 0x800629C0
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
	// address: 0x80114294
	static unsigned char DaveFix;
}


// address: 0x80062D50
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80062DE4
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80062E7C
void AddSLine__Fi(int y) {
}


// address: 0x80062ECC
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80062EF4
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80062FA8
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800633EC
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


// address: 0x800639F0
void S_StartSmith__Fv() {
}


// address: 0x80063B78
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80063D30
void S_StartSBuy__Fv() {
}


// address: 0x80063E58
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x8006402C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064174
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064254
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


// address: 0x80064454
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x8006484C
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800648EC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064AC8
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80064F44
void S_StartWitch__Fv() {
}


// address: 0x80065084
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x8006523C
void S_StartWBuy__Fv() {
}


// address: 0x8006535C
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x80065470
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80065A7C
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80065B00
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065C7C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066058
void S_StartNoMoney__Fv() {
}


// address: 0x800660C0
void S_StartNoRoom__Fv() {
}


// address: 0x80066120
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 4
	register unsigned char idprint;
}


// address: 0x80066438
void S_StartBoy__Fv() {
}


// address: 0x800665C8
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x8006671C
void S_StartHealer__Fv() {
}


// address: 0x800668E0
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80066A4C
void S_StartHBuy__Fv() {
}


// address: 0x80066B64
void S_StartStory__Fv() {
}


// address: 0x80066C54
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80066C88
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066D58
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800676EC
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x80067870
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


// address: 0x80067AA0
void S_StartTavern__Fv() {
}


// address: 0x80067B98
void S_StartBarMaid__Fv() {
}


// address: 0x80067C6C
void S_StartDrunk__Fv() {
}


// address: 0x80067D40
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068028
void DrawSText__Fv() {
}


// address: 0x80068068
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068130
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800682DC
void STextESC__Fv() {
}


// address: 0x80068468
void STextUp__Fv() {
}


// address: 0x800685F0
void STextDown__Fv() {
}


// address: 0x80068788
void S_SmithEnter__Fv() {
}


// address: 0x8006885C
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800688D4
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x8006894C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80068D50
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80068F24
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800690EC
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069254
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


// address: 0x80069464
unsigned char StoreGoldFit__Fi(int idx) {
	// register: 18
	register int sz;
	// register: 16
	register int numsqrs;
	// register: 5
	register int i;
	// register: 17
	register long cost;
}


// address: 0x800696FC
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


// address: 0x80069944
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80069C14
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x80069D00
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x80069F38
void S_SRepairEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A074
void S_WitchEnter__Fv() {
}


// address: 0x8006A124
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A308
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A4D0
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A5BC
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A714
void S_WRechargeEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A850
void S_BoyEnter__Fv() {
}


// address: 0x8006A980
void BoyBuyItem__Fv() {
}


// address: 0x8006A9FC
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AC70
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AE34
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006B12C
void S_ConfirmEnter__Fv() {
}


// address: 0x8006B248
void S_HealerEnter__Fv() {
}


// address: 0x8006B2E0
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B4C8
void S_StoryEnter__Fv() {
}


// address: 0x8006B560
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B6BC
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


// address: 0x8006B8B4
void S_TavernEnter__Fv() {
}


// address: 0x8006B924
void S_BarmaidEnter__Fv() {
}


// address: 0x8006B994
void S_DrunkEnter__Fv() {
}


// address: 0x8006BA04
void STextEnter__Fv() {
}


// address: 0x8006BC04
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006BD08
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006BD1C
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006BD44
void _GLOBAL__I_pSTextBoxCels() {
}


