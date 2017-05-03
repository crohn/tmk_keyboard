#include "keymap_common.h"

/*
 * black
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: QWERTY layout
     * .-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L| ; |  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
     * |-----------------------------------------------------------|
     * | Fn0|Alt |Gui |      Space             | Fn0| Alt|    | Esc|
     * '-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSPC, \
        TAB, Q, W, E, R, T, Y, U, I, O, P, LBRC, RBRC, BSLS, \
        LCTL, A, S, D, F, G, H, J, K, L, SCLN, QUOT, ENT, \
        LSFT, Z, X, C, V, B, N, M, COMM, DOT, SLSH, RSFT, \
        FN0, LALT, LGUI, SPC, FN0, RALT, NO, ESC
    ),

    /* Keymap 1: DVORAK layout
     * .-----------------------------------------------------------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|    \|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift     |
     * |-----------------------------------------------------------|
     * | Fn0|Alt |Gui |      Space             | Fn0| Alt|    | Esc|
     * '-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, LBRC, RBRC, BSPC, \
        TAB, QUOT, COMM, DOT, P, Y, F, G, C, R, L, SLSH, EQL, BSLS, \
        LCTL, A, O, E, U, I, D, H, T, N, S, MINS, ENT, \
        LSFT, SCLN, Q, J, K, X, B, M, W, V, Z, RSFT, \
        FN0, LALT, LGUI, SPC, FN0, RALT, NO, ESC
    ),

    /* Keymap 2: editor layout
     * .-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   |   | Up|   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |Lef|Dow|Rig|   |   |Lef|Dow| Up|Rig|   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * '-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, TRNS, \
        TRNS, TRNS, TRNS, UP, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, LEFT, DOWN, RGHT, TRNS, TRNS, LEFT, DOWN, UP, RGHT, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS
    ),
};

/*
 * Fn actions
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_TOGGLE(1),
};
