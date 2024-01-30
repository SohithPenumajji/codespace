#include <iostream> // Include necessary header

#include "Account_Util.h"


void display(const std::vector<Account> &accounts)
{
    std::cout << "===Accounts==========================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl; // Add std:: before endl
}

void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "===Depositing to accounts========================" << std::endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
}

void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "===Withdrawing from accounts=========================" << std::endl;
    for (auto &acc : accounts)
        if (acc.withdrawl(amount))
        {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl; // Fix typo
        }
}

void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "===Saving_Accounts==========================" << std::endl;
    for (const auto &acc : accounts)
        std::cout << acc << std::endl; // Add std:: before endl
}

void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "===Depositing to Saving_Accounts========================" << std::endl;
    for (auto &acc : accounts)
        if (acc.deposit(amount))
        {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
        }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "===Withdrawing from Saving_Accounts=========================" << std::endl;
    for (auto &acc : accounts)
        if (acc.withdrawl(amount))
        {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else
        {
            std::cout << "Failed withdrawal of " << amount << " from " << acc << std::endl; // Fix typo
        }
}
