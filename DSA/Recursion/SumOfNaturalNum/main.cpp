#include <iostream>

using namespace std;

int sum(int n) {
if (n==0){
    return 0;
}
else {
    return sum(n-1)+n;
}
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}

/// Other Ways:
/// return n*(n-1)/2

/*** using loop:


int i;
int s = 0;
for(i=1;i<n;i++){
s = s+i;
return s;
}

***/




