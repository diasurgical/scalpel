// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x8001F9D0
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F9E0
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001FA1C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA2C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FA44
unsigned char GSYS_InitMachine();

// address: 0x8001FA7C
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001FAB0
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


