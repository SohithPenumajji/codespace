#include <iostream>

using namespace std;

int main()
{
    char str[] =
    "How are you";
    int i;
    int vcount = 0;
    int ccount = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i]=='E' || str[i] == 'e' ||
           str[i] == 'I' || str[i] == 'i' || str[i]=='O' || str[i] =='o' ||
           str[i] == 'U' || str[i] == 'u')
        {
            vcount++;
        }
        else if((str[i] >= 65 && str[i] <=90)||(str[i] >= 97 && str[i] <=122))
        {
            ccount++;
        }
    }
    cout << vcount << endl;
    cout << ccount << endl;
    return 0;
}
