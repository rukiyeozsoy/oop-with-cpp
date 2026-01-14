#include "InheritanceManager.h"

InheritanceManager::InheritanceManager(int base, int bonus) : Inheritance(base), bonus(bonus){}

int InheritanceManager::calculateSalary() const
{
    return baseSalary+bonus;
}
