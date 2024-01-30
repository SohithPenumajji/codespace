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
    cout << endl;
}

int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    else{
        return -1;
    }
}

void Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index] = x;
    }

}

int Max(struct Array arr)
{
    int a_max = arr.A[0];
    for(int i=1; i<=arr.length;i++)
        {
            if(arr.A[i] > a_max)
            {
              a_max = arr.A[i];
            }
        }
    return a_max;

}
int Min(struct Array arr)
{
    int a_min = arr.A[0];
    for(int i = 1; i < arr.length; i++)
    {
        if(arr.A[i] < a_min)
        {
            a_min = arr.A[i];
        }
    }
    return a_min;
}


int Sum(struct Array arr)
{
    int sum = 0;
    for(int i=0; i<arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}
float Avg(struct Array arr)
{
    if (arr.length > 0)
        return (float)Sum(arr)/arr.length;
    else
        return 0.0f;
}
int main()
{
    struct Array arr = {{23,71,12,29,88,57,68,33}, 8, 8};

    Display(arr);

    cout << Get(arr, 5) << endl;
    cout << endl;

    cout <<"Setting Index 5 to value 69" << endl;
    Set(&arr, 5, 69);
    Display(arr);

    cout << Max(arr) << endl;

    cout << Min(arr) << endl;

    cout << Sum(arr) << endl;

    cout << Avg(arr) << endl;




    return 0;
}
