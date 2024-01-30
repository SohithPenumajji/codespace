#include <iostream>

using namespace std;

int main()
{
    char str1[] = "decimal";
    char str2[] = "medical";
    int i;
    int Hash[26];
    for(int i=0; i<26; i++)
    {
        Hash[i]=0;
    }
    for(i=0;str1[i]!='\0'; i++)
    {
        Hash[str1[i]-'a']++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {
        Hash[str2[i]-'a']--;
        if(Hash[str2[i]-'a']<0)
        {
            cout << "Not a anagram" << endl;
            break;
        }

    }
    if(str2[i] == '\0')
        {
            cout << "It's a anagram" << endl;
        }
    return 0;
}
