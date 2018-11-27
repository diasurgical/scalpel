// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800A21BC
// line start: 67
// line end:   97
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A22C4
// line start: 103
// line end:   106
void InitHelp__Fv() {
}


// address: 0x800A2308
// line start: 110
// line end:   130
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A23B0
// line start: 135
// line end:   169
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 18
	register int l;
}


// address: 0x800A2484
// line start: 172
// line end:   247
void DisplayHelp__Fv() {
	// register: 22
	// size: 0x8
	register struct HelpStruct *hp;
	// register: 17
	register int y;
	// register: 2
	register int l;
	{
		// register: 20
		register int i;
		{
			// register: 18
			register char *txt;
			{
				{
					// address: 0xFFFFFFD0
					auto bool combo;
					// register: 16
					register int key;
				}
			}
		}
	}
}


// address: 0x800A2848
// line start: 251
// line end:   264
void DrawHelp__Fv() {
}


// address: 0x800A28E4
// line start: 265
// line end:   265
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A290C
// line start: 265
// line end:   265
void _GLOBAL__I_DrawHelp__Fv() {
}


