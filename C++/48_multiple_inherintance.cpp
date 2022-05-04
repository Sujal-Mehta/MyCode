#include <iostream>
using namespace std;

// syntax for inheriting in multiple inheritance
/*
    class derived : visibility - mode base1, visibility - mod base2
    {
    
        class body of class :"derivedc"
    }
*/

class base1
{
protected:
    int base1int;

public:
    void setbase1(int a) { base1int = a; }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2(int a) { base2int = a; }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the sum of these values is " << base1int + base2int << endl;
    }
};

/*
    the inherted derived class will look something like this : 
    Data Members :
        base1int ---> protected 
        base2int ---> protected 
    Member Functions :
        setbase1int() ---> public 
        setbase2int() ---> public 
        void show() ---> public 
*/
int main()
{
    derived sujal;
    sujal.setbase1(30);
    sujal.setbase2(20);
    sujal.show();
    return 0;
}