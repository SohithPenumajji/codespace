#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void fun1(int n){
if (n > 0) {
    cout << n << " " ;
    fun1(n-1);
}
}

void fun2(int n)
{
    if (n > 0) {
        fun2(n-1);
        cout << n << " ";
    }
}

int main()
{
    int x = 3;
    fun1(x);
    cout << endl;

    int y = 3;
    fun2(y);

    return 0;
}
