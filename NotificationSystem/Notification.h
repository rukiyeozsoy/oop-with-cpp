#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QDebug>
#include <iostream>
using namespace std;

/*
 *  Bir uygulamada farklı yollarla kullanıcıya bildirim gönderilmesi gerekiyor:
 *      E-mail
 *      SMS
 *      (ileride Push Notification eklenecek)
 *  Abstract Base Class (Abstraction)
 *      Notification adında bir abstract class tanımlayın.
 *      send(const std::string& message) → pure virtual
 *      Destructor virtual olmalı
 *  Inheritance: Aşağıdaki sınıflar Notification’dan türesin:
 *      EmailNotification
 *      SmsNotification
 *  Encapsulation
 *      Email adresi, telefon numarası private olmalı
 *      Dışarıdan doğrudan erişilememeli
 *      Bu bilgiler constructor ile alınmalı
 *  Polymorphism
 *      Uygulama kodu hangi notification gönderildiğini bilmemeli
 *      Base class reference/pointer üzerinden send() çağrılmalı
 *  Abstraction
 *      Yeni bir PushNotification eklendiğinde main / uygulama kodu değişmemeli
*/

class Notification
{
public:
    Notification();
    virtual ~Notification() = default;

    virtual void send(const std::string& message) const = 0;
};

#endif // NOTIFICATION_H
