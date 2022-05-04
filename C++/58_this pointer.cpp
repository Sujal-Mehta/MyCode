#include <iostream>
using namespace std;

/*
    this is a keyword which is a pointer which points to the object which invokes the member function
    */

class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }

    A *setmanual(int a)
    {
        this->a = a;
        return this;
    }
    void getdata()
    {
        cout << "The value of a is " << a << endl;
    }
};

class B
{
    int b;

public:
    B *setdata(int a)
    {
        this->b = a;
        return this;
    }
    void getdata()
    {
        cout << "The value of b is " << b << endl;
    }
};

int main()
{

    A a;

    a.setdata(5);
    a.getdata();

    a.setmanual(10);
    a.getdata();

    B b;
    b.setdata(500);
    b.getdata();

    a.getdata();

    return 0;
}