// C:\diabpsx\PSXSRC\MEMCARD.CPP

#include "types.h"

// address: 0x8013DF64
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013DF98
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E018
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E098
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8013E11C
void sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013E194
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 19
	register int i;
	// register: 17
	register int fh;
	// register: 18
	register int r;
}


// address: 0x8013E3A0
int test_card_format__Fi(int card_number) {
}


// address: 0x8013E490
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8013E4CC
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E5C4
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 20
	register int okay;
	// register: 19
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E788
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E84C
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD88
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 17
	register int failed;
	// register: 22
	register int e;
	// address: 0xFFFFFF88
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EBA4
void new_card__Fi(int card_number) {
}


// address: 0x8013EC38
void service_card__Fi(int card_number) {
	// register: 18
	register int old_status;
}


