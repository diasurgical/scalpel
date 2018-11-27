// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x8001E900
unsigned char DBG_OpenModule();

// address: 0x8001E908
void DBG_PollHost();

// address: 0x8001E910
void DBG_Halt();

// address: 0x8001E918
void DBG_SendMessage(char *e);

// address: 0x8001E930
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E940
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E96C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E97C
void SendPsyqString(char *e);

// address: 0x8001E984
void DBG_SetPollRoutine(void (*Func)());

