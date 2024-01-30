#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double bal_value, double init_rate)
    : Account(name, bal_value), int_rate(init_rate)
{
}

bool Savings_Account::deposit(double amount)
{
    if (amount > 0)
    {
        amount += amount * (int_rate / 100);
        return Account::deposit(amount);
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account)
{
    os << "[Savings_Account: " << account.Acc_name << ": " << account.Balance << ", " << account.int_rate << "]";
    return os;
}
