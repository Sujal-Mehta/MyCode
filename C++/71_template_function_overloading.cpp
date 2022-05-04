#include <iostream>
using namespace std;

template <class T>
class A
{
public:
    T data1;
    A(T a)
    {
        data1 = a;
    }
    void display();
};

template <class T>
void A<T>::display()
{
    cout << data1 << endl;
}

// function overloading prioritizing the exact value
void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templated func() " << a << endl;
}

int main()
{
    A<float> obj1(10.17);
    obj1.display();

    func(4); // Exact match takes the highest priority

    return 0;
}