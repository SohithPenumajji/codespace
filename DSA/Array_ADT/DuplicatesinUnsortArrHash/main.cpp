#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {8,3,6,4,6,5,6,8,2,7};
    int n = 10;
    int Hash[9];
    for(int i=0; i<9; i++)
    {
        Hash[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        Hash[Arr[i]]++;
    }
    for(int i=0; i<=8; i++)
    {
        if(Hash[i] > 1)
        {
            cout << i << " repeats " << Hash[i] << " times." << endl;
        }
    }
    return 0;
}
