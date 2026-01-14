#ifndef PAYPALPAYMENT_H
#define PAYPALPAYMENT_H

#include "PaymentMethod.h"

class PaypalPayment : public PaymentMethod
{
public:
    explicit PaypalPayment(std::string email);

    void pay(double amount) const override;

private:
    std::string email;
};

#endif // PAYPALPAYMENT_H
