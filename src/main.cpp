#include <Arduino.h>
#include "screen.h"
#include <lib/MsTimer2/MsTimer2.h>

int minutes = 30;
int seconds = 10;


void timer_tick() {
    seconds--;

    if (seconds == 0) {
        minutes--;
        seconds = 60;
    }
}

void update_display() {
    draw_timer(minutes, seconds);
    finish_screen();
}

void setup() {
    init_screen();
    pinMode(13, OUTPUT);

    MsTimer2::set(1000, timer_tick);
    MsTimer2::start();
}

void loop() {
    update_display();
}