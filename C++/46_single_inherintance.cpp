#include <iostream>
using namespace std;

class base
{
    int data; // private by default and is not inheritable

public:
    int data2;
    void setdata();
    int getdata();
    int getdata2();
};

void base ::setdata(void)
{
    data = 5;
    data2 = 9;
}
int base ::getdata()
{
    return data;
}
int base ::getdata2()
{
    return data2;
}

class derived : public base //class is being derived publically
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = data2 * getdata();
}
void derived ::display()
{
    cout << "value of data is " << getdata() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{
    derived der;

    der.setdata();
    der.process();
    der.display();
    return 0;
}