#ifndef INHERITANCEMANAGER_H
#define INHERITANCEMANAGER_H

#include "Inheritance.h"

class InheritanceManager : public Inheritance
{
public:
    InheritanceManager(int base, int bonus);

    int calculateSalary() const override;

public:
    int bonus;
};
#endif // INHERITANCEMANAGER_H
