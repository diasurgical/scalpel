// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x8001E8B0
unsigned char DBG_OpenModule();

// address: 0x8001E8B8
void DBG_PollHost();

// address: 0x8001E8C0
void DBG_Halt();

// address: 0x8001E8C8
void DBG_SendMessage(char *e);

// address: 0x8001E8E0
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E8F0
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E91C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E92C
void SendPsyqString(char *e);

// address: 0x8001E934
void DBG_SetPollRoutine(void (*Func)());

