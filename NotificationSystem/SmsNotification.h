#ifndef SMSNOTIFICATION_H
#define SMSNOTIFICATION_H

#include "Notification.h"

class SmsNotification : public Notification
{
public:
    explicit SmsNotification(const std::string& phoneNumber);

    void send(const std::string& message) const override;

private:
    std::string phoneNumber;
};

#endif // SMSNOTIFICATION_H
