#include <iostream>
using namespace std;

//Forward declaration of complex class so calculator get compiled without error at first
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex o1, complex o2);
    int sumCompcomplex(complex o1, complex o2);
};

class complex
{
    int a, b;

    //Giving permission to calculator class function -->Individual 
    friend int calculator ::sumRealcomplex(complex o1, complex o2);
    friend int calculator ::sumCompcomplex(complex o1, complex o2);

    //If we have lots of function so it will be difficult to mention function individually so we make whole class a friend like this 
    friend class calculator ;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << " Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    calculator calc;

    o1.setnumber(1, 4);
    o2.setnumber(5, 7);

    int result = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;

    int result2 = calc.sumCompcomplex(o1, o2);
    cout << "The sum of comp part of o1 and o2 is " << result2 << endl;

    return 0;
}