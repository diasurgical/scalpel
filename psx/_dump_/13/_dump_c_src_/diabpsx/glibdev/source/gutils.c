// C:\DIABPSX\GLIBDEV\SOURCE\GUTILS.C

#include "types.h"

// address: 0x8001E6F4
// line start: 55
// line end:   57
unsigned char GU_InitModule();

// address: 0x8001E720
// line start: 65
// line end:   70
void GU_SetRndSeed(unsigned long *Tab) {
	// register: 5
	register int f;
}


// address: 0x8001E750
// line start: 76
// line end:   95
unsigned long GU_GetRnd() {
	// register: 6
	register unsigned long RetVal;
}


// address: 0x8001E7E0
// line start: 103
// line end:   104
long GU_GetSRnd();

// address: 0x8001E800
// line start: 114
// line end:   115
unsigned long GU_GetRndRange(unsigned int Range);

// address: 0x8001E83C
// line start: 126
// line end:   128
unsigned int GU_AlignVal(unsigned int w, unsigned int round);

