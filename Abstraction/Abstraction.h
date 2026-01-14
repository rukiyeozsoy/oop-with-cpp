#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include <QDebug>
#include <iostream>
using namespace std;


/*
    Bir Logger arayüzü (abstract class) tasarlayın.

    Gereksinimler:

    log(const std::string& message) fonksiyonu olsun
    ConsoleLogger ve FileLogger implementasyonları olsun
    Uygulama kodu hangi logger kullanıldığını bilmemeli
    Logger değiştirildiğinde uygulama kodu değişmemeli
*/

class Abstraction
{
public:
    Abstraction();
    virtual ~Abstraction() = default;

    virtual void log(const std::string& message) const = 0;
};

#endif // ABSTRACTION_H
