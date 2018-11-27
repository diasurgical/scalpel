// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x80079514
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80079530
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007A5F8
int GetTpY__FUs_addr_8007A5F8(unsigned short tpage) {
}


// address: 0x8007A614
int GetTpX__FUs_addr_8007A614(unsigned short tpage) {
}


// address: 0x8007A8F8
int GetTpY__FUs_addr_8007A8F8(unsigned short tpage) {
}


// address: 0x8007A914
int GetTpX__FUs_addr_8007A914(unsigned short tpage) {
}


// address: 0x8008DF74
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008DF7C
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008DFB8
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E01C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E074
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E160
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008E16C
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008E18C
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


