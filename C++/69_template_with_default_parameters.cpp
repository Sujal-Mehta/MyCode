#include <iostream>
using namespace std;

template <class T1 = float, class T2 = int>
class temporary
{
public:
    T1 a;
    T2 b;

    temporary(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    //Template executing with default parameters
    temporary<> obj(1.5, 10);
    obj.display();

    temporary<char , char> obj2('c', 'd');
    obj2.display();

    return 0;
}
