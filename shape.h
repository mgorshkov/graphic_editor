#pragma once

#include "color.h"

/**
 * @brief Shape interface
 */
class IShape
{
public:
    virtual ~IShape() {}

    /// Show a shape on screen
    virtual void Visualize() = 0;

    /// Set color
    void SetColor(Color _color)
    {
        color = _color;
    }

private:
    Color color;
};
