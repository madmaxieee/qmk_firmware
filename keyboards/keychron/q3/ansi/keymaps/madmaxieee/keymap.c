/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

enum layers{
    MAC_BASE,
    MAC_FN,
    GAMING,
    // WIN_BASE,
    // WIN_FN,
    SYM,
    MOONLANDER_SYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,                  KC_BRID,       KC_BRIU,       KC_NO,         KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,             KC_VOLD,    KC_VOLU,  KC_NO,    KC_NO,    RGB_MOD,
        KC_GRV,   KC_1,          KC_2,          KC_3,          KC_4,          KC_5,     KC_6,     KC_7,          KC_8,          KC_9,          KC_0,             KC_MINS,                         KC_EQL,   KC_BSPC,            KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,     KC_Y,     KC_U,          KC_I,          KC_O,          KC_P,             KC_LBRC,                         KC_RBRC,  KC_BSLS,            KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  LSFT_T(KC_A),  LCTL_T(KC_S),  LALT_T(KC_D),  LGUI_T(KC_F),  KC_G,     KC_H,     RGUI_T(KC_J),  RALT_T(KC_K),  RCTL_T(KC_L),  RSFT_T(KC_SCLN),  KC_QUOT,                                   KC_ENT,
        KC_LSFT,                 KC_Z,          KC_X,          KC_C,          KC_V,     KC_B,     KC_N,          KC_M,          KC_COMM,       KC_DOT,           KC_SLSH,                                   KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,       KC_LCMD,                                               KC_SPC,                                                KC_RCMD,          MO(MOONLANDER_SYM),  MO(MAC_FN), KC_RCTL,  KC_LEFT,            KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    
    [GAMING] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_NO,    KC_NO,    RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,              KC_VOLD,    KC_VOLU,  KC_NO,    KC_NO,    RGB_MOD,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,              KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,              KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                         KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  MO(MOONLANDER_SYM),  MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    // [WIN_BASE] = LAYOUT_tkl_ansi(
    //     KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_PSCR,  _______,  RGB_MOD,
    //     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
    //     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
    //     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
    //     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,            KC_UP,
    //     KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    // [WIN_FN] = LAYOUT_tkl_ansi(
    //     _______,            KC_BRID,  KC_BRIU,  _______,  _______,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  RGB_TOG,
    //     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
    //     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
    //     _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
    //     _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,            _______,
    //     _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    
    [SYM] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  KC_GRV,   KC_LPRN,  KC_RPRN,  KC_SCLN,  KC_COMM,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_EXLM,  KC_LCBR,  KC_QUOT,  KC_DQUO,  KC_RCBR,  KC_QUES,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        KC_HASH,  KC_CIRC,  KC_EQL,   KC_UNDS,  KC_DLR,   KC_ASTR,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        KC_AT,              KC_LT,    KC_PIPE,  KC_MINS,  KC_GT,    KC_BSLS,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
    
    [MOONLANDER_SYM] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   _______,    _______,  _______,  _______,  _______,
        _______,  KC_EXLM,  KC_AT,    KC_LBRC,  KC_RBRC,  KC_PIPE,  _______,  KC_7,     KC_8,     KC_9,     KC_ASTR,  KC_F12,   _______,    _______,  _______,  _______,  _______,
        _______,  KC_HASH,  KC_CIRC,  KC_LPRN,  KC_RPRN,  KC_DLR,   _______,  KC_4,     KC_5,     KC_6,     KC_PLUS,  _______,              _______,
        _______,            KC_PERC,  KC_GRV,   KC_LCBR,  KC_RCBR,  KC_TILD,  KC_AMPR,  KC_1,     KC_2,     KC_3,     KC_BSLS,              _______,            _______,
        _______,  _______,  _______,                                _______,                                KC_0,     _______,  _______,    _______,  _______,  _______,  _______),
};
