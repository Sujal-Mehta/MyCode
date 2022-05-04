#include <iostream>
using namespace std;

class complex
{
    int a, b;

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

    //Friend function
    friend complex sumcomplex(complex o1, complex o2);
};

//friend function ->def
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

    /*
     sum.sumcomplex(....)
     c1.sumcomplex(...)
    
    we cannot use sumcomplex function like this because it is not a class member like setnumber , printnumber 
    it only give permission to operate my private variables
    */
    return 0;
}

/*
                         properties of friend functions 
1. Not in the scope of class 
2. since it is not in the scope of the class , it cannot be called from the object of that class. c1.sumcomplex() == Invalid 
3. can be invoked without the help of any object 
4. usually contains the objects as arguments
5. can be declared inside public or private section of class 
6. it cannot access the members directly by their names and object_name.member_name to access any number ;
*/
