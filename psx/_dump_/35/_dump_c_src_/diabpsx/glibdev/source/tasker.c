// C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C

#include "types.h"

// address: 0x8001EC20
void DoEpi(struct TASK *T);

// address: 0x8001EC70
void DoPro(struct TASK *T);

// address: 0x8001ECC0
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x8001ED34
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


// address: 0x8001EF1C
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x8001F0DC
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x8001F1B8
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x8001F240
void TSK_Die();

// address: 0x8001F26C
void TSK_Kill(struct TASK *T);

// address: 0x8001F2BC
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x8001F2CC
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x8001F348
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x8001F390
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8001F3D4
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x8001F3E4
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x8001F3FC
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8001F454
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F46C
void TSK_ClearExecFilter();

// address: 0x8001F490
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


// address: 0x8001F590
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


// address: 0x8001F608
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x8001F61C
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x8001F630
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8001F644
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x8001F658
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x8001F66C
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x8001F680
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6CC
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x8001F6EC
void LoTskKill(struct TASK *T) {
}


// address: 0x8001F75C
void ExecuteTask(struct TASK *T);

// address: 0x8001F7AC
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7C4
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7DC
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F7F4
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8001F80C
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x8001F824
void TSK_ClearEpiProFilter();

// address: 0x8001F858
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x8001F868
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x8001F880
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x8001F8A8
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8001F8D4
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


