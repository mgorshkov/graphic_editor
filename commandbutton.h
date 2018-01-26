#pragma once

#include <string>
#include <functional>

#include "rect.h"

/**
 * @brief Abstraction for a button with action.
 */
struct CommandButton
{
    std::string name;
    Rect rect;
    std::function<void(void)> handler;
};

