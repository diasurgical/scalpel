// C:\diabpsx\PSXSRC\CDIO.CPP

#include "types.h"

// address: 0x800839DC
// size: 0x14
// line start: 122
// line end:   125
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80083A20
// line start: 135
// line end:   135
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80083A78
// line start: 145
// line end:   155
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083A9C
// line start: 167
// line end:   199
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80083B20
// line start: 208
// line end:   218
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083B44
// line start: 224
// line end:   243
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80083C24
// line start: 260
// line end:   261
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80083C34
// line start: 266
// line end:   293
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFEB8
	// size: 0x100
	auto char SearchBuffer[256];
	// register: 17
	register int pos;
	// register: 3
	register int c;
	// register: 16
	register int size;
	// address: 0xFFFFFFB8
	// size: 0x19
	auto char Monkey[25];
	{
		// register: 3
		register int i;
	}
}


// address: 0x80083D80
// line start: 300
// line end:   372
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 22
	register unsigned char *Dest;
	// address: 0xFFFFFFD0
	auto int OrigSize;
	// register: 20
	register unsigned long Pos;
	// register: 30
	// size: 0x14
	register struct STRHDR *sh;
	// register: 16
	register int ah;
	// register: 19
	register unsigned char NoChunks;
	// register: 23
	register unsigned char Count;
	{
		// register: 17
		register int SizeToRead;
		// register: 19
		register unsigned char *ptr;
	}
}


// address: 0x8008400C
// line start: 381
// line end:   421
bool LoAsyncStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register long hndText;
	// register: 18
	register unsigned char *Dest;
	// register: 21
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


