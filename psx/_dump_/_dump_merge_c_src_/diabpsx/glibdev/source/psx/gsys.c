// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GSYS.C

#include "types.h"

// address: 0x8001FA7C
// line start: 167
// line end:   181
unsigned char GSYS_CheckPtr(void *Ptr) {
}


// address: 0x8001F9D0
// size: 0x8
// line start: 73
// line end:   74
struct MEM_INFO *GSYS_GetWorkMemInfo();

// address: 0x8001FA44
// line start: 146
// line end:   148
unsigned char GSYS_InitMachine();

// address: 0x8001FA2C
// line start: 129
// line end:   134
unsigned char GSYS_IsStackCorrupted(void *Stack, unsigned long StackSize) {
}


// address: 0x8001FAB0
// line start: 192
// line end:   196
unsigned char GSYS_IsStackOutOfBounds(void *Stack, unsigned long StackSize) {
	// register: 3
	register unsigned long ThisSp;
}


// address: 0x8001FA1C
// line start: 109
// line end:   114
void GSYS_MarkStack(void *Stack, unsigned long StackSize) {
}


// address: 0x8001F9E0
// line start: 88
// line end:   90
void GSYS_SetStackAndJump(void *Stack, void (*Func)(), void *Param);

