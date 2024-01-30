#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

struct Rectangle {
int length;
int width;
};
///Pass by value
int fun(struct Rectangle R2) {
return R2.length * R2.width;
}
///Pass by address
int fun(struct Rectangle *R2) {
return R2->length * R2->width;
}

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 20;
    p->width =7;

}

int main()
{
    struct Rectangle R1 = {10,5};
    cout << "Area is: " << fun(R1) << endl;
    cout << "Area is: " << fun(&R1) << endl;

    struct Rectangle *ptr = fun();
    cout <<"Length: "<<ptr->length << " Width: " <<ptr->width << endl;


    return 0;
}
