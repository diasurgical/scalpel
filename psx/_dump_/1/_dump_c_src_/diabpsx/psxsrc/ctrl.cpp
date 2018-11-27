// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x8008F730
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F7B0
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F7EC
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F834
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


// address: 0x8008FE38
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FE78
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FEB8
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x80090058
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x800900A8
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80090338
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


// address: 0x8009098C
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


// address: 0x80090D8C
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090DC4
void _GLOBAL__I_CtrlBorder() {
}


