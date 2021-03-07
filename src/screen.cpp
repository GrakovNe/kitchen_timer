#include <lib/U8g2/U8x8lib.h>
#include <lib/U8g2/U8g2lib.h>
#include <Wire.h>
#include "screen.h"
#include "glyphs.h"

U8G2_SH1106_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

static bool is_screen_initialized = false;

char screen_buffer[32];

void init_screen() {
    u8g2.setBusClock(400000);
    u8g2.begin();
    u8g2.clearDisplay();
    //u8g2.setFont(u8g2_font_9x15B_tf);
    //u8g2.drawStr(1, 11, "LOADING...");
    //delay(500);
}

void clear_screen() {
    u8g2.setDrawColor(0);
    u8g2.drawBox(0, 0, 128, 64);
    u8g2.setDrawColor(1);
}

void finish_screen() {
    u8g2.sendBuffer();
}

void draw_timer(int minutes, int seconds) {
    //u8g2.clearBuffer();
    u8g2.drawXBMP(50, TVOC_HEIGHT_OFFSET, dig_width, dig_height, colon);

    u8g2.drawXBMP(0, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[(minutes / 10)]);
    u8g2.drawXBMP(50 - 20, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[minutes % 10]);
    u8g2.drawXBMP(50 + 20, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[seconds / 10]);
    u8g2.drawXBMP(100, TVOC_HEIGHT_OFFSET, dig_width, dig_height, digits[seconds % 10]);
}