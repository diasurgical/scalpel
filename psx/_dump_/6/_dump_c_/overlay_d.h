#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x801367C0
void DsDataCallback() {
}


// address: 0x801367C8
void DsReadyCallback() {
}


// address: 0x801367D0
void SetDecDCT() {
}


// address: 0x801367D8
short PlayFMVOverLay(struct StrInfo *str) {
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


// address: 0x80136B38
void StrDecDCToutCB() {
}


// address: 0x80136C40
void STR_CallBack(int handle) {
}


// address: 0x80136C50
void STR_SetRing() {
}


// address: 0x80136CAC
void STR_RingEnd() {
}


// address: 0x80136CD0
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


// address: 0x80136E8C
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


// address: 0x801372C0
void StrEnd() {
}


// address: 0x80137380
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x801373F0
short StrKickCD(struct CdlLOC *loc) {
	// register: 16
	register short seekRetry;
	// register: 17
	register short readRetry;
}


// address: 0x801374A4
unsigned long *StrGetNextFrame() {
	// register: 16
	register long timer;
	// register: 17
	register unsigned long *addr;
	// register: 16
	// size: 0x20
	register struct StHEADER *sector;
}


// address: 0x80137680
void StrVLCFrame(unsigned long *frame) {
}


// address: 0x80137728
void StrDrawDecodeSync() {
	// register: 3
	register long timer;
}


// address: 0x801377FC
short StrFadeOutVol(short *fadeVol) {
}


// address: 0x80137830
long GetDCToutSize() {
	// register: 3
	register unsigned short h;
}


// address: 0x801378A0
unsigned short ScalePPW(unsigned short n) {
}


// address: 0x801378D4
unsigned short GetDCT_MODE() {
}


// address: 0x801378F8
void PrintVLCBufSize() {
}


// address: 0x801379A0
unsigned long FMVAllocMem(unsigned long MemSize) {
}


// address: 0x801379C0
void FMVFreeMem(unsigned long *Addr) {
}


// address: 0x801379E0
unsigned short GetDown__C4CPad(struct CPad *this) {
}


