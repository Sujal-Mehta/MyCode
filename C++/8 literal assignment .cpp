#include <iostream>

using namespace std;

int main()
{
    float a = 34.5f;
    long double b = 34.5l; //-->By default if we pass value to function it is double in these case so if we dont mention in double its ok ..

    cout << "The size of 34.5 is " << sizeof(34.5) << endl;
    cout << "The size of 34.5f is " << sizeof(34.5f) << endl;
    cout << "The size of 34.5F is " << sizeof(34.5F) << endl;
    cout << "The size of 34.5l is " << sizeof(34.5l) << endl;
    cout << "The size of 34.5L is " << sizeof(34.5L) << endl;

}