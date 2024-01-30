#include <iostream>

using namespace std;

template<class T>

class arithmetic {

private:
    T a;
    T b;

public:
    arithmetic(T a, T b);
    T add();
    T sub();
};
    template <class T>
    arithmetic<T>::arithmetic(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    template <class T>
    T arithmetic<T>::add() {
    T c;
    c = a + b;
    return c;
    }
    template <class T>
    T arithmetic<T>::sub() {
    T c;
    c = a - b;
    return c;
    }





int main()
{
    arithmetic<int> ar(10,5);
    cout << "Add = " << ar.add() << endl;
    cout << "Sub = " << ar.sub() << endl;

    arithmetic<double> arr(10.5,5.5);
    cout << "Add = " << arr.add() << endl;
    cout << "Sub = " << arr.sub() << endl;

    arithmetic<char> arrr('A','B');
    cout << "Add = " << arrr.add() << endl;
    cout << "Sub = " << arrr.sub() << endl;
    return 0;
}
