/* Copyright 2017 Jason Williams (Wilba)
 * Copyright 2024-2025 Nick Brassel (@tzarc)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

<<<<<<< HEAD
#include "dynamic_keymap.h"
#include "keymap_introspection.h"
#include "action.h"
#include "send_string.h"
#include "keycodes.h"
#include "nvm_dynamic_keymap.h"
=======
#include "keymap.h" // to get keymaps[][][]
#include "eeprom.h"
#include "progmem.h"  // to read default from flash
#include "quantum.h"  // for send_string()
#include "eeconfig.h"
#include "dynamic_keymap.h"
>>>>>>> firmware21

#ifdef ENCODER_ENABLE
#    include "encoder.h"
#else
#    define NUM_ENCODERS 0
#endif

<<<<<<< HEAD
#ifndef DYNAMIC_KEYMAP_MACRO_DELAY
#    define DYNAMIC_KEYMAP_MACRO_DELAY TAP_CODE_DELAY
=======
#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif

#ifndef DYNAMIC_KEYMAP_MACRO_COUNT
#    define DYNAMIC_KEYMAP_MACRO_COUNT 16
#endif

#ifndef TOTAL_EEPROM_BYTE_COUNT
#    error Unknown total EEPROM size. Cannot derive maximum for dynamic keymaps.
#endif

#ifndef DYNAMIC_KEYMAP_EEPROM_MAX_ADDR
#    define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR (TOTAL_EEPROM_BYTE_COUNT - 1)
#endif

#if DYNAMIC_KEYMAP_EEPROM_MAX_ADDR > (TOTAL_EEPROM_BYTE_COUNT - 1)
#    pragma message STR(DYNAMIC_KEYMAP_EEPROM_MAX_ADDR) " > " STR((TOTAL_EEPROM_BYTE_COUNT - 1))
#    error DYNAMIC_KEYMAP_EEPROM_MAX_ADDR is configured to use more space than what is available for the selected EEPROM driver
#endif

// Due to usage of uint16_t check for max 65535
#if DYNAMIC_KEYMAP_EEPROM_MAX_ADDR > 65535
#    pragma message STR(DYNAMIC_KEYMAP_EEPROM_MAX_ADDR) " > 65535"
#    error DYNAMIC_KEYMAP_EEPROM_MAX_ADDR must be less than 65536
#endif

// If DYNAMIC_KEYMAP_EEPROM_ADDR not explicitly defined in config.h,
// default it start after VIA_EEPROM_CUSTOM_ADDR+VIA_EEPROM_CUSTOM_SIZE
#ifndef DYNAMIC_KEYMAP_EEPROM_ADDR
#    ifdef VIA_ENABLE
#        ifdef VIA_EEPROM_CUSTOM_CONFIG_ADDR
#            define DYNAMIC_KEYMAP_EEPROM_ADDR (VIA_EEPROM_CUSTOM_CONFIG_ADDR + VIA_EEPROM_CUSTOM_CONFIG_SIZE)
#        else
#            error DYNAMIC_KEYMAP_EEPROM_ADDR not defined
#        endif
#    else
#        define DYNAMIC_KEYMAP_EEPROM_ADDR EECONFIG_SIZE
#    endif
#endif

// Dynamic encoders starts after dynamic keymaps
#ifndef DYNAMIC_KEYMAP_ENCODER_EEPROM_ADDR
#    define DYNAMIC_KEYMAP_ENCODER_EEPROM_ADDR (DYNAMIC_KEYMAP_EEPROM_ADDR + (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2))
#endif

// Dynamic macro starts after dynamic encoders, but only when using ENCODER_MAP
#ifdef ENCODER_MAP_ENABLE
#    ifndef DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
#        define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR (DYNAMIC_KEYMAP_ENCODER_EEPROM_ADDR + (DYNAMIC_KEYMAP_LAYER_COUNT * NUM_ENCODERS * 2 * 2))
#    endif // DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
#else      // ENCODER_MAP_ENABLE
#    ifndef DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
#        define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR (DYNAMIC_KEYMAP_ENCODER_EEPROM_ADDR)
#    endif // DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR
#endif     // ENCODER_MAP_ENABLE

// Sanity check that dynamic keymaps fit in available EEPROM
// If there's not 100 bytes available for macros, then something is wrong.
// The keyboard should override DYNAMIC_KEYMAP_LAYER_COUNT to reduce it,
// or DYNAMIC_KEYMAP_EEPROM_MAX_ADDR to increase it, *only if* the microcontroller has
// more than the default.
_Static_assert((DYNAMIC_KEYMAP_EEPROM_MAX_ADDR) - (DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR) >= 100, "Dynamic keymaps are configured to use more EEPROM than is available.");

// Dynamic macros are stored after the keymaps and use what is available
// up to and including DYNAMIC_KEYMAP_EEPROM_MAX_ADDR.
#ifndef DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE
#    define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE (DYNAMIC_KEYMAP_EEPROM_MAX_ADDR - DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR + 1)
>>>>>>> firmware21
#endif

uint8_t dynamic_keymap_get_layer_count(void) {
    return DYNAMIC_KEYMAP_LAYER_COUNT;
}

uint16_t dynamic_keymap_get_keycode(uint8_t layer, uint8_t row, uint8_t column) {
    return nvm_dynamic_keymap_read_keycode(layer, row, column);
}

void dynamic_keymap_set_keycode(uint8_t layer, uint8_t row, uint8_t column, uint16_t keycode) {
    nvm_dynamic_keymap_update_keycode(layer, row, column, keycode);
}

#ifdef ENCODER_MAP_ENABLE
uint16_t dynamic_keymap_get_encoder(uint8_t layer, uint8_t encoder_id, bool clockwise) {
    return nvm_dynamic_keymap_read_encoder(layer, encoder_id, clockwise);
}

void dynamic_keymap_set_encoder(uint8_t layer, uint8_t encoder_id, bool clockwise, uint16_t keycode) {
    nvm_dynamic_keymap_update_encoder(layer, encoder_id, clockwise, keycode);
}
#endif // ENCODER_MAP_ENABLE

void dynamic_keymap_reset(void) {
    // Erase the keymaps, if necessary.
    nvm_dynamic_keymap_erase();

    // Reset the keymaps in EEPROM to what is in flash.
    for (int layer = 0; layer < DYNAMIC_KEYMAP_LAYER_COUNT; layer++) {
        for (int row = 0; row < MATRIX_ROWS; row++) {
            for (int column = 0; column < MATRIX_COLS; column++) {
                dynamic_keymap_set_keycode(layer, row, column, keycode_at_keymap_location_raw(layer, row, column));
            }
        }
#ifdef ENCODER_MAP_ENABLE
        for (int encoder = 0; encoder < NUM_ENCODERS; encoder++) {
            dynamic_keymap_set_encoder(layer, encoder, true, keycode_at_encodermap_location_raw(layer, encoder, true));
            dynamic_keymap_set_encoder(layer, encoder, false, keycode_at_encodermap_location_raw(layer, encoder, false));
        }
#endif // ENCODER_MAP_ENABLE
    }
}

void dynamic_keymap_get_buffer(uint16_t offset, uint16_t size, uint8_t *data) {
    nvm_dynamic_keymap_read_buffer(offset, size, data);
}

void dynamic_keymap_set_buffer(uint16_t offset, uint16_t size, uint8_t *data) {
    nvm_dynamic_keymap_update_buffer(offset, size, data);
}

uint16_t keycode_at_keymap_location(uint8_t layer_num, uint8_t row, uint8_t column) {
    if (layer_num < DYNAMIC_KEYMAP_LAYER_COUNT && row < MATRIX_ROWS && column < MATRIX_COLS) {
        return dynamic_keymap_get_keycode(layer_num, row, column);
    }
    return KC_NO;
}

#ifdef ENCODER_MAP_ENABLE
uint16_t keycode_at_encodermap_location(uint8_t layer_num, uint8_t encoder_idx, bool clockwise) {
    if (layer_num < DYNAMIC_KEYMAP_LAYER_COUNT && encoder_idx < NUM_ENCODERS) {
        return dynamic_keymap_get_encoder(layer_num, encoder_idx, clockwise);
    }
    return KC_NO;
}
#endif // ENCODER_MAP_ENABLE

uint8_t dynamic_keymap_macro_get_count(void) {
    return DYNAMIC_KEYMAP_MACRO_COUNT;
}

uint16_t dynamic_keymap_macro_get_buffer_size(void) {
    return (uint16_t)nvm_dynamic_keymap_macro_size();
}

void dynamic_keymap_macro_get_buffer(uint16_t offset, uint16_t size, uint8_t *data) {
    nvm_dynamic_keymap_macro_read_buffer(offset, size, data);
}

void dynamic_keymap_macro_set_buffer(uint16_t offset, uint16_t size, uint8_t *data) {
    nvm_dynamic_keymap_macro_update_buffer(offset, size, data);
}

static uint8_t dynamic_keymap_read_byte(uint32_t offset) {
    uint8_t d;
    nvm_dynamic_keymap_macro_read_buffer(offset, 1, &d);
    return d;
}

typedef struct send_string_nvm_state_t {
    uint32_t offset;
} send_string_nvm_state_t;

char send_string_get_next_nvm(void *arg) {
    send_string_nvm_state_t *state = (send_string_nvm_state_t *)arg;
    char                     ret   = dynamic_keymap_read_byte(state->offset);
    state->offset++;
    return ret;
}

void dynamic_keymap_macro_reset(void) {
    // Erase the macros, if necessary.
    nvm_dynamic_keymap_macro_erase();
    nvm_dynamic_keymap_macro_reset();
}

void dynamic_keymap_macro_send(uint8_t id) {
    if (id >= DYNAMIC_KEYMAP_MACRO_COUNT) {
        return;
    }

    // Check the last byte of the buffer.
    // If it's not zero, then we are in the middle
    // of buffer writing, possibly an aborted buffer
    // write. So do nothing.
    if (dynamic_keymap_read_byte(nvm_dynamic_keymap_macro_size() - 1) != 0) {
        return;
    }

    // Skip N null characters
    // p will then point to the Nth macro
    uint32_t offset = 0;
    uint32_t end    = nvm_dynamic_keymap_macro_size();
    while (id > 0) {
        // If we are past the end of the buffer, then there is
        // no Nth macro in the buffer.
        if (offset == end) {
            return;
        }
        if (dynamic_keymap_read_byte(offset) == 0) {
            --id;
        }
        ++offset;
    }

    send_string_nvm_state_t state = {.offset = 0};
    send_string_with_delay_impl(send_string_get_next_nvm, &state, DYNAMIC_KEYMAP_MACRO_DELAY);
}
