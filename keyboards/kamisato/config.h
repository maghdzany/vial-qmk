/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Kamisato"
#define PRODUCT         "Numpad 4x6"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { GP28, GP20, GP2, GP19, GP14, GP15 }
#define MATRIX_COL_PINS { GP29, GP27, GP0, GP21 }
#define ENCODERS_PAD_B { GP4, GP6 }
#define ENCODERS_PAD_A { GP5, GP12 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
#define ENCODER_MAP_KEY_DELAY 10
