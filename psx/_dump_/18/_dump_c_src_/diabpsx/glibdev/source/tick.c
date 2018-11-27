// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x8001E648
void TICK_InitModule();

// address: 0x8001E668
void TICK_Set(unsigned long Val);

// address: 0x8001E678
unsigned long TICK_Get();

// address: 0x8001E688
void TICK_Update();

// address: 0x8001E6A8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E6D4
char *TICK_GetDateString();

// address: 0x8001E6E4
char *TICK_GetTimeString();

