// C:\diabpsx\SOURCE\MULTI.CPP

#include "types.h"

// address: 0x8004EDEC
void buffer_init__FP7TBuffer(struct TBuffer *pBuf) {
}


// address: 0x8004EDF8
void NetSendLoPri__FPCUcUc(unsigned char *pbMsg, unsigned char bLen) {
}


// address: 0x8004EE1C
int InitLevelType__Fi(int l) {
}


// address: 0x8004EE68
void SetupLocalCoords__Fv() {
	// register: 4
	register int x;
	// register: 5
	register int y;
}


// address: 0x8004EFF8
void InitNewSeed__Fl(long newseed) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x8004F06C
unsigned char NetInit__FUcPUc(unsigned char bSinglePlayer, unsigned char *pfExitProgram) {
	// address: 0xFFFFFF18
	// size: 0x80
	auto char szPlayerDescript[128];
	// address: 0xFFFFFFC0
	// size: 0x2C
	auto struct _SNETPROGRAMDATA progdata;
	// address: 0xFFFFFF98
	// size: 0xC
	auto struct _SNETPLAYERDATA plrdata;
	{
		{
			// address: 0xFFFFFF98
			// size: 0x28
			auto struct _uiheroinfo heroinfo;
			{
				{
				}
			}
		}
	}
}


