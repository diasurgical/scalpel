// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800A21BC
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800A22C4
void InitHelp__Fv() {
}


// address: 0x800A2308
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
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 18
	register int l;
}


// address: 0x800A2484
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
void DrawHelp__Fv() {
}


// address: 0x800A28E4
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800A290C
void _GLOBAL__I_DrawHelp__Fv() {
}


