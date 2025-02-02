#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_LCTL, KC_A, LT(2,KC_S), LT(3,KC_D), KC_F, KC_G, KC_H, KC_J, KC_K, LT(4,KC_L), LT(1,KC_SLSH), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, LT(5,KC_ESC), SGUI(KC_4), KC_N, KC_M, KC_COMM, KC_DOT, KC_SCLN, KC_RSFT, KC_LGUI, KC_HOME, KC_ENT, KC_SPC, KC_END, KC_RALT),
    [1] = LAYOUT(KC_TILD, KC_EXLM, KC_DQUO, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_NO, KC_NO, LALT(KC_3), KC_AMPR, KC_PIPE, KC_LPRN, KC_RPRN, KC_COLN, KC_EQL, KC_QUES, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_GRV, KC_QUOT, KC_DQUO, KC_LBRC, KC_RBRC, KC_PLUS, KC_MINS, KC_AT, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_LT, KC_GT, KC_RCBR, KC_ASTR, KC_UNDS, KC_NUBS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO, KC_NO, KC_TRNS, LCTL(KC_LEFT), KC_NO, LCTL(KC_UP), LCTL(KC_RGHT), KC_NO, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_WBAK, KC_WFWD, KC_TRNS),
    [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_ACL0, MS_ACL1, MS_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, MS_UP, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, MS_BTN2, KC_NO, MS_BTN1, KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, MS_WHLL, MS_WHLU, MS_WHLD, MS_WHLR, KC_TRNS),
    [4] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [5] = LAYOUT(QK_BOOT, DB_TOGG, KC_NO, KC_NO, KC_NO, RGB_HUI, RGB_HUD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SAI, RGB_SAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD, RGB_TOG, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_SPI, KC_NO, KC_NO, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


