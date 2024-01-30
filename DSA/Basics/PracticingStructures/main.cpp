#include <iostream>

using namespace std;

struct Rectangle {

    int length;
    int width;
};

int main()
{
    struct Rectangle len;
    len.length = 10;
    len.width = 5;

    cout << "Size of: " << sizeof(len) << endl;
    int area = len.length * len.width;
    int perimeter = 2 * (len.length + len.width);
    cout << "The area is: " << area << endl;
    cout <<"The perimeter is: " << perimeter<< endl;

    return 0;


}
