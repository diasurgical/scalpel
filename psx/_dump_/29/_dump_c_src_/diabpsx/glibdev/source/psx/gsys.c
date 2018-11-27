// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x8001F900
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001F910
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x8001F94C
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F95C
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F974
unsigned char GSYS_InitMachine();

// address: 0x8001F9C8
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9FC
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


