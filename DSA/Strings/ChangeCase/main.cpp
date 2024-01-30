#include <iostream>

using namespace std;

int main()
{
    char str[] = "WELCOME";
    int i;
    for(i=0; str[i]!='\0';i++)
    {
        str[i] += 32;
    }
    cout << str << endl;

    char str1[] = "welcome";
    int j;
    for(j=0; str1[j]!='\0';j++)
    {
        str1[j] -= 32;
    }
    cout << str1 << endl;
    return 0;
}
