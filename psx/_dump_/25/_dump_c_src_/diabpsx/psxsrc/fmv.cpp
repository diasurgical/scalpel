// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x80137B7C
// line start: 275
// line end:   276
void EA_cd_seek(int secnum) {
}


// address: 0x80137BA4
// line start: 281
// line end:   285
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80137BD8
// line start: 298
// line end:   304
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80137BE8
// line start: 309
// line end:   316
void flush_cdstream() {
}


// address: 0x80137C0C
// line start: 325
// line end:   337
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80137C8C
// line start: 360
// line end:   363
void reset_cdstream() {
}


// address: 0x80137CB4
// line start: 368
// line end:   380
void kill_stream_handlers() {
}


// address: 0x80137D24
// line start: 390
// line end:   514
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80137F18
// line start: 518
// line end:   539
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x80138004
// line start: 546
// line end:   555
void install_stream_handlers() {
}


// address: 0x80138074
// line start: 566
// line end:   588
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8013810C
// line start: 622
// line end:   657
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80138230
// line start: 669
// line end:   670
int cdstream_is_last_chunk() {
}


// address: 0x80138248
// line start: 682
// line end:   712
void cdstream_discard_chunk() {
}


// address: 0x80138348
// line start: 722
// line end:   739
void close_cdstream() {
}


// address: 0x801383C0
// line start: 780
// line end:   850
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80138530
// line start: 869
// line end:   880
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x80138564
// line start: 894
// line end:   930
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x801386E8
// line start: 938
// line end:   946
void DCT_out_handler() {
}


// address: 0x80138784
// line start: 956
// line end:   970
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x801387F4
// line start: 982
// line end:   985
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80138810
// line start: 999
// line end:   1068
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


// address: 0x80138C00
// line start: 1077
// line end:   1091
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80138DD4
// line start: 1102
// line end:   1103
void clear_mdec_frame() {
}


// address: 0x80138DE0
// line start: 1112
// line end:   1151
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8013912C
// line start: 1157
// line end:   1158
void invalidate_mdec_frame() {
}


// address: 0x80139140
// line start: 1167
// line end:   1168
int is_frame_decoded() {
}


// address: 0x8013914C
// line start: 1181
// line end:   1224
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x801394DC
// line start: 1229
// line end:   1238
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80139544
// line start: 1250
// line end:   1255
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80139594
// line start: 1261
// line end:   1291
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x8013964C
// line start: 1297
// line end:   1299
void kill_mdec_audio() {
}


// address: 0x8013967C
// line start: 1304
// line end:   1305
void stop_mdec_audio() {
}


// address: 0x801396A0
// line start: 1312
// line end:   1417
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 7
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 5
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x8013993C
// line start: 1424
// line end:   1437
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80139A08
// line start: 1443
// line end:   1445
void resync_audio() {
}


// address: 0x80139A38
// line start: 1454
// line end:   1461
void stop_mdec_stream() {
}


// address: 0x80139A84
// line start: 1467
// line end:   1486
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139B70
// line start: 1493
// line end:   1536
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139D20
// line start: 1555
// line end:   1613
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80139F0C
// line start: 1633
// line end:   1652
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80139FC0
// line start: 1659
// line end:   1662
void clear_mdec_queue() {
}


// address: 0x80139FEC
// line start: 1673
// line end:   1686
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8013A0AC
// line start: 1696
// line end:   1886
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


