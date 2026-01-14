#ifndef EMAILNOTIFICATION_H
#define EMAILNOTIFICATION_H

#include "Notification.h"

class EmailNotification : public Notification
{
public:
    explicit EmailNotification(const std::string& email);

    void send(const std::string& message) const override;

private:
    std::string email;
};

#endif // EMAILNOTIFICATION_H
