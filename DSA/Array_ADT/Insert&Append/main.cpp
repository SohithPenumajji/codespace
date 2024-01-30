#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int a_size;
    int length;
};

void append(struct Array *arr, int x)
{
    if(arr->length < arr->a_size)
    {
        arr->A[arr->length++] = x;
    }
}

void arr_insert(struct Array *arr, int index, int x)
{
    int i;
    if (index>=0 && index<arr->length)
    {
            for(i=arr->length; i>index; i--)
        {
            arr->A[i] = arr->A[i-1]; ///storing value of x by moving 1 element forward of total length
        }
        arr->A[index] = x;
        arr->length++;
    }
}

void Display(struct Array &arr) // Fun pass by reference
{
    int i;
    cout << endl;
    cout << "Elements are: " << endl;
    for(i=0;i<arr.length;i++)
    {
        cout << arr.A[i] << " ";
    }

}


int main()
{

    struct Array arr = {{1,2,4,5,7},10,5};

    append(&arr, 10);
    Display(arr);

    cout << endl;

    arr_insert(&arr, 0, 12);
    Display(arr);


    return 0;
}
