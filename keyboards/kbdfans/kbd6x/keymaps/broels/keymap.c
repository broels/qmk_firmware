#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Base */
  [0] = LAYOUT(

      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, KC_BSPC,
      KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT,
      KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT, MO(4),
      KC_NO, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, KC_RGUI, KC_NO

  ),

  /* QWERTY */
  [1] = LAYOUT(

      LT(4, KC_ESC), KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_PLUS, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SCLN, KC_BSPC,
      LCTL_T(KC_BSPC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_ENT,
      KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSPC, MO(4),
      KC_NO, KC_LGUI, KC_LALT, LCTL_T(KC_SPC), MO(3), KC_RGUI, KC_NO

  ),

  /* Colemak */
  [2] = LAYOUT(

      LT(4, KC_ESC), KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_PLUS, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_MINS, KC_BSLS, KC_GRV,
      KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_LBRC, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_QUOT, KC_BSPC,
      LCTL_T(KC_BSPC), KC_A, KC_R, KC_S, KC_T, KC_G, KC_RBRC, KC_K, KC_N, KC_E, KC_I, KC_O, KC_ENT,
      KC_LSPO, KC_X, KC_C, KC_D, KC_V, KC_Z, KC_SLSH, KC_M, KC_H, KC_COMM, KC_DOT, KC_RSPC, MO(4),
      KC_NO, KC_LGUI, KC_LALT, LCTL_T(KC_SPC), MO(3), KC_RGUI, KC_NO

  ),

  /* Symbols */
  [3] = LAYOUT(

      KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_EQL, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO

  ),

  /* Function */
  [4] = LAYOUT(

      KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_SLEP,
      KC_TRNS, TO(0), TO(1), TO(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_DEL,
      KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_INS,
      KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_PGDN, KC_DOWN, KC_TRNS, KC_TRNS,
      KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO

  )

};
