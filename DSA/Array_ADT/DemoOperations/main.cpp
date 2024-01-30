#include <iostream>

using namespace std;

struct Array
{
    int *A;
    int a_size;
    int length;
};

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
struct Array arr;
int n,i;
cout <<"Enter the size of an array: ";
cin >> arr.a_size;
arr.A = new int[arr.a_size];
arr.length = 0;

cout << "Enter Number in Numbers: ";
cin >> n;

cout <<"Enter All Elements" << endl;
for(i=0;i<n;i++)
{
    cin >> arr.A[i];

}
arr.length = n;


Display(arr);

delete[] arr.A;


    return 0;
}
