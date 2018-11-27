// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x80079E14
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x80079E30
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007AF28
int GetTpY__FUs_addr_8007AF28(unsigned short tpage) {
}


// address: 0x8007AF44
int GetTpX__FUs_addr_8007AF44(unsigned short tpage) {
}


// address: 0x8007B228
int GetTpY__FUs_addr_8007B228(unsigned short tpage) {
}


// address: 0x8007B244
int GetTpX__FUs_addr_8007B244(unsigned short tpage) {
}


// address: 0x8008E89C
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008E8A4
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008E8E0
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008E944
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008E99C
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008EA88
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008EA94
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008EAB4
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


