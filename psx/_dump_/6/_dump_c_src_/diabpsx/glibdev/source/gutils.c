// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x8001F504
unsigned char GU_InitModule();

// address: 0x8001F530
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001F560
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001F5F0
long GU_GetSRnd();

// address: 0x8001F610
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001F64C
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

