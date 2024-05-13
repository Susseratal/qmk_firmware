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
    ST_LINE_START,
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
    ST_VISUAL_LOCK,
    ST_RGB_TOG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LALT(KC_TAB),                 UK_1,      UK_2,     UK_3,      UK_4,    UK_5,   UK_6,                                                                 UK_7,        UK_8,   UK_9,    UK_0,      KC_MINUS,   KC_EQUAL,   LALT(LSFT(KC_TAB)),
    LCTL(KC_TAB),                 KC_Q,      KC_W,     KC_E,      KC_R,    KC_T,   KC_PSCREEN,                                                           CAPS_WORD,   KC_Y,   KC_U,    KC_I,      KC_O,       KC_P,       KC_MEH,
    KC_ESCAPE,                    KC_A,      KC_S,     KC_D,      KC_F,    KC_G,                                                                                      KC_H,   KC_J,    KC_K,      KC_L,       UK_SCLN,    KC_LGUI,
    KC_LSHIFT,                    KC_Z,      KC_X,     KC_C,      KC_V,    KC_B,   TOGGLE_LAYER_COLOR,                                                   TO(4),       KC_N,   KC_M,    UK_COMM,   UK_DOT,     UK_SLSH,    KC_LSHIFT,
    KC_LCTRL,                     UK_BSLS,   UK_GRV,   KC_LALT,   TT(1),                                                                                                      TT(2),   UK_QUOT,   UK_DQUO,    UK_HASH,    KC_DELETE,
                                                                                                             KC_LPRN,   KC_LBRACKET,   KC_RBRACKET,   KC_RPRN,       
                                                                                                                        KC_LCBR,       KC_RCBR,
                                                                                                  KC_SPACE,  KC_TAB,    KC_LABK,       KC_RABK,       KC_ENTER,   KC_BSPACE
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,        KC_F1,                  KC_F2,            KC_F3,             KC_F4,            KC_F5,            KC_F6,                                                                                  KC_F7,            KC_F8,            KC_F9,            KC_F10,                 KC_F11,                 KC_F12,                KC_TRANSPARENT,
    KC_MEDIA_PREV_TRACK,   ST_CLEAR_LINE_START,    LCTL(KC_RIGHT),   LCTL(KC_L),        LCTL(KC_Y),       KC_TRANSPARENT,   KC_TRANSPARENT,                                                                         KC_TRANSPARENT,   LCTL(KC_C),       LCTL(KC_Z),       ST_LINE_START,          ST_NEW_LINE,            LCTL(KC_V),            KC_MEDIA_NEXT_TRACK,
    TO(0),                 ST_LINE_END,            ST_DEL_CHAR,      LCTL(KC_DELETE),   KC_TRANSPARENT,   LCTL(KC_END),                                                                                                               KC_LEFT,          KC_DOWN,          KC_UP,                  KC_RIGHT,               KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,         ST_CHAR_SWAP,     ST_CLEAR_LINE_END, ST_VISUAL_LOCK,   LCTL(KC_LEFT),    KC_TRANSPARENT,                                                                         KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,         KC_TRANSPARENT,         LCTL(UK_F),            KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,         KC_TRANSPARENT,   KC_TRANSPARENT,    KC_TRANSPARENT,                                                                                                                                                 TT(3),            ST_SINGLE_QUOTE_PAIR,   ST_DOUBLE_QUOTE_PAIR,   ST_RGB_TOG,            RGB_TOG,
                                                                                                                                        ST_PAREN_PAIR,    ST_BOX_PAIR,       KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                                                          ST_CURLY_PAIR,     KC_TRANSPARENT,   
                                                                                                                      KC_TRANSPARENT,   KC_TRANSPARENT,   ST_CHEVRON_PAIR,   KC_TRANSPARENT,   KC_TRANSPARENT,   LCTL(KC_BSPACE)
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,        KC_F13,               KC_F14,           KC_F15,           KC_F16,               KC_F17,           KC_F18,                                                                                      KC_F19,           KC_F20,           KC_F21,           KC_AUDIO_MUTE,    KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,       KC_TRANSPARENT,
    KC_MEDIA_PREV_TRACK,   LCTL(LSFT(KC_TAB)),   KC_TRANSPARENT,   LCTL(KC_TAB),     KC_TRANSPARENT,       KC_TRANSPARENT,   LGUI(LSFT(KC_S)),                                                                            KC_TRANSPARENT,   ST_YANK_LINE,     KC_TRANSPARENT,   KC_HOME,          KC_TRANSPARENT,      ST_NEW_LINE_PASTE,     KC_MEDIA_NEXT_TRACK,
    TO(0),                 KC_END,               LCTL(KC_TAB),     ST_CLEAR_LINE,    LCTL(LSFT(KC_TAB)),   LCTL(KC_HOME),                                                                                                                   KC_MS_LEFT,       KC_MS_DOWN,       KC_MS_UP,         KC_MS_RIGHT,         KC_MEDIA_PLAY_PAUSE,   KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_MS_ACCEL0,         KC_MS_ACCEL1,     KC_MS_ACCEL2,     KC_INSERT,            KC_TRANSPARENT,   KC_TRANSPARENT,                                                                              KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      LCTL(UK_F),            KC_TRANSPARENT,
    KC_TRANSPARENT,        KC_TRANSPARENT,       KC_TRANSPARENT,   KC_TRANSPARENT,   TT(3),                                                                                                                                                                   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,      ST_RGB_TOG,            RGB_TOG,
                                                                                                                                   KC_MS_WH_LEFT,         KC_MS_WH_DOWN,    KC_MS_WH_UP,      KC_MS_WH_RIGHT, 
                                                                                                                                                          KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                     KC_MS_BTN1,   LCTL(LGUI(KC_LEFT)),   KC_PGDOWN,        KC_PGUP,          LCTL(LGUI(KC_RIGHT)),   KC_MS_BTN2
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [3] = LAYOUT_ergodox_pretty(
    RGB_HUD,          KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT,      KC_TRANSPARENT,    KC_TRANSPARENT,        KC_TRANSPARENT,   RGB_HUI,
    RGB_SAD,          KC_KP_7,          KC_KP_8,          KC_KP_9,            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT,      KC_TRANSPARENT,    KC_TRANSPARENT,        KC_TRANSPARENT,   RGB_SAI,
    TO(0),            KC_KP_4,          KC_KP_5,          KC_KP_6,            KC_KP_0,          KC_TRANSPARENT,                                                                                                           KC_TRANSPARENT,        KC_NUMLOCK,          KC_ESCAPE,         KC_TRANSPARENT,        RGB_MOD,          TO(5),
    KC_TRANSPARENT,   KC_KP_1,          KC_KP_2,          KC_KP_3,            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,        KC_TRANSPARENT,      KC_TRANSPARENT,    KC_TRANSPARENT,        KC_TRANSPARENT,   RGB_SPI,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,     KC_TRANSPARENT,                                                                                                                                                    KC_TRANSPARENT,      KC_TRANSPARENT,    KC_TRANSPARENT,        LED_LEVEL,        RGB_SPD,
                                                                                                                                  KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT, 
                                                                                                                                                    KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                                                           KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,                                                                       TO(0),            KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
    KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_SPACE,                                                                                                                                                     KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,
                                                                                                                                KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT, 
                                                                                                                                                  KC_TRANSPARENT,   KC_TRANSPARENT,   
                                                                                                                      KC_TAB,   KC_ENTER,         KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  [5] = LAYOUT_ergodox_pretty(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                                           KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   TO(0),
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                                                                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
                                                                              KC_NO,   KC_NO,   KC_NO,   KC_NO, 
                                                                                       KC_NO,   KC_NO,   
                                                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

};

bool visualLock = false;
bool layerHeld = false;
int gamesColour = 13;

void layerToggle(int layer)
{ 
        visualLock = false;
        SEND_STRING(SS_UP(X_LSFT)); 
        layer_invert(layer);

        /*
        if(layerHeld == false) {
            layer_invert(layer); 
        }
        */
}

rgblight_config_t rgblight_config;
bool disable_layer_color = 0;

bool suspended = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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
                    ergodox_right_led_2_on();
            }
            else {
                    SEND_STRING(SS_UP(X_LSFT));
                    visualLock = false;
                    ergodox_right_led_2_off();
            }
    }
    return false;

    case ST_RGB_TOG: // change lighting modes
    if (record->event.pressed) {
        if (gamesColour == 13) {
            gamesColour = 8;
        }
        else {
            gamesColour = 13; 
        }
        rgblight_enable_noeeprom();
        rgblight_mode_noeeprom(gamesColour); // 8 for breathing rgb - 13 for rainbow sliding (hopefully)
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

    case KC_LSHIFT:
      if (record->event.pressed) {
          visualLock = false;
          ergodox_right_led_2_off();
      }

  /*
    case TT(1):
      if (record->event.pressed) {
          layerHeld = true;
      }

    case TT(1): // figure out how to make it so record->tap.count only applies to specifically TT(1)
      if (record->tap.count > 0) { 
          layerHeld = false;
      }
      else {
          layerHeld = true;
      }
      */
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();

    if (!visualLock) {
        ergodox_right_led_2_off();
    }

    ergodox_right_led_3_off();
    switch (layer) {
    case 1:
        ergodox_right_led_1_on();
        break;
    case 2:
        ergodox_right_led_3_on();
        break;
    case 3:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
    case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
    case 5:
        ergodox_right_led_2_on();
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
            /*
            if(gamesColour == 8) {
                rgblight_mode_noeeprom(gamesColour); // 8 for breathing rgb - 13 for rainbow sliding (hopefully)
            }
            else {
                rgblight_mode_noeeprom(1);
                rgblight_sethsv_noeeprom(213,255,255);
            }
            */
        }
        break;
    case 1: // nav layer lighting
        if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(1);
            rgblight_sethsv_range(120,255,255, (uint8_t)RGBLED_NUM / 2, (uint8_t)RGBLED_NUM); // left half cyan
            rgblight_sethsv_range(213,255,255, 0, (uint8_t)RGBLED_NUM / 2); // right half pink
        }
        break;
    case 2: // mouse layer lighting
        if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(1);
            rgblight_sethsv_range(213,255,255, (uint8_t)RGBLED_NUM / 2, (uint8_t)RGBLED_NUM); // left half pink
            rgblight_sethsv_range(120,255,255, 0, (uint8_t)RGBLED_NUM / 2); // right half cyan
        }
        break;
    case 3: // both nav and mouse
        if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(1);
            rgblight_sethsv_noeeprom(120,255,255);
        }
        break;
    case 4: // video games are set to rainbow mode
        if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_mode_noeeprom(gamesColour); // 8 for breathing rgb - 13 for rainbow sliding (hopefully)
        }
        break;
    case 5: // disable RGB for off mode
        if(!disable_layer_color) {
            rgblight_enable_noeeprom();
            rgblight_sethsv_noeeprom(0,0,0);
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
        else { rgblight_disable(); }
        }
        break;
    }
    return state;
};

void keyboard_post_init_user(void) {
  layer_state_set_user(layer_state);
}


