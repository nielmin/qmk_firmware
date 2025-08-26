#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif
#include "g/keymap_combo.h"


enum layers {
    _BASE,
    _NAV,
    _SYM,
    _NUM,
    // _GAM1,
    // _GAM2,
    // _GAM3,
};

enum {
    TD_TAB_ESC,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_TAB_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_TAB, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x5_3(
        KC_Q, KC_W, KC_F, KC_P, KC_B,                   KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
        KC_A, KC_R, KC_S, KC_T, KC_G,                   KC_M, KC_N, KC_E, KC_I, KC_O,
        KC_Z, KC_X, KC_C, KC_D, KC_V,                   KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,
            MO(1), KC_SPC, KC_NO,                          KC_NO, KC_RSFT, MO(2)
    ),
    [_NAV] = LAYOUT_split_3x5_3(
        KC_ESC, KC_VOLD, KC_MUTE, KC_VOLU, QK_AREP,                             KC_PGUP, KC_INS, KC_HOME, KC_END, KC_DEL,
        OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), QK_REP,     KC_PGDN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        KC_NO, TG(4), KC_NO, KC_NO, KC_NO,                                      KC_NO, KC_BSPC, KC_TAB, KC_NO, KC_ENT,
            KC_TRNS, KC_NO, KC_NO,                                                  KC_NO, KC_NO, MO(3)
    ),
    [_SYM] = LAYOUT_split_3x5_3(
        KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,       KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN,
        KC_GRV, KC_TILD, KC_LCBR, KC_LPRN, KC_LBRC,     KC_COLN, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI),
        KC_LT, KC_GT, KC_RCBR, KC_RPRN, KC_RBRC,        KC_PIPE, KC_MINS, KC_EQL, KC_PLUS, KC_BSLS,
            MO(3), KC_NO,KC_NO,                             KC_NO, KC_NO, KC_TRNS
    ),
    [_NUM] = LAYOUT_split_3x5_3(
        KC_1, KC_2, KC_3, KC_4, KC_5,                                           KC_6, KC_7, KC_8, KC_9, KC_0,
        OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_F11,     KC_F12, OSM(MOD_RSFT), OSM(MOD_RCTL), OSM(MOD_RALT), OSM(MOD_RGUI),
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                      KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
            KC_TRNS, KC_NO, KC_TRNS,                                                KC_NO, QK_BOOT, KC_TRNS
    ),
    // [_GAM1] = LAYOUT_split_3x5_3(
    //     KC_TAB, KC_Q, KC_W, KC_E, KC_R,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_LCTL, KC_A, KC_S, KC_D, KC_F,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_LSFT, KC_Z, KC_X, KC_C, KC_V,                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //         MO(5), KC_SPC, LT(_GAM3,KC_LALT),           KC_ENT, KC_BSPC, KC_NO
    // ),
    // [_GAM2] = LAYOUT_split_3x5_3(
    //     KC_ESC, KC_1, KC_2, KC_3, KC_T,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_L, KC_K, KC_J, KC_H, KC_G,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_P, KC_O, KC_I, KC_M, KC_B,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //         KC_NO, KC_NO, KC_NO,                            KC_NO, KC_NO, TG(4)
    // ),
    // [_GAM3] = LAYOUT_split_3x5_3(
    //     KC_ESC, KC_4, KC_5, KC_6, KC_Y,                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_F5,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //     KC_F1, KC_F2, KC_F3, KC_F4, KC_F9,              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    //         KC_NO, KC_NO, KC_NO,                            KC_NO, KC_NO, KC_NO
    // ),
};
