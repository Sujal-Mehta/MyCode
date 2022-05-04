#include <iostream>
using namespace std;

//Class
class employee
{
    //Specifier 1 = private
private:
    int a, b, c;

    //specifier 2 = public ;
public:
    int d, e;

    void setdata(int a1, int b1, int c1); // declaration
    void getdata()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

//Class function defination syntax for writting outside 
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

//Body
int main()
{
    employee sujal;

    // sujal.a = 20202 ; 
    // --> Here we cannot access this data type because it is in private specifier in class , functions can only be access this of that class . 

    sujal.d = 2020;
    sujal.e = 1991;
    sujal.setdata(1990, 2022, 2021);
    sujal.getdata();

    return 0;
}