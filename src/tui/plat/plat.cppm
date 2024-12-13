/**
 * @file        tui/plat/plat.cppm
 * @brief       获取依赖于终端的信息和依赖于平台的代码
 * @details     相关实现分散在各个模块分区内，并隔离了相关的宏和无关名，这个文件只负责汇总导出接口
 * @author      KeqingMoe
 * @date        2024-12-11
 * @copyright   Copyright (c) 2024 KeqingMoe
 * @license     MIT License
 */

export module kqm.tui.plat;

export import :color;
export import :size;
