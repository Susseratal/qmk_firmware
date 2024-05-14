/*
Copyright 2023 Matt F
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_uk.h"

enum custom_keycodes {
    ST_LINE_START = SAFE_RANGE,
    ST_LINE_END,
    ST_CLEAR_LINE,
    ST_CLEAR_LINE_START,
    ST_CLEAR_LINE_END,
    ST_NEW_LINE,
    ST_NEW_LINE_PASTE,
    ST_YANK_LINE,
    ST_DEL_CHAR,
    ST_CHAR_SWAP,
    ST_PAREN_PAIR,
    ST_BOX_PAIR,
    ST_CURLY_PAIR,
    ST_CHEVRON_PAIR,
    ST_SINGLE_QUOTE_PAIR,
    ST_DOUBLE_QUOTE_PAIR,
    ST_VISUAL_LOCK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
        LALT(KC_TAB),   UK_1,      UK_2,     UK_3,      UK_4,    UK_5,     UK_6,          UK_7,          UK_8,      UK_9,    UK_0,      KC_MINUS,   KC_EQUAL,  LALT(LSFT(KC_TAB)),
        LCTL(KC_TAB),   KC_Q,      KC_W,     KC_E,      KC_R,    KC_T,     KC_LPRN,       KC_RPRN,       KC_Y,      KC_U,    KC_I,      KC_O,       KC_P,      KC_MEH,
        KC_ESCAPE,      KC_A,      KC_S,     KC_D,      KC_F,    KC_G,     KC_LBRACKET,   KC_RBRACKET,   KC_H,      KC_J,    KC_K,      KC_L,       UK_SCLN,   KC_LGUI,
        KC_LSFT,        KC_Z,      KC_X,     KC_C,      KC_V,    KC_B,     KC_LABK,       KC_RABK,       KC_N,      KC_M,    UK_COMM,   UK_DOT,     UK_SLSH,   KC_LSFT,
        KC_LCTL,        UK_BSLS,   UK_GRV,   KC_LALT,   TT(1),       KC_SPC,                      KC_BSPC,          TT(2),   UK_QUOT,   UK_DQUO,    UK_HASH,   KC_DELETE
    ),

    [1] = LAYOUT_all(
        KC_TRANSPARENT,        KC_F1,                 KC_F2,            KC_F3,               KC_F4,            KC_F5,            KC_F6,             KC_F7,            KC_F8,            KC_F9,            KC_F10,               KC_F11,                 KC_F12,                KC_TRANSPARENT,
        KC_MEDIA_PREV_TRACK,   ST_CLEAR_LINE_START,   LCTL(KC_RIGHT),   LCTL(KC_L),          LCTL(KC_Y),       KC_TRANSPARENT,   ST_PAREN_PAIR,     CAPS_WORD,        LCTL(KC_C),       LCTL(KC_Z),       ST_LINE_START,        ST_NEW_LINE,            LCTL(KC_V),            KC_MEDIA_NEXT_TRACK,
        TO(0),                 ST_LINE_END,           ST_DEL_CHAR,      LCTL(KC_DELETE),     KC_TRANSPARENT,   LCTL(KC_END),     ST_BOX_PAIR,       ST_CURLY_PAIR,    KC_LEFT,          KC_DOWN,          KC_UP,                KC_RIGHT,               KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_TRANSPARENT,        ST_CHAR_SWAP,     ST_CLEAR_LINE_END,   ST_VISUAL_LOCK,   LCTL(KC_LEFT),    ST_CHEVRON_PAIR,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,       KC_TRANSPARENT,         LCTL(KC_F),            KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_TRANSPARENT,        KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,                KC_TAB,                             KC_ENTER,               TT(3),          ST_SINGLE_QUOTE_PAIR,   ST_DOUBLE_QUOTE_PAIR,   KC_TRANSPARENT,        KC_TRANSPARENT
    ),

    [2] = LAYOUT_all(
        KC_TRANSPARENT,        KC_F13,               KC_F14,           KC_F15,           KC_F16,           KC_F17,           KC_F18,             KC_F19,           KC_F20,           KC_F21,           KC_AUDIO_MUTE,    KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,       KC_TRANSPARENT,
        LCTL(LGUI(KC_LEFT)),   LCTL(LSFT(KC_TAB)),   KC_TRANSPARENT,   LCTL(KC_TAB),     KC_TRANSPARENT,   KC_TRANSPARENT,   LGUI(LSFT(KC_S)),   KC_PSCREEN,       ST_YANK_LINE,     KC_TRANSPARENT,   KC_HOME,          KC_TRANSPARENT,      KC_TRANSPARENT,        LCTL(LGUI(KC_RIGHT)),
        TO(0),                 KC_END,               KC_TRANSPARENT,   ST_CLEAR_LINE,    KC_TRANSPARENT,   LCTL(KC_HOME),    KC_MS_WH_DOWN,      KC_MS_WH_UP,      KC_MS_LEFT,       KC_MS_DOWN,       KC_MS_UP,         KC_MS_RIGHT,         KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_MS_ACCEL0,         KC_MS_ACCEL1,     KC_MS_ACCEL2,     KC_INSERT,        KC_TRANSPARENT,   KC_MS_WH_LEFT,      KC_MS_WH_RIGHT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_TRANSPARENT,       KC_TRANSPARENT,   KC_TRANSPARENT,   TT(3),                 KC_MS_BTN1,                                 KC_MS_BTN2,              KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT
    ), 

    [3] = LAYOUT_all(
        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT,
        KC_TRANSPARENT,   KC_KP_7,          KC_KP_8,          KC_KP_9,          KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT,
        TO(0),            KC_KP_4,          KC_KP_5,          KC_KP_6,          KC_KP_0,          KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        TO(4),
        KC_TRANSPARENT,   KC_KP_1,          KC_KP_2,          KC_KP_3,          KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT,
        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,              KC_TRANSPARENT,                    KC_TRANSPARENT,           KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT
    ), 

    [4] = LAYOUT_all(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,        KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,        KC_NO,
        TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,        TO(0),
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,        KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,        KC_NO,            KC_NO,       KC_NO,   KC_NO,   KC_NO,      KC_NO,        QK_BOOT
    ),
};

bool visualLock = false;

void layerToggle(int layer) {
    visualLock = false;
    SEND_STRING(SS_UP(X_LSFT));
    layer_invert(layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case ST_LINE_START:
        if(record->event.pressed) {
            SEND_STRING(SS_TAP(X_HOME));
            layerToggle(1);
        }
        return false;

        case ST_LINE_END:
        if (record->event.pressed) { // jumpt to end of line and layer switch
            SEND_STRING(SS_TAP(X_END)); 
            layerToggle(1);
        }
        return false;

        case ST_CLEAR_LINE:
        if (record->event.pressed) { // delete a whole line
            SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_TAP(X_DEL));
        }
        break;

        case ST_CLEAR_LINE_START: // Delete to start of the line and layer switch
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_HOME)) SS_DELAY(60) SS_TAP(X_DEL));
            layerToggle(1);
        }
        return false;

        case ST_CLEAR_LINE_END:
        if (record->event.pressed) { // clear to the end of the line
            SEND_STRING(SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_TAP(X_DEL));
            layerToggle(1);
        }
        return false;

        case ST_NEW_LINE:
        if (record->event.pressed) { // insert on a new line
          SEND_STRING(SS_TAP(X_END) SS_DELAY(60) SS_TAP(X_ENTER));
          layerToggle(1);
        }
        return false;

        case ST_NEW_LINE_PASTE:
        if (record->event.pressed) { // paste on the line below
          SEND_STRING(SS_TAP(X_END) SS_DELAY(60) SS_TAP(X_ENTER) SS_DELAY(60) SS_LCTL(SS_TAP(X_V)));
        }
        break;
        
        case ST_YANK_LINE:
        if (record->event.pressed) { // copy the line 
          SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_LCTL(SS_TAP(X_C)));
        }
        break;

        case ST_DEL_CHAR:
        if (record->event.pressed) { // delete a letter and layer toggle
            SEND_STRING(SS_TAP(X_DELETE));
            layerToggle(1);
        }
        return false;

        case ST_CHAR_SWAP: // swap two characters to the right of the cursor
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_RIGHT)) SS_DELAY(60) SS_LCTRL(SS_TAP(X_X)) SS_DELAY(60) SS_TAP(X_RIGHT) SS_DELAY(60) SS_LCTRL(SS_TAP(X_V)));
            layerToggle(1);
        }
        return false;

        case ST_PAREN_PAIR: // Brackets macro -- ()
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(60) SS_LSFT(SS_TAP(X_0)) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_BOX_PAIR: // brackets macro -- []
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(60) SS_TAP(X_RBRACKET) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_CURLY_PAIR: // brackets macro -- {}
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(60) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_CHEVRON_PAIR: // brackets macro -- <>
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(60) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_SINGLE_QUOTE_PAIR: // quotes macro ''
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(60) SS_TAP(X_QUOTE) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_DOUBLE_QUOTE_PAIR: // quotes macro ""
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(60) SS_LSFT(SS_TAP(X_2)) SS_DELAY(60) SS_TAP(X_LEFT));
        }
        return false;

        case ST_VISUAL_LOCK: // Visual lock activate
        if (record->event.pressed) {
                if (visualLock == false) {
                        SEND_STRING(SS_DOWN(X_LSFT));
                        visualLock = true;
                }
                else {
                        SEND_STRING(SS_UP(X_LSFT));
                        visualLock = false;
                }
        }
        return false;

        case KC_LSHIFT:
            if (record->event.pressed) {
                visualLock = false;
            }

    }
    return true;
}
