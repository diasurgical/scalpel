// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x80094D70
// line start: 166
// line end:   181
void SetDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 4
		register int i;
	}
}


// address: 0x80094E48
// line start: 185
// line end:   195
void RestoreDemoKeys__FPi(int *buffer) {
	// register: 16
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80094ED8
// line start: 199
// line end:   216
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x80094F50
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80094F88
// line start: 260
// line end:   275
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


// address: 0x80094FEC
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x80095054
// line start: 300
// line end:   318
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8009510C
// line start: 322
// line end:   334
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009514C
// line start: 338
// line end:   351
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009518C
// line start: 355
// line end:   399
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


// address: 0x800952E0
// line start: 403
// line end:   410
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80095328
// line start: 418
// line end:   429
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x80095354
// line start: 436
// line end:   586
unsigned char main_ctrl_setup__Fv() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x80095804
// line start: 593
// line end:   706
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 18
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC8
	auto unsigned char r;
	// address: 0xFFFFFFD0
	auto unsigned char g;
	// register: 23
	register unsigned char b;
	// register: 19
	register int str;
	// register: 21
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 22
			register int x2;
			// register: 5
			register int nlen;
		}
	}
}


// address: 0x80095D00
// line start: 710
// line end:   788
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			// register: 17
			register int lena;
			// register: 2
			register int len;
			{
				{
					// register: 20
					register int oldDot;
					// register: 19
					register int OldPrintOT;
					// register: 18
					register bool oldbuttoncol;
				}
			}
		}
	}
}


// address: 0x800961BC
// line start: 788
// line end:   788
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800961E4
// line start: 788
// line end:   788
void _GLOBAL__I_ctrlflag() {
}


