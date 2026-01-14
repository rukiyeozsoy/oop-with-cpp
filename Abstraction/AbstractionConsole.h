#ifndef ABSTRACTIONCONSOLE_H
#define ABSTRACTIONCONSOLE_H

#include "Abstraction.h"

class AbstractionConsole : public Abstraction
{
public:
    AbstractionConsole();

    void log(const std::string& message) const override;
};

#endif // ABSTRACTIONCONSOLE_H
