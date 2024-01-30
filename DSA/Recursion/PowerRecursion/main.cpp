#include <iostream>

using namespace std;

int pow(int m, int n){
    if (m == 0) {
    return 1;
    }
else if(n % 2 == 0) {
    return pow(m*m, n/2);

}
else {
    return m*pow(m*m, (n-1)/2);

}


}


int main()
{
    int a,b;
    cout << "Enter two space separated Numbers to check pow values: ";
    cin >> a >> b;
    cout << pow(a, b) << endl;
    return 0;
}

/// pow(m, n-1)*m only works if n is even

/***
int m; // base
int n; // exponent
int result = 1;

for (int i = 0; i < n; i++) {
    result *= m;
}
***/
