// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B37C
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B398
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C568
int GetTpY__FUs_addr_8007C568(unsigned short tpage) {
}


// address: 0x8007C584
int GetTpX__FUs_addr_8007C584(unsigned short tpage) {
}


// address: 0x8007C890
int GetTpY__FUs_addr_8007C890(unsigned short tpage) {
}


// address: 0x8007C8AC
int GetTpX__FUs_addr_8007C8AC(unsigned short tpage) {
}


// address: 0x80090A78
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090A80
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090ABC
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090B20
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090B78
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090C64
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x80090C70
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x80090C90
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


