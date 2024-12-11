/**
 * @file        tui/screen/colors.cppm
 * @brief       预定义的颜色常量
 * @author      KeqingMoe
 * @date        2024-12-9
 * @copyright   Copyright (c) 2024 KeqingMoe
 * @license     MIT License
 */

export module kqm.tui.screen:colors;

import std;

export namespace kqm::tui
{

inline namespace screen
{

inline namespace colors
{

using u8 = std::uint_least8_t;

/**
 * @brief 透明
 */
enum struct palette1 : u8
{
    transparent = 0
};

/**
 * @brief 预设 16 色
 */
enum struct palette16 : u8
{
    black         = 0,
    red           = 1,
    green         = 2,
    yellow        = 3,
    blue          = 4,
    magenta       = 5,
    cyan          = 6,
    light_gray    = 7,
    dark_gray     = 8,
    light_red     = 9,
    light_green   = 10,
    light_yellow  = 11,
    light_blue    = 12,
    light_magenta = 13,
    light_cyan    = 14,
    light_white   = 15
};

/**
 * @brief 预设 256 色
 */
enum struct palette256 : u8
{
    aquamarine1           = 122,
    aquamarine1_bis       = 86,
    aquamarine3           = 79,
    blue1                 = 21,
    blue3                 = 19,
    blue3_bis             = 20,
    blue_violet           = 57,
    cadet_blue            = 72,
    cadet_blue_bis        = 73,
    chartreuse1           = 118,
    chartreuse2           = 112,
    chartreuse2_bis       = 82,
    chartreuse3           = 70,
    chartreuse3_bis       = 76,
    chartreuse4           = 64,
    cornflower_blue       = 69,
    cornsilk1             = 230,
    cyan1                 = 51,
    cyan2                 = 50,
    cyan3                 = 43,
    dark_blue             = 18,
    dark_cyan             = 36,
    dark_goldenrod        = 136,
    dark_green            = 22,
    dark_khaki            = 143,
    dark_magenta          = 90,
    dark_magenta_bis      = 91,
    dark_olive_green1     = 191,
    dark_olive_green1_bis = 192,
    dark_olive_green2     = 155,
    dark_olive_green3     = 107,
    dark_olive_green3_bis = 113,
    dark_olive_green3_ter = 149,
    dark_orange           = 208,
    dark_orange3          = 130,
    dark_orange3_bis      = 166,
    dark_red              = 52,
    dark_red_bis          = 88,
    dark_sea_green        = 108,
    dark_sea_green1       = 158,
    dark_sea_green1_bis   = 193,
    dark_sea_green2       = 151,
    dark_sea_green2_bis   = 157,
    dark_sea_green3       = 115,
    dark_sea_green3_bis   = 150,
    dark_sea_green4       = 65,
    dark_sea_green4_bis   = 71,
    dark_slate_gray1      = 123,
    dark_slate_gray2      = 87,
    dark_slate_gray3      = 116,
    dark_turquoise        = 44,
    dark_violet           = 128,
    dark_violet_bis       = 92,
    deep_pink1            = 198,
    deep_pink1_bis        = 199,
    deep_pink2            = 197,
    deep_pink3            = 161,
    deep_pink3_bis        = 162,
    deep_pink4            = 125,
    deep_pink4_bis        = 89,
    deep_pink4_ter        = 53,
    deep_sky_blue1        = 39,
    deep_sky_blue2        = 38,
    deep_sky_blue3        = 31,
    deep_sky_blue3_bis    = 32,
    deep_sky_blue4        = 23,
    deep_sky_blue4_bis    = 24,
    deep_sky_blue4_ter    = 25,
    dodger_blue1          = 33,
    dodger_blue2          = 27,
    dodger_blue3          = 26,
    gold1                 = 220,
    gold3                 = 142,
    gold3_bis             = 178,
    green1                = 46,
    green3                = 34,
    green3_bis            = 40,
    green4                = 28,
    green_yellow          = 154,
    grey0                 = 16,
    grey100               = 231,
    grey11                = 234,
    grey15                = 235,
    grey19                = 236,
    grey23                = 237,
    grey27                = 238,
    grey3                 = 232,
    grey30                = 239,
    grey35                = 240,
    grey37                = 59,
    grey39                = 241,
    grey42                = 242,
    grey46                = 243,
    grey50                = 244,
    grey53                = 102,
    grey54                = 245,
    grey58                = 246,
    grey62                = 247,
    grey63                = 139,
    grey66                = 248,
    grey69                = 145,
    grey7                 = 233,
    grey70                = 249,
    grey74                = 250,
    grey78                = 251,
    grey82                = 252,
    grey84                = 188,
    grey85                = 253,
    grey89                = 254,
    grey93                = 255,
    honeydew2             = 194,
    hot_pink              = 205,
    hot_pink2             = 169,
    hot_pink3             = 132,
    hot_pink3_bis         = 168,
    hot_pink_bis          = 206,
    indian_red            = 131,
    indian_red1           = 203,
    indian_red1_bis       = 204,
    indian_red_bis        = 167,
    khaki1                = 228,
    khaki3                = 185,
    light_coral           = 210,
    light_cyan1_bis       = 195,
    light_cyan3           = 152,
    light_goldenrod1      = 227,
    light_goldenrod2      = 186,
    light_goldenrod2_bis  = 221,
    light_goldenrod2_ter  = 222,
    light_goldenrod3      = 179,
    light_green           = 119,
    light_green_bis       = 120,
    light_pink1           = 217,
    light_pink3           = 174,
    light_pink4           = 95,
    light_salmon1         = 216,
    light_salmon3         = 137,
    light_salmon3_bis     = 173,
    light_sea_green       = 37,
    light_sky_blue1       = 153,
    light_sky_blue3       = 109,
    light_sky_blue3_bis   = 110,
    light_slate_blue      = 105,
    light_slate_grey      = 103,
    light_steel_blue      = 147,
    light_steel_blue1     = 189,
    light_steel_blue3     = 146,
    light_yellow3         = 187,
    magenta1              = 201,
    magenta2              = 165,
    magenta2_bis          = 200,
    magenta3              = 127,
    magenta3_bis          = 163,
    magenta3_ter          = 164,
    medium_orchid         = 134,
    medium_orchid1        = 171,
    medium_orchid1_bis    = 207,
    medium_orchid3        = 133,
    medium_purple         = 104,
    medium_purple1        = 141,
    medium_purple2        = 135,
    medium_purple2_bis    = 140,
    medium_purple3        = 97,
    medium_purple3_bis    = 98,
    medium_purple4        = 60,
    medium_spring_green   = 49,
    medium_turquoise      = 80,
    medium_violet_red     = 126,
    misty_rose1           = 224,
    misty_rose3           = 181,
    navajo_white1         = 223,
    navajo_white3         = 144,
    navy_blue             = 17,
    orange1               = 214,
    orange3               = 172,
    orange4               = 58,
    orange4_bis           = 94,
    orange_red1           = 202,
    orchid                = 170,
    orchid1               = 213,
    orchid2               = 212,
    pale_green1           = 121,
    pale_green1_bis       = 156,
    pale_green3           = 114,
    pale_green3_bis       = 77,
    pale_turquoise1       = 159,
    pale_turquoise4       = 66,
    pale_violet_red1      = 211,
    pink1                 = 218,
    pink3                 = 175,
    plum1                 = 219,
    plum2                 = 183,
    plum3                 = 176,
    plum4                 = 96,
    purple                = 129,
    purple3               = 56,
    purple4               = 54,
    purple4_bis           = 55,
    purple_bis            = 93,
    red1                  = 196,
    red3                  = 124,
    red3_bis              = 160,
    rosy_brown            = 138,
    royal_blue1           = 63,
    salmon1               = 209,
    sandy_brown           = 215,
    sea_green1            = 84,
    sea_green1_bis        = 85,
    sea_green2            = 83,
    sea_green3            = 78,
    sky_blue1             = 117,
    sky_blue2             = 111,
    sky_blue3             = 74,
    slate_blue1           = 99,
    slate_blue3           = 61,
    slate_blue3_bis       = 62,
    spring_green1         = 48,
    spring_green2         = 42,
    spring_green2_bis     = 47,
    spring_green3         = 35,
    spring_green3_bis     = 41,
    spring_green4         = 29,
    steel_blue            = 67,
    steel_blue1           = 75,
    steel_blue1_bis       = 81,
    steel_blue3           = 68,
    tan                   = 180,
    thistle1              = 225,
    thistle3              = 182,
    turquoise2            = 45,
    turquoise4            = 30,
    violet                = 177,
    wheat1                = 229,
    wheat4                = 101,
    yellow1               = 226,
    yellow2               = 190,
    yellow3               = 148,
    yellow3_bis           = 184,
    yellow4               = 100,
    yellow4_bis           = 106
};

/**
 * @brief 24 位真彩 (RGB)
 */
struct rgb_t
{
    u8 red{};
    u8 green{};
    u8 blue{};

    friend auto operator==(rgb_t, rgb_t) noexcept -> bool  = default;
};

/**
 * @brief 16 色预设值（前景色）
 */
constexpr auto palette16_fg_code = std::array<std::string_view, 16uz>{
    "30",
    "40",
    "31",
    "41",
    "32",
    "42",
    "33",
    "43",
    "34",
    "44",
    "35",
    "45",
    "36",
    "46",
    "37",
    "47",
};

/**
 * @brief 16 色预设值（背景色）
 */
constexpr auto palette16_bg_code = std::array<std::string_view, 16uz>{
    "90",
    "100",
    "91",
    "101",
    "92",
    "102",
    "93",
    "103",
    "94",
    "104",
    "95",
    "105",
    "96",
    "106",
    "97",
    "107",
};

/**
 * @brief 颜色信息
 */
struct color_info
{
    std::string_view name;
    u8 index256;
    u8 index16;
    u8 red;
    u8 green;
    u8 blue;
    u8 hue;
    u8 saturation;
    u8 value;
};

/**
 * @brief 预设的 256 色的信息
 */
constexpr auto palette256_table = std::array<color_info, 256uz>{
    {
     {"black", 0, 0, 0, 0, 0, 0, 0, 0},
     {"red", 1, 1, 128, 0, 0, 0, 255, 128},
     {"green", 2, 2, 0, 128, 0, 85, 255, 128},
     {"yellow", 3, 3, 128, 128, 0, 43, 255, 128},
     {"blue", 4, 4, 0, 0, 128, 171, 255, 128},
     {"magenta", 5, 5, 128, 0, 128, 213, 255, 128},
     {"cyan", 6, 6, 0, 128, 128, 128, 255, 128},
     {"light_gray", 7, 7, 192, 192, 192, 0, 0, 192},
     {"gray_dark", 8, 8, 128, 128, 128, 0, 0, 128},
     {"light_red", 9, 9, 255, 0, 0, 0, 255, 255},
     {"lightgreen", 10, 10, 0, 255, 0, 85, 255, 255},
     {"light_yellow", 11, 11, 255, 255, 0, 43, 255, 255},
     {"light_blue", 12, 12, 0, 0, 255, 171, 255, 255},
     {"light_magenta", 13, 13, 255, 0, 255, 213, 255, 255},
     {"light_cyan", 14, 14, 0, 255, 255, 128, 255, 255},
     {"white", 15, 15, 255, 255, 255, 0, 0, 255},
     {"grey0", 16, 0, 0, 0, 0, 0, 0, 0},
     {"navy_blue", 17, 4, 0, 0, 95, 171, 255, 95},
     {"dark_blue", 18, 4, 0, 0, 135, 171, 255, 135},
     {"blue3", 19, 4, 0, 0, 175, 171, 255, 175},
     {"blue3_bis", 20, 12, 0, 0, 215, 171, 255, 215},
     {"blue1", 21, 12, 0, 0, 255, 171, 255, 255},
     {"dark_green", 22, 2, 0, 95, 0, 85, 255, 95},
     {"deep_sky_blue4", 23, 6, 0, 95, 95, 128, 255, 95},
     {"deep_sky_blue4_bis", 24, 6, 0, 95, 135, 141, 255, 135},
     {"deep_sky_blue4_ter", 25, 6, 0, 95, 175, 148, 255, 175},
     {"dodger_blue3", 26, 12, 0, 95, 215, 152, 255, 215},
     {"dodger_blue2", 27, 12, 0, 95, 255, 155, 255, 255},
     {"green4", 28, 2, 0, 135, 0, 85, 255, 135},
     {"spring_green4", 29, 6, 0, 135, 95, 115, 255, 135},
     {"turquoise4", 30, 6, 0, 135, 135, 128, 255, 135},
     {"deep_sky_blue3", 31, 6, 0, 135, 175, 138, 255, 175},
     {"deep_sky_blue3_bis", 32, 14, 0, 135, 215, 144, 255, 215},
     {"dodger_blue1", 33, 14, 0, 135, 255, 149, 255, 255},
     {"green3", 34, 2, 0, 175, 0, 85, 255, 175},
     {"spring_green3", 35, 6, 0, 175, 95, 108, 255, 175},
     {"dark_cyan", 36, 6, 0, 175, 135, 118, 255, 175},
     {"light_sea_green", 37, 6, 0, 175, 175, 128, 255, 175},
     {"deep_sky_blue2", 38, 14, 0, 175, 215, 136, 255, 215},
     {"deep_sky_blue1", 39, 14, 0, 175, 255, 142, 255, 255},
     {"green3_bis", 40, 10, 0, 215, 0, 85, 255, 215},
     {"spring_green3_bis", 41, 10, 0, 215, 95, 104, 255, 215},
     {"spring_green2", 42, 14, 0, 215, 135, 112, 255, 215},
     {"cyan3", 43, 14, 0, 215, 175, 120, 255, 215},
     {"dark_turquoise", 44, 14, 0, 215, 215, 128, 255, 215},
     {"turquoise2", 45, 14, 0, 215, 255, 135, 255, 255},
     {"green1", 46, 10, 0, 255, 0, 85, 255, 255},
     {"spring_green2_bis", 47, 10, 0, 255, 95, 101, 255, 255},
     {"spring_green1", 48, 14, 0, 255, 135, 107, 255, 255},
     {"medium_spring_green", 49, 14, 0, 255, 175, 114, 255, 255},
     {"cyan2", 50, 14, 0, 255, 215, 121, 255, 255},
     {"cyan1", 51, 14, 0, 255, 255, 128, 255, 255},
     {"dark_red", 52, 1, 95, 0, 0, 0, 255, 95},
     {"deep_pink4_ter", 53, 5, 95, 0, 95, 213, 255, 95},
     {"purple4", 54, 5, 95, 0, 135, 201, 255, 135},
     {"purple4_bis", 55, 5, 95, 0, 175, 194, 255, 175},
     {"purple3", 56, 12, 95, 0, 215, 190, 255, 215},
     {"blue_violet", 57, 12, 95, 0, 255, 187, 255, 255},
     {"orange4", 58, 3, 95, 95, 0, 43, 255, 95},
     {"grey37", 59, 8, 95, 95, 95, 0, 0, 95},
     {"medium_purple4", 60, 4, 95, 95, 135, 171, 75, 135},
     {"slate_blue3", 61, 4, 95, 95, 175, 171, 116, 175},
     {"slate_blue3_bis", 62, 12, 95, 95, 215, 171, 142, 215},
     {"royal_blue1", 63, 12, 95, 95, 255, 171, 160, 255},
     {"chartreuse4", 64, 3, 95, 135, 0, 55, 255, 135},
     {"dark_sea_green4", 65, 8, 95, 135, 95, 85, 75, 135},
     {"pale_turquoise4", 66, 6, 95, 135, 135, 128, 75, 135},
     {"steel_blue", 67, 4, 95, 135, 175, 150, 116, 175},
     {"steel_blue3", 68, 12, 95, 135, 215, 157, 142, 215},
     {"cornflower_blue", 69, 12, 95, 135, 255, 161, 160, 255},
     {"chartreuse3", 70, 3, 95, 175, 0, 62, 255, 175},
     {"dark_sea_green4_bis", 71, 2, 95, 175, 95, 85, 116, 175},
     {"cadet_blue", 72, 2, 95, 175, 135, 106, 116, 175},
     {"cadet_blue_bis", 73, 6, 95, 175, 175, 128, 116, 175},
     {"sky_blue3", 74, 14, 95, 175, 215, 143, 142, 215},
     {"steel_blue1", 75, 12, 95, 175, 255, 150, 160, 255},
     {"chartreuse3_bis", 76, 10, 95, 215, 0, 66, 255, 215},
     {"pale_green3_bis", 77, 10, 95, 215, 95, 85, 142, 215},
     {"sea_green3", 78, 10, 95, 215, 135, 99, 142, 215},
     {"aquamarine3", 79, 14, 95, 215, 175, 113, 142, 215},
     {"medium_turquoise", 80, 14, 95, 215, 215, 128, 142, 215},
     {"steel_blue1_bis", 81, 14, 95, 215, 255, 139, 160, 255},
     {"chartreuse2_bis", 82, 10, 95, 255, 0, 69, 255, 255},
     {"sea_green2", 83, 10, 95, 255, 95, 85, 160, 255},
     {"sea_green1", 84, 10, 95, 255, 135, 95, 160, 255},
     {"sea_green1_bis", 85, 10, 95, 255, 175, 106, 160, 255},
     {"aquamarine1_bis", 86, 14, 95, 255, 215, 117, 160, 255},
     {"dark_slate_gray2", 87, 14, 95, 255, 255, 128, 160, 255},
     {"dark_red_bis", 88, 1, 135, 0, 0, 0, 255, 135},
     {"deep_pink4_bis", 89, 5, 135, 0, 95, 226, 255, 135},
     {"dark_magenta", 90, 5, 135, 0, 135, 213, 255, 135},
     {"dark_magenta_bis", 91, 5, 135, 0, 175, 204, 255, 175},
     {"dark_violet_bis", 92, 13, 135, 0, 215, 198, 255, 215},
     {"purple_bis", 93, 13, 135, 0, 255, 193, 255, 255},
     {"orange4_bis", 94, 3, 135, 95, 0, 30, 255, 135},
     {"light_pink4", 95, 8, 135, 95, 95, 0, 75, 135},
     {"plum4", 96, 5, 135, 95, 135, 213, 75, 135},
     {"medium_purple3", 97, 4, 135, 95, 175, 192, 116, 175},
     {"medium_purple3_bis", 98, 12, 135, 95, 215, 185, 142, 215},
     {"slate_blue1", 99, 12, 135, 95, 255, 181, 160, 255},
     {"yellow4", 100, 3, 135, 135, 0, 43, 255, 135},
     {"wheat4", 101, 8, 135, 135, 95, 43, 75, 135},
     {"grey53", 102, 8, 135, 135, 135, 0, 0, 135},
     {"light_slate_grey", 103, 4, 135, 135, 175, 171, 58, 175},
     {"medium_purple", 104, 12, 135, 135, 215, 171, 94, 215},
     {"light_slate_blue", 105, 12, 135, 135, 255, 171, 120, 255},
     {"yellow4_bis", 106, 3, 135, 175, 0, 52, 255, 175},
     {"dark_olive_green3", 107, 7, 135, 175, 95, 64, 116, 175},
     {"dark_sea_green", 108, 7, 135, 175, 135, 85, 58, 175},
     {"light_sky_blue3", 109, 7, 135, 175, 175, 128, 58, 175},
     {"light_sky_blue3_bis", 110, 12, 135, 175, 215, 150, 94, 215},
     {"sky_blue2", 111, 12, 135, 175, 255, 157, 120, 255},
     {"chartreuse2", 112, 11, 135, 215, 0, 58, 255, 215},
     {"dark_olive_green3_bis", 113, 10, 135, 215, 95, 71, 142, 215},
     {"pale_green3", 114, 7, 135, 215, 135, 85, 94, 215},
     {"dark_sea_green3", 115, 10, 135, 215, 175, 106, 94, 215},
     {"dark_slate_gray3", 116, 14, 135, 215, 215, 128, 94, 215},
     {"sky_blue1", 117, 14, 135, 215, 255, 143, 120, 255},
     {"chartreuse1", 118, 11, 135, 255, 0, 63, 255, 255},
     {"light_green", 119, 10, 135, 255, 95, 75, 160, 255},
     {"light_green_bis", 120, 10, 135, 255, 135, 85, 120, 255},
     {"pale_green1", 121, 10, 135, 255, 175, 99, 120, 255},
     {"aquamarine1", 122, 14, 135, 255, 215, 113, 120, 255},
     {"dark_slate_gray1", 123, 14, 135, 255, 255, 128, 120, 255},
     {"red3", 124, 1, 175, 0, 0, 0, 255, 175},
     {"deep_pink4", 125, 5, 175, 0, 95, 233, 255, 175},
     {"medium_violet_red", 126, 5, 175, 0, 135, 223, 255, 175},
     {"magenta3", 127, 5, 175, 0, 175, 213, 255, 175},
     {"dark_violet", 128, 13, 175, 0, 215, 206, 255, 215},
     {"purple", 129, 13, 175, 0, 255, 200, 255, 255},
     {"dark_orange3", 130, 3, 175, 95, 0, 23, 255, 175},
     {"indian_red", 131, 7, 175, 95, 95, 0, 116, 175},
     {"hot_pink3", 132, 5, 175, 95, 135, 235, 116, 175},
     {"medium_orchid3", 133, 5, 175, 95, 175, 213, 116, 175},
     {"medium_orchid", 134, 13, 175, 95, 215, 199, 142, 215},
     {"medium_purple2", 135, 12, 175, 95, 255, 192, 160, 255},
     {"dark_goldenrod", 136, 3, 175, 135, 0, 33, 255, 175},
     {"light_salmon3", 137, 7, 175, 135, 95, 21, 116, 175},
     {"rosy_brown", 138, 7, 175, 135, 135, 0, 58, 175},
     {"grey63", 139, 5, 175, 135, 175, 213, 58, 175},
     {"medium_purple2_bis", 140, 12, 175, 135, 215, 192, 94, 215},
     {"medium_purple1", 141, 12, 175, 135, 255, 185, 120, 255},
     {"gold3", 142, 3, 175, 175, 0, 43, 255, 175},
     {"dark_khaki", 143, 7, 175, 175, 95, 43, 116, 175},
     {"navajo_white3", 144, 7, 175, 175, 135, 43, 58, 175},
     {"grey69", 145, 7, 175, 175, 175, 0, 0, 175},
     {"light_steel_blue3", 146, 12, 175, 175, 215, 171, 47, 215},
     {"light_steel_blue", 147, 12, 175, 175, 255, 171, 80, 255},
     {"yellow3", 148, 11, 175, 215, 0, 50, 255, 215},
     {"dark_olive_green3_ter", 149, 11, 175, 215, 95, 57, 142, 215},
     {"dark_sea_green3_bis", 150, 7, 175, 215, 135, 64, 94, 215},
     {"dark_sea_green2", 151, 7, 175, 215, 175, 85, 47, 215},
     {"light_cyan3", 152, 7, 175, 215, 215, 128, 47, 215},
     {"light_sky_blue1", 153, 12, 175, 215, 255, 150, 80, 255},
     {"green_yellow", 154, 11, 175, 255, 0, 56, 255, 255},
     {"dark_olive_green2", 155, 10, 175, 255, 95, 64, 160, 255},
     {"pale_green1_bis", 156, 10, 175, 255, 135, 71, 120, 255},
     {"dark_sea_green2_bis", 157, 15, 175, 255, 175, 85, 80, 255},
     {"dark_sea_green1", 158, 15, 175, 255, 215, 106, 80, 255},
     {"pale_turquoise1", 159, 14, 175, 255, 255, 128, 80, 255},
     {"red3_bis", 160, 9, 215, 0, 0, 0, 255, 215},
     {"deep_pink3", 161, 13, 215, 0, 95, 237, 255, 215},
     {"deep_pink3_bis", 162, 13, 215, 0, 135, 229, 255, 215},
     {"magenta3_bis", 163, 13, 215, 0, 175, 221, 255, 215},
     {"magenta3_ter", 164, 13, 215, 0, 215, 213, 255, 215},
     {"magenta2", 165, 13, 215, 0, 255, 207, 255, 255},
     {"dark_orange3_bis", 166, 9, 215, 95, 0, 19, 255, 215},
     {"indian_red_bis", 167, 9, 215, 95, 95, 0, 142, 215},
     {"hot_pink3_bis", 168, 13, 215, 95, 135, 242, 142, 215},
     {"hot_pink2", 169, 13, 215, 95, 175, 228, 142, 215},
     {"orchid", 170, 13, 215, 95, 215, 213, 142, 215},
     {"medium_orchid1", 171, 13, 215, 95, 255, 203, 160, 255},
     {"orange3", 172, 11, 215, 135, 0, 27, 255, 215},
     {"light_salmon3", 173, 9, 215, 135, 95, 14, 142, 215},
     {"light_pink3", 174, 7, 215, 135, 135, 0, 94, 215},
     {"pink3", 175, 13, 215, 135, 175, 235, 94, 215},
     {"plum3", 176, 13, 215, 135, 215, 213, 94, 215},
     {"violet", 177, 13, 215, 135, 255, 199, 120, 255},
     {"gold3_bis", 178, 11, 215, 175, 0, 35, 255, 215},
     {"light_goldenrod3", 179, 11, 215, 175, 95, 28, 142, 215},
     {"tan", 180, 7, 215, 175, 135, 21, 94, 215},
     {"misty_rose3", 181, 7, 215, 175, 175, 0, 47, 215},
     {"thistle3", 182, 13, 215, 175, 215, 213, 47, 215},
     {"plum2", 183, 12, 215, 175, 255, 192, 80, 255},
     {"yellow3_bis", 184, 11, 215, 215, 0, 43, 255, 215},
     {"khaki3", 185, 11, 215, 215, 95, 43, 142, 215},
     {"light_goldenrod2", 186, 7, 215, 215, 135, 43, 94, 215},
     {"light_yellow3", 187, 7, 215, 215, 175, 43, 47, 215},
     {"grey84", 188, 7, 215, 215, 215, 0, 0, 215},
     {"light_steel_blue1", 189, 12, 215, 215, 255, 171, 40, 255},
     {"yellow2", 190, 11, 215, 255, 0, 49, 255, 255},
     {"dark_olive_green1", 191, 11, 215, 255, 95, 53, 160, 255},
     {"dark_olive_green1_bis", 192, 11, 215, 255, 135, 57, 120, 255},
     {"dark_sea_green1_bis", 193, 15, 215, 255, 175, 64, 80, 255},
     {"honeydew2", 194, 15, 215, 255, 215, 85, 40, 255},
     {"light_cyan1_bis", 195, 15, 215, 255, 255, 128, 40, 255},
     {"red1", 196, 9, 255, 0, 0, 0, 255, 255},
     {"deep_pink2", 197, 13, 255, 0, 95, 240, 255, 255},
     {"deep_pink1", 198, 13, 255, 0, 135, 234, 255, 255},
     {"deep_pink1_bis", 199, 13, 255, 0, 175, 227, 255, 255},
     {"magenta2_bis", 200, 13, 255, 0, 215, 220, 255, 255},
     {"magenta1", 201, 13, 255, 0, 255, 213, 255, 255},
     {"orange_red1", 202, 9, 255, 95, 0, 16, 255, 255},
     {"indian_red1", 203, 9, 255, 95, 95, 0, 160, 255},
     {"indian_red1_bis", 204, 13, 255, 95, 135, 246, 160, 255},
     {"hot_pink", 205, 13, 255, 95, 175, 235, 160, 255},
     {"hot_pink_bis", 206, 13, 255, 95, 215, 224, 160, 255},
     {"medium_orchid1_bis", 207, 13, 255, 95, 255, 213, 160, 255},
     {"dark_orange", 208, 11, 255, 135, 0, 22, 255, 255},
     {"salmon1", 209, 9, 255, 135, 95, 10, 160, 255},
     {"light_coral", 210, 15, 255, 135, 135, 0, 120, 255},
     {"pale_violet_red1", 211, 13, 255, 135, 175, 242, 120, 255},
     {"orchid2", 212, 13, 255, 135, 215, 228, 120, 255},
     {"orchid1", 213, 13, 255, 135, 255, 213, 120, 255},
     {"orange1", 214, 11, 255, 175, 0, 29, 255, 255},
     {"sandy_brown", 215, 9, 255, 175, 95, 21, 160, 255},
     {"light_salmon1", 216, 15, 255, 175, 135, 14, 120, 255},
     {"light_pink1", 217, 15, 255, 175, 175, 0, 80, 255},
     {"pink1", 218, 13, 255, 175, 215, 235, 80, 255},
     {"plum1", 219, 13, 255, 175, 255, 213, 80, 255},
     {"gold1", 220, 11, 255, 215, 0, 36, 255, 255},
     {"light_goldenrod2_bis", 221, 11, 255, 215, 95, 32, 160, 255},
     {"light_goldenrod2_ter", 222, 15, 255, 215, 135, 28, 120, 255},
     {"navajo_white1", 223, 15, 255, 215, 175, 21, 80, 255},
     {"misty_rose1", 224, 15, 255, 215, 215, 0, 40, 255},
     {"thistle1", 225, 13, 255, 215, 255, 213, 40, 255},
     {"yellow1", 226, 11, 255, 255, 0, 43, 255, 255},
     {"light_goldenrod1", 227, 11, 255, 255, 95, 43, 160, 255},
     {"khaki1", 228, 15, 255, 255, 135, 43, 120, 255},
     {"wheat1", 229, 15, 255, 255, 175, 43, 80, 255},
     {"cornsilk1", 230, 15, 255, 255, 215, 43, 40, 255},
     {"grey100", 231, 15, 255, 255, 255, 0, 0, 255},
     {"grey3", 232, 0, 8, 8, 8, 0, 0, 8},
     {"grey7", 233, 0, 18, 18, 18, 0, 0, 18},
     {"grey11", 234, 0, 28, 28, 28, 0, 0, 28},
     {"grey15", 235, 0, 38, 38, 38, 0, 0, 38},
     {"grey19", 236, 0, 48, 48, 48, 0, 0, 48},
     {"grey23", 237, 0, 58, 58, 58, 0, 0, 58},
     {"grey27", 238, 8, 68, 68, 68, 0, 0, 68},
     {"grey30", 239, 8, 78, 78, 78, 0, 0, 78},
     {"grey35", 240, 8, 88, 88, 88, 0, 0, 88},
     {"grey39", 241, 8, 98, 98, 98, 0, 0, 98},
     {"grey42", 242, 8, 108, 108, 108, 0, 0, 108},
     {"grey46", 243, 8, 118, 118, 118, 0, 0, 118},
     {"grey50", 244, 8, 128, 128, 128, 0, 0, 128},
     {"grey54", 245, 8, 138, 138, 138, 0, 0, 138},
     {"grey58", 246, 8, 148, 148, 148, 0, 0, 148},
     {"grey62", 247, 8, 158, 158, 158, 0, 0, 158},
     {"grey66", 248, 7, 168, 168, 168, 0, 0, 168},
     {"grey70", 249, 7, 178, 178, 178, 0, 0, 178},
     {"grey74", 250, 7, 188, 188, 188, 0, 0, 188},
     {"grey78", 251, 7, 198, 198, 198, 0, 0, 198},
     {"grey82", 252, 7, 208, 208, 208, 0, 0, 208},
     {"grey85", 253, 7, 218, 218, 218, 0, 0, 218},
     {"grey89", 254, 15, 228, 228, 228, 0, 0, 228},
     {"grey93", 255, 15, 238, 238, 238, 0, 0, 238},
     }
};

/**
 * @brief 获取 16 种预设的颜色的对应的信息
 */
constexpr auto get_color_info(palette16 index) noexcept -> const color_info&
{
    return palette256_table[std::to_underlying(index)];
}

/**
 * @brief 获取 256 种预设的颜色的对应的信息
 */
constexpr auto get_color_info(palette256 index) noexcept -> const color_info&
{
    return palette256_table[std::to_underlying(index)];
}

/**
 * @brief 从 RGB 值获取最接近的 256 种预设颜色
 */
constexpr auto get_nearest_palette256(rgb_t rgb) noexcept -> palette256
{
    auto p256 = std::views::all(palette256_table) | std::views::drop(16uz);
    auto it   = std::ranges::min_element(p256, {}, [rgb](const color_info& c) {
        auto dr = c.red - rgb.red;
        auto dg = c.green - rgb.green;
        auto db = c.blue - rgb.blue;
        return dr * dr + dg * dg + db * db;
    });
    return static_cast<palette256>(it->index256);
}

/**
 * @brief 从 256 种预设颜色获取最接近的 16 种预设颜色
 */
constexpr auto get_nearest_palette16(palette256 c) noexcept -> palette16
{
    auto&& p16 = get_color_info(c);
    return static_cast<palette16>(p16.index16);
}

/**
 * @brief 颜色正规化
 * @arg `palette1`
 * @return `rgb_t`
 */
constexpr auto normalize(palette1) noexcept -> rgb_t
{
    return rgb_t{0, 0, 0};
}
/**
 * @brief 颜色正规化
 * @arg `palette16` 16 种预设颜色
 * @return `rgb_t `
 */
constexpr auto normalize(palette16 c) noexcept -> rgb_t
{
    auto&& info = get_color_info(c);
    return rgb_t{info.red, info.green, info.blue};
}
/**
 * @brief 颜色正规化
 * @arg `palette256` 256 种预设颜色
 * @return `rgb_t`
 */
constexpr auto normalize(palette256 c) noexcept -> rgb_t
{
    auto&& info = get_color_info(c);
    return rgb_t{info.red, info.green, info.blue};
}
/**
 * @brief 颜色正规化
 * @arg `rgb_t` RGB 真彩色
 * @return `rgb_t`
 */
constexpr auto normalize(rgb_t rgb) noexcept -> rgb_t
{
    return rgb;
}


}

}

}
