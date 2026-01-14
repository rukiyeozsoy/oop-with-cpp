#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

/*
    Bir Shape soyut sınıfı tanımlayın.

    Gereksinimler:

    area() fonksiyonu pure virtual olsun
    Circle ve Rectangle sınıfları türesin
    Her sınıf kendi alan hesaplamasını yapsın
    Bir Shape* veya Shape& üzerinden çağrı yapıldığında
    doğru area() çalışmalı
*/

class Polymorphism
{
public:
    Polymorphism();

    virtual int area() const =0;
};

#endif // POLYMORPHISM_H
