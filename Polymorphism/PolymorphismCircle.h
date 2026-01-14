#ifndef POLYMORPHISMCIRCLE_H
#define POLYMORPHISMCIRCLE_H

#include "Polymorphism.h"

class PolymorphismCircle  : public Polymorphism
{
public:
    PolymorphismCircle(int circle);

    int area() const override;

public:
    int circle=0;
};

#endif // POLYMORPHISMCIRCLE_H
