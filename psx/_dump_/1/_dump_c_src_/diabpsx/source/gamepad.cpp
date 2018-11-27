// C:\diabpsx\SOURCE\GAMEPAD.CPP

#include "types.h"

// address: 0x800714E0
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


// address: 0x8007199C
void CloseInvChr__Fv() {
}


// address: 0x80071A04
void WorldToOffset__Fiii(int pnum, int WorldX, int WorldY) {
	// register: 8
	register int x;
	// register: 7
	register int y;
}


// address: 0x80071AD8
char pad_UpIsUp__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071B48
char pad_UpIsUpRight__Fi(int pval) {
	// register: 3
	register int walk_dir;
}


// address: 0x80071BB8
// size: 0x90
struct GamePad *__7GamePadi(struct GamePad *this, int player_num) {
}


// address: 0x80071CE8
void SetMoveStyle__7GamePadc(struct GamePad *this, char style_num) {
}


// address: 0x80071D08
void SetDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071D4C
void SetComboDownButton__7GamePadiPFi_v(struct GamePad *this, int pad_val, void (*func)()) {
}


// address: 0x80071D90
void SetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 17
	register int i;
}


// address: 0x80071EFC
void GetAllButtons__7GamePadP11KEY_ASSIGNS(struct GamePad *this, struct KEY_ASSIGNS *actions) {
	// register: 18
	register int i;
	// register: 20
	register int oc;
}


// address: 0x80071FC4
int GetActionButton__7GamePadPFi_v(struct GamePad *this, void (*func)()) {
	{
	}
}


// address: 0x80072020
void SetUpAction__7GamePadPFi_vT1(struct GamePad *this, void (*func)(), void (*upfunc)()) {
}


// address: 0x8007205C
void RunFunc__7GamePadi(struct GamePad *this, int pad) {
	// register: 2
	register int i;
}


// address: 0x800720E0
void ButtonDown__7GamePadi(struct GamePad *this, int button) {
}


// address: 0x800724AC
void TestButtons__7GamePad(struct GamePad *this) {
	// register: 16
	register int hand;
	// register: 18
	register int joydown;
	// register: 19
	register int joyup;
}


// address: 0x80072558
int CheckDirs__7GamePadi(struct GamePad *this, int dir) {
	// register: 3
	register int wx;
	// register: 4
	register int wy;
}


// address: 0x80072670
int CheckSide__7GamePadi(struct GamePad *this, int dir) {
	// register: 5
	register int lnd;
}


// address: 0x800726B4
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


// address: 0x800729B8
void walk__7GamePadc(struct GamePad *this, char cmd) {
	// register: 18
	register int xv;
	// register: 19
	register int yv;
	// register: 17
	register int dir;
}


// address: 0x80072C8C
void check_around_player__7GamePad(struct GamePad *this) {
	// register: 18
	register int x;
	// register: 19
	register int y;
}


// address: 0x80072E7C
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


// address: 0x80072FF4
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


// address: 0x80073584
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


// address: 0x8007377C
void PostGamePad__Fiiii(int val, int var1, int var2, int var3) {
	// register: 2
	// size: 0x5C
	register struct TASK *gtask;
	// register: 16
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x8007382C
void Init_GamePad__Fv() {
}


// address: 0x8007385C
void InitGamePadVars__Fv() {
}


