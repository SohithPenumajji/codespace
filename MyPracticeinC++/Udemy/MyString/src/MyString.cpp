#include "MyString.h"
#include <cstring>
#include <cctype>

using namespace std;


// no-argument constructor called
MyString::MyString()
:str{nullptr}{
    str = new char[1];
    *str = '\0';
}

// overloaded constructor
MyString::MyString(const char *s)
:str{nullptr}{
if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    }
}

// copy constructor
MyString::MyString(const MyString &source)
:str{nullptr}
{
    str = new char[strlen(source.str)+1];
    strcpy(str, source.str);

}

// move constructor
MyString::MyString(MyString &&source)
    : str{source.str}
{
    source.str = nullptr;
}


// Destructor
MyString::~MyString()
{
    cout << "destructor called" << endl;
    delete [] str;
}


// copy Assignment
MyString &MyString::operator=(const MyString &rhs)
{
    cout << "Copy Assignment called" << endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        delete [] str;
        str = new char[std::strlen(rhs.str) + 1];
        strcpy(this->str,rhs.str);
        return *this;
    }
}

// Move Assignment
MyString &MyString::operator=(MyString &&rhs)
{
    cout << "Move Assignment called" << endl;
    if(this == &rhs)
    {
        return *this;
    }
    else
    {
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }
}

//for checking Equality
bool MyString::operator==(const MyString &rhs) const
{
    return (strcmp(str, rhs.str) == 0);
}

// make lower case
MyString MyString::operator-() const {
    char *buff = new char[strlen(str)+1];
    strcpy(buff, str);
    for(size_t i = 0; i< strlen(buff); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp {buff};
    delete [] buff;
    return temp;
}

//concatenation
MyString MyString::operator+(const MyString &rhs) const
{
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    MyString temp{buff};
    delete[] buff;
    return temp;
}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const MyString &rhs)
{
    os << rhs.str;
}

// overloaded extraction opearator
istream &operator>>(istream &in, MyString &rhs)
{
    char *buff = new char[1000];
    in >> buff;
    rhs = MyString{buff};
    delete[] buff;
    return in;
}

// not equals
bool MyString::operator!=(const MyString &rhs) const
{
    return !(strcmp(str,rhs.str)==0);
}
//lesser than
bool MyString::operator<(const MyString &rhs) const
{
    return (strcmp(str, rhs.str) < 0);
}
// greater than
bool MyString::operator>(const MyString &rhs) const
{
    return (strcmp(str, rhs.str) >0);
}

//getters
void MyString::display() const
{
    cout << "str: " << get_length() << endl;
}

int MyString::get_length() const
{
    return strlen(str);
}

const char *MyString::get_str() const
{
    return str;
}














