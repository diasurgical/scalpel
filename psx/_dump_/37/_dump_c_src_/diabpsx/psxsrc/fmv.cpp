// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x80136718
// line start: 274
// line end:   275
void EA_cd_seek(int secnum) {
}


// address: 0x80136740
// line start: 280
// line end:   284
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80136774
// line start: 297
// line end:   303
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x80136784
// line start: 308
// line end:   315
void flush_cdstream() {
}


// address: 0x801367A8
// line start: 324
// line end:   336
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x80136828
// line start: 359
// line end:   362
void reset_cdstream() {
}


// address: 0x80136850
// line start: 367
// line end:   379
void kill_stream_handlers() {
}


// address: 0x801368C0
// line start: 389
// line end:   512
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x80136AA4
// line start: 516
// line end:   537
void CD_stream_handler(struct TASK *T) {
}


// address: 0x80136B98
// line start: 543
// line end:   552
void install_stream_handlers() {
}


// address: 0x80136C08
// line start: 563
// line end:   585
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x80136CA0
// line start: 619
// line end:   654
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x80136DC4
// line start: 666
// line end:   667
int cdstream_is_last_chunk() {
}


// address: 0x80136DDC
// line start: 679
// line end:   709
void cdstream_discard_chunk() {
}


// address: 0x80136EDC
// line start: 719
// line end:   736
void close_cdstream() {
}


// address: 0x80136F54
// line start: 749
// line end:   760
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x8013700C
// line start: 777
// line end:   847
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8013717C
// line start: 866
// line end:   877
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801371B0
// line start: 891
// line end:   927
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80137334
// line start: 935
// line end:   943
void DCT_out_handler() {
}


// address: 0x801373D0
// line start: 953
// line end:   967
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x80137440
// line start: 979
// line end:   982
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8013745C
// line start: 996
// line end:   1065
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


// address: 0x8013784C
// line start: 1074
// line end:   1088
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80137A20
// line start: 1099
// line end:   1100
void clear_mdec_frame() {
}


// address: 0x80137A2C
// line start: 1109
// line end:   1148
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x80137D78
// line start: 1154
// line end:   1155
void invalidate_mdec_frame() {
}


// address: 0x80137D8C
// line start: 1164
// line end:   1165
int is_frame_decoded() {
}


// address: 0x80137D98
// line start: 1178
// line end:   1221
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x80138128
// line start: 1226
// line end:   1235
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80138190
// line start: 1247
// line end:   1252
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x801381E0
// line start: 1258
// line end:   1288
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x80138298
// line start: 1294
// line end:   1296
void kill_mdec_audio() {
}


// address: 0x801382C8
// line start: 1301
// line end:   1302
void stop_mdec_audio() {
}


// address: 0x801382EC
// line start: 1309
// line end:   1413
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


// address: 0x80138588
// line start: 1420
// line end:   1433
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80138654
// line start: 1439
// line end:   1441
void resync_audio() {
}


// address: 0x80138684
// line start: 1450
// line end:   1457
void stop_mdec_stream() {
}


// address: 0x801386D0
// line start: 1463
// line end:   1482
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x801387BC
// line start: 1489
// line end:   1532
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8013896C
// line start: 1551
// line end:   1609
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80138B58
// line start: 1629
// line end:   1648
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80138C0C
// line start: 1655
// line end:   1658
void clear_mdec_queue() {
}


// address: 0x80138C38
// line start: 1669
// line end:   1675
void StrClearVRAM() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x80138C9C
// line start: 1685
// line end:   1865
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 22
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 21
	register int fade;
	// register: 17
	register int user_quit;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT r;
}


