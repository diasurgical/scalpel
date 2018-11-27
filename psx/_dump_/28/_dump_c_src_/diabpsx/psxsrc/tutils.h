// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B9B4
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B9D0
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007CBA0
int GetTpY__FUs_addr_8007CBA0(unsigned short tpage) {
}


// address: 0x8007CBBC
int GetTpX__FUs_addr_8007CBBC(unsigned short tpage) {
}


// address: 0x8007CEA0
int GetTpY__FUs_addr_8007CEA0(unsigned short tpage) {
}


// address: 0x8007CEBC
int GetTpX__FUs_addr_8007CEBC(unsigned short tpage) {
}


// address: 0x80090E80
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090E88
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090EC4
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090F28
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090F80
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8009106C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80091078
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80091098
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


