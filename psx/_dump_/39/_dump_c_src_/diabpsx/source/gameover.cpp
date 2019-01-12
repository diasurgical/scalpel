// C:\diabpsx\SOURCE\GAMEOVER.CPP

#include "types.h"

// address: 0x80081E54
// line start: 83
// line end:   84
bool IS_GameOver__Fv() {
}


// address: 0x80081E7C
// line start: 94
// line end:   98
void GO_DoGameOver__Fv() {
}


// address: 0x80081EC4
// line start: 116
// line end:   211
void GameOverTask__FP4TASK(struct TASK *T) {
	// register: 19
	register bool TimeOut;
	// register: 17
	register int TimeOutTime;
	// register: 18
	register int lasttick;
	{
		{
			{
				// register: 4
				// size: 0xEC
				register struct CPad *Pad;
				{
					{
						// register: 16
						register int ntick;
						{
							// register: 16
							register int f;
						}
					}
				}
			}
		}
	}
}


// address: 0x800820C8
// line start: 220
// line end:   242
void PrintGameOver__Fv() {
	// address: 0xFFFFFFD8
	// size: 0x10
	auto struct Dialog PBack;
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT PRect;
	// register: 16
	register int otpos;
	// register: 18
	register int oldDotpos;
	// register: 16
	register int oldTotpos;
}


