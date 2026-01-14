#ifndef POLYMORPHISMRECTANGLE_H
#define POLYMORPHISMRECTANGLE_H

#include "Polymorphism.h"

class PolymorphismRectangle : public Polymorphism
{
public:
    PolymorphismRectangle(int rectangle);

    int area() const override;

public:
    int rectangle=0;
};

#endif // POLYMORPHISMRECTANGLE_H
