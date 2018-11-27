// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x8001E754
unsigned char GU_InitModule();

// address: 0x8001E780
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7B0
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E840
long GU_GetSRnd();

// address: 0x8001E860
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E89C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

