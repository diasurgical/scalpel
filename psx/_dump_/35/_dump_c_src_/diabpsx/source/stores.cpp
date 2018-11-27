// C:\diabpsx\SOURCE\STORES.CPP

#include "types.h"

// address: 0x80063778
void FreeStoreMem__Fv() {
}


// address: 0x80063780
void DrawSTextBack__Fv() {
}


// address: 0x800637F0
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
	// address: 0x8012DBE8
	static unsigned char DaveFix;
}


// address: 0x80063BE4
void DrawSLine__Fi(int y) {
	// register: 16
	register int yy;
}


// address: 0x80063C78
void ClearSText__Fii(int s, int e) {
	// register: 4
	register int i;
}


// address: 0x80063D10
void AddSLine__Fi(int y) {
}


// address: 0x80063D60
void AddSTextVal__Fii(int y, int val) {
}


// address: 0x80063D88
void AddSText__FiiUcPccUc(int x, int y, unsigned char j, char *str, int clr, int sel) {
}


// address: 0x80063E3C
void PrintStoreItem__FPC10ItemStructic(struct ItemStruct *x, int l, char iclr) {
	// address: 0xFFFFFF58
	// size: 0x80
	auto char sstr[128];
	// register: 21
	register int li;
}


// address: 0x800642C4
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


// address: 0x800648E4
void S_StartSmith__Fv() {
}


// address: 0x80064A6C
void S_ScrollSBuy__Fi(int idx) {
	// register: 17
	register int l;
	// register: 20
	register int ls;
	// register: 18
	register char iclr;
}


// address: 0x80064C24
void S_StartSBuy__Fv() {
}


// address: 0x80064D54
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


// address: 0x80064F74
unsigned char S_StartSPBuy__Fv() {
	// register: 4
	register int i;
}


// address: 0x800650C4
unsigned char SmithSellOk__Fi(int i) {
}


// address: 0x800651A8
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


// address: 0x800653D0
void S_StartSSell__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char sellok;
}


// address: 0x80065800
unsigned char SmithRepairOk__Fi(int i) {
}


// address: 0x800658A4
void AddStoreHoldRepair__FP10ItemStructi(struct ItemStruct *itm, int i) {
	// register: 4
	register int v;
}


// address: 0x80065A84
void S_StartSRepair__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char repairok;
}


// address: 0x80065F54
void S_StartWitch__Fv() {
}


// address: 0x80066094
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


// address: 0x8006626C
void S_StartWBuy__Fv() {
}


// address: 0x80066398
unsigned char WitchSellOk__Fi(int i) {
	// register: 5
	register unsigned char rv;
	// register: 3
	// size: 0x98
	register struct ItemStruct *pI;
}


// address: 0x800664BC
void S_StartWSell__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char sellok;
}


// address: 0x80066B14
unsigned char WitchRechargeOk__Fi(int i) {
	// register: 6
	register unsigned char rv;
}


// address: 0x80066B9C
void AddStoreHoldRecharge__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80066D1C
void S_StartWRecharge__Fv() {
	// register: 16
	register int i;
	// register: 18
	register unsigned char rechargeok;
}


// address: 0x8006713C
void S_StartNoMoney__Fv() {
}


// address: 0x800671A4
void S_StartNoRoom__Fv() {
}


// address: 0x80067204
void S_StartConfirm__Fv() {
	// register: 17
	register char iclr;
	// register: 3
	register unsigned char idprint;
	// register: 16
	register char *StrPtr;
}


// address: 0x8006757C
void S_StartBoy__Fv() {
}


