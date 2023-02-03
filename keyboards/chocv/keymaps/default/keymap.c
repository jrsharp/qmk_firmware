/* Copyright 2021 BrickBots Labs
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
};

enum my_keycodes {
    WOMBAT_DEBUG_1 = SAFE_RANGE,
    WOMBAT_DEBUG_2,
    WOMBAT_DEBUG_3,
    WOMBAT_DEBUG_4,
    WOMBAT_DEBUG_5,
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_QWERTY] = LAYOUT_split_3x5_3(
     KC_Q,    KC_W,    KC_E,      KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,      KC_O,     KC_P,
     KC_A,    KC_S,    KC_D,      KC_F,       KC_G,    KC_H,    KC_J,    KC_K,      KC_L,     KC_SCLN,
     KC_Z,    KC_X,    KC_C,      KC_V,       KC_B,    KC_N,    KC_M,    KC_COMM,   KC_DOT,   KC_SLSH,
                       KC_LSFT,   KC_LALT,    KC_ENT,  KC_SPC,  KC_DEL,  KC_RCTL
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case WOMBAT_DEBUG_1:
      if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          register_code(KC_CAPSLOCK);
          register_code(KC_V);
      } else {
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          unregister_code(KC_CAPSLOCK);
          unregister_code(KC_V);
      }
      return false; // Skip all further processing of this key
      case WOMBAT_DEBUG_2:
      if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          register_code(KC_CAPSLOCK);
          register_code(KC_I);
      } else {
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          unregister_code(KC_CAPSLOCK);
          unregister_code(KC_I);
      }
      return false; // Skip all further processing of this key
      case WOMBAT_DEBUG_3:
      if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          register_code(KC_CAPSLOCK);
          register_code(KC_V);
      } else {
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          unregister_code(KC_CAPSLOCK);
          unregister_code(KC_V);
      }
      return false; // Skip all further processing of this key
      case WOMBAT_DEBUG_4:
      if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          register_code(KC_CAPSLOCK);
          register_code(KC_C);
      } else {
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          unregister_code(KC_CAPSLOCK);
          unregister_code(KC_C);
      }
      return false; // Skip all further processing of this key
      case WOMBAT_DEBUG_5:
      if (record->event.pressed) {
          register_code(KC_LCTL);
          register_code(KC_LSFT);
          register_code(KC_CAPSLOCK);
          register_code(KC_T);
      } else {
          unregister_code(KC_LCTL);
          unregister_code(KC_LSFT);
          unregister_code(KC_CAPSLOCK);
          unregister_code(KC_T);
      }
      return false; // Skip all further processing of this key
 
    default:
      return true; // Process all other keycodes normally
  }
}

