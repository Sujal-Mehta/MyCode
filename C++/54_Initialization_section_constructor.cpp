#include <iostream>
using namespace std;

/*
    Syntax for initialization list in constructor : 

    constructor (argument-list) : initialization-section
    {
        assignment + other code ;
    }

    i.e.

    class test {
        int a ; 
        int b ; 
    public :
        test (int i , int j) : a (i) , b(j){
            constructor body
        }
    }
*/

class test
{
    int a;
    int b;

public:
    // test(int i, int j) : a(i), b(j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "value of a is " << a << endl;
    //     cout << "value of b is " << b << endl;
    // }

    // test(int i, int j) : a(i), b(3 * j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "value of a is " << a << endl;
    //     cout << "value of b is " << b << endl;
    // }

    // test(int i, int j) : a(i), b(a + j)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "value of a is " << a << endl;
    //     cout << "value of b is " << b << endl;
    // }

    //test4 doesn't work a is declared at first
    // test(int i, int j) : b(j), a(i + b)
    // {
    //     cout << "Constructor executed" << endl;
    //     cout << "value of a is " << a << endl;
    //     cout << "value of b is " << b << endl;
    // }

    test(int i, int j) : a(i)
    {
        b = j;
            cout << "value of a is " << a << endl;
            cout << "value of b is " << b << endl;
    }
};

int main()
{
    test(1, 2);
    return 0;
}