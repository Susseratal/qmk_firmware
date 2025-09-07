// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

<<<<<<< HEAD
#define QMK_COLEMAK_KEYCODES_VERSION "0.0.1"
#define QMK_COLEMAK_KEYCODES_VERSION_BCD 0x00000001
#define QMK_COLEMAK_KEYCODES_VERSION_MAJOR 0
#define QMK_COLEMAK_KEYCODES_VERSION_MINOR 0
#define QMK_COLEMAK_KEYCODES_VERSION_PATCH 1

// Aliases
=======
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ F │ P │ G │ J │ L │ U │ Y │ ; │ [ │ ] │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │ A │ R │ S │ T │ D │ H │ N │ E │ I │ O │ ' │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │ Z │ X │ C │ V │ B │ K │ M │ , │ . │ / │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
>>>>>>> firmware21
#define CM_GRV  KC_GRV  // `
#define CM_1    KC_1    // 1
#define CM_2    KC_2    // 2
#define CM_3    KC_3    // 3
#define CM_4    KC_4    // 4
#define CM_5    KC_5    // 5
#define CM_6    KC_6    // 6
#define CM_7    KC_7    // 7
#define CM_8    KC_8    // 8
#define CM_9    KC_9    // 9
#define CM_0    KC_0    // 0
#define CM_MINS KC_MINS // -
#define CM_EQL  KC_EQL  // =
#define CM_Q    KC_Q    // Q
#define CM_W    KC_W    // W
#define CM_F    KC_E    // F
#define CM_P    KC_R    // P
#define CM_G    KC_T    // G
#define CM_J    KC_Y    // J
#define CM_L    KC_U    // L
#define CM_U    KC_I    // U
#define CM_Y    KC_O    // Y
#define CM_SCLN KC_P    // ;
#define CM_LBRC KC_LBRC // [
#define CM_RBRC KC_RBRC // ]
#define CM_BSLS KC_BSLS // (backslash)
#define CM_A    KC_A    // A
#define CM_R    KC_S    // R
#define CM_S    KC_D    // S
#define CM_T    KC_F    // T
#define CM_D    KC_G    // D
#define CM_H    KC_H    // H
#define CM_N    KC_J    // N
#define CM_E    KC_K    // E
#define CM_I    KC_L    // I
#define CM_O    KC_SCLN // O
#define CM_QUOT KC_QUOT // '
#define CM_Z    KC_Z    // Z
#define CM_X    KC_X    // X
#define CM_C    KC_C    // C
#define CM_V    KC_V    // V
#define CM_B    KC_B    // B
#define CM_K    KC_N    // K
#define CM_M    KC_M    // M
#define CM_COMM KC_COMM // ,
#define CM_DOT  KC_DOT  // .
#define CM_SLSH KC_SLSH // /
<<<<<<< HEAD
=======

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │ : │ { │ } │  |  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │      │   │   │   │   │   │   │   │   │   │   │ " │        │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │        │   │   │   │   │   │   │   │ < │ > │ ? │          │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
>>>>>>> firmware21
#define CM_TILD S(CM_GRV)  // ~
#define CM_EXLM S(CM_1)    // !
#define CM_AT   S(CM_2)    // @
#define CM_HASH S(CM_3)    // #
#define CM_DLR  S(CM_4)    // $
#define CM_PERC S(CM_5)    // %
#define CM_CIRC S(CM_6)    // ^
#define CM_AMPR S(CM_7)    // &
#define CM_ASTR S(CM_8)    // *
#define CM_LPRN S(CM_9)    // (
#define CM_RPRN S(CM_0)    // )
#define CM_UNDS S(CM_MINS) // _
#define CM_PLUS S(CM_EQL)  // +
#define CM_COLN S(CM_SCLN) // :
#define CM_LCBR S(CM_LBRC) // {
#define CM_RCBR S(CM_RBRC) // }
#define CM_PIPE S(CM_BSLS) // |
#define CM_DQUO S(CM_QUOT) // "
#define CM_LABK S(CM_COMM) // <
#define CM_RABK S(CM_DOT)  // >
<<<<<<< HEAD
#define CM_QUES S(CM_SLSH) // ?

=======
#define CM_QUES S(CM_SLSH) // /

// DEPRECATED
#define KC_CM_Q    CM_Q
#define KC_CM_W    CM_W
#define KC_CM_F    CM_F
#define KC_CM_P    CM_P
#define KC_CM_G    CM_G
#define KC_CM_J    CM_J
#define KC_CM_L    CM_L
#define KC_CM_U    CM_U
#define KC_CM_Y    CM_Y
#define KC_CM_SCLN CM_SCLN
#define KC_CM_A    CM_A
#define KC_CM_R    CM_R
#define KC_CM_S    CM_S
#define KC_CM_T    CM_T
#define KC_CM_D    CM_D
#define KC_CM_H    CM_H
#define KC_CM_N    CM_N
#define KC_CM_E    CM_E
#define KC_CM_I    CM_I
#define KC_CM_O    CM_O
#define KC_CM_Z    CM_Z
#define KC_CM_X    CM_X
#define KC_CM_C    CM_C
#define KC_CM_V    CM_V
#define KC_CM_B    CM_B
#define KC_CM_K    CM_K
#define KC_CM_M    CM_M
#define KC_CM_COMM CM_COMM
#define KC_CM_DOT  CM_DOT
#define KC_CM_SLSH CM_SLSH
>>>>>>> firmware21
