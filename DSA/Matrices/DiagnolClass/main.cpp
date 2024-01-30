#include <iostream>

using namespace std;

class diagnol
{
private:
    int *Arr;
    int n;
public:
    // default constructor
    diagnol()
    {
        n=2;
        Arr = new int[2];
    }
    diagnol(int n)
    {
        this->n = n;
        Arr = new int[n];
    }
    ~diagnol()
    {
        delete []Arr;
    }
    void set_val(int i, int j, int x);
    int get_val(int i, int j);
    void Dispaly();



};

void diagnol::set_val(int i, int j, int x)
{
    if(i==j)
    {
        Arr[i-1] = x;
    }

}
int diagnol::get_val(int i, int j)
{
    if (i == j)
    {
        return Arr[i-1];
    }
    else
    {
        return 0;
    }
}
void diagnol::Dispaly()
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (i==j)
            {
                cout << Arr[i] << " ";

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
    diagnol d(4);

    d.set_val(1,1,5);
    d.set_val(2,2,8);
    d.set_val(3,3,6);
    d.set_val(4,4,7);

    d.Dispaly();

    cout << d.get_val(4,4) << endl;

    return 0;
}
