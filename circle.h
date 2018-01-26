#pragma once

#include "rect.h"
#include "ishape.h"
#include "graphiccontext.h"

/**
 * @brief Circle shape.
 */
class Circle : public IShape
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
