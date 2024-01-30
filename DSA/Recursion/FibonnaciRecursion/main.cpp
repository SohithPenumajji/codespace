#include <iostream>

using namespace std;

int iterative(int n)
{
    int t0=0, t1=1, s {0}, i;
    if ( n < 1)
    {
        return n;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            s = t0+t1;
            t0 = t1;
            t1 = s;

        }
    }
    return s;
}

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n-2) + fib(n-1);
    }
}

int F[10]; // global variable array

int mfib(int n)
{
    if (n<=1)
    {
        F[n] = n;
        return n;

    }
    else
    {
        if(F[n-2] == -1)
        {
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = mfib(n-1);
        }
        F[n-2] + F[n-1];
        return F[n-2] + F[n-1];
    }

}




int main()
{

    int i;
    for(i = 0;i<10;i++)
    {
        F[i] = -1;
        }

  cout << iterative(10) << endl;
  cout << fib(10) << endl;
  cout << mfib(10) << endl;
    return 0;
}
