#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {1,3,4,5,6,8,9,10,12,14};
    int k = 10;
    int i = 0;
    int j = 10 - 1;
    while(i < j)
    {
        if(Arr[i] + Arr[j] == 10)
        {
            cout << Arr[i] << " + " << Arr[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if(Arr[i] + Arr[j] < k)
        {
            i++;

        }
        else
        {
            j--;
        }
    }

    return 0;
}
