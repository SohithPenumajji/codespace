#ifndef DIAGNOL_H
#define DIAGNOL_H


class Diagnol
{
private:
    int *A;
    int n;
public:
    Diagnol(int n);
    void create();
   // int get(int i, int j);
   // void set_element(int i, int j, int x);
    void display();
    ~Diagnol();

};

#endif // DIAGNOL_H
