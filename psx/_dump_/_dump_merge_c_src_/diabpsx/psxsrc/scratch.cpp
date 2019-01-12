// C:\diabpsx\PSXSRC\SCRATCH.CPP

#include "types.h"

// address: 0x8009D424
// line start: 157
// line end:   158
void SCR_Open__Fv() {
}


// address: 0x8008E3A0
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008DC48
// size: 0x18
// line start: 205
// line end:   238
struct PalEntry *FindPal__13PalCollectionUsUsi_addr_8008DC48(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E874
// line start: 78
// line end:   78
unsigned short GetClut__C8PalEntry(struct PalEntry *this) {
}


// address: 0x8008DE44
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E59C
// line start: 304
// line end:   315
unsigned short GetHighlightPal__13PalCollectionUsUsi_addr_8008E59C(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E86C
// line start: 79
// line end:   79
void Init__8PalEntry(struct PalEntry *this) {
}


// address: 0x8008E310
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos(struct PalCollection *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008DBB8
// line start: 181
// line end:   190
void Init__13PalCollectionPC7InitPos_addr_8008DBB8(struct PalCollection_dup_4 *this, struct InitPos *IPos) {
	{
		// register: 19
		register int f;
	}
}


// address: 0x8008E880
// line start: 73
// line end:   73
bool IsEqual__C8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008E4FC
// line start: 277
// line end:   293
void MakePal__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT SourceRect;
}


// address: 0x8008DD24
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi(struct PalCollection_dup_4 *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8008E47C
// size: 0x18
// line start: 247
// line end:   269
struct PalEntry *NewPal__13PalCollectionUsUsi_addr_8008E47C(struct PalCollection *this, unsigned short SourceClut, unsigned short PixVal, int NumOfCols) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetPal;
}


// address: 0x8009A9F8
// line start: 181
// line end:   199
void SCR_DumpClut__Fv() {
	// address: 0xFFFFFF70
	// size: 0x8
	auto struct RECT R;
	// register: 4
	register unsigned short ColVal;
	// address: 0xFFFFFF78
	// size: 0x80
	auto unsigned short BlankPal[64];
	{
		// register: 3
		register int f;
	}
}


// address: 0x8009A9B4
// line start: 162
// line end:   163
unsigned short SCR_GetBlackClut__Fv() {
}


// address: 0x8008E6A4
// line start: 353
// line end:   354
void SCR_Handler__Fv() {
}


// address: 0x8008E2DC
// line start: 170
// line end:   171
unsigned short SCR_NeedHighlightPal__FUsUsi(unsigned short Clut, unsigned short PixVal, int NumOfCols) {
}


// address: 0x8008E864
// line start: 82
// line end:   85
bool SetJustUsed__8PalEntryb(struct PalEntry *this, bool NewVal) {
}


// address: 0x8008E838
// line start: 89
// line end:   92
void Set__8PalEntryRC7InitPos(struct PalEntry *this, struct InitPos *NewPos) {
}


// address: 0x8008E824
// line start: 97
// line end:   100
void Set__8PalEntryUsUsi(struct PalEntry *this, unsigned short _SourceClut, unsigned short _PixVal, int _NumOfCols) {
}


// address: 0x8008DED8
// line start: 327
// line end:   344
void UpdatePals__13PalCollection(struct PalCollection_dup_4 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


// address: 0x8008E630
// line start: 327
// line end:   344
void UpdatePals__13PalCollection_addr_8008E630(struct PalCollection *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *ThisPal;
	{
		// register: 17
		// size: 0x18
		register struct PalEntry *NextPal;
	}
}


