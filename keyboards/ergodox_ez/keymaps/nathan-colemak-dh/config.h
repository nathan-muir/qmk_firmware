#include "../../config.h"

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#undef IGNORE_MOD_TAP_INTERRUPT
#define ONESHOT_TAP_TOGGLE 2
#define ONESHOT_TIMEOUT 2000


#define RGBLIGHT_COLOR_LAYER_0 0xFF, 0xFF, 0xFF
#define RGBLIGHT_COLOR_LAYER_1 0x00, 0x00, 0xFF
#define RGBLIGHT_COLOR_LAYER_2 0xFF, 0x00, 0x00
#define RGBLIGHT_COLOR_LAYER_3 0x00, 0xFF, 0x00
#define RGBLIGHT_COLOR_LAYER_4 0xFF, 0xFF, 0x00
#define RGBLIGHT_COLOR_LAYER_5 0x00, 0xFF, 0xFF
#define RGBLIGHT_COLOR_LAYER_6 0xFF, 0x00, 0xFF
#define RGBLIGHT_COLOR_LAYER_7 0xFF, 0xFF, 0xFF

