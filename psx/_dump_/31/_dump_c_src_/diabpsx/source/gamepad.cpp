// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80070728
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


// address: 0x80070BE4
void CloseInvChr__Fv() {
}


// address: 0x80070C2C
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x23A8
	register struct PlayerStruct *player;
}


// address: 0x80070CD8
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070D48
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80070DB8
// size: 0x9C
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80070EE8
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80070F28
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070F6C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80070FB0
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
}


// address: 0x80071210
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 19
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800713C0
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x8007141C
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80071458
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800714F8
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


// address: 0x80071904
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 17
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071A48
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071B60
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071BA4
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 20
	register int x;
	// register: 21
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
	// register: 17
	register int fx;
	// register: 16
	register int fy;
}


// address: 0x80071EA8
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x800721B4
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


// address: 0x80072554
void show_combos__7GamePad(struct GamePad *this) {
	// register: 22
	register int x;
	// register: 21
	register int y;
	{
		// register: 19
		register int i;
	}
}


// address: 0x80072714
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


// address: 0x80072D9C
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEB0
	// size: 0x9C
	auto struct GamePad GPad1;
	// address: 0xFFFFFF50
	// size: 0x9C
	auto struct GamePad GPad2;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80072E6C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 4
	// size: 0x9C
	register struct GamePad *GPad1;
	// register: 8
	// size: 0x9C
	register struct GamePad *GPad2;
}


// address: 0x80072F50
void Init_GamePad__Fv() {
}


// address: 0x80072F80
void InitGamePadVars__Fv() {
}


// address: 0x80073010
int SetWalkStyle__Fii(int pnum, int style) {
	// register: 17
	register int ret;
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
}


