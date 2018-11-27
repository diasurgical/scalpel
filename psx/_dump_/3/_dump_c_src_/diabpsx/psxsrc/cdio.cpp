// C:\diabpsx\PSXSRC\CDIO.CPP

#include "types.h"

// address: 0x80082F58
// size: 0x14
struct CdIO *__4CdIOUl(struct CdIO *this, unsigned long OurMemId) {
}


// address: 0x80082F9C
void ___4CdIO(struct CdIO *this, int __in_chrg) {
}


// address: 0x80082FF4
bool FileExists__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083018
bool LoReadFileAtAddr__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x80083040
int GetFileLength__4CdIOPCc(struct CdIO *this, char *Name) {
}


// address: 0x80083064
bool LoSave__4CdIOPCcPUci(struct CdIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x80083144
void LoStreamCallBack__Fi(int handle) {
}


// address: 0x80083154
bool CD_GetCdlFILE__FPCcP7CdlFILE(char *Name, struct CdlFILE *RetFile) {
	// address: 0xFFFFFF98
	// size: 0x19
	auto char SearchBuffer[25];
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


// address: 0x800832A0
bool LoStreamFile__4CdIOPCciPFPUciib_bii(struct CdIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 23
	register unsigned char *Dest;
	// register: 30
	register int OrigSize;
	// register: 21
	register unsigned long Pos;
	// address: 0xFFFFFFC0
	// size: 0x14
	auto struct STRHDR *sh;
	// register: 17
	register int ah;
	// address: 0xFFFFFFC8
	auto unsigned char Count;
	{
		// register: 16
		register int SizeToRead;
		// register: 19
		register unsigned char *ptr;
		{
			// register: 17
			register int i;
		}
	}
}


