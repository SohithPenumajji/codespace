#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int width;
};


int main()
{
   struct Rectangle area = {10,5};
   cout << area.length << endl << area.width << endl;

   struct Rectangle *ptr = &area;
   cout << (*ptr).length << endl << (*ptr).width << endl;
   cout << ptr->length << endl << ptr->width << endl;

   /// For Accessing Memory on heap using C
   struct Rectangle *p;
   p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
   p->length = 15;
   p->width = 7;
   cout << p->length << endl << p->width << endl;
   free(p);

   ///For Accessing Memory on heap using C++

   struct Rectangle *point;
   point = new Rectangle;
   p->length = 15;
   p->width = 7;
   cout << p->length << endl << p->width << endl;
   delete point;




    return 0;
}
