#include <iostream>

using namespace std;

void swap_ptr(int *ptr_a, int *ptr_b) {

*ptr_a = *ptr_a + *ptr_b; // 5  + 10 = 15
*ptr_b = *ptr_a - *ptr_b; // 15 - 10 = 5
*ptr_a = *ptr_a - *ptr_b;  // 15 - 5 =  10

}

int main()
{
    int a, b;
    cout << "Enter two values to swap: ";
    cin >> a >> b;
    cout << "The values you entered are " << a << " and " << b << endl;

    swap_ptr(&a, &b);
    cout <<"After swapping " << a << " and " << b << endl;

    return 0;



}
