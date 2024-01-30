#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "Account.h"

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

protected:
    double int_rate;

public:
    Savings_Account(std::string name = "", double bal_value = 0.0, double init_rate = 0.0);

    bool deposit(double amount);
};

#endif // SAVINGS_ACCOUNT_H
