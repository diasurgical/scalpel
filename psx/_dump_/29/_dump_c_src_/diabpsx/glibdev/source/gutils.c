// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x8001E744
unsigned char GU_InitModule();

// address: 0x8001E770
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E7A0
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E830
long GU_GetSRnd();

// address: 0x8001E850
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E88C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

