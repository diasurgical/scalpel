// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x800746AC
// line start: 89
// line end:   152
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
	// size: 0xDC
	register struct CBlocks *gblocks;
	// register: 4
	register int step;
}


// address: 0x80074B68
// line start: 163
// line end:   171
void CloseInvChr__Fv() {
}


// address: 0x80074BD0
// line start: 180
// line end:   190
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80074CA4
// line start: 199
// line end:   230
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D14
// line start: 239
// line end:   269
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80074D84
// size: 0x90
// line start: 282
// line end:   317
struct GamePad *__7GamePadic(struct GamePad *this, int player_num, char move_style) {
	// register: 4
	register int i;
}


// address: 0x80074EF0
// line start: 326
// line end:   327
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80074F10
// line start: 336
// line end:   339
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F54
// line start: 348
// line end:   351
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80074F98
// line start: 360
// line end:   395
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x800750E4
// line start: 405
// line end:   433
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x800751AC
// line start: 441
// line end:   460
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80075208
// line start: 468
// line end:   471
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x80075244
// line start: 480
// line end:   508
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800752C8
// line start: 516
// line end:   637
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x80075694
// line start: 647
// line end:   670
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80075740
// line start: 681
// line end:   727
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80075858
// line start: 739
// line end:   748
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x8007589C
// line start: 757
// line end:   833
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


// address: 0x80075BA0
// line start: 843
// line end:   904
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80075E74
// line start: 912
// line end:   951
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80076064
// line start: 959
// line end:   981
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


// address: 0x800761E8
// line start: 1048
// line end:   1279
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


// address: 0x80076788
// line start: 1287
// line end:   1389
void GamePadTask__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFEC8
	// size: 0x90
	auto struct GamePad GPad1;
	// register: 4
	// size: 0x90
	register struct GamePad *gp;
	// address: 0xFFFFFF58
	// size: 0x90
	auto struct GamePad GPad2;
	// register: 18
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 20
	register int gpause;
	// register: 16
	register int omp;
	// register: 17
	register int oms;
}


// address: 0x800769A4
// line start: 1395
// line end:   1412
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80076A54
// line start: 1424
// line end:   1425
void Init_GamePad__Fv() {
}


// address: 0x80076A84
// line start: 1430
// line end:   1441
void InitGamePadVars__Fv() {
}


