// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ Å │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ Æ │ Ø │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSPC,
                                            KC_LALT, KC_SPC, MO(1),          	  MO(2), KC_ENT,  KC_LGUI
    ),
	[1] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,   KC_9,     KC_0,    KC_MINS,
        KC_LCTL, KC_CAPS, KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_RBRC, KC_BSLS,
        KC_LSFT, KC_NUBS, KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_NO,   KC_BSPC,
                                            KC_LALT, KC_SPC, KC_TRANSPARENT,      KC_NO, KC_ENT,  KC_RALT
    ),
	[2] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_F1, KC_F2,               KC_F3,               KC_F4,                 KC_F5,                       KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,
        KC_LCTL, KC_NO, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,   KC_AUDIO_MUTE,               KC_INS,  KC_HOME, KC_PGUP, KC_PSCR,  KC_SCRL, KC_PAUS,
        KC_LSFT, KC_NO, KC_NO,               KC_KB_VOLUME_DOWN,   KC_KB_VOLUME_UP,       KC_NO,                       KC_DEL,  KC_END,  KC_PGDN, KC_NO,    KC_NO,   KC_BSPC,
                                                                                   KC_LALT, KC_SPC, KC_NO,        KC_TRANSPARENT, KC_ENT,  KC_LGUI
    )
};