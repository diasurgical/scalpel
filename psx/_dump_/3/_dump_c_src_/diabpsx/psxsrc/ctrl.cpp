// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x80092C40
// line start: 108
// line end:   122
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x80092CC0
// line start: 152
// line end:   158
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x80092CFC
// line start: 164
// line end:   168
void RemoveCtrlScreen__Fv() {
}


// address: 0x80092D44
// line start: 173
// line end:   285
unsigned char Init_ctrl_pos__Fv() {
	// register: 22
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register char *pstr1;
	// register: 20
	register char *pstr2;
	// register: 23
	register int xp;
	{
		{
			{
				{
					{
						{
							// register: 16
							register int len;
							{
								// register: 16
								register int len;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80093348
// line start: 303
// line end:   312
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80093388
// line start: 316
// line end:   326
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800933C8
// line start: 330
// line end:   376
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x80093568
// line start: 380
// line end:   385
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800935B8
// line start: 391
// line end:   488
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80093848
// line start: 495
// line end:   615
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 6
	register int i;
	// address: 0xFFFFFFC0
	auto unsigned char r;
	// address: 0xFFFFFFC8
	auto unsigned char g;
	// address: 0xFFFFFFD0
	auto unsigned char b;
	// register: 4
	register int str;
	// register: 18
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 30
			register int x2;
		}
	}
}


// address: 0x80093E9C
// line start: 620
// line end:   710
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 18
	register int pnum;
	{
		{
		}
	}
}


// address: 0x8009429C
// line start: 761
// line end:   761
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x800942D4
// line start: 761
// line end:   761
void _GLOBAL__I_CtrlBorder() {
}


