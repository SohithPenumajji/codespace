#include <iostream>

using namespace std;

int main()
{
   int *ptr;
   ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    int *qtr;
    qtr = new int[10];
    int i;
    for(i=0;i<5;i++)
    {
        qtr[i] = ptr[i];
    }

    delete []ptr;
    ptr = qtr;
    qtr = nullptr;

    for(i=0;i<5;i++)
    {
        cout << ptr[i] << " ";
    }




}
