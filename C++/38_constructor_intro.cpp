#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    //Creating a constructor
    //constructor is a special member function with the same name as of the class . it is automatically invoked
    //it is used to initialize the objects of its class
    complex(void); // constructor declaration

    void printdata(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // --> This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
}
int main()
{
    complex c , d ;
    c.printdata();
    d.printdata();

    return 0;
}

/* 
                Characteristis of constructors 
1. it should be declared in the public section of the class 
2. they are automatically invoked whenever the object is created 
3. the cannot return values and do not have return types 
4. it can have default arguments
5. we cannot refer to their address
*/