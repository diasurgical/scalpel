// C:\diabpsx\PSXSRC\CTRL.CPP

#include "types.h"

// address: 0x80092554
// line start: 738
// line end:   814
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


// address: 0x8009098C
// line start: 620
// line end:   710
void DrawCtrlSetup__Fv_addr_8009098C() {
	// register: 16
	register int i;
	// register: 18
	register int pnum;
	{
		{
		}
	}
}


// address: 0x80092FB4
// line start: 663
// line end:   737
void DrawCtrlSetup__Fv_addr_80092FB4() {
	// register: 16
	register int i;
	// register: 20
	register int pnum;
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


// address: 0x800936E4
// line start: 690
// line end:   768
void DrawCtrlSetup__Fv_addr_800936E4() {
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


// address: 0x80090234
// line start: 647
// line end:   719
void DrawCtrlSetup__Fv_addr_80090234() {
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


// address: 0x800918B8
// line start: 275
// line end:   376
unsigned char Init_ctrl_pos__Fv() {
}


// address: 0x8008F190
// line start: 236
// line end:   333
unsigned char Init_ctrl_pos__Fv_addr_8008F190() {
	// register: 22
	// size: 0x6C
	register struct CPad_dup_4 *Pad;
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


// address: 0x8008F834
// line start: 173
// line end:   285
unsigned char Init_ctrl_pos__Fv_addr_8008F834() {
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


// address: 0x8008FD24
// line start: 539
// line end:   644
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


// address: 0x80090338
// line start: 495
// line end:   615
void PrintCtrlString__FiiUcic_addr_80090338(int x, int y, unsigned char cjustflag, int str_num, int col) {
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


// address: 0x80092018
// line start: 620
// line end:   735
void PrintCtrlString__FiiUcic_addr_80092018(int x, int y, unsigned char cjustflag, int str_num, int col) {
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


// address: 0x80091DEC
// line start: 281
// line end:   292
bool RemoveCtrlScreen__Fv() {
}


// address: 0x8008F7EC
// line start: 164
// line end:   168
void RemoveCtrlScreen__Fv_addr_8008F7EC() {
}


// address: 0x80091734
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


// address: 0x8009165C
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


// address: 0x80090D8C
// line start: 761
// line end:   761
void _GLOBAL__D_CtrlBorder() {
}


// address: 0x80090790
// line start: 719
// line end:   719
void _GLOBAL__D_ctrlflag() {
}


// address: 0x80090DC4
// line start: 761
// line end:   761
void _GLOBAL__I_CtrlBorder() {
}


// address: 0x800907B8
// line start: 719
// line end:   719
void _GLOBAL__I_ctrlflag() {
}


// address: 0x80091D88
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


// address: 0x8008F090
// line start: 164
// line end:   181
char *get_action_str__Fii(int pval, int combo) {
	// register: 4
	// size: 0x10
	register struct KEY_ASSIGNS *ac;
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F730
// line start: 108
// line end:   122
char *get_action_str__Fii_addr_8008F730(int pval, int combo) {
	{
		// register: 6
		register int i;
	}
}


// address: 0x8008F7B0
// line start: 152
// line end:   158
int get_key_pad__Fi(int n) {
	// register: 3
	register int i;
}


// address: 0x8008FA30
// line start: 210
// line end:   220
int get_key_pad__Fi_addr_8008FA30(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns *pa;
}


// address: 0x8008F108
// line start: 210
// line end:   220
int get_key_pad__Fi_addr_8008F108(int n) {
	// register: 3
	register int i;
	// register: 5
	// size: 0xC
	register struct pad_assigns_dup_4 *pa;
}


// address: 0x8008F9BC
// line start: 432
// line end:   532
unsigned char main_ctrl_setup__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad_dup_4 *Pad;
	// register: 5
	register int lv;
}


// address: 0x800900A8
// line start: 391
// line end:   488
unsigned char main_ctrl_setup__Fv_addr_800900A8() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80092C7C
// line start: 436
// line end:   586
unsigned char main_ctrl_setup__Fv_addr_80092C7C() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 16
	register int lv;
}


// address: 0x80091B94
// line start: 475
// line end:   613
unsigned char main_ctrl_setup__Fv_addr_80091B94() {
	// register: 17
	// size: 0x6C
	register struct CPad *Pad;
	// register: 5
	register int lv;
}


// address: 0x80092C50
// line start: 418
// line end:   429
bool only_one_button__Fi(int p) {
	// register: 3
	register int hand;
	// register: 5
	register int count;
}


// address: 0x8008FE78
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


// address: 0x8008FE38
// line start: 303
// line end:   312
int remove_padval__Fi(int p) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80090058
// line start: 380
// line end:   385
void restore_controller_settings__Fv() {
	{
	}
}


// address: 0x8008FEB8
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


// address: 0x8008F820
// line start: 370
// line end:   414
unsigned char set_buttons__Fii_addr_8008F820(int cline, int n) {
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


