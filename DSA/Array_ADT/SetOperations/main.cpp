#include <iostream>

using namespace std;

struct Array
{
    int A[20];
    int a_size;
    int length;
};

void Display(struct Array &arr3)
{
    int i;
    for(i=0;i<arr3.length;i++)
    {
        cout << arr3.A[i] << " ";
    }
    cout << endl;
}

void Display4(struct Array &arr4)
{
    int i;
    for(i=0;i<arr4.length;i++)
    {
        cout << arr4.A[i] << " ";
    }
    cout << endl;
}

void Display5(struct Array &arr5)
{
    int i;
    for(i=0;i<arr5.length;i++)
    {
        cout << arr5.A[i] << " ";
    }
    cout << endl;
}

struct Array Union(struct Array &arr1, struct Array &arr2)
{
    struct Array arr3;
    int i =0, j=0, k=0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            arr3.A[k++] = arr1.A[i++];
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            arr3.A[k++] =  arr2.A[j++];
        }
        else
        {
            arr3.A[k++] = arr1.A[i++];
            j++;
        }
    }

    while ( i < arr1.length)
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

struct Array Intersection(struct Array &arr1, struct Array &arr2)
{
    struct Array arr4;
    int i =0, j=0, k=0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            i++;
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            j++;
        }
        else if (arr1.A[i] == arr2.A[j])
        {
            arr4.A[k++] = arr1.A[i++];
            j++;
        }
    }


    arr4.length = k;
    arr4.a_size = arr1.a_size + arr2.a_size;

    return arr4;
}

struct Array Difference(struct Array &arr1, struct Array &arr2)
{
    struct Array arr5;
    int i =0, j=0, k=0;
    while(i < arr1.length && j < arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            arr5.A[k++] = arr1.A[i++];
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    while ( i < arr1.length)
    {
        arr5.A[k++] = arr1.A[i++];

    }


    arr5.length = k;
    arr5.a_size = arr1.a_size + arr2.a_size;

    return arr5;
}

int main()
{
    struct Array arr1 = {{2,6,10,15,25},10, 5};
    struct Array arr2 = {{3,6,7,15,20}, 10, 5};
    // union
    struct Array arr3 = Union(arr1, arr2);
    Display(arr3);

    // intersection
    struct Array arr4 = Intersection(arr1, arr2);
    cout << endl;
    Display4(arr4);

    // Difference
    struct Array arr5 = Difference(arr1, arr2);
    cout << endl;
    Display5(arr5);
    return 0;
}
