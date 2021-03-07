#define TVOC_HEIGHT_OFFSET 18
#define TVOC_WIDTH_OFFSET 4
#define TVOC_BETWEEN_DIGS_OFFSET 4

#define TVOC_FIRST_DIG_OFFSET TVOC_WIDTH_OFFSET
#define TVOC_SECOND_DIG_OFFSET TVOC_WIDTH_OFFSET + TVOC_BETWEEN_DIGS_OFFSET + dig_width
#define TVOC_THIRD_DIG_OFFSET TVOC_WIDTH_OFFSET + (TVOC_BETWEEN_DIGS_OFFSET + dig_width) * 2
#define TVOC_FOUR_DIG_OFFSET TVOC_WIDTH_OFFSET + (TVOC_BETWEEN_DIGS_OFFSET + dig_width) * 3

void init_screen();

void clear_screen();

void finish_screen();

void draw_timer(int minutes, int seconds);