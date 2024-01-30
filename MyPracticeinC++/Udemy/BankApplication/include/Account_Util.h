#ifndef ACCOUNT_UTIL_H_INCLUDED
#define ACCOUNT_UTIL_H_INCLUDED

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

//Functions for account class


void display(const std::vector <Account> &accounts);
void deposit(std::vector <Account> &accounts, double amount);
void withdraw(std::vector <Account> &accounts, double amount);

//Functions for Savings_Account class

void display(const std::vector <Savings_Account> &accounts);
void deposit(std::vector <Savings_Account> &accounts, double amount);
void withdraw(std::vector <Savings_Account> &accounts, double amount);




#endif // ACCOUNT_UTIL_H_INCLUDED
