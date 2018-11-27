// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x8001E648
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001E668
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001E678
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001E688
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001E6A8
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E6D4
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001E6E4
// line start: 76
// line end:   77
char *TICK_GetTimeString();

