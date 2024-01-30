#include <iostream>

using namespace std;

int main()
{
    char str[] = "javascript";
    char temp;
    int i, j;
    for(j=0;str[j]!='\0';j++)
    {

    }
    j = j-1;
    for(i=0;i<j;i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << str << endl;
    return 0;
}
