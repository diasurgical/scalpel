// C:\DIABPSX\GLIBDEV\SOURCE\TASKER.C

#include "types.h"

// address: 0x800218E8
void DoEpi(struct TASK *T);

// address: 0x80021938
void DoPro(struct TASK *T);

// address: 0x80021988
unsigned char TSK_OpenModule(unsigned long MemType);

// address: 0x800219FC
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


// address: 0x80021BE4
void TSK_DoTasks() {
	{
		// register: 16
		// size: 0x5C
		register struct TASK *NextT;
	}
}


// address: 0x80021DA4
void TSK_Sleep(int Frames) {
	// address: 0xFFFFFFF0
	// size: 0x5C
	auto struct TASK *T;
}


// address: 0x80021E80
void ReturnToSchedulerIfCurrentTask(struct TASK *T);

// address: 0x80021F08
void TSK_Die();

// address: 0x80021F34
void TSK_Kill(struct TASK *T);

// address: 0x80021F84
// size: 0x5C
struct TASK *TSK_GetFirstActive();

// address: 0x80021F94
unsigned char TSK_IsStackCorrupted(struct TASK *T) {
	{
		// register: 4
		register int LongsOk;
	}
}


// address: 0x80022010
void TSK_JumpAndResetStack(void (*RunFunc)()) {
	// register: 6
	// size: 0x5C
	register struct TASK *T;
}


// address: 0x80022058
void TSK_RepointProc(struct TASK *T, void (*Func)());

// address: 0x8002209C
// size: 0x5C
struct TASK *TSK_GetCurrentTask();

// address: 0x800220AC
unsigned char TSK_IsCurrentTask(struct TASK *T);

// address: 0x800220C4
// size: 0x5C
struct TASK *TSK_Exist(struct TASK *T, unsigned long Id, unsigned long Mask) {
	// register: 3
	// size: 0x5C
	register struct TASK *ptrTask;
	// register: 7
	// size: 0x5C
	register struct TASK *RetTask;
}


// address: 0x8002211C
void TSK_SetExecFilter(unsigned long Id, unsigned long Mask);

// address: 0x80022134
void TSK_ClearExecFilter();

// address: 0x80022158
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


// address: 0x80022258
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


// address: 0x800222D0
void TSK_MakeTaskInactive(struct TASK *T);

// address: 0x800222E4
void TSK_MakeTaskActive(struct TASK *T);

// address: 0x800222F8
void TSK_MakeTaskImmortal(struct TASK *T);

// address: 0x8002230C
void TSK_MakeTaskMortal(struct TASK *T);

// address: 0x80022320
unsigned char TSK_IsTaskActive(struct TASK *T);

// address: 0x80022334
unsigned char TSK_IsTaskMortal(struct TASK *T);

// address: 0x80022348
void DetachFromList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x80022394
void AddToList(struct TASK **Head, struct TASK *ThisObj);

// address: 0x800223B4
void LoTskKill(struct TASK *T) {
}


// address: 0x80022424
void ExecuteTask(struct TASK *T);

// address: 0x80022474
void (*TSK_SetDoTasksPrologue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x8002248C
void (*TSK_SetDoTasksEpilogue(void (*Func)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224A4
void (*TSK_SetTaskPrologue(void (*Pro)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224BC
void (*TSK_SetTaskEpilogue(void (*Epi)()))() {
	// register: 2
	register void (*Old)();
}


// address: 0x800224D4
void TSK_SetEpiProFilter(unsigned long Id, unsigned long Mask);

// address: 0x800224EC
void TSK_ClearEpiProFilter();

// address: 0x80022520
void TSK_SetExtraStackProtection(unsigned char OnOff);

// address: 0x80022530
void (*TSK_SetStackFloodCallback(void (*Func)()))() {
	// register: 2
	register void (*OldFunc)();
}


// address: 0x80022548
int TSK_SetExtraStackSize(int Size) {
	// register: 3
	register int OldSize;
}


// address: 0x80022570
void ExtraMarkStack(unsigned long *Stack, int SizeLongs) {
	// register: 3
	register int f;
}


// address: 0x8002259C
int CheckExtraStack(unsigned long *Stack, int LongsToCheck) {
	// register: 3
	register unsigned long f;
}


