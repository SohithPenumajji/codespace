// swapping of variables without using another variable
// Here we also using functions

#include <iostream>

using namespace std;

// prototype
void swapping(int *a, int *b);

int main()
{
    int x {100};
    int y {200};
    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    swapping(&x, &y);
    cout << "\nx is: " << x << endl;
    cout << "y is: " << y << endl;
    return 0;
}
// function starts over here
void swapping(int *a, int *b)
{
    *a = *a + *b; // 100 + 200 = 300 // 300 will store in a
    *b = *a - *b; // 300 - 200 = 100 // 100 will store in b
    *a = *a - *b; // 300 - 100 = 200 // 200 will store in a
}



