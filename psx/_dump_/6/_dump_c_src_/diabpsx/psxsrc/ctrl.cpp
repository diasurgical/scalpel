// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x8008F924
// line start: 108
// line end:   122
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F9A4
// line start: 152
// line end:   158
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F9E0
// line start: 164
// line end:   168
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008FA28
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


// address: 0x8009002C
// line start: 303
// line end:   312
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8009006C
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


// address: 0x800900AC
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


// address: 0x8009024C
// line start: 380
// line end:   385
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8009029C
// line start: 391
// line end:   488
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8009052C
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


// address: 0x80090B80
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


// address: 0x80090F80
// line start: 761
// line end:   761
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090FB8
// line start: 761
// line end:   761
void _GLOBAL__I_CtrlBorder() {
}


