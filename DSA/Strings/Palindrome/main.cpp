#include <iostream>

using namespace std;

int main()
{
    char str1[] = "madam";
    char str2[6];
    int i, j;
    for(i=0; str1[i]!='\0'; i++)
    {

    }
    i = i-1;
    for(j=0;i>=0;i--,j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    for(i=0,j=0; str1[i]!='\0' && str2[j]!='\0'; i++,j++)
    {
        if(str1[i] != str2[j])
        {
            cout << "No it's not a palindrome" << endl;
            return 0;
        }

    }
    cout << "Yes, It's a palindrome" << endl;
    return 0;
}
