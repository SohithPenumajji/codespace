#include <iostream>

using namespace std;

template <class T>
class Array
{
private:
    T *A;
    int a_size;
    int length;

public:
    Array()
    {
        a_size = 10;
        A = new T[a_size];
        length = 0;
    }

    Array(int sz)
    {
        a_size = sz;
        length = 0;
        A = new T[a_size];
    }

    ~Array()
    {
        delete[] A;
    }

    void Display();
    void Insert(int index, T x);
    T Delete(int index);
};

template <class T>
void Array<T>::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

template <class T>
void Array<T>::Insert(int index, T x)
{
    if (index >= 0 && index <= length)
    {
        for (int i = length - 1; i >= index; i--)
        {
            A[i + 1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

template <class T>
T Array<T>::Delete(int index)
{
    if (index >= 0 && index < length)
    {
        T x = A[index];
        int i;
        for (i = index; i < length - 1; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
        return x;
    }
    return 0;
}

int main()
{
    Array<float> arr(10);

    arr.Insert(0, 5.3);
    arr.Insert(1, 6.8);
    arr.Insert(2, 9.1);

    arr.Display();

    cout << arr.Delete(0) << endl;
    arr.Display();

    return 0;
}
