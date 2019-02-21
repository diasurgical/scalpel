// C:\diabpsx\PSXSRC\PSXHELP.CPP

#include "types.h"

// address: 0x800A0354
// line start: 137
// line end:   174
void CheckStr__FPcT0i(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 17
	register int l;
}


// address: 0x800A23B0
// line start: 135
// line end:   169
void CheckStr__FPcT0i_addr_800A23B0(char *s, char *d, int pos) {
	// register: 20
	register char c;
	// register: 18
	register int l;
}


// address: 0x800AE6A0
// line start: 346
// line end:   411
void DisplayHelp__Fv() {
	// register: 23
	// size: 0xC
	register struct HelpStruct_dup_17 *hp;
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


// address: 0x800A2484
// line start: 172
// line end:   247
void DisplayHelp__Fv_addr_800A2484() {
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


// address: 0x800AE5CC
// line start: 346
// line end:   411
void DisplayHelp__Fv_addr_800AE5CC() {
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


// address: 0x800AE48C
// line start: 294
// line end:   342
int DrawHelpLine__FiiPccccP10HelpStruct(int x, int y, char *txt, char R, int G, int B, struct HelpStruct_dup_17 *hp) {
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


// address: 0x800AE3B8
// line start: 294
// line end:   342
int DrawHelpLine__FiiPccccP10HelpStruct_addr_800AE3B8(int x, int y, char *txt, char R, int G, int B, struct HelpStruct *hp) {
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


// address: 0x800A2848
// line start: 251
// line end:   264
void DrawHelp__Fv() {
}


// address: 0x800AEA20
// line start: 415
// line end:   452
void DrawHelp__Fv_addr_800AEA20() {
	// address: 0x80121ED0
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
}


// address: 0x800AEA80
// line start: 415
// line end:   452
void DrawHelp__Fv_addr_800AEA80() {
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


// address: 0x800AE94C
// line start: 415
// line end:   452
void DrawHelp__Fv_addr_800AE94C() {
	// address: 0x80121DC8
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
}


// address: 0x800AEA08
// line start: 415
// line end:   452
void DrawHelp__Fv_addr_800AEA08() {
	// address: 0x8011D740
	// size: 0x10
	static struct Dialog txtBack;
	// register: 16
	register int otpos;
	// register: 19
	register int oldDot;
	// register: 20
	register int OldPrintOT;
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


// address: 0x800A21BC
// line start: 67
// line end:   97
void HelpPad__Fv() {
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
}


// address: 0x800AE0F0
// line start: 80
// line end:   150
void HelpPad__Fv_addr_800AE0F0() {
	// register: 16
	// size: 0xEC
	register struct CPad_dup_17 *Pad;
}


// address: 0x800AE01C
// line start: 80
// line end:   150
void HelpPad__Fv_addr_800AE01C() {
	// register: 16
	// size: 0xEC
	register struct CPad *Pad;
}


// address: 0x800A22C4
// line start: 103
// line end:   106
void InitHelp__Fv() {
}


// address: 0x800AE0DC
// line start: 72
// line end:   74
void RemoveHelp__Fv() {
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


