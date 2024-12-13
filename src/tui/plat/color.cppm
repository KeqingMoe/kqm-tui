/**
 * @file        tui/plat/color.cppm
 * @brief       获取终端支持的色彩深度
 * @author      KeqingMoe
 * @date        2024-12-13
 * @copyright   Copyright (c) 2024 KeqingMoe
 * @license     MIT License
 */

export module kqm.tui.plat:color;

import std;

auto get_env(const char* env_var) noexcept -> std::string_view
{
    auto env = std::getenv(env_var);
    if (!env) return std::string_view{};
    return std::string_view{env};
}

export namespace kqm::tui
{

inline namespace plat
{

/**
 * @brief 获取当前终端支持的色彩深度
 *
 * @return `std::size_t` 色彩深度
 * @retval `4uz` 16 色
 * @retval `8uz` 256 色
 * @retval `24uz` 24 bits 真彩色
 */
auto get_color_depth() noexcept -> std::size_t
{
#ifdef __EMSCRIPTEN__
    return 24uz;
#else
    // Windows Terminal 支持 24bits 真彩色
    if (std::getenv("WT_SESSION")) {
        return 24uz;
    }
    auto env_colorterm = get_env("COLORTERM");
    if (env_colorterm.contains("24bit") || env_colorterm.contains("truecolor")) {
        return 24uz;
    }
    auto env_term = get_env("TERM");
    if (env_colorterm.contains("256") || env_term.contains("256")) {
        return 8uz;
    }
#endif
    return 4uz;
}

/**
 * @brief 已缓存的色彩深度
 */
auto color_depth = get_color_depth();

}

}
