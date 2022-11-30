#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
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
  ST_MACRO_19
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

bool visualLock = false;

void layerToggle(int layer)
{ 
        SEND_STRING(SS_UP(X_LSFT)); 
        layer_invert(layer); 
        visualLock = false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LALT(KC_TAB),                 UK_1,      UK_2,           UK_3,      UK_4,    UK_5,   UK_6,                                                                 UK_7,        UK_8,   UK_9,    UK_0,      KC_MINUS,   KC_EQUAL,   TG(3),
    LCTL(KC_TAB),                 KC_Q,      KC_W,           KC_E,      KC_R,    KC_T,   KC_PSCREEN,                                                           CAPS_WORD,   KC_Y,   KC_U,    KC_I,      KC_O,       KC_P,       KC_MEH,
    MT(MOD_LCTL,  KC_ESCAPE),     KC_A,      KC_S,           KC_D,      KC_F,    KC_G,                                                                                      KC_H,   KC_J,    KC_K,      KC_L,       UK_SCLN,    KC_LGUI,
    KC_LSHIFT,                    KC_Z,      KC_X,           KC_C,      KC_V,    KC_B,   TOGGLE_LAYER_COLOR,                                                   TO(4),       KC_N,   KC_M,    UK_COMM,   UK_DOT,     UK_SLSH,    KC_LSHIFT,
    KC_LCTRL,                     UK_BSLS,   TD(DANCE_0),    KC_LALT,   TT(1),                                                                                                      TT(2),   UK_QUOT,   UK_DQUO,    UK_HASH,    KC_DELETE,
                                                                                                             KC_LPRN,   KC_LBRACKET,   KC_RBRACKET,   KC_RPRN,       
                                                                                                                        KC_LCBR,       KC_RCBR,
                                                                                                 KC_SPACE,   KC_TAB,    KC_LABK,       KC_RABK,       KC_ENTER,   KC_BSPACE
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,        KC_F1,            KC_F2,            KC_F3,             KC_F4,            KC_F5,            KC_F6,                                                                                  KC_F7,            KC_F8,            KC_F9,            KC_F10,           KC_F11,           KC_F12,                KC_TRANSPARENT,
    KC_MEDIA_PREV_TRACK,   LCTL(KC_W),       LCTL(KC_RIGHT),   LCTL(KC_L),        LCTL(KC_Y),       ST_MACRO_18,      KC_TRANSPARENT,                                                                         KC_TRANSPARENT,   LCTL(KC_C),       LCTL(KC_Z),       ST_MACRO_8,       ST_MACRO_1,       ST_MACRO_2,            KC_MEDIA_NEXT_TRACK,
    KC_TRANSPARENT,        ST_MACRO_9,       LCTL(KC_S),       LCTL(KC_DELETE),   KC_TRANSPARENT,   TD(DANCE_1),                                                                                                                KC_LEFT,          KC_DOWN,          KC_UP,            KC_RIGHT,         KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,   ST_MACRO_10,      ST_MACRO_0,        ST_MACRO_19,      LCTL(KC_LEFT),    KC_TRANSPARENT,                                                                         KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   LCTL(UK_F),            KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,    KC_TRANSPARENT,                                                                                                                                                 KC_TRANSPARENT,   ST_MACRO_16,      ST_MACRO_17,      RGB_MOD,               RGB_TOG,
                                                                                                                                        ST_MACRO_12,      ST_MACRO_13,   KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                                                          ST_MACRO_14,   KC_TRANSPARENT,   
                                                                                                                      KC_TRANSPARENT,   KC_TRANSPARENT,   ST_MACRO_15,   KC_TRANSPARENT,   KC_TRANSPARENT,   LCTL(KC_BSPACE)
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,        LCTL(KC_1),       LCTL(KC_2),       LCTL(KC_3),     LCTL(KC_4),       LCTL(KC_5),       LCTL(KC_6),                                                                                  LCTL(KC_7),       LCTL(KC_8),       LCTL(KC_9),       KC_AUDIO_MUTE,    KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,       KC_TRANSPARENT,
    KC_MEDIA_PREV_TRACK,   LCTL(KC_W),       LCTL(KC_RIGHT),   LCTL(KC_L),     LCTL(KC_R),       KC_TRANSPARENT,   KC_PSCREEN,                                                                                  KC_TRANSPARENT,   ST_MACRO_5,       LCTL(KC_Z),       KC_HOME,          ST_MACRO_6,          ST_MACRO_7,            KC_MEDIA_NEXT_TRACK,
    KC_TRANSPARENT,        KC_END,           LCTL(KC_S),       ST_MACRO_3,     KC_TRANSPARENT,   TD(DANCE_2),                                                                                                                     KC_MS_LEFT,       KC_MS_DOWN,       KC_MS_UP,         KC_MS_RIGHT,         KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,   ST_MACRO_11,      ST_MACRO_4,     KC_INSERT,        LCTL(KC_LEFT),    KC_TRANSPARENT,                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      LCTL(UK_F),            KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_MS_ACCEL0,     KC_MS_ACCEL1,     KC_MS_ACCEL2,   KC_TRANSPARENT,                                                                                                                                                      KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      KC_TRANSPARENT,        KC_TRANSPARENT,
                                                                                                                                   KC_MS_WH_LEFT,         KC_MS_WH_DOWN,    KC_MS_WH_UP,      KC_MS_WH_RIGHT, 
                                                                                                                                                          KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                     KC_MS_BTN1,   LCTL(LGUI(KC_LEFT)),   KC_PGUP,          KC_PGDOWN,        LCTL(LGUI(KC_RIGHT)),   KC_MS_BTN2
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,   KC_KP_1,          KC_KP_2,          KC_KP_3,            KC_KP_4,          KC_KP_5,          KC_KP_6,                                                                              KC_KP_7,          KC_KP_8,               KC_KP_9,             KC_KP_0,           KC_TRANSPARENT,        KC_NUMLOCK,       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_DELETE,        KC_MS_BTN1,       LALT(LCTL(KC_L)),   LCTL(KC_R),       KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   LCTL(KC_C),            LCTL(KC_Z),          KC_TRANSPARENT,    KC_TRANSPARENT,        LCTL(KC_V),       KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   LCTL(KC_S),       KC_MS_BTN2,         LCTL(KC_B),       KC_TRANSPARENT,                                                                                                           KC_MS_LEFT,            KC_MS_DOWN,          KC_MS_UP,          KC_MS_RIGHT,           KC_TRANSPARENT,   RGB_TOG,
    KC_TRANSPARENT,   KC_TRANSPARENT,   LCTL(KC_X),       KC_MS_ACCEL0,       KC_MS_ACCEL1,     KC_MS_ACCEL2,     KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_MEDIA_PREV_TRACK,   KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,   KC_MEDIA_NEXT_TRACK,   KC_AUDIO_MUTE,    KC_TRANSPARENT,
    RGB_SPD,          RGB_SPI,          RGB_SAD,          KC_TRANSPARENT,     RGB_SAI,                                                                                                                                                           KC_TRANSPARENT,      KC_TRANSPARENT,    KC_TRANSPARENT,        LED_LEVEL,        RESET,
                                                                                                                                  KC_MS_WH_LEFT,    KC_MS_WH_DOWN,    KC_MS_WH_UP,      KC_MS_WH_RIGHT, 
                                                                                                                                                    RGB_VAD,          RGB_VAI,
                                                                                                                KC_TRANSPARENT,   KC_TRANSPARENT,   RGB_HUD,          RGB_HUI,          KC_TRANSPARENT,   KC_TRANSPARENT
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                                                           KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       TO(0),            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_SPACE,                                                                                                                                                     TO(1),            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                                KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT, 
                                                                                                                                                  KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                      KC_TAB,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

};


rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) { // clear to the end of the line
      SEND_STRING( SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_TAP(X_BSPACE));
      layerToggle(1);
    }
    return false;

    case ST_MACRO_1:
    if (record->event.pressed) { // insert on a new line
      SEND_STRING(SS_TAP(X_END) SS_DELAY(60) SS_TAP(X_ENTER));
      layerToggle(1);
    }
    return false;

    case ST_MACRO_2:
    if (record->event.pressed) { // paste on the line below
      SEND_STRING(SS_TAP(X_END) SS_DELAY(60) SS_TAP(X_ENTER) SS_DELAY(60) SS_LCTL(SS_TAP(X_V)));
    }
    break;

    case ST_MACRO_3:
    if (record->event.pressed) { // delete a whole line
      SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_TAP(X_BSPACE));
    }
    break;

    case ST_MACRO_4:
    if (record->event.pressed) { // clear a whole line and then go into insert mode
      SEND_STRING( SS_TAP(X_HOME) SS_DELAY(60) SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_TAP(X_BSPACE));
      layerToggle(2);
    }
    return false;
    
    case ST_MACRO_5:
    if (record->event.pressed) { // copy the line 
      SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_LSFT(SS_TAP(X_END)) SS_DELAY(60) SS_LCTL(SS_TAP(X_C)));
    }
    break;

    case ST_MACRO_6:
    if (record->event.pressed) { // new line above
      SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_TAP(X_ENTER) SS_DELAY(60) SS_TAP(X_UP));
      layerToggle(2);
    }
    return false;

    case ST_MACRO_7:
    if (record->event.pressed) { // paste line above
      SEND_STRING(SS_TAP(X_HOME) SS_DELAY(60) SS_TAP(X_ENTER) SS_DELAY(60) SS_TAP(X_UP) SS_DELAY(60) SS_LCTL(SS_TAP(X_V)));
    }
    break;

    case ST_MACRO_8:
    if (record->event.pressed) { // i key macro
        SEND_STRING(SS_TAP(X_HOME));
        layerToggle(1);
    }
    return false;

    case ST_MACRO_9:
    if (record->event.pressed) { // a key macro
        SEND_STRING(SS_TAP(X_END)); 
        layerToggle(1);
    }
    return false;

    case ST_MACRO_10:
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_DELETE));
        layerToggle(1);
    }
    return false;

    case ST_MACRO_11:
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_DELETE));
        layerToggle(2);
    }
    return false;

    case ST_MACRO_12:
    if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_9)) SS_DELAY(50) SS_LSFT(SS_TAP(X_0)) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_13:
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_LBRACKET) SS_DELAY(50) SS_TAP(X_RBRACKET) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_14:
    if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_LBRACKET)) SS_DELAY(50) SS_LSFT(SS_TAP(X_RBRACKET)) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_15:
    if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)) SS_DELAY(50) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_16:
    if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(50) SS_TAP(X_QUOTE) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_17:
    if (record->event.pressed) {
        SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(50) SS_LSFT(SS_TAP(X_2)) SS_DELAY(50) SS_TAP(X_LEFT));
    }
    return false;

    case ST_MACRO_18:
    if (record->event.pressed) {
            SEND_STRING(SS_LCTRL(SS_TAP(X_T)) SS_DELAY(50) SS_LCTRL(SS_TAP(X_L))); 
            layerToggle(1);
    }
    return false;

    case ST_MACRO_19:
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

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;

    case TOGGLE_LAYER_COLOR:
      if (record->event.pressed) {
        disable_layer_color ^= 1;
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    switch (layer) {
      case 0: // layer 0 neon pink
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(213,255,255);
        }
        break;
      case 1: // nav layer blue
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          // rgblight_sethsv_noeeprom(119,235,255);
          rgblight_sethsv_range(119,235,255, (uint8_t)RGBLED_NUM / 2, (uint8_t)RGBLED_NUM);
        }
        break;
      case 2: // mouse layer blue
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          // rgblight_sethsv_noeeprom(119,235,255);
          rgblight_sethsv_range(119,235,255, 0, (uint8_t)RGBLED_NUM / 2);
        }
        break;
      case 3:
        if(!disable_layer_color) {
          rgblight_enable_noeeprom();
          rgblight_mode_noeeprom(1);
          rgblight_sethsv_noeeprom(86,255,255);
        }
        break;
      default:
        if(!disable_layer_color) {
          rgblight_config.raw = eeconfig_read_rgblight();
          if(rgblight_config.enable == true) {
            rgblight_enable();
            rgblight_mode(rgblight_config.mode);
            rgblight_sethsv(rgblight_config.hue, rgblight_config.sat, rgblight_config.val);
          }
          else {
            rgblight_disable();
          }
        }
        break;
    }
    return state;

};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_GRV);
        tap_code16(UK_GRV);
        tap_code16(UK_GRV);
    }
    if(state->count > 3) {
        tap_code16(UK_GRV);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(UK_GRV); break;
        case DOUBLE_TAP: register_code16(UK_TILD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_GRV); register_code16(UK_GRV);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(UK_GRV); break;
        case DOUBLE_TAP: unregister_code16(UK_TILD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_GRV); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_END));
        tap_code16(LCTL(KC_END));
        tap_code16(LCTL(KC_END));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_END));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_END)); register_code16(LCTL(KC_END));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_END)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_END));
        tap_code16(LCTL(KC_END));
        tap_code16(LCTL(KC_END));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_END));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_END)); register_code16(LCTL(KC_END));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_END)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_END)); break;
    }
    dance_state[2].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};


