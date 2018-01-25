#pragma once

#include "shape.h";

/**
 * @brief Line.
 */
class Line : public Shape
{
public:
    Line(const Rect& _rect);

    void Visualize() override
    {
    }

private:
    Rect rect;
};
