// C:\diabpsx\SOURCE\MLIST.CPP

#include "types.h"

// address: 0x8007D1C8
// line start: 71
// line end:   76
void ML_Init__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x8007D200
// line start: 85
// line end:   100
int ML_GetList__Fi(int Level) {
	// register: 2
	register int RetVal;
}


// address: 0x8007D280
// line start: 109
// line end:   124
int ML_SetRandomList__Fi(int Level) {
	// register: 4
	register int NumOfLists;
}


// address: 0x8007D318
// line start: 135
// line end:   151
int ML_SetList__Fii(int Level, int List) {
	// register: 2
	register int NumOfLists;
}


// address: 0x8007D3C8
// line start: 163
// line end:   216
int ML_GetPresetMonsters__FiPiUl(int currlevel, int *typelist, unsigned long QuestsNeededMask) {
	// register: 10
	// size: 0x10
	register struct MonstList *Mlist;
	// register: 18
	register int NumOfMonsters;
	// register: 16
	register int ThisList;
	// address: 0xFFFFFFC0
	// size: 0x28
	auto int Index[10];
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


