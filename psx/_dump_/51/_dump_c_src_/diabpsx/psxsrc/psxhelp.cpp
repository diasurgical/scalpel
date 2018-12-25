// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800A4108
// line start: 69
// line end:   103
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A4228
// line start: 109
// line end:   112
void InitHelp__Fv() {
}


// address: 0x800A426C
// line start: 116
// line end:   136
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A4314
// line start: 141
// line end:   179
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A4470
// line start: 182
// line end:   257
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


// address: 0x800A484C
// line start: 261
// line end:   274
void DrawHelp__Fv() {
}


// address: 0x800A48E8
// line start: 275
// line end:   275
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A4910
// line start: 275
// line end:   275
void _GLOBAL__I_DrawHelp__Fv() {
}


