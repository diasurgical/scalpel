// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B0BC
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B0D8
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C1D0
int GetTpY__FUs_addr_8007C1D0(unsigned short tpage) {
}


// address: 0x8007C1EC
int GetTpX__FUs_addr_8007C1EC(unsigned short tpage) {
}


// address: 0x8007C4D0
int GetTpY__FUs_addr_8007C4D0(unsigned short tpage) {
}


// address: 0x8007C4EC
int GetTpX__FUs_addr_8007C4EC(unsigned short tpage) {
}


// address: 0x8008FE0C
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008FE14
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008FE50
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008FEB4
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008FF0C
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008FFF8
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090004
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090024
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


