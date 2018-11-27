// C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C

#include "types.h"

// address: 0x8001EBC0
void DoEpi(struct TASK *T);

// address: 0x8001EC10
void DoPro(struct TASK *T);

// address: 0x8001EC60
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ECD4
// size: 0x5C
struct TASK *TSK_AddTask(unsigned long Id, void (*Main)(), int StackSize, int DataSize) {
	// register: 16
	// size: 0x5C
	register struct TASK *RetTask;
	// register: 17
	register long hndTask;
	// address: 0xFFFFFFC8
	// size: 0x20
	auto struct GAL_STRUCT G[4];
}


// address: 0x8001EEBC
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F07C
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F158
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F1E0
void TSK_Die();

// address: 0x8001F20C
void TSK_Kill(struct TASK *T);

// address: 0x8001F25C
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F26C
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F2E8
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F330
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F374
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F384
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F39C
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F3F4
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F40C
void TSK_ClearExecFilter();

// address: 0x8001F430
int TSK_KillTasks(struct TASK *CallingT, unsigned long Id, unsigned long Mask) {
	// register: 17
	register int TasksKilled;
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	// register: 18
	register unsigned char WasCurrentTaskKilled;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F530
void TSK_IterateTasks(unsigned long Id, unsigned long Mask, void (*CallBack)()) {
	// register: 4
	// size: 0x5C
	register struct TASK *T;
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F5A8
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F5BC
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F5D0
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F5E4
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F5F8
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F60C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F620
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F66C
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F68C
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F6FC
void ExecuteTask(struct TASK *T);

// address: 0x8001F74C
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F764
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F77C
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F794
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7AC
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F7C4
void TSK_ClearEpiProFilter();

// address: 0x8001F7F8
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F808
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F820
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F848
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F874
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


