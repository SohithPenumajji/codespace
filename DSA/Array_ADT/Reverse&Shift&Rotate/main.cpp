#include <iostream>

using namespace std;
struct Array
{
    int A[10];
    int a_size;
    int length;
};

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array &arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Reverse(struct Array *arr)
{
    int *B;
    int i,j;
    B = new int[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[j] = arr->A[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->A[i] = B[i];
    }
    delete [] B;
}

void Reverse2(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        Swap(&arr->A[i], &arr->A[j]);
    }
}
int main()
{
    struct Array arr = {{2,5,9,4,3,7,1,8}, 8, 8};

    /// Reversing by taking extra array

    Reverse(&arr);
    Display(arr);

    cout << endl;

    /// Reversing by swapping

    Reverse2(&arr);
    Display(arr);




    return 0;
}
