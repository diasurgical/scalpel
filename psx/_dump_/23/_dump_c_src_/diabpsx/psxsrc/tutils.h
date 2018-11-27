// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B4A4
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B4C0
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C5B8
int GetTpY__FUs_addr_8007C5B8(unsigned short tpage) {
}


// address: 0x8007C5D4
int GetTpX__FUs_addr_8007C5D4(unsigned short tpage) {
}


// address: 0x8007C8B8
int GetTpY__FUs_addr_8007C8B8(unsigned short tpage) {
}


// address: 0x8007C8D4
int GetTpX__FUs_addr_8007C8D4(unsigned short tpage) {
}


// address: 0x800904A4
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x800904AC
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x800904E8
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8009054C
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800905A4
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090690
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8009069C
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800906BC
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


