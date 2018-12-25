#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x8012AE44
// size: 0x19000
extern unsigned char map_buf[102400];

// address: 0x80143E44
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80143E98
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x801444D8
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80144B18
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80144B28
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80145168
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80145190
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x801452D0
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x80145350
// line start: 278
// line end:   313
void _cd_seek(int sec) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x801453BC
// line start: 327
// line end:   336
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x801453E4
// line start: 340
// line end:   341
void flush_cdstream() {
}


// address: 0x80145438
// line start: 378
// line end:   381
void reset_cdstream() {
}


// address: 0x80145468
// line start: 385
// line end:   389
void kill_stream_handlers() {
}


// address: 0x80145498
// line start: 396
// line end:   505
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3]) {
}


// address: 0x80145684
// line start: 508
// line end:   512
void install_stream_handlers() {
}


// address: 0x801456C0
// line start: 524
// line end:   561
void cdstream_service() {
	// register: 16
	register int timeout_occured;
}


// address: 0x801457B0
// line start: 579
// line end:   603
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}


// address: 0x801458C8
// line start: 614
// line end:   615
int cdstream_is_last_chunk() {
}


// address: 0x801458E0
// line start: 626
// line end:   658
void cdstream_discard_chunk() {
}


// address: 0x80145A00
// line start: 667
// line end:   676
void close_cdstream() {
}


// address: 0x80145A40
// line start: 689
// line end:   700
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
}


// address: 0x80145AF8
// line start: 714
// line end:   749
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x80145BFC
// line start: 768
// line end:   779
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x80145C30
// line start: 793
// line end:   829
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x80145DB4
// line start: 837
// line end:   845
void DCT_out_handler() {
}


// address: 0x80145E50
// line start: 855
// line end:   869
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x80145EC0
// line start: 881
// line end:   884
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80145EDC
// line start: 898
// line end:   967
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


// address: 0x801462CC
// line start: 976
// line end:   990
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x801464A0
// line start: 1001
// line end:   1002
void clear_mdec_frame() {
}


// address: 0x801464AC
// line start: 1011
// line end:   1050
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x801467F8
// line start: 1056
// line end:   1057
void invalidate_mdec_frame() {
}


// address: 0x8014680C
// line start: 1066
// line end:   1067
int is_frame_decoded() {
}


// address: 0x80146818
// line start: 1080
// line end:   1123
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x80146BA8
// line start: 1128
// line end:   1137
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x80146C10
// line start: 1149
// line end:   1154
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x80146C60
// line start: 1160
// line end:   1198
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
	{
		// register: 3
		register int i;
	}
}


// address: 0x80146D68
// line start: 1203
// line end:   1205
void kill_mdec_audio() {
}


// address: 0x80146D98
// line start: 1210
// line end:   1211
void stop_mdec_audio() {
}


// address: 0x80146DBC
// line start: 1218
// line end:   1331
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


// address: 0x80147054
// line start: 1338
// line end:   1351
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80147120
// line start: 1357
// line end:   1359
void resync_audio() {
}


// address: 0x80147150
// line start: 1368
// line end:   1375
void stop_mdec_stream() {
}


// address: 0x801471A4
// line start: 1381
// line end:   1400
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80147290
// line start: 1407
// line end:   1450
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80147440
// line start: 1469
// line end:   1526
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80147620
// line start: 1546
// line end:   1565
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x801476D4
// line start: 1572
// line end:   1575
void clear_mdec_queue() {
}


// address: 0x80147700
// line start: 1586
// line end:   1599
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x801477C0
// line start: 1609
// line end:   1831
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


// address: 0x80147C84
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


