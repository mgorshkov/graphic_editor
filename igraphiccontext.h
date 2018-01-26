#pragma once

#include "color.h"

/**
 * @brief The interface of context to draw shapes.
 */
class IGraphicContext
{
public:
    virtual ~IGraphicContext() {}

    virtual void DrawPixel(int x, int y, Color color) = 0;
};

