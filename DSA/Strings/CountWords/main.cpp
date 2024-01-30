#include <iostream>

using namespace std;

int main()
{
    char str[] = "How are you";
    int word = 1;
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == ' ')
        {
            word++;
        }
    }
    cout << word << endl;

    char str1[] = "how are   you";
    int word1 = 1;
    for(i=0;str1[i]!='\0'; i++)
    {
        if(str1[i]== ' ' && str1[i-1] != ' ')
        {
            word1++;
        }
    }
    cout << word1 << endl;
    return 0;
}
