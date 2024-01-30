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
    int i;
    for(i=0;i<arr.length;i++)
    {
        cout << arr.A[i] << " ";
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;
    if(index>=0 && index<arr->length)
    {
        x = arr->A[index];
        int i;
        for(i=index; i<arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{
    struct Array arr = {{1,3,5,7,9,4}, 10, 6};

    cout << Delete(&arr, 4) << endl;
    Display(arr);


    return 0;
}
