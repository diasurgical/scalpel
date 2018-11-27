// C:\diabpsx\PSXSRC\CARDCORE.CPP

#include "types.h"

// address: 0x80098F00
void init_mem_card__FPFii_vUc(void (*handler)(), unsigned char read_dir) {
}


// address: 0x80099138
void memcard_event__Fii(int evt, int side) {
}


// address: 0x80099140
void init_card__Fib(int card_number, bool read_dir) {
}


// address: 0x80099200
int ping_card__Fi(int card_number) {
}


// address: 0x80099294
void CardUpdateTask__FP4TASK(struct TASK *T) {
}


// address: 0x800992CC
void MemcardON__Fv() {
}


// address: 0x8009933C
void MemcardOFF__Fv() {
}


// address: 0x8009938C
void CheckSavedOptions__Fv() {
	// register: 5
	register int option_file;
}


// address: 0x80099414
void card_removed__Fi(int card_number) {
}


// address: 0x8009943C
int read_card_block__Fii(int card_number, int block) {
}


// address: 0x80099484
int test_hw_event__Fv() {
}


