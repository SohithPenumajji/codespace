#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
protected:
    std::string Acc_name;
    double Balance;
public:
    // constructor
    Account(std::string name = "Unknown Member", double bal_val = 0.0);
    // member functions
    bool deposit(double amount);
    bool withdrawl(double amount);
    double get_balance() const;
};

#endif // ACCOUNT_H
