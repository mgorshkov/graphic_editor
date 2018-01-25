#pragma once

#include "color.h"
#include "graphiccontext.h"

/**
 * @brief Shape interface
 */
class IShape
{
public:
    virtual ~IShape() {}

    /// Draw a shape on screen
    virtual void Visualize(GraphicContext& context) = 0;

    /// Set shape's color
    void SetColor(Color _color)
    {
        color = _color;
    }

private:
    Color color;
};
