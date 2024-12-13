/**
 * @file        tui/plat/size.cppm
 * @brief       获取终端的宽度与高度
 * @author      KeqingMoe
 * @date        2024-12-13
 * @copyright   Copyright (c) 2024 KeqingMoe
 * @license     MIT License
 */

module;

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <windows.h>

#else

#include <sys/ioctl.h> // for winsize, ioctl, TIOCGWINSZ
#include <unistd.h>    // for STDOUT_FILENO

#endif

export module kqm.tui.plat:size;

import std;

export namespace kqm::tui
{

inline namespace plat
{

/**
 * @brief 用作回退值的终端大小，first 是宽，second 是高
 */
auto fallback_terminal_size = std::pair{
#ifdef __EMSCRIPTEN__
    140uz, 43uz
#else
    80uz, 24uz
#endif
};

/**
 * @brief 获取当前终端的大小
 *
 * @return `std::pair<std::size_t, std::size_t>` first 是宽，second 是高
 */
auto get_terminal_size() -> std::pair<std::size_t, std::size_t>
{
#if defined(__EMSCRIPTEN___)
    return fallback_size;
#elif defined(_WIN32)
    auto csbi   = CONSOLE_SCREEN_BUFFER_INFO{};
    auto handle = GetStdHandle(STD_OUTPUT_HANDLE);
    auto flag   = GetConsoleScreenBufferInfo(handle, &csbi);
    if (flag) {
        auto width  = csbi.srWindow.Right - csbi.srWindow.Left + 1uz;
        auto height = csbi.srWindow.Bottom - csbi.srWindow.Top + 1uz;
        return std::pair{width, height};
    }
    return fallback_terminal_size;
#else
    auto w      = winsize{};
    auto status = ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    auto width  = std::size_t{w.ws_col};
    auto height = std::size_t{w.ws_row};

    if (width == 0 || height == 0 || status < 0) {
        return fallback_size;
    }
    return std::pair{width, height};
#endif
}

}

}
