// C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C

#include "types.h"

// address: 0x80021A44
void DoEpi(struct TASK *T);

// address: 0x80021A94
void DoPro(struct TASK *T);

// address: 0x80021AE4
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x80021B58
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


// address: 0x80021D40
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021F00
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021FDC
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80022064
void TSK_Die();

// address: 0x80022090
void TSK_Kill(struct TASK *T);

// address: 0x800220E0
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x800220F0
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8002216C
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x800221B4
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x800221F8
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x80022208
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x80022220
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x80022278
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022290
void TSK_ClearExecFilter();

// address: 0x800222B4
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


// address: 0x800223B4
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


// address: 0x8002242C
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x80022440
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x80022454
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x80022468
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8002247C
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022490
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x800224A4
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800224F0
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022510
void LoTskKill(struct TASK *T) {
}


// address: 0x80022580
void ExecuteTask(struct TASK *T);

// address: 0x800225D0
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800225E8
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022600
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022618
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x80022630
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022648
void TSK_ClearEpiProFilter();

// address: 0x8002267C
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8002268C
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x800226A4
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x800226CC
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x800226F8
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


