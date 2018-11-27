// C:\DIABPSX\GLIBDEV\SOURCE\TICK.C

#include "types.h"

// address: 0x8001F458
void TICK_InitModule();

// address: 0x8001F478
void TICK_Set(unsigned long Val);

// address: 0x8001F488
unsigned long TICK_Get();

// address: 0x8001F498
void TICK_Update();

// address: 0x8001F4B8
unsigned long TICK_GetAge(unsigned long OldTick);

// address: 0x8001F4E4
char *TICK_GetDateString();

// address: 0x8001F4F4
char *TICK_GetTimeString();

