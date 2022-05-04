// dynamic initialization of object --> run time initialization according to usr input

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interest_rate;
    float return_value;

public:
    bankdeposit() {}
    // if we create an object in which we didn't pass arguments compiler cannot decide the below constructor to use so we create a blank constructor if such case occur compiler can use this
    
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int r);   // r can be a value like 4
    void display();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interest_rate = r;
    return_value = principal;

    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + r);
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interest_rate = float(r) / 100;
    return_value = principal;
    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

void bankdeposit ::display()
{
    cout << endl
         << "principal amount was " << principal << endl
         << "return value after " << years << " year"
         << " is " << return_value << endl;
}

int main()
{
    bankdeposit bd1, bd3;
    int p, y;
    float r;
    int R;

    // bd1 -> for float rate
    cout << endl
         << "Enter the value of p , y and r " << endl;
    cout << "p = ";
    cin >> p;
    cout << "r = ";
    cin >> r;
    cout << "y = ";
    cin >> y;

    bd1 = bankdeposit(p, y, r);
    bd1.display();

    // bd2 -> for int Rate
    cout << endl
         << "Enter the value of p , y and R " << endl;
    cout << "p = ";
    cin >> p;
    cout << "R = ";
    cin >> R;
    cout << "y = ";
    cin >> y;

    bankdeposit bd2 = bankdeposit(p, y, R); // i can also create these objects like this
    bd2.display();

    return 0;
}