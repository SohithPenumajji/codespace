#include <iostream>

using namespace std;

struct Array
{
    int A[20];
    int a_size;
    int length;
};

// Display function
void Display(struct Array &arr3)
{
    for (int i = 0; i < arr3.length; i++)
    {
        cout << arr3.A[i] << " ";
    }
    cout << endl;
}

// Merge function
struct Array Merge(struct Array &arr1, struct Array &arr2)
{
    struct Array arr3;
    int i = 0, j = 0, k = 0;

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3.A[k++] = arr1.A[i++];
        }
        else
        {
            arr3.A[k++] = arr2.A[j++];
        }
    }

    while (i < arr1.length)
    {
        arr3.A[k++] = arr1.A[i++];
    }

    while (j < arr2.length)
    {
        arr3.A[k++] = arr2.A[j++];
    }

    arr3.length = k;
    arr3.a_size = arr1.a_size + arr2.a_size;

    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{1, 3, 7, 9, 17}, 10, 5};

    struct Array arr3 = Merge(arr1, arr2);
    Display(arr3);

    return 0;
}
