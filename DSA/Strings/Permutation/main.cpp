#include <iostream>

using namespace std;

void perm(char S[], int k)
{
    static int Arr[10] = {0};
    static int Res[10] = {0};

    int i;
    if(S[k] == '\0')
    {
        Res[k] = '\0';
        cout << Res << endl;
    }
    else{
        for(i=0;S[i]!='\0';i++)
        {
            Res[k]=S[i];
            Arr[i] = 1;
            perm(S, k+1);
            Arr[i] = 0;
        }
    }

}

int main()
{
    char S[] = "ABC";
    perm(S, 0);

    return 0;
}
