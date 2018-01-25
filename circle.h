#pragma once

#include "shape.h";

/**
 * @brief Circle.
 */
class Circle : public Shape
{
public:
    Circle(const Rect& _rect);

    void Visualize() override
    {
    }

private:
    Rect rect;
};
