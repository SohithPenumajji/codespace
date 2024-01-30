#include <iostream>

using namespace std;

int main()
{
    char str1[] = "Javascript";
    char str2[11];
    int i;
    for(i=0; str1[i]!='\0'; i++)
    {

    }
    i=i-1;
    int j;
    for(j=0; i>=0; i--,j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    cout << str2 << endl;
    return 0;
}
