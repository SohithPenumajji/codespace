#include <iostream>

using namespace std;


void swap_fun(char str1[], char str2[], int i, int j)
{

    char temp;
    temp = str1[i];
    str1[i] = str2[j];
    str2[j] = temp;
}

void perm(char str[], int l, int h)
{
    int i;
    if(l == h)
        cout << str << endl;
    else
    {
        for(i=l; i<=h; i++)
        {
            swap_fun(str, str, l , i);
            perm(str, l+1, h);
            swap_fun(str, str, l, i);

        }
    }

}

int main()
{
    char str[] = "abc";
    perm(str, 0, 2);

    return 0;
}
