#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;

    }
}

int nCr(int n, int r)
{
    int num, den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

int NCombr(int n, int r)
{
    if ( n == r || r == 0 )
    {
        return 1;
    }
    else
    {
        return NCombr(n-1, r-1)+ NCombr(n-1, r);
    }
}

int main()
{
    cout << nCr(5, 1) << endl;
    cout << NCombr(4, 2) << endl;
    return 0;
}
