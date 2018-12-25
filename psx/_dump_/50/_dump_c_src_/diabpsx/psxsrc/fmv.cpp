// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x8014B5BC
// line start: 280
// line end:   320
void _cd_seek(int sec) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x8014B618
// line start: 334
// line end:   343
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014B640
// line start: 347
// line end:   348
void flush_cdstream() {
}


// address: 0x8014B694
// line start: 385
// line end:   388
void reset_cdstream() {
}


// address: 0x8014B6C4
// line start: 392
// line end:   396
void kill_stream_handlers() {
}


// address: 0x8014B6F4
// line start: 403
// line end:   521
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp) {
}


// address: 0x8014B924
// line start: 524
// line end:   528
void install_stream_handlers() {
}


// address: 0x8014B960
// line start: 540
// line end:   577
void cdstream_service() {
	// register: 16
	register int timeout_occured;
}


// address: 0x8014BA50
// line start: 595
// line end:   619
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}


// address: 0x8014BB68
// line start: 630
// line end:   631
int cdstream_is_last_chunk() {
}


// address: 0x8014BB80
// line start: 642
// line end:   674
void cdstream_discard_chunk() {
}


// address: 0x8014BCA0
// line start: 683
// line end:   692
void close_cdstream() {
}


// address: 0x8014BCE0
// line start: 705
// line end:   720
void wait_cdstream() {
}


// address: 0x8014BCF0
// line start: 732
// line end:   767
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014BDF4
// line start: 786
// line end:   797
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014BE28
// line start: 811
// line end:   849
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014BF9C
// line start: 856
// line end:   869
void DCT_out_handler() {
	// register: 17
	register unsigned long OldGp;
}


// address: 0x8014C04C
// line start: 878
// line end:   892
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014C0BC
// line start: 904
// line end:   907
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014C0D8
// line start: 921
// line end:   990
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


// address: 0x8014C4C8
// line start: 999
// line end:   1013
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014C69C
// line start: 1024
// line end:   1025
void clear_mdec_frame() {
}


// address: 0x8014C6A8
// line start: 1034
// line end:   1073
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014C9F4
// line start: 1079
// line end:   1080
void invalidate_mdec_frame() {
}


// address: 0x8014CA08
// line start: 1089
// line end:   1090
int is_frame_decoded() {
}


// address: 0x8014CA14
// line start: 1103
// line end:   1146
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014CDA4
// line start: 1151
// line end:   1160
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014CE0C
// line start: 1172
// line end:   1177
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014CE5C
// line start: 1183
// line end:   1258
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014CF3C
// line start: 1264
// line end:   1266
void kill_mdec_audio() {
}


// address: 0x8014CF6C
// line start: 1271
// line end:   1272
void stop_mdec_audio() {
}


// address: 0x8014CF90
// line start: 1279
// line end:   1394
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


// address: 0x8014D224
// line start: 1401
// line end:   1414
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014D2F0
// line start: 1420
// line end:   1421
void resync_audio() {
}


// address: 0x8014D300
// line start: 1430
// line end:   1437
void stop_mdec_stream() {
}


// address: 0x8014D354
// line start: 1443
// line end:   1462
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D440
// line start: 1469
// line end:   1512
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D5F0
// line start: 1531
// line end:   1588
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014D7D0
// line start: 1608
// line end:   1627
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014D884
// line start: 1634
// line end:   1637
void clear_mdec_queue() {
}


// address: 0x8014D8B0
// line start: 1648
// line end:   1661
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014D970
// line start: 1671
// line end:   1893
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


