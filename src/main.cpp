#include <Arduino.h>
#include "screen.h"
#include "state.h"
#include "mnemonics.h"

#include <lib/MsTimer2/MsTimer2.h>

int minutes = 0;
int seconds = 10;


void decrease_timer();

void notify_timer_out();

void timer_tick() {
    switch (device_state) {
        case TIMER_RUN_STATE:
            decrease_timer();
            return;
        case TIMER_OUT_STATE:
            notify_timer_out();
            return;
    }
}

void decrease_timer() {
    seconds--;

    if (seconds < 0) {
        minutes--;
        seconds = 59;
    }

    if (minutes < 0) {
        minutes = 0;
        seconds = 0;

        device_state = TIMER_OUT_STATE;
    }
}

void notify_timer_out() {
    // buzzer here
}

void update_display() {
    switch (device_state) {
        case TIMER_RUN_STATE:
            draw_timer(minutes, seconds);
            break;
        case TIMER_OUT_STATE:
            draw_timer(88, 88);
            break;
    }

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