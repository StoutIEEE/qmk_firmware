/* Copyright 2018 Jack H.
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

#define TAPPING_TOGGLE 2


// Layer names
#define base  0
#define shrek 1
#define ogre  2
#define tcp   3

// Layer Switches
#define KC_SHRK MO(shrek)
#define KC_OGRE MO(ogre)
#define KC_TCP MO(tcp)

// Custom Buttons
#define A9  LCA(KC_F9)
#define A10 LCA(KC_F10)
#define A11 LCA(KC_F11)
#define A12 LCA(KC_F12)
#define A13 LCA(KC_F13)
#define A14 LCA(KC_F14)
#define A15 LCA(KC_F15)
#define A16 LCA(KC_F16)
#define A17 LCA(KC_F17)
#define A18 LCA(KC_F18)
#define A19 LCA(KC_F19)
#define A20 LCA(KC_F20)
#define A21 LCA(KC_F21)
#define A22 LCA(KC_F22)
#define A23 LCA(KC_F23)
#define A24 LCA(KC_F24)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [base] = LAYOUT(
  //         ┌────────┬────────┬────────┐

                KC_F9,  KC_F10,  KC_F11,

  //    ├────────┼────────┼────────┼────────┼

          KC_F12,  KC_F13,  KC_F14  , KC_F15,

  //    ├────────┼────────┼────────┼────────┼

               KC_SHRK, KC_F16, KC_OGRE

  //         └────────┴────────┴────────┘
  ),
  [shrek] = LAYOUT(
  //         ┌────────┬────────┬────────┐

               KC_F17, KC_F18, KC_F19,

  //    ├────────┼────────┼────────┼────────┼

          KC_F20,   KC_F21,   KC_F22,    KC_F23,

  //    ├────────┼────────┼────────┼────────┼

              _______,    A10,   KC_TCP

  //         └────────┴────────┴────────┘
  ),
  [ogre] = LAYOUT(
  //         ┌────────┬────────┬────────┐

                KC_F24,    A13,    A14,

  //    ├────────┼────────┼────────┼────────┼

           A15,     A16,      A17,    A18,

  //    ├────────┼────────┼────────┼────────┼

               KC_TCP,    A11,   _______

  //         └────────┴────────┴────────┘
  ),
  [tcp] = LAYOUT(
  //         ┌────────┬────────┬────────┐

               A19    ,   A20,    A21,

  //    ├────────┼────────┼────────┼────────┼

          A22    ,  A23   ,   A24,   A9,

  //    ├────────┼────────┼────────┼────────┼

              _______,    A12 ,   _______

  //         └────────┴────────┴────────┘
  ),
};
