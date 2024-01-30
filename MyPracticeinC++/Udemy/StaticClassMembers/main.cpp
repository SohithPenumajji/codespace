#include <iostream>

using namespace std;

class static_class {

private:
static int staticVar;
int non_Static;
public:
static_class(int value) : non_Static(value){}

// member function

static void staticFunction(){
cout <<"Static variable is: " << staticVar << endl;
    }

    void display() {
    cout <<"Non static variable is: " << non_Static << endl;
    }
};

int static_class::staticVar = 10;


int main()
{

    static_class obj1(5);
    static_class obj2(8);

    obj1.staticFunction();
    obj2.staticFunction();

    obj1.display();
    obj2.display();
    return 0;
}
