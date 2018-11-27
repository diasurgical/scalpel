// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x80070B80
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


// address: 0x8007103C
void CloseInvChr__Fv() {
}


// address: 0x800710A4
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
	// register: 3
	// size: 0x22D0
	register struct PlayerStruct *player;
}


// address: 0x80071150
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x800711C0
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071230
// size: 0x90
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071370
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071390
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x800713D4
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071418
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x80071584
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x8007164C
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x800716A8
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x800716E4
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x80071768
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80071B34
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80071BE0
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80071CF8
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x80071D3C
int CheckBodge__7GamePadi(struct GamePad *this, int dir) {
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int lnd;
	// register: 17
	register int rnd;
	// register: 22
	register int newdir;
}


// address: 0x80072040
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072300
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x800724FC
void show_combos__7GamePad(struct GamePad *this) {
	// register: 21
	register int x;
	// register: 19
	register int y;
	// register: 6
	register int p;
	{
		// register: 18
		register int i;
	}
}


// address: 0x80072674
void Handle__7GamePad(struct GamePad *this) {
	{
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
													// register: 17
													register int cp;
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
	}
}


// address: 0x80072C24
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC8
	// size: 0x90
	auto struct GamePad GPad1;
	// address: 0xFFFFFF58
	// size: 0x90
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x80072E1C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80072ECC
void Init_GamePad__Fv() {
}


// address: 0x80072EFC
void InitGamePadVars__Fv() {
}


