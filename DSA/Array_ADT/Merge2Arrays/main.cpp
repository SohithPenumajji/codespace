#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int a_size;
    int length;
};

void Display(struct Array &arr3)
{
    int i;
    for (i = 0; i < arr3.length; i++)
    {
        cout << arr3.A[i] << " ";
    }
    cout << endl;
}

struct Array *Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    struct Array *arr3 = new struct Array;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k; // Update the length of arr3
    arr3->a_size = 10;

    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{1, 3, 7, 9, 17}, 10, 5};

    struct Array *arr3 = Merge(&arr1, &arr2);
    Display(*arr3);

    // Don't forget to deallocate memory
    delete arr3;

    return 0;
}
