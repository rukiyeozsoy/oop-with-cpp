#ifndef INHERITANCE_H
#define INHERITANCE_H

/*
    Bir Employee base class’ı tanımlayın.

    Gereksinimler:

    calculateSalary() fonksiyonu olsun
    Manager ve Developer sınıfları Employee’dan türesin
    Manager maaşı: baseSalary + bonus
    Developer maaşı: baseSalary + overtime
 */

class Inheritance
{
public:
    Inheritance();
    explicit Inheritance(int base) : baseSalary(base) {}

    virtual int calculateSalary() const = 0;

public:
    int baseSalary = 0;
};

#endif // INHERITANCE_H
