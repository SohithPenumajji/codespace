#include <iostream>

using namespace std;

int main()
{
   char str[] = "finding";
   int h = 0,x = 0;
   for(int i=0; str[i]!='\0'; i++)
   {
       x=1;
        x = x << str[i]-'a';  //left shift
        if((x&h)>0)  //masking -- setting the position to ON
        {
            cout << str[i] << " is a duplicate." << endl;
        }
        else{
            h = x|h;   // merging -- combining two sets of bits in a single set
        }
   }
    return 0;
}
