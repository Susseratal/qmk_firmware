#include QMK_KEYBOARD_H
#include "keymap_uk.h"

// Layer shorthand
/*
enum layer_names {
    _BASE,
    _NAV,
    _MOUSE,
};
*/

enum custom_keycodes { // TODO RENAME THESE TO THINGS MORE USEFUL
    ST_MACRO_0,
    ST_MACRO_1,
    ST_MACRO_2,
    ST_MACRO_3,
    ST_MACRO_4,
    ST_MACRO_5,
    ST_MACRO_6,
    ST_MACRO_7,
    ST_MACRO_8,
    ST_MACRO_9,
    ST_MACRO_10,
    ST_MACRO_11,
    ST_MACRO_12,
    ST_MACRO_13,
    ST_MACRO_14,
    ST_MACRO_15,
    ST_MACRO_16,
    ST_MACRO_17,
    ST_MACRO_18,
    ST_MACRO_19,
    ST_MACRO_20,
    ST_MACRO_21
};

/*
enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base Layer
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ALTAB  | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | SALTAB |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | CTRLTB | Q      | W      | E      | R      | T      | (      |      ) | Y      | U      | I      | O      | P      | MEH    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | ESC    | A      | S      | D      | F      | G      | [      |      ] | H      | J      | K      | L      | ;      | WIN    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | <      |      > | N      | M      | ,      | .      | /      | LSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | \      | `¬     | LALT   | NAV    |      SPACE      |      BACKSP     | MOUSE  | '@     | \"     | #      | DEL    |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_ortho_2x2u(
        LALT(KC_TAB),   UK_1,      UK_2,      UK_3,      UK_4,    UK_5,     UK_6,         UK_7,         UK_8,   UK_9,      UK_0,      KC_MINUS,   KC_EQUAL,   LALT(LSFT(KC_TAB)),
        LCTL(KC_TAB),   KC_Q,      KC_W,      KC_E,      KC_R,    KC_T,     KC_LPRN,      KC_RPRN,      KC_Y,   KC_U,      KC_I,      KC_O,       KC_P,       KC_MEH,
        KC_ESCAPE,      KC_A,      KC_S,      KC_D,      KC_F,    KC_G,     KC_LBRACKET,  KC_RBRACKET,  KC_H,   KC_J,      KC_K,      KC_L,       UK_SCLN,    KC_LGUI,
        KC_LSFT,        KC_Z,      KC_X,      KC_C,      KC_V,    KC_B,     KC_LABK,      KC_RABK,      KC_N,   KC_M,      UK_COMM,   UK_DOT,     UK_SLSH,    KC_LSFT,
        KC_LCTL,        UK_BSLS,   UK_GRV,    KC_LALT,   TT(1),       KC_SPACE,                  KC_BSPACE,     TT(2),     UK_QUOT,   UK_DQUO,    UK_HASH,    KC_DELETE
    ),

    /* Navigation Layer
     * .-----------------------------------------------------------------------------------------------------------------------------------.
     * |        | F1        | F2      | F3     | F4     | F5      | F6     | F7      | F8     | F9     | F10    | F11    | F12    |        |
     * |--------+-----------+---------+--------+--------+---------+--------+---------+--------+--------+--------+--------+-----------------|
     * |   <<   | LINESTART | JUMPFOR | NAVBAR | REDO   |         | ()     | CPS_WRD | COPY   | UNDO   | HOME   | NEWLNE | PASTE  |   >>   | 
     * |--------+-----------+---------+--------+--------+---------+--------+---------+--------+--------+--------+-----------------+--------|
     * | LAYER0 | END       | DEL     | DWORD  |        | CTL END | []     |         | LEFT   | DOWN   | UP     | RIGHT  | PLY/PSE|        |
     * |--------+-----------+---------+--------+--------+---------+--------+---------+--------+--------+--------------------------+--------|
     * |        |           | SWAP    |        | VISUAL | JUMPBCK | <>     |         |        |        |        |        | FIND   |        |
     * |--------+-----------+---------+--------+--------+------------------+---------+--------+--------+-----------------+--------+--------|
     * |        |           |         |        | NAV    |        TAB       |       ENTER      | MOUSE  | ' '    | " "    |        |        |
     * '-----------------------------------------------------------------------------------------------------------------------------------'
     */
    [1] = LAYOUT_ortho_2x2u(
        KC_TRANSPARENT,        KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F5,            KC_F6,     KC_F7,     KC_F8,        KC_F9,        KC_F10,    KC_F11,    KC_F12,                KC_TRANSPARENT,
        LCTL(LGUI(KC_LEFT)),   _______,          LCTL(KC_RIGHT),   LCTL(KC_L),       LCTL(KC_Y),       KC_TRANSPARENT,   _______,   _______,   LCTL(KC_C),   LCTL(KC_Z),   _______,   _______,   _______,               LCTL(LGUI(KC_RIGHT)),
        TO(0),                 _______,          _______,          _______,          KC_TRANSPARENT,   LCTL(KC_END),     _______,   _______,   KC_LEFT,      KC_DOWN,      KC_UP,     KC_RIGHT,  KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
        KC_TRANSPARENT,        _______,          _______,          _______,          _______,          _______,          _______,   _______,   _______,      _______,      _______,   _______,   LCTL(KC_F),            KC_TRANSPARENT,
        KC_TRANSPARENT,        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   _______,                KC_TAB,                      KC_ENTER,          _______,      _______,   _______,   KC_TRANSPARENT,        KC_TRANSPARENT
    ),

    /* Mouse Layer
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * |        | F13    | F14    | F15    | F16    | F17    | F18    | F19    | F20    | F21    | MUTE   | VOL-   | VOL+   |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | WINLFT | NP7    | NP8    | NP9    |        |        | W+S+S  | SYS RQ |        |        |        |        | NUMLCK | WINRGHT|
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | LAYER0 | NP4    | NP5    | NP6    | NP0    |        |        |        | MSE <- | MSE V  | MSE ^  | MSE -> | PLY/PSE|        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * |        | NP1    | NP2    | NP3    |        |        |        |        |        |        |        |        |        |        |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * |        | MSESPD0| MSESPD1| MSESPD2|        |       LMB       |       RMB       |        |        |        |        | RESET  |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */
    [2] = LAYOUT_ortho_2x2u(
        KC_TRANSPARENT,   KC_F13,    KC_F14,    KC_F15,    KC_F16,    KC_F17,    KC_F18,    KC_F19,    KC_F20,    KC_F21,    KC_AUDIO_MUTE,    KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,    KC_TRANSPARENT,
        _______,          _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,          _______,              _______,            _______,
        TO(0),            _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,          _______,              _______,            _______,
        _______,          _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,   _______,          _______,              _______,            _______,
        _______,          _______,   _______,   _______,   _______,         _______,              _______,        _______,   _______,          _______,              _______,            _______
    )
};

bool visualLock = false;
bool layerHeld = false;

void layerToggle(int layer) {
    visualLock = false;
    SEND_STRING(SS_UP(X_LSFT));
    if(layerHeld == false) {
        layer_invert(layer);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case ST_MACRO_0:
            if (record->event.pressed) {
            }
            return false;

        case ST_MACRO_1:
            if (record->event.pressed) {
            }
            return false;

        case ST_MACRO_2:
            if (record->event.pressed) {
            }
            return false;

        case ST_MACRO_3:
            if (record->event.pressed) {
            }
            return false;

        case ST_MACRO_4:
            if (record->event.pressed) {
            }
            return false;

        case KC_LSHIFT:
            if (record->event.pressed) {
                visualLock = false;
            }

        case TT(1):
            if (record->tap.count > 0) {
                layerHeld = false;
            }
            else {
                layerHeld = true;
            }

    }
    return true;
}
