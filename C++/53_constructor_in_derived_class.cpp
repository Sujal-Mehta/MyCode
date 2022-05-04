#include <iostream>
using namespace std;

/*
case 1 :
    class b : public a{
        order of execution of constructor -> first a then b constructor
    };
    base class constructor run first

case 2:
    class a : public b,public c{

    };
    here b is written first so b base class will be first then c then a 

case 3 :
    class a : public b , virtual public c {

    };
    always virtual classes (c) constructor runs first then base class b and the a 

    virtual is given more preference
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void printdata_b1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdata_b2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printdata_d(void)
    {
        
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    // for case 1 ;
    derived sujal(1, 2, 3, 4);
    //call order remain same
        cout << endl ;
        sujal.printdata_d();
        cout << endl ;
        sujal.printdata_b1();
        cout << endl ;
        sujal.printdata_b2();
        cout << endl ;
    return 0;
}