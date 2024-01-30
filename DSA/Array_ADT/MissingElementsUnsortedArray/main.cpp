#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {3,7,4,9,12,6,1,11,2,10};
    int Hash[12];
    for(int i=0; i<12; i++)
    {
        Hash[i] = 0;
    }
    for(int i=0; i<10; i++)
    {
        Hash[Arr[i]]++;
    }
    for(int i=1; i<=12; i++)
    {
        if(Hash[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
