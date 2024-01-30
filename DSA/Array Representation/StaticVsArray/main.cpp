#include <iostream>

using namespace std;

int main()
{
    int Arr[5]= {2,4,6,8,10};
    int *ptr;
    int i;
    /// ptr =(int *)malloc(5 * sizeof(int); (C)
    ptr = new int[5];
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    //ARR
    for(i=0;i<5;i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;

    //PTR

    for(i=0;i<5;i++)
    {
        cout << *(ptr + i) << " ";
    }


    delete [] ptr;
    return 0;
}
