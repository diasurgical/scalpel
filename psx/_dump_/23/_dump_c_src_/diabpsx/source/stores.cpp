// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x800633F0
void FreeStoreMem__Fv() {
}


// address: 0x800633F8
void DrawSTextBack__Fv() {
}


// address: 0x80063468
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
	// address: 0x80118D9C
	static unsigned char DaveFix;
}


// address: 0x800637F8
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x8006388C
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063924
void AddSLine__Fi(int y) {
}


// address: 0x80063974
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x8006399C
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063A50
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF60
	// size: 0x80
	auto char sstr[128];
}


// address: 0x80063E94
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


// address: 0x800644B4
void S_StartSmith__Fv() {
}


// address: 0x8006463C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x800647F4
void S_StartSBuy__Fv() {
}


// address: 0x80064924
void S_ScrollSPBuy__Fi(int idx) {
	// register: 18
	register int l;
	// register: 17
	register char iclr;
	// register: 3
	register int boughtitems;
}


// address: 0x80064AF8
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x80064C48
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x80064D2C
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


// address: 0x80064F2C
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065358
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800653FC
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x800655DC
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065AA8
void S_StartWitch__Fv() {
}


// address: 0x80065BE8
void S_ScrollWBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80065DA0
void S_StartWBuy__Fv() {
}


// address: 0x80065EC8
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x80065FEC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066640
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x800666C8
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066848
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x80066C64
void S_StartNoMoney__Fv() {
}


// address: 0x80066CCC
void S_StartNoRoom__Fv() {
}


// address: 0x80066D2C
void S_StartConfirm__Fv() {
	// register: 16
	register char iclr;
	// register: 3
	register unsigned char idprint;
}


// address: 0x8006706C
void S_StartBoy__Fv() {
}


// address: 0x800671FC
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
}


// address: 0x80067358
void S_StartHealer__Fv() {
}


// address: 0x8006752C
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067698
void S_StartHBuy__Fv() {
}


// address: 0x800677B8
void S_StartStory__Fv() {
}


// address: 0x800678A8
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x800678DC
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x800679B0
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006840C
void S_StartIdShow__Fv() {
	// register: 16
	register char iclr;
}


// address: 0x800685A8
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


// address: 0x800687D8
void S_StartTavern__Fv() {
}


// address: 0x800688D0
void S_StartBarMaid__Fv() {
}


// address: 0x800689A4
void S_StartDrunk__Fv() {
}


// address: 0x80068A78
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x80068D68
void DrawSText__Fv() {
}


// address: 0x80068DA8
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x80068E70
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006901C
void STextESC__Fv() {
}


// address: 0x800691A8
void STextUp__Fv() {
}


// address: 0x80069330
void STextDown__Fv() {
}


// address: 0x800694C8
void S_SmithEnter__Fv() {
}


// address: 0x8006959C
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069618
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069694
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x80069AE0
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x80069CC8
void S_SBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x80069EA4
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A024
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


// address: 0x8006A248
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


// address: 0x8006A500
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


// address: 0x8006A764
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006AA50
void S_SSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006AB48
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006ADAC
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006AEFC
void S_WitchEnter__Fv() {
}


// address: 0x8006AFAC
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B1A4
void S_WBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B380
void S_WSellEnter__Fv() {
	// register: 7
	register int idx;
}


// address: 0x8006B478
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 3
	register int idx;
}


// address: 0x8006B5E4
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B734
void S_BoyEnter__Fv() {
}


// address: 0x8006B86C
void BoyBuyItem__Fv() {
}


// address: 0x8006B8F0
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006BB80
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006BD58
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C09C
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C1B8
void S_HealerEnter__Fv() {
}


// address: 0x8006C250
void S_HBuyEnter__Fv() {
	// register: 3
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C44C
void S_StoryEnter__Fv() {
}


// address: 0x8006C4E4
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006C654
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


// address: 0x8006C84C
void S_TavernEnter__Fv() {
}


// address: 0x8006C8BC
void S_BarmaidEnter__Fv() {
}


// address: 0x8006C92C
void S_DrunkEnter__Fv() {
}


// address: 0x8006C99C
void STextEnter__Fv() {
}


// address: 0x8006CB9C
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006CCB8
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006CCCC
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006CCF4
void _GLOBAL__I_pSTextBoxCels() {
}


