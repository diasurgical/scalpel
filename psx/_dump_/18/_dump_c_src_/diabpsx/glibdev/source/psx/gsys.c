// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x8001F8B0
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F8C0
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F8FC
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F90C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F924
unsigned char GSYS_InitMachine();

// address: 0x8001F978
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9AC
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


