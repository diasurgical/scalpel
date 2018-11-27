// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B714
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B730
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C828
int GetTpY__FUs_addr_8007C828(unsigned short tpage) {
}


// address: 0x8007C844
int GetTpX__FUs_addr_8007C844(unsigned short tpage) {
}


// address: 0x8007CB28
int GetTpY__FUs_addr_8007CB28(unsigned short tpage) {
}


// address: 0x8007CB44
int GetTpX__FUs_addr_8007CB44(unsigned short tpage) {
}


// address: 0x80090A80
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090A88
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090AC4
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090B28
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090B80
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090C6C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090C78
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090C98
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


