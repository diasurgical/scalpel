// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x8008F090
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F108
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8008F140
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F190
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


// address: 0x8008F7A0
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008F7E0
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008F820
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


// address: 0x8008F974
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8008F9BC
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8008FD24
void PrintCtrlString__FiiUcic(int x, int y, unsigned char cjustflag, int str_num, int col) {
	// register: 22
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	// register: 2
	register int i;
	// address: 0xFFFFFFC0
	auto unsigned char r;
	// address: 0xFFFFFFC8
	auto unsigned char g;
	// address: 0xFFFFFFD0
	auto unsigned char b;
	// register: 4
	register int str;
	// register: 5
	register int len;
	{
		{
			// register: 4
			register int x1;
			// register: 23
			register int x2;
		}
	}
}


// address: 0x80090234
void DrawCtrlSetup__Fv() {
	// register: 16
	register int i;
	// register: 22
	register int pnum;
	{
		{
			{
				{
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


// address: 0x80090790
void _GLOBAL__D_ctrlflag() {
}


// address: 0x800907B8
void _GLOBAL__I_ctrlflag() {
}


