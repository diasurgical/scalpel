// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800AE13C
// line start: 72
// line end:   74
void RemoveHelp__Fv() {
}


// address: 0x800AE150
// line start: 80
// line end:   150
void HelpPad__Fv() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x800AE3F8
// line start: 156
// line end:   176
int GetControlKey__FiPb(int str, bool *iscombo) {
	// register: 6
	// size: 0x10
	register struct KEY_ASSIGNS *ta;
	{
		// register: 7
		register int i;
	}
}


// address: 0x800AE4A0
// line start: 228
// line end:   233
void InitHelp__Fv() {
}


// address: 0x800AE4EC
// line start: 294
// line end:   342
int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp) {
	// register: 2
	register int eln;
	{
		{
			// register: 16
			register int key;
			// address: 0xFFFFFFD8
			auto bool combo;
			{
				{
					// register: 2
					register int nkey;
				}
			}
		}
	}
}


// address: 0x800AE700
// line start: 346
// line end:   411
void DisplayHelp__Fv() {
	// register: 23
	// size: 0xC
	register struct HelpStruct *hp;
	// register: 22
	register int y;
	{
		// address: 0xFFFFFFB8
		auto int i;
		{
			// register: 16
			register char *txt;
			{
				{
					{
						{
							// register: 30
							register int nlen;
						}
					}
				}
			}
		}
	}
}


// address: 0x800AEA80
// line start: 415
// line end:   452
void DrawHelp__Fv() {
	// address: 0x8011D788
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
}


// address: 0x800AECF8
// line start: 454
// line end:   454
void _GLOBAL__D_DrawHelp__Fv() {
}


// address: 0x800AED38
// line start: 454
// line end:   454
void _GLOBAL__I_DrawHelp__Fv() {
}


