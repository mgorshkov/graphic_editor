#pragma once

#include "shape.h"
#include "graphiccontext.h"

/**
 * @brief Line.
 */
class Line : public Shape
{
public:
    Line(const Rect& _rect);

    /// Draw the line on screen
    void Visualize(GraphicContext& context) override
    {
    }

private:
    Rect rect;
};
