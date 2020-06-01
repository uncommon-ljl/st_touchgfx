// 4.13.0 dither_algorithm=2 alpha_dither=yes layout_rotation=0 opaque_image_format=RGB888 non_opaque_image_format=ARGB8888 section=ExtFlashSection extra_section=ExtFlashSection generate_png=no 0xe1a0c36b
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <platform/driver/lcd/LCD24bpp.hpp>

extern const unsigned char _blue_buttons_round_edge_small[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID = 0, Size: 170x60 pixels
extern const unsigned char _blue_buttons_round_edge_small_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID = 1, Size: 170x60 pixels
extern const unsigned char _blue_check_buttons_check_mark_active[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_ACTIVE_ID = 2, Size: 44x44 pixels
extern const unsigned char _blue_check_buttons_check_mark_inactive[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_INACTIVE_ID = 3, Size: 44x44 pixels
extern const unsigned char _blue_check_buttons_check_mark_normal[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_NORMAL_ID = 4, Size: 44x44 pixels
extern const unsigned char _blue_check_buttons_check_mark_pressed[]; // BITMAP_BLUE_CHECK_BUTTONS_CHECK_MARK_PRESSED_ID = 5, Size: 44x44 pixels
extern const unsigned char _blue_progressindicators_bg_medium_progress_indicator_bg_square_0_degrees[]; // BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_SQUARE_0_DEGREES_ID = 6, Size: 184x20 pixels
extern const unsigned char _blue_progressindicators_fill_tiling_progress_indicator_fill_striped_normal_horizontal[]; // BITMAP_BLUE_PROGRESSINDICATORS_FILL_TILING_PROGRESS_INDICATOR_FILL_STRIPED_NORMAL_HORIZONTAL_ID = 7, Size: 30x40 pixels
extern const unsigned char _blue_togglebars_toggle_round_large_button_off[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID = 8, Size: 128x38 pixels
extern const unsigned char _blue_togglebars_toggle_round_large_button_on[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID = 9, Size: 128x38 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _blue_buttons_round_edge_small, 0, 170, 60, 11, 4, 148, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 50, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_buttons_round_edge_small_pressed, 0, 170, 60, 11, 4, 148, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 50, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_check_buttons_check_mark_active, 0, 44, 44, 3, 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_check_buttons_check_mark_inactive, 0, 44, 44, 3, 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_check_buttons_check_mark_normal, 0, 44, 44, 3, 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_check_buttons_check_mark_pressed, 0, 44, 44, 3, 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 38, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_progressindicators_bg_medium_progress_indicator_bg_square_0_degrees, 0, 184, 20, 0, 0, 184, (uint8_t)(touchgfx::Bitmap::RGB888) >> 3, 20, (uint8_t)(touchgfx::Bitmap::RGB888) & 0x7 },
    { _blue_progressindicators_fill_tiling_progress_indicator_fill_striped_normal_horizontal, 0, 30, 40, 23, 19, 7, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 21, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_togglebars_toggle_round_large_button_off, 0, 128, 38, 13, 1, 102, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 36, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { _blue_togglebars_toggle_round_large_button_on, 0, 128, 38, 13, 1, 102, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 36, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
