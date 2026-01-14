#include "Encapsulation/Encapsulation.h"
#include "Inheritance/InheritanceManager.h"
#include "Inheritance/InheritanceDeveloper.h"
#include "Polymorphism/Polymorphism.h"
#include "Polymorphism/PolymorphismCircle.h"
#include "Polymorphism/PolymorphismRectangle.h"
#include "Abstraction/Abstraction.h"
#include "Abstraction/AbstractionConsole.h"
#include "Abstraction/AbstractionFile.h"
#include "PaymentSystem/PaymentMethod.h"
#include "PaymentSystem/CreditCardPayment.h"
#include "PaymentSystem/PaypalPayment.h"
#include "NotificationSystem/Notification.h"
#include "NotificationSystem/EmailNotification.h"
#include "NotificationSystem/SmsNotification.h"

void processPayment(PaymentMethod& method)
{
    method.pay(600);
}

void processNotification(Notification& notification)
{
    notification.send("Hello");

}

void processNewNotification(const Notification& notification, const std::string& message)
{
    notification.send(message);
}

void processPushbackNotification(const std::vector<std::unique_ptr<Notification>>& notification)
{
    for (const auto& n : notification) {
        n->send("Hello push_back");
    }
}

void processPushbackNewNotification(const std::vector<std::unique_ptr<Notification>>& notification, const std::string& message)
{
    for (const auto& n : notification) {
        n->send(message);
    }
}

int main()
{
    // Encapsulation
    Encapsulation encapsulation;
    encapsulation.setDeposit(-40);
    encapsulation.setDeposit(100);

    encapsulation.setWithdraw(65);
    encapsulation.setWithdraw(100);

    qDebug() << "Encapsulation:" << encapsulation.getBalance();

    qDebug() << "+++++++++++++++++++++++++++++++++";

    // Inheritance
    InheritanceManager inheritanceManager(100, 40);
    qDebug() << "InheritanceManager:" << inheritanceManager.calculateSalary();

    InheritanceDeveloper inheritanceDeveloper(100, 50);
    qDebug() << "InheritanceDeveloper:" << inheritanceDeveloper.calculateSalary();

    qDebug() << "+++++++++++++++++++++++++++++++++";

    // Polymorphism
    Polymorphism *polymorphismCircle = new PolymorphismCircle(50);
    qDebug() << "PolymorphismCircle:" <<  polymorphismCircle->area();

    Polymorphism *polymorphismRectangle = new PolymorphismRectangle(10);
    qDebug() << "PolymorphismRectangle:" <<  polymorphismRectangle->area();

    qDebug() << "+++++++++++++++++++++++++++++++++";

    // Abstraction
    Abstraction *abstractionConsole = new AbstractionConsole();
    abstractionConsole->log("console");

    AbstractionFile abstractionFile;
    abstractionFile.log("file");

    qDebug() << "+++++++++++++++++++++++++++++++++";

    // PaymentSystem
    CreditCardPayment card("123-456");
    PaypalPayment email("test@mail");

    processPayment(card);
    processPayment(email);

    qDebug() << "+++++++++++++++++++++++++++++++++";

    // NotificationSystem
    EmailNotification mail("test");
    SmsNotification smsPhoneNumber("123");

    processNotification(mail);
    processNotification(smsPhoneNumber);

    ///

    processNewNotification(mail, "mail");
    processNewNotification(smsPhoneNumber, "sms");

    ///

    std::vector<std::unique_ptr<Notification>> pushbackNotification;

    pushbackNotification.push_back(
        std::make_unique<EmailNotification>("test@mail.com"));
    pushbackNotification.push_back(
        std::make_unique<SmsNotification>("123"));

    processPushbackNotification(pushbackNotification);

    ///

    std::vector<std::unique_ptr<Notification>> pushbackNewNotification;

    pushbackNewNotification.push_back(
        std::make_unique<EmailNotification>(""));
    pushbackNewNotification.push_back(
        std::make_unique<SmsNotification>(""));

    processPushbackNewNotification(pushbackNewNotification, "pushbackNewNotification");

    return 0;
}
