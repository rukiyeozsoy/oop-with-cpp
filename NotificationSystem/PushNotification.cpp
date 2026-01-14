#include "PushNotification.h"

PushNotification::PushNotification(const string &notification) : notification(notification) {}

void PushNotification::send(const string &message) const
{
    qDebug()<<"PushNotification: " <<message;
}
