#pragma once

#include "igraphiccontext.h"

/**
 * @brief The context to draw shapes.
 */
class GraphicContext : public IGraphicContext
{
public:
    void DrawPixel(int x, int y, Color color) override
    {
    }
};
