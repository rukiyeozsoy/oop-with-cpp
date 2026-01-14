#include "AbstractionFile.h"

AbstractionFile::AbstractionFile() {}

void AbstractionFile::log(const string &message) const
{
    qDebug()<< "AbstractionFile" << message;
}
