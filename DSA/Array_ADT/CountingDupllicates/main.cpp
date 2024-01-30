#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {3,6,8,8,10,12,15,15,15,20};
    int n = 10;
    for(int i=0; i<n-1; i++)
    {
        if(Arr[i] == Arr[i+1])
        {
            int j;
            j = i+1;
            while(Arr[j] == Arr[i])
            {
                j++;
            }
            cout << Arr[i] << " repeats " << j-i << " times" << endl;
            i = j-1;
            }
    }
    return 0;
}
