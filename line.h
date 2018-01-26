#pragma once

#include "rect.h"
#include "ishape.h"
#include "graphiccontext.h"

/**
 * @brief Line abstraction.
 */
class Line : public IShape
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
