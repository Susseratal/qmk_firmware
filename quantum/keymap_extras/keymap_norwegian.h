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
#define QMK_NORWEGIAN_KEYCODES_VERSION "0.0.1"
#define QMK_NORWEGIAN_KEYCODES_VERSION_BCD 0x00000001
#define QMK_NORWEGIAN_KEYCODES_VERSION_MAJOR 0
#define QMK_NORWEGIAN_KEYCODES_VERSION_MINOR 0
#define QMK_NORWEGIAN_KEYCODES_VERSION_PATCH 1

// Aliases
#define NO_PIPE KC_GRV  // |
#define NO_1    KC_1    // 1
#define NO_2    KC_2    // 2
#define NO_3    KC_3    // 3
#define NO_4    KC_4    // 4
#define NO_5    KC_5    // 5
#define NO_6    KC_6    // 6
#define NO_7    KC_7    // 7
#define NO_8    KC_8    // 8
#define NO_9    KC_9    // 9
#define NO_0    KC_0    // 0
#define NO_PLUS KC_MINS // +
#define NO_BSLS KC_EQL  // (backslash)
#define NO_Q    KC_Q    // Q
#define NO_W    KC_W    // W
#define NO_E    KC_E    // E
#define NO_R    KC_R    // R
#define NO_T    KC_T    // T
#define NO_Y    KC_Y    // Y
#define NO_U    KC_U    // U
#define NO_I    KC_I    // I
#define NO_O    KC_O    // O
#define NO_P    KC_P    // P
#define NO_ARNG KC_LBRC // Å
#define NO_DIAE KC_RBRC // ¨ (dead)
#define NO_A    KC_A    // A
#define NO_S    KC_S    // S
#define NO_D    KC_D    // D
#define NO_F    KC_F    // F
#define NO_G    KC_G    // G
#define NO_H    KC_H    // H
#define NO_J    KC_J    // J
#define NO_K    KC_K    // K
#define NO_L    KC_L    // L
#define NO_OSTR KC_SCLN // Ø
#define NO_AE   KC_QUOT // Æ
#define NO_QUOT KC_NUHS // '
#define NO_LABK KC_NUBS // <
#define NO_Z    KC_Z    // Z
#define NO_X    KC_X    // X
#define NO_C    KC_C    // C
#define NO_V    KC_V    // V
#define NO_B    KC_B    // B
#define NO_N    KC_N    // N
#define NO_M    KC_M    // M
#define NO_COMM KC_COMM // ,
#define NO_DOT  KC_DOT  // .
#define NO_MINS KC_SLSH // -
#define NO_SECT S(NO_PIPE) // §
#define NO_EXLM S(NO_1)    // !
#define NO_DQUO S(NO_2)    // "
#define NO_HASH S(NO_3)    // #
#define NO_CURR S(NO_4)    // ¤
#define NO_PERC S(NO_5)    // %
#define NO_AMPR S(NO_6)    // &
#define NO_SLSH S(NO_7)    // /
#define NO_LPRN S(NO_8)    // (
#define NO_RPRN S(NO_9)    // )
#define NO_EQL  S(NO_0)    // =
#define NO_QUES S(NO_PLUS) // ?
#define NO_GRV  S(NO_BSLS) // ` (dead)
#define NO_CIRC S(NO_DIAE) // ^ (dead)
#define NO_ASTR S(NO_QUOT) // *
#define NO_RABK S(NO_LABK) // >
#define NO_SCLN S(NO_COMM) // ;
#define NO_COLN S(NO_DOT)  // :
#define NO_UNDS S(NO_MINS) // _
#define NO_AT   ALGR(NO_2)    // @
#define NO_PND  ALGR(NO_3)    // £
#define NO_DLR  ALGR(NO_4)    // $
#define NO_EURO ALGR(NO_5)    // €
#define NO_LCBR ALGR(NO_7)    // {
#define NO_LBRC ALGR(NO_8)    // [
#define NO_RBRC ALGR(NO_9)    // ]
#define NO_RCBR ALGR(NO_0)    // }
#define NO_ACUT ALGR(NO_BSLS) // ´ (dead)
#define NO_TILD ALGR(NO_DIAE) // ~ (dead)
#define NO_MICR ALGR(NO_M)    // µ

