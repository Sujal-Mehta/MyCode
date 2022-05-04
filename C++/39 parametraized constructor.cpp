#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(void);     // constructor
    complex(int, int); //This is called parametrized constructor

    void printnumber(void)
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }
};

//Normal constructor which invoke itself with object creation .
complex ::complex(void)
{
    a = 0;
    b = 0;
}
//This is called parametrized constructor
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    //Noraml Constructor call
    complex ob;
    ob.printnumber();

    //Parametarized Constructor

    //IMPLICIT call
    complex oa(4, 5);
    oa.printnumber();

    // Explicit Call
    complex oc = complex(1, 5);
    oc.printnumber();

    return 0;
}