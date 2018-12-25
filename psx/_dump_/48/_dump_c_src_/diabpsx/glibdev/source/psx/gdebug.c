// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x8001E8B0
// line start: 53
// line end:   60
unsigned char DBG_OpenModule();

// address: 0x8001E8B8
// line start: 72
// line end:   79
void DBG_PollHost();

// address: 0x8001E8C0
// line start: 88
// line end:   92
void DBG_Halt();

// address: 0x8001E8C8
// line start: 108
// line end:   126
void DBG_SendMessage(char *e);

// address: 0x8001E8E0
// line start: 135
// line end:   136
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E8F0
// line start: 146
// line end:   158
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E91C
// line start: 164
// line end:   165
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E92C
// line start: 175
// line end:   179
void SendPsyqString(char *e);

// address: 0x8001E934
// line start: 188
// line end:   189
void DBG_SetPollRoutine(void (*Func)());