=======
/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ \ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ø │ Æ │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NRW_PIPE KC_GRV  // |
#define NRW_1    KC_1    // 1
#define NRW_2    KC_2    // 2
#define NRW_3    KC_3    // 3
#define NRW_4    KC_4    // 4
#define NRW_5    KC_5    // 5
#define NRW_6    KC_6    // 6
#define NRW_7    KC_7    // 7
#define NRW_8    KC_8    // 8
#define NRW_9    KC_9    // 9
#define NRW_0    KC_0    // 0
#define NRW_PLUS KC_MINS // +
#define NRW_BSLS KC_EQL  // (backslash)
// Row 2
#define NRW_Q    KC_Q    // Q
#define NRW_W    KC_W    // W
#define NRW_E    KC_E    // E
#define NRW_R    KC_R    // R
#define NRW_T    KC_T    // T
#define NRW_Y    KC_Y    // Y
#define NRW_U    KC_U    // U
#define NRW_I    KC_I    // I
#define NRW_O    KC_O    // O
#define NRW_P    KC_P    // P
#define NRW_ARNG KC_LBRC // Å
#define NRW_DIAE KC_RBRC // ¨ (dead)
// Row 3
#define NRW_A    KC_A    // A
#define NRW_S    KC_S    // S
#define NRW_D    KC_D    // D
#define NRW_F    KC_F    // F
#define NRW_G    KC_G    // G
#define NRW_H    KC_H    // H
#define NRW_J    KC_J    // J
#define NRW_K    KC_K    // K
#define NRW_L    KC_L    // L
#define NRW_OSTR KC_SCLN // Ø
#define NRW_AE   KC_QUOT // Æ
#define NRW_QUOT KC_NUHS // '
// Row 4
#define NRW_LABK KC_NUBS // <
#define NRW_Z    KC_Z    // Z
#define NRW_X    KC_X    // X
#define NRW_C    KC_C    // C
#define NRW_V    KC_V    // V
#define NRW_B    KC_B    // B
#define NRW_N    KC_N    // N
#define NRW_M    KC_M    // M
#define NRW_COMM KC_COMM // ,
#define NRW_DOT  KC_DOT  // .
#define NRW_MINS KC_SLSH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NRW_SECT S(NRW_PIPE) // §
#define NRW_EXLM S(NRW_1)    // !
#define NRW_DQUO S(NRW_2)    // "
#define NRW_HASH S(NRW_3)    // #
#define NRW_CURR S(NRW_4)    // ¤
#define NRW_PERC S(NRW_5)    // %
#define NRW_AMPR S(NRW_6)    // &
#define NRW_SLSH S(NRW_7)    // /
#define NRW_LPRN S(NRW_8)    // (
#define NRW_RPRN S(NRW_9)    // )
#define NRW_EQL  S(NRW_0)    // =
#define NRW_QUES S(NRW_PLUS) // ?
#define NRW_GRV  S(NRW_BSLS) // ` (dead)
// Row 2
#define NRW_CIRC S(NRW_DIAE) // ^ (dead)
// Row 3
#define NRW_ASTR S(NRW_QUOT) // *
// Row 4
#define NRW_RABK S(NRW_LABK) // >
#define NRW_SCLN S(NRW_COMM) // ;
#define NRW_COLN S(NRW_DOT)  // :
#define NRW_UNDS S(NRW_MINS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │   │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NRW_AT   ALGR(NRW_2)    // @
#define NRW_PND  ALGR(NRW_3)    // £
#define NRW_DLR  ALGR(NRW_4)    // $
#define NRW_EURO ALGR(NRW_5)    // €
#define NRW_LCBR ALGR(NRW_7)    // {
#define NRW_LBRC ALGR(NRW_8)    // [
#define NRW_RBRC ALGR(NRW_9)    // ]
#define NRW_RCBR ALGR(NRW_0)    // }
#define NRW_ACUT ALGR(NRW_BSLS) // ´ (dead)
// Row 2
#define NRW_TILD ALGR(NRW_DIAE) // ~ (dead)
// Row 4
#define NRW_MICR ALGR(NRW_M)    // µ

// DEPRECATED
#define NRW_AM       NRW_ARNG
#define NRW_AA       NRW_ARNG
#define NRW_OSLH     NRW_OSTR
#define NRW_APOS     NRW_QUOT
#define NRW_LESS     NRW_LABK
#define NRW_QUO2     NRW_DQUO
#define NRW_BULT     NRW_CURR
#define NRW_GRTR     NRW_RABK
#define NRW_MU       NRW_MICR
// Norwegian macOS symbols
#define NRW_ACUT_MAC NRW_BSLS       // ´
#define NRW_APOS_MAC NRW_LABK       // '
#define NRW_AT_MAC   NRW_QUOT       // @
#define NRW_BSLS_MAC S(ALGR(NRW_7)) // (backslash)
#define NRW_DLR_MAC  S(NRW_4)       // $
#define NRW_GRV_MAC  ALGR(NRW_BSLS) // `
#define NRW_GRTR_MAC S(NRW_PIPE)    // >
#define NRW_LCBR_MAC S(ALGR(NRW_8)) // {
#define NRW_LESS_MAC NRW_PIPE       // <
#define NRW_PIPE_MAC ALGR(NRW_7)    // |
#define NRW_RCBR_MAC S(ALGR(NRW_9)) // }
>>>>>>> firmware21
