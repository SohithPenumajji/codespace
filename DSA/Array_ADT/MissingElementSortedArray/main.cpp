#include <iostream>

using namespace std;

struct Array
{
    int A[12];
    int a_size;
    int length;
};

int Missing_element(struct Array arr)
{
    int low =  6;
    int high = 17;
    int num_of_ele = 11;

    int difference = low - 0;

    for(int i=0; i<num_of_ele; i++)
    {
        if(arr.A[i] - i != difference)
        {
            cout << i + difference << endl;
            break;
        }
    }
}




int main()
{
    ///this can be done by knowing low, high & number of elements !!!

    struct Array arr = {{6,7,8,9,10,11,13,14,15,16,17},12,11};

    Missing_element(arr);



    return 0;
}
