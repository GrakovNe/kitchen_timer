#include <Arduino.h>
#include <avr/sleep.h>

#include "screen.h"
#include "state.h"
#include "mnemonics.h"
#include "strings.h"

#include <lib/MsTimer2/MsTimer2.h>

int minutes = 5;
int seconds = 00;

int lazy_counter = 0;

void decrease_timer();

void blink_timer();

void notify_timer_out();

void timer_tick() {
    switch (device_state) {
        case TIMER_RUN_STATE:
            lazy_counter = 0;
            decrease_timer();
            return;
        case TIMER_OUT_STATE:
            lazy_counter = 0;
            notify_timer_out();
            return;
        case TIMER_PAUSED_STATE:
            lazy_counter = 0;
            blink_timer();
            return;
    }

    lazy_counter++;
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

void blink_timer() {
    is_timer_blinking = !is_timer_blinking;
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
        case TIMER_PAUSED_STATE:
            draw_blinking_timer(minutes, seconds);
            break;
        case ADJUSTMENT_STATE:
            draw_adjustment_options(active_adjustment_position);
            break;
    }

    finish_screen();
}

int get_minutes_by_position(int position) {
    switch (position) {
        case BLACK_TEA_POSITION:
            return 5;
        case GREEN_TEA_POSITION:
            return 3;
        case WHITE_TEA_POSITION:
            return 2;
        case HERBAL_TEA_POSITION:
            return 12;
        case ONE_MINUTE_POSITION:
            return 1;
        case FIVE_MINUTES_POSITION:
            return 5;
        case TEN_MINUTES_POSITION:
            return 10;
        case FIFTEEN_MINUTES_POSITION:
            return 15;
        case THIRTY_MINUTES_POSITION:
            return 30;
        case SIXTY_MINUTES_POSITION:
            return 60;
        default:
            return 0;

    }
}

void run_timer(int active_position) {
    minutes = get_minutes_by_position(active_position);
    seconds = 0;

    device_state = TIMER_RUN_STATE;
}

void pause_timer() {
    device_state = TIMER_PAUSED_STATE;
}

void unpause_timer() {
    device_state = TIMER_RUN_STATE;
}

void abort_timer() {
    device_state = ADJUSTMENT_STATE;
}

void confirm_button() {
    delay(500);

    if (digitalRead(CONFIRM_BUTTON_PIN)) {
        return;
    }

    switch (device_state) {
        case ADJUSTMENT_STATE:
            run_timer(active_adjustment_position);
            return;
        case TIMER_RUN_STATE:
            pause_timer();
            return;
        case TIMER_PAUSED_STATE:
            unpause_timer();
            return;
        case TIMER_OUT_STATE:
            device_state = ADJUSTMENT_STATE;
            return;
    }
}

void increment_active_position() {
    active_adjustment_position++;

    if (active_adjustment_position > 9) {
        active_adjustment_position = 0;
    }
}

void incremental_button() {
    delay(500);

    if (digitalRead(INCREMENTAL_BUTTON_PIN)) {
        return;
    }

    switch (device_state) {
        case ADJUSTMENT_STATE:
            increment_active_position();
            return;
        case TIMER_RUN_STATE:
        case TIMER_PAUSED_STATE:
            abort_timer();
            return;
    }
}

void setup() {
    pinMode(13, OUTPUT);
    digitalWrite(13, HIGH);

    MsTimer2::set(1000, timer_tick);
    MsTimer2::start();

    active_adjustment_position = 0;

    pinMode(CONFIRM_BUTTON_PIN, INPUT_PULLUP);
    pinMode(INCREMENTAL_BUTTON_PIN, INPUT_PULLUP);

    attachInterrupt(digitalPinToInterrupt(CONFIRM_BUTTON_PIN), confirm_button, FALLING);
    attachInterrupt(digitalPinToInterrupt(INCREMENTAL_BUTTON_PIN), incremental_button, FALLING);

}

void loop() {
    update_display();

    if (lazy_counter > 60) {
        disable_screen();
        lazy_counter = 0;

        set_sleep_mode(SLEEP_MODE_PWR_DOWN);
        sleep_mode();
    }
}