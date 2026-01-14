#include "InheritanceDeveloper.h"


InheritanceDeveloper::InheritanceDeveloper(int base, int overtime) : Inheritance(base), overtime(overtime){}

int InheritanceDeveloper::calculateSalary() const
{
    return baseSalary+overtime;
}
