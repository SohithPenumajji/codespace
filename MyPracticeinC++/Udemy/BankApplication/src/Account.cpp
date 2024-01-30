#include "Account.h"
#include <iostream>

Account::Account(std::string name, double bal_val)
    : Acc_name{name}, Balance{bal_val} {
}

bool Account::deposit(double amount)
{
    if (amount > 0)
    {
        Balance += amount;
        return true;
    }
    else
    {
        std::cout << "The deposit can be done if the amount is greater than 0" << std::endl;
        return false;
    }
}

bool Account::withdrawl(double amount)
{
    if (Balance - amount >= 0)
    {
        Balance -= amount;
        return true;
    }
    else
    {
        std::cout << "Insufficient funds" << std::endl;
        return false;
    }
}

double Account::get_balance() const
{
    return Balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account)
{
    os << "[Account: " << account.Acc_name << ": " << account.Balance << "]";
    return os;
}
