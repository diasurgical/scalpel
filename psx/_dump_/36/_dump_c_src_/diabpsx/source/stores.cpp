// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80061670
void FreeStoreMem__Fv() {
}


// address: 0x80061678
void DrawSTextBack__Fv() {
}


// address: 0x800616E8
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
	// address: 0x8012A5AC
	static unsigned char DaveFix;
}


// address: 0x80061ADC
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80061B70
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80061C08
void AddSLine__Fi(int y) {
}


// address: 0x80061C58
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80061C80
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80061D34
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800621BC
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


// address: 0x800627DC
void S_StartSmith__Fv() {
}


// address: 0x80062964
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80062B1C
void S_StartSBuy__Fv() {
}


// address: 0x80062C4C
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


// address: 0x80062E6C
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80062FBC
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800630A0
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


// address: 0x800632C8
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x800636F8
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x8006379C
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x8006397C
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80063E4C
void S_StartWitch__Fv() {
}


// address: 0x80063F8C
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


// address: 0x80064164
void S_StartWBuy__Fv() {
}


// address: 0x80064290
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800643B4
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80064A0C
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80064A94
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80064C14
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80065034
void S_StartNoMoney__Fv() {
}


// address: 0x8006509C
void S_StartNoRoom__Fv() {
}


// address: 0x800650FC
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x80065474
void S_StartBoy__Fv() {
}


// address: 0x80065604
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006578C
void S_StartHealer__Fv() {
}


// address: 0x80065960
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80065ACC
void S_StartHBuy__Fv() {
}


// address: 0x80065BEC
void S_StartStory__Fv() {
}


// address: 0x80065CDC
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80065D10
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80065DE4
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x80066844
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80066A18
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


// address: 0x80066C48
void S_StartTavern__Fv() {
}


// address: 0x80066D40
void S_StartBarMaid__Fv() {
}


// address: 0x80066E14
void S_StartDrunk__Fv() {
}


// address: 0x80066EE8
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800671D0
void DrawSText__Fv() {
}


// address: 0x80067210
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800672D8
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x80067484
void STextESC__Fv() {
}


// address: 0x800675F8
void STextUp__Fv() {
}


// address: 0x80067790
void STextDown__Fv() {
}


// address: 0x80067940
void S_SmithEnter__Fv() {
}


// address: 0x80067A14
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80067A90
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80067B0C
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80067F58
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006814C
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80068370
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x800684F8
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


// address: 0x80068728
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


// address: 0x800689E0
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


// address: 0x80068C44
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x80068F38
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006903C
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x800692AC
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80069408
void S_WitchEnter__Fv() {
}


// address: 0x800694B8
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x800696B8
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x800698A4
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x800699A8
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x80069B20
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x80069C7C
void S_BoyEnter__Fv() {
}


// address: 0x80069DB4
void BoyBuyItem__Fv() {
}


// address: 0x80069E38
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006A0DC
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A2C4
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006A610
void S_ConfirmEnter__Fv() {
}


// address: 0x8006A72C
void S_HealerEnter__Fv() {
}


// address: 0x8006A7C4
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A9D0
void S_StoryEnter__Fv() {
}


// address: 0x8006AA68
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006ABE4
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


// address: 0x8006ADDC
void S_TavernEnter__Fv() {
}


// address: 0x8006AE4C
void S_BarmaidEnter__Fv() {
}


// address: 0x8006AEBC
void S_DrunkEnter__Fv() {
}


// address: 0x8006AF2C
void STextEnter__Fv() {
}


// address: 0x8006B0F0
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006B1DC
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006B1F0
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006B218
void _GLOBAL__I_pSTextBoxCels() {
}


