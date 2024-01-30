#include <iostream>

using namespace std;

struct Matrix
{
    int *Arr;
    int n;
};

void set_val(struct Matrix *m, int i, int j, int x)
{
    if(i >= j)
    {
        m->Arr[i*(i-1)/2 + j-1] = x;
    }
}

int get_val(struct Matrix m, int i, int j)
{
    if(i >= j)
    {
     return m.Arr[i*(i-1)/2 + j-1];
    }
    else
        return 0;

}

void Display(struct Matrix m)
{
    int i,j;
    for(i=0; i<=m.n; i++)
    {
        for(j=0; j <=m.n; j++)
        {
            if(i==j)
            {
                cout << m.Arr[i*i-1/2 +  j-1] << " ";
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
    cout << "Enter Dimension: ";
    cin >> m.n;
    m.Arr = new int[m.n*(m.n-1)/2];

    cout << "Enter All Elements" << endl;
    for(int i=1; i <=m.n; i++)
    {
        for(int j=1; j<=m.n; j++)
        {
            int x;
            cin >> x;
            set_val(&m, i, j, x);
        }
    }
    cout << endl << endl;

    Display(m);

    delete [] m.Arr;


    return 0;
}
