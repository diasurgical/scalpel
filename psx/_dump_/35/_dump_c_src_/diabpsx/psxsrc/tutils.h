// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B9C0
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B9DC
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007CB34
int GetTpY__FUs_addr_8007CB34(unsigned short tpage) {
}


// address: 0x8007CB50
int GetTpX__FUs_addr_8007CB50(unsigned short tpage) {
}


// address: 0x8007CED8
int GetTpY__FUs_addr_8007CED8(unsigned short tpage) {
}


// address: 0x8007CEF4
int GetTpX__FUs_addr_8007CEF4(unsigned short tpage) {
}


// address: 0x80091320
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80091328
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80091364
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x800913C8
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091420
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009150C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091518
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091538
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


