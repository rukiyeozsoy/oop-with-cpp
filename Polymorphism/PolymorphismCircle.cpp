#include "PolymorphismCircle.h"

PolymorphismCircle::PolymorphismCircle(int circle) : circle(circle)
{
}

int PolymorphismCircle::area() const
{
    return 3*circle;
}
