#include "PaypalPayment.h"

PaypalPayment::PaypalPayment(std::string email) : email(email) {}

void PaypalPayment::pay(double amount) const
{
    amount -= 300;

    qDebug()<<"Paypal:" << amount;
}
