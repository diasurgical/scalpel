// C:\diabpsx\SOURCE\COMPMAP.CPP

#include "types.h"

// address: 0x80078B08
// size: 0xB8
struct CompLevelMaps *__13CompLevelMaps(struct CompLevelMaps *this) {
}


// address: 0x80078B34
void ___13CompLevelMaps(struct CompLevelMaps *this, int __in_chrg) {
}


// address: 0x80078B5C
void Init__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		// register: 3
		register int f;
	}
}


// address: 0x80078B8C
void Dump__13CompLevelMaps(struct CompLevelMaps *this) {
	{
		{
			{
				// register: 16
				register int f;
			}
		}
	}
}


// address: 0x80078C30
void DumpMap__13CompLevelMapsi(struct CompLevelMaps *this, int MapNum) {
	{
		{
		}
	}
}


// address: 0x80078C98
// size: 0xF1C
struct DLevel *UseMap__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x80078D6C
void ReleaseMap__13CompLevelMapsP6DLevel(struct CompLevelMaps *this, struct DLevel *Map) {
}


// address: 0x80078DDC
bool IsMapCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
}


// address: 0x80078E50
void WriteBackCachedMap__13CompLevelMaps(struct CompLevelMaps *this) {
	// register: 16
	register unsigned char *DecDest;
	// register: 19
	register long hndDec;
	// register: 18
	register int CompSize;
	{
		{
			// register: 16
			register long hndSplit;
		}
	}
}


// address: 0x80079064
void DecompToCached__13CompLevelMapsi(struct CompLevelMaps *this, int Val) {
	// register: 17
	// size: 0xF1C
	register struct DLevel *DPtr;
	{
		{
			// register: 19
			register unsigned char *SrcPtr;
		}
	}
}


// address: 0x80079204
void BuildCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Dest) {
	// register: 20
	register unsigned char *DestPtr;
	{
		// register: 22
		register int f;
		{
			// register: 16
			register long hnd;
			{
				{
					// register: 17
					register unsigned char *MyData;
				}
			}
		}
	}
}


// address: 0x80079364
void InitFromCompLevelImage__13CompLevelMapsP17CompLevelMemImage(struct CompLevelMaps *this, struct CompLevelMemImage *Src) {
	{
		// register: 20
		register int f;
		{
			{
				{
					// register: 17
					register long hnd;
					// register: 16
					register unsigned char *DestData;
					// register: 21
					register int Offset;
				}
			}
		}
	}
}


// address: 0x800794A4
int DoComp__13CompLevelMapsPUcT1i(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int SourceSize) {
}


// address: 0x800794DC
int DoDecomp__13CompLevelMapsPUcT1ii(struct CompLevelMaps *this, unsigned char *Dest, unsigned char *Source, int DestSize, int SourceSize) {
}


