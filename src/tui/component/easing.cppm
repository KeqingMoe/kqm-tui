/**
 * @file        tui/component/easing.cppm
 * @brief       缓动函数
 * @attention   魔数有点多，不过也算使用比较广泛了
 * @author      KeqingMoe
 * @date        2024-12-9
 * @copyright   Copyright (c) 2024 KeqingMoe
 * @license     MIT License
 */

export module kqm.tui.component:easing;

import std;

constexpr auto k_pi(std::floating_point auto x) noexcept
{
    return std::numbers::pi_v<decltype(x)> * x;
}

constexpr auto bounce_out(std::floating_point auto x) noexcept
{
    using float_t = decltype(x);
    if (x < float_t{4} / float_t{11}) return (121 * x * x) / 16;
    if (x < float_t{8} / float_t{11}) return 9.075 * x * x + 9.9 * x + 3.4;
    if (x < 0.9) return (4356 * x * x / 361) - (35442 * x / 1805) + float_t{16061} / float_t{1805};
    return 10.8 * x * x - 20.52 * x + 10.72;
}

export namespace kqm::tui
{

inline namespace component
{

/**
 * @brief 缓动函数
 */
inline namespace easing
{

/**
 * @brief 概念 `EasingFunctionsWithFloat`
 * @details 用于实现 `EasingFunctions` 概念
 * @tparam EF 缓动函数
 * @tparam Float 浮点数类型，EF 要能够与它一同工作
 */
template <typename EF, typename Float>
concept EasingFunctionsWithFloat = requires(EF&& ease, Float x) {
    requires std::floating_point<Float>;
    { ease.in(x) } -> std::convertible_to<Float>;
    { ease.out(x) } -> std::convertible_to<Float>;
    { ease.in_out(x) } -> std::convertible_to<Float>;
};

/**
 * @brief 概念 `EasingFunctions`
 * @details 约束“缓动函数”概念
 * @tparam EF 缓动函数
 */
template <typename EF, typename Base>
concept EasingFunctions = requires {
    requires EasingFunctionsWithFloat<EF, float>;
    requires EasingFunctionsWithFloat<EF, double>;
    requires EasingFunctionsWithFloat<EF, long double>;
};

/**
 * @brief 缓动函数
 * @details 基于静态多态，派生类需满足 `EasingFunctions` 概念
 */
struct ease_base
{
    constexpr auto out(this EasingFunctions<ease_base> auto&& self, std::floating_point auto x)
        noexcept(noexcept(self.in(x))) -> decltype(x)
    {
        return 1 - self.in(1 - x);
    }
    constexpr auto in_out(this EasingFunctions<ease_base> auto&& self, std::floating_point auto x)
        noexcept(noexcept(self.in(x)) && noexcept(self.out(x))) -> decltype(x)
    {
        if (x < 0.5) return 0.5 * self.in(2 * x);
        return 0.5 * (self.out(2 * (x - 1)) + 1);
    }
};

/**
 * @brief N 次缓动函数
 * @tparam N 指数
 */
template <std::unsigned_integral auto N>
    requires(N > 0)
struct pow : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        auto result = x;
        for (auto i = 1uz; i < N; ++i) {
            result *= x;
        }
        return result;
    }
};


/**
 * @brief 线性缓动函数
 */
using linear = pow<1uz>;

/**
 * @brief 二次缓动函数
 */
using quadratic = pow<2uz>;

/**
 * @brief 三次缓动函数
 */
using cubic = pow<3uz>;

/**
 * @brief 四次缓动函数
 */
using quartic = pow<4uz>;

/**
 * @brief 五次缓动函数
 */
using quintic = pow<4uz>;


/**
 * @brief 正弦缓动函数
 */
struct sin : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        return std::sin(0.5 * k_pi(x - 1)) + 1;
    }
    constexpr auto in_out(std::floating_point auto x) noexcept
    {
        return 0.5 * (1 - std::cos(k_pi(x)));
    }
};


/**
 * @brief 圆形缓动函数
 */
struct circular : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        return 1 - std::sqrt(1 - x * x);
    }
};


/**
 * @brief 弹性 (Elastic) 缓动函数
 */
struct elastic : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        return std::sin(6.5 * k_pi(x)) * std::pow(2, 10 * (x - 1));
    }
};

/**
 * @brief 向后 (Back) 缓动函数
 */
struct back : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        return x * x * x - x * std::pow(k_pi(x));
    }
};

/**
 * @brief 弹跳 (Bounce) 缓动函数
 */
struct bounce : ease_base
{
    constexpr auto in(std::floating_point auto x) noexcept
    {
        return 1 - bounce_out(1 - x);
    }
    constexpr auto out(std::floating_point auto x) noexcept
    {
        return bounce_out(x);
    }
};


}

}

}
