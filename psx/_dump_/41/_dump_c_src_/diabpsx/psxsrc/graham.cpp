// C:\diabpsx\PSXSRC\GRAHAM.CPP

#include "types.h"

// address: 0x8009D8FC
// line start: 233
// line end:   326
void color_cycle__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register int cx;
	// register: 2
	register int cy;
	// address: 0xFFFFFF88
	// size: 0x20
	auto unsigned short ORIGPal[16];
	// address: 0xFFFFFFA8
	// size: 0x20
	auto unsigned short VRAMPal[16];
	// address: 0xFFFFFFC8
	// size: 0x20
	auto unsigned short CLUTPal[16];
	// register: 17
	register int paloffset;
	// register: 9
	register int y;
	// register: 16
	register bool ch;
	{
		{
			// register: 8
			register unsigned short col1;
			// register: 5
			register unsigned char r;
			// register: 4
			register unsigned char g;
			// register: 6
			register unsigned char b;
			{
				{
					{
						{
							{
								{
									// register: 10
									register int i;
									{
										// register: 11
										register unsigned short col1;
										// register: 3
										register unsigned short col2;
										// register: 14
										register unsigned char sb;
										// register: 13
										register unsigned char sg;
										// register: 8
										register unsigned char dr;
										// register: 7
										register unsigned char dg;
										// register: 5
										register unsigned char db;
										{
											// register: 5
											register int i;
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


// address: 0x8009DCBC
// line start: 331
// line end:   388
void penta_cycle_task__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFC8
	// size: 0x8
	auto struct RECT ClutR;
	// register: 2
	register int cx;
	// register: 3
	register int cy;
	// register: 16
	register int RVal;
	{
		{
			{
				// address: 0xFFFFFFD0
				// size: 0x20
				auto unsigned short Pal[16];
				// register: 3
				register int Col;
				{
					// register: 4
					register int f;
				}
			}
		}
	}
}


