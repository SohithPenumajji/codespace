#include <iostream>
#include "MyString.h"


using namespace std;

int main()
{
    MyString a {"frank"};
    MyString b {"frank"};

    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;           // false

    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
     cout << (a<b) << endl;         // true
    cout << (a>b) << endl;
}
