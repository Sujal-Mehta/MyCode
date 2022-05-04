#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    };
    number(int num)
    {
        a = num;
    }

    //when no copy constructor is found compiler supplies its own copy constructor . 
    // copy constructor functions
    number(number &obj)
    {
        cout << "!! Copy constructor called !!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x(25), y, z(45) ,w;

    x.display();
    y.display();
    z.display();

    // copy constructor -> should exactly resemble objects
    number cp(z);
    cp.display();

    number cp2(x) ;
    cp2.display();

    w = y ;         //copy constructor no invoked . already existed objects ko karan ley
    w.display();

    number s = x ; //copy constructor invoked because its on same line 
    s.display();
    return 0;
}