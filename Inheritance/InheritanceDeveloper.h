#ifndef INHERITANCEDEVELOPER_H
#define INHERITANCEDEVELOPER_H

#include "Inheritance.h"

class InheritanceDeveloper : public Inheritance
{
public:
    InheritanceDeveloper(int base, int overtime);

    int calculateSalary() const override;

public:
    int overtime;
};

#endif // INHERITANCEDEVELOPER_H
