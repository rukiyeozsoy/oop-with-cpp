#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H

#include <QDebug>

/*
 *  Bir ödeme sistemi tasarlamanız isteniyor.
 *  PaymentMethod adında bir abstract base class tanımlayın
 *      pay(double amount) fonksiyonu pure virtual olsun
 *      Destructor virtual olsun
 *  Aşağıdaki sınıflar PaymentMethod’dan türesin:
 *      CreditCardPayment
 *      PaypalPayment
 *      Her biri: pay() fonksiyonunu kendi mantığıyla implement etsin
 *  Encapsulation
 *      Kart numarası, email vb. bilgiler private olmalı
 *      Bu bilgilere doğrudan erişim olmamalı
 *  Polymorphism
 *      Uygulama kodu ödeme yönteminin hangi sınıf olduğunu bilmemeli
 *      Base class pointer/reference üzerinden pay() çağrılmalı
 *  Abstraction
 *      Uygulama sadece PaymentMethod arayüzüne bağımlı olmalı
 *      Yeni ödeme yöntemi eklendiğinde (örn. CryptoPayment) uygulama kodu değişmemeli
*/

class PaymentMethod
{
public:
    PaymentMethod();
    virtual ~PaymentMethod() = default;

public:
    virtual void pay(double amount) const = 0;


};

#endif // PAYMENTMETHOD_H