// address: 0x8006770C
void S_StartBBoy__Fv() {
	// register: 17
	register int iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80067894
void S_StartHealer__Fv() {
}


// address: 0x80067A68
void S_ScrollHBuy__Fi(int idx) {
	// register: 19
	register int l;
}


// address: 0x80067BD4
void S_StartHBuy__Fv() {
}


// address: 0x80067CF4
void S_StartStory__Fv() {
}


// address: 0x80067DE4
unsigned char IdItemOk__FP10ItemStruct(struct ItemStruct *i) {
}


// address: 0x80067E18
void AddStoreHoldId__FG10ItemStructi(struct ItemStruct itm, int i) {
}


// address: 0x80067EEC
void S_StartSIdentify__Fv() {
	// register: 16
	register int i;
	// register: 19
	register unsigned char idok;
}


// address: 0x8006894C
void S_StartIdShow__Fv() {
	// register: 17
	register char iclr;
	// register: 16
	register char *StrPtr;
}


// address: 0x80068B20
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


// address: 0x80068D50
void S_StartTavern__Fv() {
}


// address: 0x80068E48
void S_StartBarMaid__Fv() {
}


// address: 0x80068F1C
void S_StartDrunk__Fv() {
}


// address: 0x80068FF0
void StartStore__Fc(char s) {
	// register: 3
	register int i;
}


// address: 0x800692D8
void DrawSText__Fv() {
}


// address: 0x80069318
void DrawSTextTSK__FP4TASK(struct TASK *T) {
}


// address: 0x800693E0
void DoThatDrawSText__Fv() {
	// register: 17
	register int i;
}


// address: 0x8006958C
void STextESC__Fv() {
}


// address: 0x80069700
void STextUp__Fv() {
}


// address: 0x80069898
void STextDown__Fv() {
}


// address: 0x80069A48
void S_SmithEnter__Fv() {
}


// address: 0x80069B1C
void SetGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069B98
void SetSpdbarGoldCurs__Fii(int pnum, int i) {
}


// address: 0x80069C14
void TakePlrsMoney__Fl(long cost) {
	// register: 16
	register int i;
}


// address: 0x8006A060
void SmithBuyItem__Fv() {
	// register: 10
	register int idx;
}


// address: 0x8006A254
void S_SBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006A478
void SmithBuyPItem__Fv() {
	// register: 6
	register int idx;
	// register: 5
	register int i;
	// register: 3
	register int xx;
}


// address: 0x8006A600
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


// address: 0x8006A830
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


// address: 0x8006AAE8
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


// address: 0x8006AD4C
void StoreSellItem__Fv() {
	// register: 16
	register int idx;
	// register: 16
	register int i;
	// register: 17
	register long cost;
}


// address: 0x8006B040
void S_SSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B144
void SmithRepairItem__Fv() {
	// register: 5
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006B3B4
void S_SRepairEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006B510
void S_WitchEnter__Fv() {
}


// address: 0x8006B5C0
void WitchBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006B7C0
void S_WBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006B9AC
void S_WSellEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BAB0
void WitchRechargeItem__Fv() {
	// register: 2
	register int i;
	// register: 4
	register int idx;
}


// address: 0x8006BC28
void S_WRechargeEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006BD84
void S_BoyEnter__Fv() {
}


// address: 0x8006BEBC
void BoyBuyItem__Fv() {
}


// address: 0x8006BF40
void HealerBuyItem__Fv() {
	// register: 16
	register int idx;
}


// address: 0x8006C1E4
void S_BBuyEnter__Fv() {
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006C3CC
void StoryIdItem__Fv() {
	// register: 5
	register int i;
	// register: 2
	register int idx;
}


// address: 0x8006C718
void S_ConfirmEnter__Fv() {
}


// address: 0x8006C834
void S_HealerEnter__Fv() {
}


// address: 0x8006C8CC
void S_HBuyEnter__Fv() {
	// register: 4
	register int idx;
	// register: 16
	register int i;
	// register: 3
	register unsigned char done;
}


// address: 0x8006CAD8
void S_StoryEnter__Fv() {
}


// address: 0x8006CB70
void S_SIDEnter__Fv() {
	// register: 8
	register int idx;
}


// address: 0x8006CCEC
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


// address: 0x8006CEE4
void S_TavernEnter__Fv() {
}


// address: 0x8006CF54
void S_BarmaidEnter__Fv() {
}


// address: 0x8006CFC4
void S_DrunkEnter__Fv() {
}


// address: 0x8006D034
void STextEnter__Fv() {
}


// address: 0x8006D1F8
void CheckStoreBtn__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x8006D2D0
void ReleaseStoreBtn__Fv() {
}


// address: 0x8006D2E4
void _GLOBAL__D_pSTextBoxCels() {
}


// address: 0x8006D30C
void _GLOBAL__I_pSTextBoxCels() {
}


