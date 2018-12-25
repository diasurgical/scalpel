// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x8014B6DC
// line start: 279
// line end:   281
void EA_cd_seek(int secnum) {
}


// address: 0x8014B6E4
// line start: 285
// line end:   289
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014B718
// line start: 302
// line end:   308
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014B728
// line start: 313
// line end:   320
void flush_cdstream() {
}


// address: 0x8014B74C
// line start: 329
// line end:   341
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x8014B7CC
// line start: 364
// line end:   367
void reset_cdstream() {
}


// address: 0x8014B7F4
// line start: 372
// line end:   383
void kill_stream_handlers() {
}


// address: 0x8014B854
// line start: 393
// line end:   517
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014BA48
// line start: 521
// line end:   550
void CD_stream_handler(struct TASK *T) {
	// register: 16
	register int chunkcount;
	{
	}
}


// address: 0x8014BB40
// line start: 559
// line end:   568
void install_stream_handlers() {
}


// address: 0x8014BBB0
// line start: 579
// line end:   601
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014BC48
// line start: 635
// line end:   670
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014BD6C
// line start: 682
// line end:   683
int cdstream_is_last_chunk() {
}


// address: 0x8014BD84
// line start: 695
// line end:   725
void cdstream_discard_chunk() {
}


// address: 0x8014BE84
// line start: 735
// line end:   752
void close_cdstream() {
}


// address: 0x8014BEFC
// line start: 793
// line end:   869
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014C094
// line start: 888
// line end:   899
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014C0C8
// line start: 913
// line end:   949
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014C24C
// line start: 957
// line end:   965
void DCT_out_handler() {
}


// address: 0x8014C2E8
// line start: 975
// line end:   989
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014C358
// line start: 1001
// line end:   1004
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014C374
// line start: 1018
// line end:   1087
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x8014C764
// line start: 1096
// line end:   1110
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014C938
// line start: 1121
// line end:   1122
void clear_mdec_frame() {
}


// address: 0x8014C944
// line start: 1131
// line end:   1170
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014CC90
// line start: 1176
// line end:   1177
void invalidate_mdec_frame() {
}


// address: 0x8014CCA4
// line start: 1186
// line end:   1187
int is_frame_decoded() {
}


// address: 0x8014CCB0
// line start: 1200
// line end:   1243
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014D040
// line start: 1248
// line end:   1257
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014D0A8
// line start: 1269
// line end:   1274
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014D0F8
// line start: 1280
// line end:   1318
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014D1FC
// line start: 1323
// line end:   1325
void kill_mdec_audio() {
}


// address: 0x8014D22C
// line start: 1330
// line end:   1331
void stop_mdec_audio() {
}


// address: 0x8014D250
// line start: 1338
// line end:   1448
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 17
	register int offs;
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 19
	register int hsize;
}


// address: 0x8014D4DC
// line start: 1455
// line end:   1468
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014D5A8
// line start: 1474
// line end:   1476
void resync_audio() {
}


// address: 0x8014D5D4
// line start: 1485
// line end:   1492
void stop_mdec_stream() {
}


// address: 0x8014D620
// line start: 1498
// line end:   1517
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D70C
// line start: 1524
// line end:   1567
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D8BC
// line start: 1586
// line end:   1644
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014DAA8
// line start: 1664
// line end:   1683
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014DB5C
// line start: 1690
// line end:   1693
void clear_mdec_queue() {
}


// address: 0x8014DB88
// line start: 1704
// line end:   1717
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014DC48
// line start: 1727
// line end:   1948
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 23
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 22
	register int fade;
	// register: 21
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0x6C
	register struct CPad *P1;
	// register: 18
	// size: 0x6C
	register struct CPad *P2;
}


