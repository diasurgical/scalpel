// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007BC48
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007BC64
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007CDBC
int GetTpY__FUs_addr_8007CDBC(unsigned short tpage) {
}


// address: 0x8007CDD8
int GetTpX__FUs_addr_8007CDD8(unsigned short tpage) {
}


// address: 0x8007D1E8
int GetTpY__FUs_addr_8007D1E8(unsigned short tpage) {
}


// address: 0x8007D204
int GetTpX__FUs_addr_8007D204(unsigned short tpage) {
}


// address: 0x80091464
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8009146C
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800914A8
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8009150C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091564
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80091650
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009165C
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8009167C
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


