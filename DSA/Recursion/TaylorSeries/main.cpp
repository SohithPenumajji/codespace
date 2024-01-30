#include <iostream>

using namespace std;
/// Taylor Series ///
double e(int x, int n) {
    static double p = 1;
    static double f = 1;
    double r;
if (n == 0){
    return 1;

}
else {
    r = e(x, n-1);
    p = p*x;
    f = f*n;
    return r + p/f;
}
}

int main()
{
    double a = 3;
    double b = 10;
    cout << e(a, b);
    return 0;
}
