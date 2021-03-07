#include <avr/pgmspace.h>

const static unsigned char dig_one[] PROGMEM = {
        0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00,
        0x00, 0xff, 0x07, 0x00, 0x00, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00,
        0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00};

const static unsigned char dig_two[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_three[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0xf8, 0xff, 0x07,
        0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07, 0x00, 0xf8, 0xff, 0x07,
        0x00, 0xf8, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_four[]PROGMEM = {
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07};

const static unsigned char dig_five[]PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_six[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00,
        0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_seven[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07};

const static unsigned char dig_eight[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_nine[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07, 0x00, 0x00, 0xc0, 0x07,
        0x00, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char dig_zero[] PROGMEM = {
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07, 0x1f, 0x00, 0xc0, 0x07,
        0x1f, 0x00, 0xc0, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07,
        0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x07};

const static unsigned char colon[] PROGMEM = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
        0x00, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
        0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
        0x00, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };


static const char dig_width = 27;
static const char dig_height = 27;

const unsigned char *const digits[10] = {
        dig_zero, dig_one, dig_two, dig_three, dig_four, dig_five, dig_six, dig_seven, dig_eight, dig_nine
};