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
    virtual void SetColor(Color color) = 0;

    /// Set line width
    virtual void SetLineWidth(int width) = 0;
};
