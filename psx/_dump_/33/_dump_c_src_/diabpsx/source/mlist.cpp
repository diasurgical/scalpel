// C:\diabpsx\SOURCE\MLIST.CPP

#include "types.h"

// address: 0x80075AAC
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80075AE4
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x80075B64
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x80075BFC
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x80075CAC
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	{
		// register: 9
		register unsigned int f;
		{
			{
				{
					{
						// register: 7
						register int i;
						{
							{
								{
									// register: 4
									register int minl;
									// register: 2
									register int maxl;
								}
							}
						}
					}
				}
			}
		}
	}
}


