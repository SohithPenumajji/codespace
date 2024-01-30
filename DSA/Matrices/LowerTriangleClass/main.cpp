#include <iostream>

using namespace std;

class lower_triangle
{
private:
    int *Arr;
    int n;
public:
    // default constructor
    lower_triangle()
    {
        n=2;
        Arr = new int[2*(2+1)/2];
    }
    lower_triangle(int n)
    {
        this->n = n;
        Arr = new int[n*(n+1)/2];
    }
    ~lower_triangle()
    {
        delete []Arr;
    }
    void set_val(int i, int j, int x);
    int get_val(int i, int j);
    void Dispaly();
    int Get_dimension()
    {
        return n;
    }



};

void lower_triangle::set_val(int i, int j, int x)
{
    if(i>=j)
    {
        Arr[i*(i-1)/2 + j-1] = x;
    }

}
int lower_triangle::get_val(int i, int j)
{
    if (i >= j)
    {
        return Arr[i*(i-1)/2 + j-1];
    }
    else
    {
        return 0;
    }
}
void lower_triangle::Dispaly()
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if (i>=j)
            {
                cout << Arr[i*(i-1)/2 + j-1] << " ";

            }
            else
            {
                cout << "0" << " ";
            }

        }

        cout << endl;
    }
}





int main()
{
    int d;
    cout << "Enter Dimensions ";
    cin >> d;

    lower_triangle lm(d);
    int x;
    cout <<"Enter All Elements" << endl;
    for(int i =1; i<=d; i++)
    {

        for(int j=1; j<=d; j++)
        {

            cin >> x;
            lm.set_val(i, j, x);

        }

    }

    cout << endl << endl;
    lm.Dispaly();

    return 0;
}

