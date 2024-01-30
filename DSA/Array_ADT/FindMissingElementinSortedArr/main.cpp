    #include <iostream>

using namespace std;

struct Array
{
    int A[12];
    int a_size;
    int length;
};

int Sum(struct Array arr)
{
    int sum = 0;
    for(int i=0; i<arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    int n = 12;
    int sum_of_elements = n*(n+1)/2;
    return sum_of_elements - sum;
}



int main()
{
    ///This is Only for First Natural Numbers !!!
    struct Array arr = {{1,2,3,4,5,6,8,9,10,11,12},12,11};

    cout << Sum(arr) << endl;

    return 0;
}
