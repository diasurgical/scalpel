#include "types.h"

// === [ Overlay ID e ] ===

// address: 0x8013BB68
// size: 0x19000
extern unsigned char map_buf[102400];

// address: 0x80156B08
// line start: 860
// line end:   873
void DCT_out_handler() {
	// register: 17
	register unsigned long OldGp;
}


// address: 0x80158640
// line start: 1737
// line end:   1992
void LoPlayFMVOverLay() {
	// register: 23
	register int start;
	// register: 30
	register int end;
	// register: 20
	register int start_time;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 2
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0xEC
	register struct CPad_dup_17 *P1;
	// register: 18
	// size: 0xEC
	register struct CPad_dup_17 *P2;
	// register: 17
	register char *filename;
	// register: 18
	register int w;
	// register: 22
	register int h;
	// register: 3
	register long vm;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80158538
// line start: 1737
// line end:   1992
void LoPlayFMVOverLay() {
	// register: 23
	register int start;
	// register: 30
	register int end;
	// register: 20
	register int start_time;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 2
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0xEC
	register struct CPad *P1;
	// register: 18
	// size: 0xEC
	register struct CPad *P2;
	// register: 17
	register char *filename;
	// register: 18
	register int w;
	// register: 22
	register int h;
	// register: 3
	register long vm;
	{
		// register: 16
		register int i;
	}
}


// address: 0x80156074
// line start: 295
// line end:   301
void _cd_seek(int sec) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x80156508
// line start: 581
// line end:   605
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}


// address: 0x80156418
// line start: 525
// line end:   563
void cdstream_service() {
	// register: 16
	register int timeout_occured;
}


// address: 0x80157214
// line start: 1044
// line end:   1081
void draw_mdec_polys(int bright) {
	// register: 10
	register int i;
	// register: 17
	register unsigned char cdbuf;
}


// address: 0x801579F4
// line start: 1191
// line end:   1244
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 16
		register int f;
	}
}


// address: 0x80156850
// line start: 718
// line end:   772
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
	// address: 0xFFFFFFD8
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x80157A58
// line start: 1298
// line end:   1411
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
}


// address: 0x80157B60
// line start: 1298
// line end:   1411
void play_mdec_audio(unsigned char *data, struct asec_dup_17 *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
}


// address: 0x801569AC
// line start: 816
// line end:   852
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
}


// address: 0x80156188
// line start: 384
// line end:   506
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp) {
}


