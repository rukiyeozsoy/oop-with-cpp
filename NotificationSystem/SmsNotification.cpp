#include "SmsNotification.h"

SmsNotification::SmsNotification(const string &phoneNumber) : phoneNumber(phoneNumber) {}

void SmsNotification::send(const string &message) const
{
    qDebug()<<"SmsNotification: " <<message;
}
