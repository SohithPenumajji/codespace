#include <iostream>

using namespace std;

/// fun for pass by value

int add(int a, int  b) {
int c;
c = a + b;
return c;
}
/// fun for pass by address
void swap(int *x, int *y) {
int temp = *x;
*x = *y;
*y = temp;
}

///Fun for pass by reference
void swapping(int &x, int &y)
{

    int temp = x;
    x = y;
    y = temp;
}


int main()
{
    /// Pass by Value or Call by Value
   int x,y,z;
   x = 10;
   y = 5;
   z = add(x,y);
   cout <<"The Sum is: "<< z << endl;

   /// Call by Address
   int a,b;
   a = 10;
   b = 5;
   swap(&a, &b);
   cout << "After Swapping: " << a << " " << b << endl;

   ///Pass by Refernce
   int i,j;
   i = 10;
   j = 20;
   swapping(i, j);
   cout <<"After Swapping: " << i << " " << j << endl;




    return 0;
}
