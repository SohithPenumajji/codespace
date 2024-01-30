#include <iostream>

using namespace std;

double e(int x, int n)
{
    static double s = 1;
    if(n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + x*s/n;
        return e(x, n-1);
    }
}

double e1(int x, int n)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;
    for (i=1;i<=n;i++)
    {
        num = num * x;
        den = den * n;
        s = s + num/den;

    }
    return s;
}

int main()
{
    cout << e(1, 10) << endl;
    cout << e1(1, 10) << endl;
    return 0;
}
