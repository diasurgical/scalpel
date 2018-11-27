// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x800225D8
// size: 0x8
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x800225E8
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

// address: 0x80022624
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x80022634
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8002264C
unsigned char GSYS_InitMachine();

// address: 0x800226A0
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x800226D4
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


