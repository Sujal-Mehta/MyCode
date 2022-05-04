#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int n;

    cout << endl
         << "Input a Number : ";
    cin >> n;

    cout << endl
         << "The Number at Your position is : " << fib(n);
    return 0;
}

int fib(int n)
{
    if (n < 2)
    {
        return 1 ;
    }
    return fib(n-2) + fib (n-1) ;
}