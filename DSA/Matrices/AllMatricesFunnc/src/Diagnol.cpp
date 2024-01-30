#include "Diagnol.h"

Diagnol::Diagnol(int n)
{
    this->n = n;
    A = new int[n*(n+1)/2];

}

void Diagnol::create()
{
    int x;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            cin >> x;
            if(i==j)
            {
                A[i-1] = x;
            }
        }
    }

}

void Diagnol::display()
{
    for(int i=0; i<=n; i++)
    {

        for(int j=1; j<=n; j++)
        {
            if (i==j)
            {
                cout << A[i-1] << " ";
            }
            else{
               cout << " 0 ";
            }

        }
        cout << endl;

    }
}

Diagnol::~Diagnol()
{
    delete[] A;

}
