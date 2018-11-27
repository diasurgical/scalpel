// C:\diabpsx\SOURCE\CHOOSEM.CPP

#include "types.h"

// address: 0x80153198
unsigned long CM_QuestToBitPattern__Fi(int QuestNum) {
	// register: 16
	register unsigned long RetVal;
}


// address: 0x80153270
void CM_ShowMonsterList__Fii(int Level, int List) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x801532E8
int CM_ChooseMonsterList__FiUl(int Level, unsigned long QuestsNeededMask) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	{
		{
			// address: 0xFFFFFFE8
			auto int ListChosen;
		}
	}
}


// address: 0x80153388
int NoUiListChoose__FiUl(int Level, unsigned long QuestsNeededMask) {
}


// address: 0x80153390
void ChooseTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// address: 0xFFFFFFC8
	auto int *List;
	// register: 16
	register int Level;
	// register: 22
	register bool Chosen;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct MonstLevel *ThisLev;
	// register: 30
	register unsigned int NumOfLists;
	// register: 17
	register unsigned long QuestsNeededMask;
	// address: 0xFFFFFF00
	// size: 0x32
	auto unsigned char ListsToChooseFrom[50];
	// register: 21
	register unsigned int Selection;
	// address: 0xFFFFFF38
	// size: 0x64
	auto char Buffer[100];
	{
		// register: 16
		register unsigned int f;
		// register: 18
		// size: 0x10
		register struct MonstList *ThisList;
		// register: 16
		// size: 0x6C
		register struct CPad *Pad;
		{
			{
				// register: 10
				register int r;
				// register: 9
				register int g;
				// register: 8
				register int b;
				{
					{
						{
							{
								// address: 0xFFFFFFA0
								// size: 0x28
								auto char Texter[40];
								{
									// register: 16
									register unsigned int f;
									// register: 16
									// size: 0x6C
									register struct CPad *Pad;
									{
										{
											// register: 19
											register int r;
											// register: 18
											register int g;
											// register: 17
											register int b;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x801538A4
void ShowTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
	// address: 0xFFFFFFC8
	auto int List;
	// register: 16
	register int Level;
	// register: 20
	register bool Finished;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct MonstLevel *ThisLev;
	// address: 0xFFFFFF60
	// size: 0x64
	auto char Buffer[100];
	{
		// register: 16
		register unsigned int f;
		// register: 18
		// size: 0x10
		register struct MonstList *ThisList;
	}
}


// address: 0x80153AD4
int GetListsAvailable__FiUlPUc(int Level, unsigned long QuestsNeededMask, unsigned char *ListofLists) {
	// register: 17
	register int NumOfChoices;
	// register: 19
	register int NumOfLists;
	// register: 20
	// size: 0x8
	register struct MonstLevel *ThisLev;
	{
		// register: 16
		register int f;
	}
}


