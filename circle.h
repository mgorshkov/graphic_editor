#pragma once

#include "shape.h"
#include "graphiccontext.h"

/**
 * @brief Circle shape.
 */
class Circle : public Shape
{
public:
    Circle(const Rect& _rect);

    /// Draw the circle on screen
    void Visualize(GraphicContext& context) override
    {
    }

private:
    Rect rect;
};
