#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getdata(void)
    {
        cout << "Real = " << real << endl;
        cout << "Imaginary = " << imaginary << endl;
    }
};

int main()
{
    complex c1;
    complex *ptr = &c1;

    // Normal way to execute
    c1.setdata(5, 10);
    c1.getdata();

    // Pointer way to execute
    (*ptr).setdata(15, 20);
    (*ptr).getdata();

    // Pointer way 2 to execute
    complex *ptr2 = new complex;
    (*ptr).setdata(25, 30);
    (*ptr).getdata();

    // we can also use arrow operator
    ptr->setdata(35, 40);
    ptr->getdata();

    // Array of Objects
    complex *ptr3 = new complex[4];
    ptr3->setdata(45, 50);
    ptr3->getdata();

    (ptr3 + 1)->setdata(55, 60);
    (ptr3 + 1)->getdata();

    return 0;
}