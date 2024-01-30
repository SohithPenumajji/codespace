#include <iostream>

using namespace std;

int fun(int n) {
if (n > 0) {
    return fun(n-1) + n;
}
return 0;
}

///Here Static and global acts same///
int fun1(int n) {
    static int x {0};
    if (n > 0) {
    x++;
    return fun1(n-1) + x;
}
return 0;
}
int main()
{
    int x = 5;
    cout << fun(x) << endl;
    cout << fun1(x) << endl;

    return 0;
}
