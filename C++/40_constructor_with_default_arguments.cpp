#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int, int);
    void display(void);
};

//default arguments 
simple ::simple(int val1 = 1, int val2 = 2)
{
    data1 = val1;
    data2 = val2;
}
void simple ::display(void)
{
    cout << "data 1 = " << data1 << endl
         << "data 2 = " << data2 << endl;
}

int main()
{
    simple o1;          // without passing arguments
    o1.display(); 

    simple o2 (5);      // with passing arguments 
    o2.display();

    return 0;
}