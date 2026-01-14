#include "AbstractionConsole.h"

AbstractionConsole::AbstractionConsole() {}

void AbstractionConsole::log(const string &message) const
{
    qDebug()<< "AbstractionConsole" << message;
}
