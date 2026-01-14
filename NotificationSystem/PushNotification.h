#ifndef PUSHNOTIFICATION_H
#define PUSHNOTIFICATION_H

#include "Notification.h"

class PushNotification : public Notification
{
public:
    explicit PushNotification(const std::string& notification);

    void send(const std::string& message) const override;

private:
    std::string notification;

};

#endif // PUSHNOTIFICATION_H
