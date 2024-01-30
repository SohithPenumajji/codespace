#include <iostream>

using namespace std;

class Deep {
    private:
        int *data;
    public:
        // constructor
        Deep(int d){
        data = new int; // dynamically allocate storage on heap
        *data = d;
        }
        void set_data_value(int d) { *data = d; }
        int get_data_value() {
        return *data;
        }
        // copy constructor
        Deep(const Deep &source) {
            data = new int;
            *data = *source.data;
            cout << "deep - copy constructor" << endl;
        }
        //Destructor
        ~Deep() {
        delete data;
        cout << "Freeing up storage" << endl;
        }
        void display_deep(Deep s){
        cout << s.get_data_value() << endl;
        }
};

int main()
{
    Deep myObj{100};
    myObj.display_deep(myObj);
    Deep myObj2{myObj};

    myObj2.set_data_value(1000);


    return 0;
}
