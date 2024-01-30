#include <iostream>

using namespace std;

int main()
{
   int Arr[10] = {8,3,6,4,6,5,6,8,2,7};
   int n = 10;
   int i;
   for(i=0; i<n-1; i++)
   {
       int count_dup = 1;
       if(Arr[i] != -1)
       {
            for(int j=i+1;j<n-1;j++)
            {
                if(Arr[i] == Arr[j])
           {
               count_dup++;
               Arr[j] = -1;
           }
       }
       }
       cout << Arr[i] << " repeats " << count_dup << " times." << endl;
   }
    return 0;
}
