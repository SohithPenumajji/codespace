
#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {3,6,8,8,10,12,15,15,15,20};
    int n = 10;
    int Hash[21];
    for(int i=0; i<21; i++)
    {
        Hash[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        Hash[Arr[i]]++;
    }
    for(int i=0; i<21; i++)
    {
        if(Hash[i] > 1)
        {
            cout << i << " repeats " << Hash[i] << " times." << endl;
        }
    }
    return 0;
}
