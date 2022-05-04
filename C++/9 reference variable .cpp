#include <iostream>

using namespace std;

int main()
{
    int x = 100;
    int &y = x; // --> y is an reference variable of x

    cout << x << endl;
    cout << y << endl;

    return 0 ;
}