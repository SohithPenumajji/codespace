#include <iostream>

using namespace std;

int main()
{
   char str1[] = "Painter";
   char str2[] = "Painting";

   int i, j;
   for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++, j++)
   {
       if (str1[i] != str2[j])
           break;
   }

   if (str1[i] == str2[j])
   {
       cout << "Equal" << endl;
   }
   else if (str1[i] < str2[j])
   {
       cout << "str1 is smaller" << endl;
   }
   else
   {
       cout << "str1 is greater" << endl;
   }

   return 0;
}
