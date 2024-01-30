#include <iostream>

using namespace std;
///Arrays Can Only PASSED BY ADDRESS///
void fun(int Arr[], int n)
{
    Arr[0] = 3;
    for(int i=0;i<n;i++)
    {
        cout << Arr[i] << endl;;
    }
}

int *func(int size){
int *p = new int[size];
for(int i=0; i < size;i++)
p[i] =i+1;
return p;
}


int main()
{
    int Arr[] {2,4,6,8,10};
    int n = 5;

    for(auto x: Arr)
    {
        cout << x << endl;
    }
    fun(Arr,n);

    int *ptr, sz;
    sz = 7;
    ptr = func(sz);
    for (int i=0; i < sz; i++)
    {

        cout <<ptr[i] << endl;
    }

    return 0;
}
