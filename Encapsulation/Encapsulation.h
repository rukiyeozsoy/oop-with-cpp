#ifndef ENCAPSULATION_H
#define ENCAPSULATION_H

#include <QDebug>

/*
    Bir BankAccount sınıfı yazın.

    Gereksinimler:

    balance değişkeni dışarıdan doğrudan erişilememeli
    Para yatırma (deposit) ve çekme (withdraw) fonksiyonları olmalı
    Negatif para yatırılmamalı
    Bakiye yetersizse para çekilememeli
    Mevcut bakiyeyi okumak için sadece okunabilir bir fonksiyon olmalı
*/

class Encapsulation
{
public:
    Encapsulation();

private:
    int balance=0;

public:
    void setDeposit(int value);
    void setWithdraw(int value);

    int getBalance();
};

#endif // ENCAPSULATION_H
