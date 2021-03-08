#define TVOC_HEIGHT_OFFSET 18

void init_screen();

void clear_screen();

void finish_screen();

void draw_timer(int minutes, int seconds);

void draw_blinking_timer(int minutes, int seconds);

void draw_adjustment_options(int active_position);

void disable_screen();