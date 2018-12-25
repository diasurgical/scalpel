// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x8014B488
// line start: 274
// line end:   276
void EA_cd_seek(int secnum) {
}


// address: 0x8014B490
// line start: 280
// line end:   284
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014B4C4
// line start: 297
// line end:   303
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014B4D4
// line start: 308
// line end:   315
void flush_cdstream() {
}


// address: 0x8014B4F8
// line start: 324
// line end:   336
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x8014B578
// line start: 359
// line end:   362
void reset_cdstream() {
}


// address: 0x8014B5A0
// line start: 367
// line end:   378
void kill_stream_handlers() {
}


// address: 0x8014B600
// line start: 388
// line end:   512
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014B7F4
// line start: 516
// line end:   545
void CD_stream_handler(struct TASK *T) {
	// register: 16
	register int chunkcount;
	{
	}
}


// address: 0x8014B8F4
// line start: 554
// line end:   563
void install_stream_handlers() {
}


// address: 0x8014B964
// line start: 574
// line end:   596
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014B9FC
// line start: 630
// line end:   665
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014BB20
// line start: 677
// line end:   678
int cdstream_is_last_chunk() {
}


// address: 0x8014BB38
// line start: 690
// line end:   720
void cdstream_discard_chunk() {
}


// address: 0x8014BC38
// line start: 730
// line end:   747
void close_cdstream() {
}


// address: 0x8014BCB0
// line start: 788
// line end:   864
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014BE48
// line start: 883
// line end:   894
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014BE7C
// line start: 908
// line end:   944
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014C000
// line start: 952
// line end:   960
void DCT_out_handler() {
}


// address: 0x8014C09C
// line start: 970
// line end:   984
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014C10C
// line start: 996
// line end:   999
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014C128
// line start: 1013
// line end:   1082
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


// address: 0x8014C518
// line start: 1091
// line end:   1105
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014C6EC
// line start: 1116
// line end:   1117
void clear_mdec_frame() {
}


// address: 0x8014C6F8
// line start: 1126
// line end:   1165
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014CA44
// line start: 1171
// line end:   1172
void invalidate_mdec_frame() {
}


// address: 0x8014CA58
// line start: 1181
// line end:   1182
int is_frame_decoded() {
}


// address: 0x8014CA64
// line start: 1195
// line end:   1238
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014CDF4
// line start: 1243
// line end:   1252
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014CE5C
// line start: 1264
// line end:   1269
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014CEAC
// line start: 1275
// line end:   1313
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014CFB0
// line start: 1318
// line end:   1320
void kill_mdec_audio() {
}


// address: 0x8014CFE0
// line start: 1325
// line end:   1326
void stop_mdec_audio() {
}


// address: 0x8014D004
// line start: 1333
// line end:   1438
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 6
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 4
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x8014D278
// line start: 1445
// line end:   1458
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014D344
// line start: 1464
// line end:   1466
void resync_audio() {
}


// address: 0x8014D370
// line start: 1475
// line end:   1482
void stop_mdec_stream() {
}


// address: 0x8014D3BC
// line start: 1488
// line end:   1507
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D4A8
// line start: 1514
// line end:   1557
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D658
// line start: 1576
// line end:   1634
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014D844
// line start: 1654
// line end:   1673
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D8F8
// line start: 1680
// line end:   1683
void clear_mdec_queue() {
}


// address: 0x8014D924
// line start: 1694
// line end:   1707
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014D9E4
// line start: 1717
// line end:   1906
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


