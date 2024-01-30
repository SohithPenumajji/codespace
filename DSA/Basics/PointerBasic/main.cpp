#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "A is: " << a << endl;
    cout <<"Address Of a is: " << ptr << endl;
    cout << "Value of P is: " << *ptr << endl;
    /// Using Array
    int arr[5] {2,4,6,8,10};
    int *p = arr;
    for(int i=0; i<5; i++)
    {
        cout << p[i] << endl;
    }
    /// Accessing memory on heap using C
    int *point;
    point =(int *)malloc(5 * sizeof(int));
    point[0] = 2;
    point[1] = 4;
    point[2] = 6;
    point[3] = 8;
    point[4] = 10;
    for(int i=0; i<5; i++)
    {
        cout << point[i] << endl;
    }
    free(point);

    ///Accessing Memory on Heap using C++

       int *pointer;
       pointer= new int[5];
        pointer[0] = 2;
        pointer[1] = 4;
        pointer[2] = 6;
        pointer[3] = 8;
        pointer[4] = 10;
    for(int i=0; i<5; i++)
    {
        cout << pointer[i] << endl;
    }
    delete []pointer;

        return 0;
}
