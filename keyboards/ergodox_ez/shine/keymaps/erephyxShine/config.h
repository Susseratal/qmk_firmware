/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef TAPPING_TERM
#define TAPPING_TERM 125 // default is 200
#define ERGODOX_LED_30

#define ONESHOT_TAP_TOGGLE 1

#undef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 5

#undef RGBLIGHT_SAT_STEP 
#define RGBLIGHT_SAT_STEP 5

#undef RGBLIGHT_VAL_STEP 
#define RGBLIGHT_VAL_STEP 5

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FORCE_NKRO

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 25

#undef CAPS_WORD_IDLE_TIMEOUT
#define CAPS_WORD_IDLE_TIMEOUT 3000 // 3 seconds

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 5

#define FIRMWARE_VERSION u8"q0yM5/ybXW0"
