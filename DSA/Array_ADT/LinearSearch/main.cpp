#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int a_size;
    int length;
};

void Display(struct Array &arr)
{
    for(int i=0; i<arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

void swapfun(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array arr, int key)
{

    for(int i=0; i<arr.length; i++)
    {
        if(key == arr.A[i])
        {
            cout << "Searching is successful" << endl;
            return i;
        }
    }
    return -1;
}

int Transposition(struct Array *arr, int key)
{
    for(int i=0; i<arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swapfun(&arr->A[i], &arr->A[i-1]);
            cout << "Searching is successful" << endl;
            return i;
        }
    }
    return -1;

}

int MoveToHead(struct Array *arr, int key)
{
    for(int i=0; i<arr->length; i++)
    {
        if(key == arr->A[i])
        {
            swapfun(&arr->A[i], &arr->A[0]);
            cout << "Searching is successful" << endl;
            return i;
        }
    }
    return -1;

}

int main()
{
    struct Array arr = {{1,5,2,8,6,11,4,9,7}, 10, 9};

    cout << LinearSearch(arr, 9) << endl;
    Display(arr);

    cout << Transposition(&arr, 9) << endl;
    Display(arr);

    cout << MoveToHead(&arr, 9) << endl;
    Display(arr);
    return 0;
}
