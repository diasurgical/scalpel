// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x8008F390
char *get_action_str__Fii(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F410
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008F44C
void RemoveCtrlScreen__Fv() {
}


// address: 0x8008F494
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


// address: 0x8008FA98
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FAD8
int remove_comboval__Fi(int p) {
	// register: 6
	register int n;
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008FB18
unsigned char set_buttons__Fii(int cline, int n) {
	// register: 3
	register int cval;
	// register: 4
	register int i;
	// register: 19
	register int p;
}


// address: 0x8008FCB8
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8008FD08
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x8008FF98
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


// address: 0x800905EC
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


// address: 0x800909EC
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090A24
void _GLOBAL__I_CtrlBorder() {
}


