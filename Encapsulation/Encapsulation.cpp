#include "Encapsulation.h"

Encapsulation::Encapsulation()
{
}

void Encapsulation::setDeposit(int value)
{
    if(value<0)
        qDebug()<<"geçersiz değer";
    else
        balance += value;
}

void Encapsulation::setWithdraw(int value)
{
    if(value>balance)
        qDebug()<<"yetersiz bakiye";
    else
        balance-=value;
}

int Encapsulation::getBalance()
{
    return balance;
}
