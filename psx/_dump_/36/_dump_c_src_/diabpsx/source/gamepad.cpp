// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x8006EF20
void ClrCursor__Fi(int num) {
}


// address: 0x8006EF70
void flyabout__7GamePad(struct GamePad *this) {
	// register: 16
	register int cp;
	// register: 20
	register int owx;
	// register: 21
	register int owy;
	// register: 18
	register int wx;
	// register: 19
	register int wy;
	// register: 23
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x8006F42C
void CloseInvChr__Fv() {
}


// address: 0x8006F47C
int LeftOf__Fi(int dir) {
}


// address: 0x8006F494
int RightOf__Fi(int dir) {
}


// address: 0x8006F4B0
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x8006F55C
char pad_UpIsUpRight__Fic(int pval, char other) {
	// register: 3
	register int walk_dir;
}


// address: 0x8006F620
// size: 0x94
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x8006F714
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x8006F71C
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8006F760
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x8006F7A4
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x8006FA04
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8006FBB4
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8006FC10
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x8006FC4C
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x8006FD10
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8007011C
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80070260
bool CheckCentre__FP12PlayerStructi(struct PlayerStruct *player, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
	// register: 6
	register int ret;
}


// address: 0x80070354
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x8007046C
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
}


// address: 0x800704C0
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 18
	register int rnd;
	// register: 22
	register int newdir;
	// register: 18
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x800708CC
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80070BE4
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 17
	register int y;
	{
		{
			// register: 16
			// size: 0x98
			register struct ItemStruct *pi;
		}
	}
}


// address: 0x80070FC4
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 20
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80071164
void Handle__7GamePad(struct GamePad *this) {
	// register: 17
	register int cp;
	{
		{
			{
				{
					// register: 6
					register unsigned long msk;
					{
						{
							{
								{
									{
										{
											{
												{
													{
														{
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8007183C
void GamePadTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80071908
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 3
	// size: 0x94
	register struct GamePad *GP1;
	// register: 8
	// size: 0x94
	register struct GamePad *GP2;
}


// address: 0x80071A18
void Init_GamePad__Fv() {
}


// address: 0x80071A48
void InitGamePadVars__Fv() {
}


// address: 0x80071AD8
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


// address: 0x80071B48
char GetPadStyle__Fi(int pnum) {
	// register: 2
	// size: 0x94
	register struct GamePad *GPad;
}


// address: 0x80071B6C
void _GLOBAL__I_flyflag() {
}


