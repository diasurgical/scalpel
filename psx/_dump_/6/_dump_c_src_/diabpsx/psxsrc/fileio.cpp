// C:\diabpsx\PSXSRC\FILEIO.CPP

#include "types.h"

// address: 0x8007B598
// size: 0x14
struct FileIO *__6FileIOUl(struct FileIO *this, unsigned long OurMemId) {
}


// address: 0x8007B5E8
void ___6FileIO(struct FileIO *this, int __in_chrg) {
}


// address: 0x8007B63C
long Read__6FileIOPCcUl(struct FileIO *this, char *Name, unsigned long RamId) {
	// register: 17
	register int MemSize;
	// register: 17
	register long MyHnd;
	// register: 18
	register unsigned char *LoadAddr;
}


// address: 0x8007B7A4
int FileLen__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B808
void FileNotFound__6FileIOPCc(struct FileIO *this, char *Name) {
}


// address: 0x8007B828
bool StreamFile__6FileIOPCciPFPUciib_bii(struct FileIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
}


// address: 0x8007B908
bool ReadAtAddr__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Dest, int Len) {
}


// address: 0x8007B9CC
void DumpOldPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BA30
void SetSearchPath__6FileIOPCc(struct FileIO *this, char *Path) {
}


// address: 0x8007BB0C
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


// address: 0x8007BC20
char *CopyPathItem__6FileIOPcPCc(struct FileIO *this, char *Dst, char *Src) {
	// register: 16
	register char *Ptr;
	// register: 17
	register int Len;
}


// address: 0x8007BCC8
void LockSearchPath__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD20
void UnlockSearchPath__6FileIO(struct FileIO *this) {
	{
		{
		}
	}
}


// address: 0x8007BD78
bool SearchPathExists__6FileIO(struct FileIO *this) {
}


// address: 0x8007BD8C
bool Save__6FileIOPCcPUci(struct FileIO *this, char *Name, unsigned char *Addr, int Len) {
}


