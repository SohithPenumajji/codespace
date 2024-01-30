#include <iostream>
#define DOLLAR 100
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

using namespace std;

int main()
{
    int AmountInCents {0};
    cout << "Enter the amount in cents: ";
    cin >> AmountInCents;

    cout << "Change for " << AmountInCents << " is: " << endl;

    int dollars = AmountInCents / DOLLAR;
    AmountInCents = AmountInCents % DOLLAR;

    int quarters = AmountInCents / QUARTER;
    AmountInCents = AmountInCents % QUARTER;

    int dimes = AmountInCents / DIME;
    AmountInCents = AmountInCents % DIME;

    int nickels = AmountInCents / NICKEL;
    AmountInCents = AmountInCents % NICKEL;

    int pennies = AmountInCents;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;


    return 0;
}
