#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {3,6,8,8,10,12,15,15,15,20};
    {
        for(int i=0; i<10; i++)
        {
            cout << Arr[i] << " ";
        }

        cout << endl;

        int last_duplicate = 0;
        for(int i=0; i<10; i++)
        {
            if(Arr[i] == Arr[i+1] && Arr[i] != last_duplicate)
            {
                cout << Arr[i] << " ";
                last_duplicate = Arr[i];
            }
        }
    }
    return 0;
}
