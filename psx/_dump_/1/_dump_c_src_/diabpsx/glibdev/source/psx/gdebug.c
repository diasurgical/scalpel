// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x8001F6C0
unsigned char DBG_OpenModule();

// address: 0x8001F6C8
void DBG_PollHost();

// address: 0x8001F6D0
void DBG_Halt();

// address: 0x8001F6D8
void DBG_SendMessage(char *e);

// address: 0x8001F6F0
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001F700
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001F72C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001F73C
void SendPsyqString(char *e);

// address: 0x8001F744
void DBG_SetPollRoutine(void (*Func)());

