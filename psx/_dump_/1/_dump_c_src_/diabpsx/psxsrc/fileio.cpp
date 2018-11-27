// C:\diabpsx\PSXSRC\FILEIO.CPP

#include "types.h"

// address: 0x8007B52C
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007B57C
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007B5D0
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007B738
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B79C
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B7BC
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B89C
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B960
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007B9C4
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007BAA0
bool FindFile__6FileIOPCcPc(struct FileIO *this, char *Name, char *Buffa) {
	{
		{
			// register: 19
			register bool Success;
			{
				{
					// register: 18
					register char *Path;
				}
			}
		}
	}
}


// address: 0x8007BBB4
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007BC5C
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007BCB4
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BD0C
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD20
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


