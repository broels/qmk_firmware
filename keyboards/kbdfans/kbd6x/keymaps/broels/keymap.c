#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Type */
  [0] = LAYOUT(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSLS, KC_GRV,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, KC_BSPC,
    LCTL_T(KC_BSPC), LT(3,KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_RBRC, KC_H, LSFT_T(KC_J),  LCTL_T(KC_K), LALT_T(KC_L), LT(3,KC_QUOT), KC_ENT,
    KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSPC, MO(4),
    KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO
  ),

  /* Program */
  [1] = LAYOUT(
      KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_EQL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, KC_BSPC,
      LCTL_T(KC_BSPC), LT(3,KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_RBRC, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LT(3,KC_QUOT), KC_ENT,
      KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSPC, MO(4),
      KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO
  ),

  /* Game */
  [2] = LAYOUT(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, KC_BSPC,
      KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT, MO(4),
      KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO
  ),

  /* Symbol */
  [3] = LAYOUT(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_BSPC,
      KC_LCTL, KC_NO, KC_LCBR, KC_LBRC, KC_LPRN, KC_NO, KC_RBRC, KC_NO, KC_RPRN, KC_RBRC, KC_RCBR, KC_NO, KC_ENT,
      KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLSH, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_RSFT, MO(4),
      KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO
  ),

  /* System */
  [4] = LAYOUT(
      KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO,
      KC_NO, TO(0), TO(1), TO(2), TO(3), TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, KC_NO,
      KC_DEL, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_INS,
      KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_END, KC_PGDN, KC_DOWN, KC_NO, KC_TRNS,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  )

};
