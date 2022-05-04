/*
    Create 2 classes :
        1. simple_calculator 
            takes input of 2 numbers using a utility function and performs + , - , * , /
            
            display the result using another function

        2. scientific_calculator 
            takes input of 2 number susing a utility function and performs any four scientific ooperation of your choice

            display the result using another function

    Create another class hybrid_calculator and inherit it using these 2 claasses : 
*/

#include <iostream>
#include <cmath>
using namespace std;

class simple_calculator
{
    int a, b;

public:
    void getData_simple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performs_operation_simple()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};

class scientific_calculator
{
    int a, b;

public:
    void getData_scientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }

    void performs_operation_scientific()
    {
        cout << "The value of cos(a) is : " << cos(a) << endl;
        cout << "The value of sin(a) is : " << sin(a) << endl;
        cout << "The value of exp(a) is : " << exp(a) << endl;
        cout << "The value of tan(a) is : " << tan(a) << endl;
    }
};

class hybrid_calculator : public simple_calculator, public scientific_calculator
{
};
int main()
{
    // simple_calculator calc;
    // scientific_calculator calc;
    // calc.getData_simple();
    // calc.performs_operation_scientific();

    hybrid_calculator calc;
    calc.getData_simple();
    calc.performs_operation_simple();

    calc.getData_scientific();
    calc.performs_operation_scientific();
    return 0;
}