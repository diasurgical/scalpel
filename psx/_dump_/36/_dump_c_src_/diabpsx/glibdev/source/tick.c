// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x8001E6A8
void TICK_InitModule();

// address: 0x8001E6C8
void TICK_Set(unsigned long Val);

// address: 0x8001E6D8
unsigned long TICK_Get();

// address: 0x8001E6E8
void TICK_Update();

// address: 0x8001E708
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001E734
char *TICK_GetDateString();

// address: 0x8001E744
char *TICK_GetTimeString();

