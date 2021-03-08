#include <lib/U8g2/U8x8lib.h>
#include <lib/U8g2/U8g2lib.h>
#include "screen.h"
#include "glyphs.h"
#include "state.h"
#include "menu.h"
#include "strings.h"

U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);


static bool has_initialized = false;

void disable_screen() {
    u8g2.noDisplay();
    has_initialized = false;
}

void init_screen() {
    u8g2.setBusClock(1000000UL);
    u8g2.begin();
    u8g2.display();
    u8g2.clearDisplay();
    u8g2.setFont(u8g2_font_9x15B_tf);

    has_initialized = true;
}

void clear_screen() {
    if (!has_initialized) {
        init_screen();
    }

    u8g2.setContrast(128);
    u8g2.setDrawColor(0);
    u8g2.drawBox(0, 0, 128, 64);
    u8g2.setDrawColor(1);
}

void finish_screen() {
    if (!has_initialized) {
        init_screen();
    }

    u8g2.sendBuffer();
}

void draw_timer(int minutes, int seconds) {
    if (!has_initialized) {
        init_screen();
    }

    clear_screen();

    u8g2.drawXBMP(50, TVOC_HEIGHT_OFFSET, dig_width, dig_height, colon);

    u8g2.drawXBMP(0, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[(minutes / 10)]);
    u8g2.drawXBMP(30, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[minutes % 10]);
    u8g2.drawXBMP(70, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[seconds / 10]);
    u8g2.drawXBMP(100, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[seconds % 10]);
}

void draw_blinking_timer(int minutes, int seconds) {
    if (!has_initialized) {
        init_screen();
    }

    clear_screen();

    if (is_timer_blinking) {
        draw_timer(minutes, seconds);
    }
}

void draw_adjustment_options(int active_position) {
    if (!has_initialized) {
        init_screen();
    }

    clear_screen();

    int bucket = active_position / 4;
    int target = active_position % 4;

    u8g2.drawStr(1, 12, get_string_by_position(4 * bucket));
    u8g2.drawStr(1, 28, get_string_by_position(4 * bucket + 1));
    u8g2.drawStr(1, 44, get_string_by_position(4 * bucket + 2));
    u8g2.drawStr(1, 60, get_string_by_position(4 * bucket + 3));

    u8g2.drawStr(115, 12 + 16 * target, "<");
}