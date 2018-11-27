// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x8001E6F4
unsigned char GU_InitModule();

// address: 0x8001E720
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E750
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E7E0
long GU_GetSRnd();

// address: 0x8001E800
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E83C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

