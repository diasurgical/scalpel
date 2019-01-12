// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x8009C178
// line start: 304
// line end:   320
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x8009C250
// line start: 324
// line end:   334
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009C2E0
// line start: 338
// line end:   355
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8009C358
// line start: 360
// line end:   370
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8009C390
// line start: 375
// line end:   390
bool checkvalid__Fv() {
	// register: 6
	register int start;
	// register: 5
	register int end;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8009C3F4
// line start: 396
// line end:   405
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8009C450
// line start: 413
// line end:   430
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8009C508
// line start: 434
// line end:   446
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009C548
// line start: 450
// line end:   463
int remove_comboval__Fib(int p, bool all) {
	// register: 7
	register int n;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8009C590
// line start: 468
// line end:   517
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 18
	register int p;
}


// address: 0x8009C708
// line start: 521
// line end:   542
void restore_controller_settings__F8CTRL_SET(enum CTRL_SET s) {
	// register: 5
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x8009C7AC
// line start: 551
// line end:   562
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x8009C7D8
// line start: 587
// line end:   786
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0xEC
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x8009CCB4
// line start: 793
// line end:   914
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 17
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 30
	register unsigned char b;
	// register: 18
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 16
			register int x1;
			// register: 23
			register int x2;
			// register: 4
			register int nlen;
			// register: 22
			register int otpos;
		}
	}
}


// address: 0x8009D208
// line start: 918
// line end:   1002
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 2
	register int pnum;
	{
		{
			// register: 16
			register int otpos;
			// register: 21
			register int oldDot;
			// register: 20
			register int OldPrintOT;
			{
				{
					// register: 17
					register int lena;
					// register: 2
					register int len;
				}
			}
		}
	}
}


// address: 0x8009D708
// line start: 1002
// line end:   1002
void _GLOBAL__D_ctrlflag() {
}


// address: 0x8009D730
// line start: 1002
// line end:   1002
void _GLOBAL__I_ctrlflag() {
}


