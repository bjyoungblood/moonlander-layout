#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};

#define DUAL_FUNC_0 LT(10, KC_F1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_ESCAPE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LALT(LGUI(KC_D)),                                KC_EQUAL,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    ALL_T(KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           LALT(LGUI(LCTL(LSFT(KC_BSLS)))),                                                                ST_MACRO_0,     KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT,        KC_RIGHT,       DUAL_FUNC_0,                                                                                                    OSL(6),         KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,        KC_BSLS,        
    MT(MOD_LGUI, KC_SPACE),MT(MOD_LALT, KC_F17),MO(2),                          MO(4),          MO(1),          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSLS,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     KC_PIPE,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,                                     KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_DELETE,      
    KC_TRANSPARENT, LGUI(KC_LEFT),  LALT(LGUI(KC_UP)),LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,                                     KC_AUDIO_MUTE,  KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_DOWN)),LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,                                                                     KC_AUDIO_VOL_DOWN,KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F11,         KC_F12,         KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_VAD,        RGB_VAI,        RGB_MODE_FORWARD,                                                                                                RGB_SLD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TOGGLE_LAYER_COLOR,RGB_TOG,        KC_TRANSPARENT,                 KC_TRANSPARENT, RGB_SPD,        RGB_SPI
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE,      KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2
  ),
  [6] = LAYOUT_moonlander(
    MI_C,   MI_Cs,  MI_D,   MI_Ds,  MI_E,    MI_F,    MI_Fs,                    MI_G,    MI_Gs,   MI_A,    MI_As,  MI_B,    MI_C1,  MI_Cs1, 
    MI_D1,  MI_Ds1, MI_E1,  MI_F1,  MI_Fs1,  MI_G1,   MI_Gs1,                   MI_A1,   MI_As1,  MI_B1,   MI_C2,  MI_Cs2,  MI_D2, 
    MI_Ds2, MI_E2,  MI_F2,  MI_Fs2, MI_G2,   MI_Gs2,  MI_A2,                    MI_B2,   MI_C3,   MI_Cs3,  MI_D3,  MI_Ds3,  MI_E3,  MI_F3, 
    MI_Fs3, MI_G3,  MI_A3,  MI_As3, MI_B3,   MI_C4,                             MI_Cs4,  MI_D4,   MI_Ds4,  MI_E4,  MI_F4,   MI_G4, 
    MI_Gs4, MI_A4,  MI_As4, MI_B4,  MI_C5,   MI_Cs5,                            MI_D5,   MI_Ds5,  MI_E5,   MI_F5,  MI_Fs5,  MI_G5, 
    MI_A5,  MI_As5, MI_B5,                                                      MI_OCN2, MI_OCN1, MI_OC0, MI_OC1
  ),
};


const uint16_t PROGMEM combo0[] = { KC_F, KC_1, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_F, KC_2, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, KC_3, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_F, KC_4, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_F, KC_5, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_F, KC_6, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F, KC_6, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_F, KC_1, KC_2, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F1),
    COMBO(combo1, KC_F2),
    COMBO(combo2, KC_F3),
    COMBO(combo3, KC_F4),
    COMBO(combo4, KC_F5),
    COMBO(combo5, KC_F6),
    COMBO(combo6, KC_F6),
    COMBO(combo7, KC_F12),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {169,195,253}, {204,224,255}, {169,195,253}, {169,195,253}, {204,224,255}, {41,242,249}, {89,232,168}, {0,253,228}, {89,232,168}, {204,224,255}, {41,242,249}, {0,253,228}, {0,253,228}, {89,232,168}, {169,120,255}, {41,242,249}, {89,232,168}, {0,253,228}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {41,242,249}, {146,224,255}, {146,224,255}, {142,33,237}, {22,255,255}, {172,218,204}, {146,255,248}, {0,232,242}, {169,195,253}, {169,195,253}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {169,195,253}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {89,232,168}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {89,232,168}, {169,195,253}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {169,120,255}, {169,195,253}, {169,195,253}, {142,33,237}, {194,255,230}, {23,255,208}, {146,255,248} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,232,242}, {194,255,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {194,255,230}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {156,187,255}, {156,187,255}, {0,0,0}, {0,0,0} },

    [2] = { {0,228,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,205}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {0,217,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {235,243,217}, {134,255,213}, {134,255,213}, {0,0,0}, {0,0,0}, {74,255,255}, {134,255,213}, {134,255,213}, {0,0,0}, {74,255,255}, {235,243,217}, {134,255,213}, {134,255,213}, {74,255,255}, {74,255,255}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {74,255,255}, {0,0,0}, {134,255,213}, {134,255,213}, {134,255,213}, {74,255,255}, {5,209,230}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,205,155}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {31,255,255} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {156,187,255}, {156,187,255}, {156,187,255}, {0,0,0}, {0,0,0}, {156,187,255}, {156,187,255}, {156,187,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,135,194}, {0,135,194}, {0,135,194}, {0,0,0}, {0,0,0}, {0,0,0}, {0,135,194}, {0,135,194}, {0,0,0}, {0,0,0}, {0,0,0}, {212,255,255}, {212,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {212,255,255}, {212,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {121,255,255}, {121,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,208}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,218,204}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {139,218,204}, {0,0,0}, {0,0,0}, {31,255,255}, {139,218,204}, {139,218,204}, {0,0,0}, {0,0,0}, {31,255,255}, {0,0,0}, {139,218,204}, {0,0,0}, {118,232,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {118,232,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {139,218,204}, {139,218,204}, {0,0,0}, {118,232,220}, {0,0,0}, {0,0,0}, {139,218,204}, {0,0,0}, {118,232,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {169,195,253}, {204,224,255}, {169,195,253}, {169,195,253}, {204,224,255}, {41,242,249}, {89,232,168}, {0,253,228}, {89,232,168}, {204,224,255}, {41,242,249}, {0,253,228}, {0,253,228}, {89,232,168}, {169,120,255}, {41,242,249}, {89,232,168}, {0,253,228}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {41,242,249}, {146,224,255}, {146,224,255}, {142,33,237}, {22,255,255}, {172,218,204}, {146,255,248}, {0,232,242}, {169,195,253}, {169,195,253}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {169,195,253}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {89,232,168}, {169,195,253}, {169,195,253}, {41,242,249}, {89,232,168}, {89,232,168}, {169,195,253}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {204,224,255}, {41,242,249}, {89,232,168}, {89,232,168}, {89,232,168}, {169,120,255}, {169,195,253}, {169,195,253}, {142,33,237}, {194,255,230}, {23,255,208}, {146,255,248} },
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_KP_PLUS)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_MINUS)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_SPACE));
        } else {
          unregister_code16(LGUI(KC_SPACE));
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          layer_off(4);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

