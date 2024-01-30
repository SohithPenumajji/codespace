#include <iostream>

using namespace std;

struct Array
{
    int A[12];
    int a_size;
    int length;
};


void multiple_missing(struct Array arr)
{
    int low = 6;
    int high = 19;
    int num_of_ele = 11;

    int difference = low - 0;

    for(int i=0; i<num_of_ele; i++)
    {
        if(arr.A[i] - i != difference)
        {
            while(difference < arr.A[i]-i)
            {
                cout << i + difference << endl;
                difference++;
            }
        }
    }
}





int main()
{
    ///this can be done by knowing low, high & number of elements !!!

    struct Array arr = {{6,7,8,9,11,12,15,16,17,18,19},12,11};

    multiple_missing(arr);



    return 0;
}
