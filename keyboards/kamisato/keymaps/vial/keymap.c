#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_A, KC_B,
        KC_D, KC_E, KC_F, KC_G,
        KC_H, KC_I, KC_J, KC_K,
        KC_L, KC_M, KC_0, KC_ENT
        ),
    [1] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_A, KC_B,
        KC_D, KC_E, KC_F, KC_G,
        KC_H, KC_I, KC_J, KC_K,
        KC_L, KC_M, KC_0, KC_ENT
        ),
    [2] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_9, KC_0, KC_A, KC_B,
        KC_D, KC_E, KC_F, KC_G,
        KC_H, KC_I, KC_J, KC_K,
        KC_L, KC_M, KC_0, KC_ENT
        )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),                     ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),           ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [2] = { ENCODER_CCW_CW(KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP), ENCODER_CCW_CW(KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP) }
};
#endif