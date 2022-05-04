#include <iostream>
#include <cmath>
using namespace std;

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

//Simple_Calculator
int cal(int a, int b, char c)
{
    int res;
    switch (c)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    }
    return res;
}

//scientific_calculator
int cal2(int a)
{
    int sqr1;
    sqr1 = sqrt(a);
    return sqr1;
}
int cal2(int a, int b, char c)
{
    int power;
    power = (int)pow(a, b);
    return power;
}

// Class 1
class simple_cal
{
protected:
    int x, y;
    char z;

public:
    int result;
    void set_num(int a, int b, char o)
    {
        x = a;
        y = b;
        z = o;
    }
    void display(void)
    {
        result = cal(x, y, z);
        cout << endl
             << "------------------------------------------------" << endl
             << "Output : "
             << "" << x << " " << z << " " << y << " = " << result << endl
             << "------------------------------------------------" << endl;
    }
};

//Class 2
class scientific_cal
{
protected:
    int x1, y1;
    char z1;

public:
    int result;
    void set_num(int a, int b, char o)
    {
        x1 = a;
        y1 = b;
        z1 = o;
    }
    void set_num(int a, char o)
    {
        x1 = a;
        z1 = o;
    }
    void display(void)
    {
        result = cal2(x1, y1, z1);
        cout << endl
             << "------------------------------------------------" << endl
             << "Output : "
             << "" << x1 << " " << z1 << " " << y1 << " = " << result << endl
             << "------------------------------------------------" << endl;
    }
    void display_sqr(int a, char c)
    {
        int result = cal2(x1);
        cout << endl
             << "------------------------------------------------" << endl
             << "Output : "
             << "Root " << x1 << " = " << result << endl
             << "------------------------------------------------" << endl;
    }
};

//Body
int main()
{
    // class Objects
    class simple_cal calu;
    class scientific_cal calu2;
    // variables
    int x, y;
    char z;
    int calOpt;

    cout << endl;
    cout << "------------------------------------------------" << endl
         << "Enter 1 for Simple Calculator (+ , - * , /) : " << endl;
    cout << "Enter 2 for Scientific Calculator (pow , root) : " << endl;
    cout << "Enter 0 to exit" << endl
         << "------------------------------------------------" << endl
         << endl;
    cin >> calOpt;

    //Loop
    while (calOpt != 0)
    {

        switch (calOpt)
        {
        case 0:
            break;
        case 1:
            cout << endl
                 << "Input ( x -> operator -> y )  --> (x + y) : ";
            cin >> x >> z >> y;
            calu.set_num(x, y, z);
            calu.display();
            break;
        case 2:
            cout << endl
                 << "Which Operation You want to carry out ? " << endl
                 << "\tEnter @ for Root " << endl
                 << "\tEnter ^ for power Function " << endl;

            cin >> z;
            if (z != '@')
            {
                cout << endl
                     << "Input Two Number with " << endl;
                cin >> x >> y;
                calu2.set_num(x, y, z);
                calu2.display();
                break;
            }
            else
            {
                cout << endl
                     << "Input value for x : ";
                cin >> x;
                calu2.set_num(x, z);
                calu2.display_sqr(x, z);
                return 0;
            }
        }

        cout << endl;
        cout << "------------------------------------------------" << endl
             << "Enter 1 for Simple Calculator (+ , - * , /) : " << endl;
        cout << "Enter 2 for Scientific Calculator (pow , root) : " << endl;
        cout << "Enter 0 to exit" << endl
             << "------------------------------------------------" << endl
             << endl;
        cin >> calOpt;
    }
    return 0;
}