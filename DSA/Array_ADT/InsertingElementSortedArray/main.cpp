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
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Display(struct Array &arr)
{
    int i;
    for(i=0; i<arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int isSorted(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return false;
        }

    }
    return true;
}

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if(arr->length == arr->a_size)
    {
        return;
    }
    while (i>=0 && arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;

}

void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i < j)
    {
        while(arr->A[i] < 0 && i<j)
        {
            i++;
        }
        while(arr->A[j] >= 0 && i<j)
        {
            j--;
        }
        if (i<j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}

int main()
{
    struct Array arr = {{2,-3,25,10,-15,-7,4,3}, 10, 8};

    InsertSort(&arr, 11);
    Display(arr);

    cout << isSorted(arr) << endl;
    Display(arr);

    Rearrange(&arr);
    Display(arr);






    return 0;
}
