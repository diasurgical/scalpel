// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80062A54
void FreeStoreMem__Fv() {
}


// address: 0x80062A5C
void DrawSTextBack__Fv() {
}


// address: 0x80062ACC
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
	// address: 0x801158E4
	static unsigned char DaveFix;
}


// address: 0x80062E5C
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80062EF0
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80062F88
void AddSLine__Fi(int y) {
}


// address: 0x80062FD8
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063000
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x800630B4
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x800634F8
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


// address: 0x80063AFC
void S_StartSmith__Fv() {
}


// address: 0x80063C84
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80063E3C
void S_StartSBuy__Fv() {
}


// address: 0x80063F64
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064138
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064280
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064360
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


// address: 0x80064560
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80064958
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800649F8
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80064BD4
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065050
void S_StartWitch__Fv() {
}


// address: 0x80065190
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065348
void S_StartWBuy__Fv() {
}


// address: 0x80065468
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x94
	register struct ItemStruct *pI;
}


// address: 0x8006557C
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80065B88
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80065C0C
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065D88
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066164
void S_StartNoMoney__Fv() {
}


// address: 0x800661CC
void S_StartNoRoom__Fv() {
}


// address: 0x8006622C
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 4
	register unsigned char idprint;
}


// address: 0x80066544
void S_StartBoy__Fv() {
}


// address: 0x800666D4
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80066828
void S_StartHealer__Fv() {
}


// address: 0x800669EC
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80066B58
void S_StartHBuy__Fv() {
}


// address: 0x80066C70
void S_StartStory__Fv() {
}


// address: 0x80066D60
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80066D94
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066E64
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x800677F8
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x8006797C
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


// address: 0x80067BAC
void S_StartTavern__Fv() {
}


// address: 0x80067CA4
void S_StartBarMaid__Fv() {
}


// address: 0x80067D78
void S_StartDrunk__Fv() {
}


// address: 0x80067E4C
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068134
void DrawSText__Fv() {
}


// address: 0x80068174
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x8006823C
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x800683E8
void STextESC__Fv() {
}


// address: 0x80068574
void STextUp__Fv() {
}


// address: 0x800686FC
void STextDown__Fv() {
}


// address: 0x80068894
void S_SmithEnter__Fv() {
}


// address: 0x80068968
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x800689E0
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80068A58
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80068E5C
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069030
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800691F8
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x80069360
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


// address: 0x80069570
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


// address: 0x80069808
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


// address: 0x80069A50
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80069D20
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x80069E0C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A044
void S_SRepairEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A180
void S_WitchEnter__Fv() {
}


// address: 0x8006A230
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A414
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A5DC
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A6C8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006A820
void S_WRechargeEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006A95C
void S_BoyEnter__Fv() {
}


// address: 0x8006AA8C
void BoyBuyItem__Fv() {
}


// address: 0x8006AB08
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006AD7C
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006AF40
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006B238
void S_ConfirmEnter__Fv() {
}


// address: 0x8006B354
void S_HealerEnter__Fv() {
}


// address: 0x8006B3EC
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B5D4
void S_StoryEnter__Fv() {
}


// address: 0x8006B66C
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B7C8
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


// address: 0x8006B9C0
void S_TavernEnter__Fv() {
}


// address: 0x8006BA30
void S_BarmaidEnter__Fv() {
}


// address: 0x8006BAA0
void S_DrunkEnter__Fv() {
}


// address: 0x8006BB10
void STextEnter__Fv() {
}


// address: 0x8006BD10
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006BE14
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006BE28
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006BE50
void _GLOBAL__I_pSTextBoxCels() {
}


