#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {6,3,8,10,16,7,5,2,9,14};
    int Hash[17];
    int k = 10;
    for(int i=0; i<17; i++)
    {
        Hash[i] = 0;
    }
    for(int i=0; i<10; i++)
    {
        if(Hash[k - Arr[i]] != 0)
        {
            cout << Arr[i] << " + " << k-Arr[i] << " = " << k << endl;
        }
        ++Hash[Arr[i]];

    }
    return 0;
}
