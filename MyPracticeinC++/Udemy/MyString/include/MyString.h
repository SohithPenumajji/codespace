#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString {

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

private:
    char *str;

public:
    // No-arg constructor
    MyString();

    // Overloaded constructor
    MyString(const char *s);

    // Copy constructor
    MyString(const MyString &source);

    // Move constructor
    MyString(MyString &&source);

    // Destructor
    ~MyString();

    // Copy Assignment
    MyString &operator=(const MyString &rhs);

    // Move Assignment
    MyString &operator=(MyString &&rhs);

    MyString operator-() const;             // make lowercase
    MyString operator+(const MyString &rhs) const;  // concatenate
    bool operator==(const MyString &rhs) const;     // equality
    bool operator!=(const MyString &rhs) const;     // not equal
    bool operator<(const MyString &rhs) const;      // lesser than
    bool operator>(const MyString &rhs) const;      // greater than

    // Getters
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
