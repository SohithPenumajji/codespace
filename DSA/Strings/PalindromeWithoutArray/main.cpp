#include <iostream>

using namespace std;

int main()
{
    char str[] = "madam";
    int i, j;
    for(j=0;str[j]!='\0';j++)
    {

    }
    j = j-1;
    for(i=0;j>=0;j--,i++)
    {
        if(str[i] != str[j])
        {
            cout << "NO its not a palindrome" << endl;
            return 0;
        }
    }
    cout << "Yes, its a Palindrome" << endl;
    return 0;
}
