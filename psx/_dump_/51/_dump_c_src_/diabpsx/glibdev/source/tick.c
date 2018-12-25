// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x8001FCA4
// line start: 32
// line end:   33
void TICK_InitModule();

// address: 0x8001FCC4
// line start: 41
// line end:   42
void TICK_Set(unsigned long Val);

// address: 0x8001FCD4
// line start: 49
// line end:   50
unsigned long TICK_Get();

// address: 0x8001FCE4
// line start: 58
// line end:   59
void TICK_Update();

// address: 0x8001FD04
// line start: 66
// line end:   67
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001FD30
// line start: 71
// line end:   72
char *TICK_GetDateString();

// address: 0x8001FD40
// line start: 76
// line end:   77
char *TICK_GetTimeString();

