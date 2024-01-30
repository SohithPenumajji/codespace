#include <iostream>

using namespace std;

int main()
{
    int Arr[10] = {5,8,3,9,6,2,10,7,-1,4};
    int n = 10;
    int min_ele = Arr[0];
    int max_ele = Arr[0];
    for(int i=0; i<n; i++)
    {
        if(Arr[i] < min_ele)
        {
            min_ele = Arr[i];
        }
        else if(Arr[i] > max_ele)
        {
            max_ele = Arr[i];
        }
    }

    cout << "Minimum Element: " << min_ele << endl;
    cout << "Maximum Element: " << max_ele << endl;


    return 0;
}
