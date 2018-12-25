// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800A0158
// line start: 67
// line end:   99
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A0268
// line start: 105
// line end:   108
void InitHelp__Fv() {
}


// address: 0x800A02AC
// line start: 112
// line end:   132
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800A0354
// line start: 137
// line end:   174
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A049C
// line start: 177
// line end:   252
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


// address: 0x800A0878
// line start: 256
// line end:   269
void DrawHelp__Fv() {
}


// address: 0x800A0914
// line start: 270
// line end:   270
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A093C
// line start: 270
// line end:   270
void _GLOBAL__I_DrawHelp__Fv() {
}


