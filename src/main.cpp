#include <Arduino.h>
#include "screen.h"
#include <lib/MsTimer2/MsTimer2.h>

int minutes = 3;
int seconds = 10;

void flash() {
    static boolean output = HIGH;

    digitalWrite(13, output);
    output = !output;

    seconds--;

    draw_timer(minutes, seconds);
    finish_screen();

    if (seconds == 0) {
        minutes--;
        seconds = 60;
    }
}

void setup() {
    init_screen();
    pinMode(13, OUTPUT);

    //MsTimer2::set(2000, flash);
    //MsTimer2::start();
}

void loop() {
    flash();
    delay(1000);
}