#include <iostream>

using namespace std;

struct Matrix
{
    int Arr[10];
    int n;
};

void set_val(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
    {
        m->Arr[i-1] = x;
    }

}

int get_val(struct Matrix m, int i, int j)
{
    if(i==j)
    {
        return m.Arr[i-1];
    }
    else
    {
        return 0;
    }
}

void Display(struct Matrix m)
{
    int i,j;
    for(i=0; i<m.n; i++)
    {
        for(j=0; j < m.n; j++)
        {
            if(i==j)
            {
                cout << m.Arr[i] << " ";
            }
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

}

int main()
{
    struct Matrix m;
    m.n = 4;

    set_val(&m, 1, 1, 5);
    set_val(&m, 2, 2, 8);
    set_val(&m, 3, 3, 9);
    set_val(&m, 4, 4, 12);



    cout << get_val(m, 2, 2) << endl;

    Display(m);


    return 0;
}
