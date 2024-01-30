#include <iostream>

using namespace std;
class moveConst{
private:
    int *data;
    public:
        //constructor
        moveConst(int d)
        {
        data = new int; ///dynamically allocate storage on heap
        *data = d;
        }
        //move constructor
        moveConst(moveConst &&source) noexcept
        {
            data = source.data; ///transfer ownership of the pointer
            source.data = nullptr; ///Nullify the pointer in the source object
        }
        // destructor
        ~moveConst()
        {
        delete data;
        cout << "Freeing up storage" << endl;
        }

        void display_move() const
        {

            cout << "Data: " << *data << endl;
        }




        };


int main()
{
    moveConst obj1 {100};
    obj1.display_move();

    moveConst obj2(std::move(obj1));
    obj2.display_move();
    return 0;
}
