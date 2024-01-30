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
    cout << endl;
}

int BinarySearch(struct Array arr, int key)
{
    int low,mid,high;
    low = 0;
    high = arr.length - 1;
    while(low <= high)
    {
        mid = (low+high)/2;
        if (key == arr.A[mid])
        {
            cout << "Element found " << mid << endl;
            return mid;
        }
        else if (arr.A[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    cout << "Element Not Found" << endl;
    return -1;

}
///Recursive Binary search
int Rbinsearch(int A[], int l, int h, int k)
{
    int m;
    if (l<=h)
    {
       m = (l + h)/2;
       if(k == A[m])
       {
           cout << "Element found " << m << endl;
           return m;
       }
       else if (A[m] < k)

       {
          return  Rbinsearch(A,m+1,h,k);
       }
       else
       {
          return  Rbinsearch(A,l,m-1,k);
       }
    }
    cout << "Element Not Found" << endl;
    return -1;
}


int main()
{
    struct Array arr = {{2,4,6,8,10,12,14,16},10,8};

    cout << BinarySearch(arr, 10) << endl;
    Display(arr);

    cout << Rbinsearch(arr.A, 0, arr.length-1, 10) << endl;
    Display(arr);
    return 0;
}
