#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{   ///stack based array
    int Arr[3][4] = {{1,2,3,4},
                    {2,4,6,8},
                    {1,3,5,7}};

    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }


    /// Heap based Array for columns
    int *Brr[3];
    Brr[0] = new int[4];
    Brr[1] = new int[4];
    Brr[2] = new int[4];

    cout << endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << Brr[i][j] << " ";
        }
        cout << endl;
    }


    ///Heap based for rows and columns
    int **Crr;
    Crr = new int*[3];
    Crr[0] = new int[4];
    Crr[1] = new int[4];
    Crr[2] = new int[4];

    cout << endl;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout << Crr[i][j] << " ";
        }
        cout << endl;
    }


    for (i = 0; i < 3; ++i) {
        delete[] Brr[i];
        delete[] Crr[i];
    }
    delete[] Crr;






    return 0;
}
