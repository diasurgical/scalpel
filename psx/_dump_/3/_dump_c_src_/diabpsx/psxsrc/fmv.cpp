// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x8014662C
void DsDataCallback() {
}


// address: 0x80146634
void DsReadyCallback() {
}


// address: 0x8014663C
void SetDecDCT() {
}


// address: 0x80146644
short PlayFMV(struct StrInfo *str) {
	// address: 0xFFFFFFC0
	// size: 0x18
	auto struct CdlFILE fp;
	// register: 16
	register unsigned long *frame;
	// register: 17
	register short frameRetry;
	// register: 18
	register short strQuit;
	// address: 0xFFFFFFD8
	auto short fadeVol;
	{
		// register: 2
		// size: 0x6C
		register struct CPad *P1;
	}
}


// address: 0x801469B4
void StrDecDCToutCB() {
}


// address: 0x80146ABC
void STR_CallBack(int handle) {
}


// address: 0x80146ACC
void STR_SetRing() {
}


// address: 0x80146B28
void STR_RingEnd() {
}


// address: 0x80146B4C
unsigned long *STR_GetNext() {
	// register: 19
	register unsigned long *addr;
	// register: 18
	register int count;
	// register: 16
	// size: 0x8
	register struct chunkhdrstruct *chunk;
	// register: 17
	register int frameoff;
	{
		// register: 4
		register int i;
		{
			{
				// register: 4
				register int i;
			}
		}
	}
}


// address: 0x80146D08
void StrInit(struct StrInfo *str) {
	// register: 23
	register short x;
	// register: 22
	register short y;
	// register: 30
	register short w;
	// register: 21
	register short h;
	// register: 20
	register short scrWidth;
	// register: 16
	register unsigned long imageBufSize;
	{
		// register: 4
		register int i;
	}
}


// address: 0x8014713C
void StrEnd() {
}


// address: 0x801471FC
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014726C
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x80147320
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x801474FC
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x801475A4
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x80147678
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x801476AC
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x8014771C
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x80147750
unsigned short GetDCT_MODE() {
}


// address: 0x80147774
void PrintVLCBufSize() {
}


// address: 0x8014781C
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x8014783C
void FMVFreeMem(unsigned long *Addr) {
}


