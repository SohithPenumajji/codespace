#include <iostream>

using namespace std;

int main()
{
    int a {10};
    int &r = a;
    a = 25;
    cout << r << endl << a << endl;

    return 0;
}
