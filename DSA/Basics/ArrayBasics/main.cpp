#include <iostream>

using namespace std;

int main()
{
    int Arr[5] {2,7,4,9,0};
    for(int i=0;i<5;i++)
    {
        cout<<"The Value is: " << Arr[i] << endl;
    }

    ///Range Based for loop///
    for(int val: Arr)
    {
        cout <<Arr[val]<< endl;
    }
    return 0;
}
