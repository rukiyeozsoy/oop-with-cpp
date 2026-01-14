#include "EmailNotification.h"

EmailNotification::EmailNotification(const string &email) : email(email){}

void EmailNotification::send(const string &message) const
{
    qDebug()<<"EmailNotification: " <<message;
}
