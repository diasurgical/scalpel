// C:\diabpsx\PSXSRC\MEMCARD.CPP

#include "types.h"

// address: 0x8013E1F4
// line start: 137
// line end:   141
void endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 3
	register unsigned char t;
}


// address: 0x8013E228
// line start: 145
// line end:   155
void sjis_endian_swap__FPUci(unsigned char *b, int byts) {
	// register: 2
	register unsigned char t;
}


// address: 0x8013E270
// line start: 167
// line end:   186
unsigned short to_sjis__Fc(char asc) {
	// register: 6
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E2F0
// line start: 200
// line end:   218
char to_ascii__FUs(unsigned short sjis) {
	// register: 8
	// size: 0x4
	register struct sjis *sp;
}


// address: 0x8013E378
// line start: 229
// line end:   242
void ascii_to_sjis__FPcPUs(char *asc, unsigned short *sjis) {
}


// address: 0x8013E3FC
// line start: 246
// line end:   247
int is_sjis__FPUc(unsigned char *buf) {
}


// address: 0x8013E408
// line start: 251
// line end:   270
int sjis_to_ascii__FPUsPc(unsigned short *sjis, char *asc) {
}


// address: 0x8013E490
// line start: 280
// line end:   399
void read_card_directory__Fi(int card_number) {
	// address: 0xFFFFFF78
	// size: 0x50
	auto char path[80];
	// register: 17
	// size: 0x28
	register struct DIRENTRY *dir;
	// register: 20
	register int i;
	// register: 17
	register int fh;
	// register: 18
	register int r;
}


// address: 0x8013E6F0
// line start: 415
// line end:   487
int test_card_format__Fi(int card_number) {
}


// address: 0x8013E7E0
// line start: 500
// line end:   504
int checksum_data__FPci(char *buf, int size) {
	// register: 6
	register int chk;
}


// address: 0x8013E81C
// line start: 517
// line end:   555
int delete_card_file__Fii(int card_number, int file) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013E914
// line start: 569
// line end:   687
int read_card_file__FiiiPc(int card_number, int file, int id, char *buf) {
	// register: 19
	register int okay;
	// register: 20
	register int tries;
	// register: 17
	register int fd;
	// register: 2
	register int r;
	// register: 16
	register int size;
	// register: 22
	register int checksumerror;
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EAF0
// line start: 699
// line end:   729
int format_card__Fi(int card_number) {
	// address: 0xFFFFFFA0
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EBB4
// line start: 754
// line end:   879
int write_card_file__FiiPcT2PUcPUsiT4(int card_number, int id, char *name, char *title, unsigned char *icon, unsigned short *clut, int size, unsigned char *buf) {
	// address: 0xFFFFFD90
	// size: 0x200
	auto struct file_header h;
	// register: 16
	register int fd;
	// register: 19
	register int failed;
	// register: 20
	register int e;
	// address: 0xFFFFFF90
	// size: 0x50
	auto char path[80];
}


// address: 0x8013EED8
// line start: 889
// line end:   921
void new_card__Fi(int card_number) {
}


// address: 0x8013EF6C
// line start: 934
// line end:   1024
void service_card__Fi(int card_number) {
	// register: 4
	register int last_status;
}


