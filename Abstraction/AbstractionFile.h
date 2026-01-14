#ifndef ABSTRACTIONFILE_H
#define ABSTRACTIONFILE_H

#include "Abstraction.h"

class AbstractionFile : public Abstraction
{
public:
    AbstractionFile();

    void log(const string &message) const override;
};

#endif // ABSTRACTIONFILE_H
