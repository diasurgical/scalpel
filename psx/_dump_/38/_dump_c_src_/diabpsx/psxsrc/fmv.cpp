// C:\diabpsx\PSXSRC\FMV.CPP

#include "types.h"

// address: 0x80156074
// line start: 295
// line end:   301
void _cd_seek(int sec) {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto struct CdlFILE RetFile;
}


// address: 0x801560AC
// line start: 315
// line end:   324
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x801560D4
// line start: 328
// line end:   329
void flush_cdstream() {
}


// address: 0x80156128
// line start: 366
// line end:   369
void reset_cdstream() {
}


// address: 0x80156158
// line start: 373
// line end:   377
void kill_stream_handlers() {
}


// address: 0x80156188
// line start: 384
// line end:   506
void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp) {
}


// address: 0x801563DC
// line start: 509
// line end:   513
void install_stream_handlers() {
}


// address: 0x80156418
// line start: 525
// line end:   563
void cdstream_service() {
	// register: 16
	register int timeout_occured;
}


// address: 0x80156508
// line start: 581
// line end:   605
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
}


// address: 0x80156620
// line start: 616
// line end:   617
int cdstream_is_last_chunk() {
}


// address: 0x80156638
// line start: 628
// line end:   660
void cdstream_discard_chunk() {
}


// address: 0x80156758
// line start: 669
// line end:   678
void close_cdstream() {
}


// address: 0x80156798
// line start: 691
// line end:   704
void wait_cdstream() {
	// address: 0xFFFFFFF0
	auto int start_wait;
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


// address: 0x80156978
// line start: 791
// line end:   802
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x801569AC
// line start: 816
// line end:   852
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
}


// address: 0x80156B08
// line start: 860
// line end:   873
void DCT_out_handler() {
	// register: 17
	register unsigned long OldGp;
}


// address: 0x80156BB8
// line start: 882
// line end:   896
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x80156C28
// line start: 908
// line end:   911
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x80156C44
// line start: 925
// line end:   1000
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


// address: 0x80157034
// line start: 1009
// line end:   1023
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x80157208
// line start: 1034
// line end:   1035
void clear_mdec_frame() {
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


// address: 0x8015758C
// line start: 1087
// line end:   1088
void invalidate_mdec_frame() {
}


// address: 0x801575A0
// line start: 1097
// line end:   1098
int is_frame_decoded() {
}


// address: 0x801575AC
// line start: 1111
// line end:   1154
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8015793C
// line start: 1159
// line end:   1168
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x801579A4
// line start: 1180
// line end:   1185
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
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


// address: 0x80157B0C
// line start: 1283
// line end:   1285
void kill_mdec_audio() {
}


// address: 0x80157B3C
// line start: 1290
// line end:   1291
void stop_mdec_audio() {
}


// address: 0x80157B60
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


// address: 0x80157E94
// line start: 1418
// line end:   1431
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x80157F60
// line start: 1437
// line end:   1438
void resync_audio() {
}


// address: 0x80157F70
// line start: 1448
// line end:   1454
void stop_mdec_stream() {
}


// address: 0x80157FB4
// line start: 1460
// line end:   1479
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x801580A0
// line start: 1486
// line end:   1529
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x80158250
// line start: 1548
// line end:   1606
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x80158430
// line start: 1626
// line end:   1644
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x801584CC
// line start: 1652
// line end:   1655
void clear_mdec_queue() {
}


// address: 0x801584F8
// line start: 1666
// line end:   1679
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x801585B8
// line start: 1700
// line end:   1727
short PlayFMVOverLay(char *filename, int w, int h) {
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


