// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B1B8
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B1D4
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C3A4
int GetTpY__FUs_addr_8007C3A4(unsigned short tpage) {
}


// address: 0x8007C3C0
int GetTpX__FUs_addr_8007C3C0(unsigned short tpage) {
}


// address: 0x8007C6CC
int GetTpY__FUs_addr_8007C6CC(unsigned short tpage) {
}


// address: 0x8007C6E8
int GetTpX__FUs_addr_8007C6E8(unsigned short tpage) {
}


// address: 0x80090898
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x800908A0
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800908DC
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090940
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090998
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090A84
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090A90
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090AB0
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


