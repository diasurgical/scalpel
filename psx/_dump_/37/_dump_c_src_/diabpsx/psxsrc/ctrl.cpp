// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x80091348
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


// address: 0x80091420
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


// address: 0x800914B0
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


// address: 0x80091528
// line start: 245
// line end:   255
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x80091560
// line start: 261
// line end:   266
void RemoveCtrlScreen__Fv() {
}


// address: 0x800915A4
// line start: 275
// line end:   376
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x80091664
// line start: 380
// line end:   392
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800916A4
// line start: 396
// line end:   409
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800916E4
// line start: 413
// line end:   457
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


// address: 0x80091838
// line start: 461
// line end:   468
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x80091880
// line start: 475
// line end:   608
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80091CA8
// line start: 615
// line end:   726
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// address: 0xFFFFFFB8
	// size: 0x10
	auto struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC0
	auto unsigned char r;
	// address: 0xFFFFFFC8
	auto unsigned char g;
	// register: 23
	register unsigned char b;
	// address: 0xFFFFFFD0
	auto int str;
	// register: 5
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 22
			register int x2;
		}
	}
}


// address: 0x80092220
// line start: 729
// line end:   805
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
	{
		{
			{
				{
					// register: 2
					register int len;
					{
						// register: 17
						register int lena;
						// register: 2
						register int len;
						{
							{
								// register: 19
								register int oldDot;
								// register: 18
								register int OldPrintOT;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8009279C
// line start: 805
// line end:   805
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800927C4
// line start: 805
// line end:   805
void _GLOBAL__I_ctrlflag() {
}


