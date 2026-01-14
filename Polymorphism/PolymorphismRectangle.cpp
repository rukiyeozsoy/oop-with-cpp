#include "PolymorphismRectangle.h"

PolymorphismRectangle::PolymorphismRectangle(int rectangle) : rectangle(rectangle)
{
}

int PolymorphismRectangle::area() const
{
    return rectangle*rectangle;
}
