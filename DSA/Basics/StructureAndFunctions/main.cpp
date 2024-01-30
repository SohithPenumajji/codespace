#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle {
int length;
int width;
};

void initialize(struct Rectangle *r, int l, int w) {
r->length = l;
r->width = w;
}

int area(struct Rectangle r)
{
    return r.length * r.width;

}

void changelength(struct Rectangle *r, int l) {
    r->length =l;
}



int main()
{
   struct Rectangle r;
   initialize(&r, 10, 5);
   area(r);
   changelength(&r, 20);
   cout << area(r)  << endl;

    return 0;
}
