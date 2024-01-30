#include <iostream>

using namespace std;

int main()
{
   char str[] = "finding";
   int Hash[26];
   for(int i=0; i<26; i++)
   {
       Hash[i] = 0;
   }
   for(int i=0; str[i]!='\0'; i++)
   {
       Hash[str[i]-'a']++;
           //102 - 97 = 5

   }
   for(int i=0; i<26; i++)
   {
       if(Hash[i] > 1)
       {
           cout << static_cast<char>(i + 'a') << " repeats " << Hash[i] << " times." << endl;
       }
   }
    return 0;
}
