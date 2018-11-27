// C:\DIABPSX\GLIBDEV\SOURCE\PSX\GDEBUG.C

#include "types.h"

// address: 0x8001E910
unsigned char DBG_OpenModule();

// address: 0x8001E918
void DBG_PollHost();

// address: 0x8001E920
void DBG_Halt();

// address: 0x8001E928
void DBG_SendMessage(char *e);

// address: 0x8001E940
void DBG_SetMessageHandler(void (*Func)());

// address: 0x8001E950
void DBG_Error(char *Text, char *File, int Line);

// address: 0x8001E97C
void DBG_SetErrorFunc(void (*EFunc)());

// address: 0x8001E98C
void SendPsyqString(char *e);

// address: 0x8001E994
void DBG_SetPollRoutine(void (*Func)());

