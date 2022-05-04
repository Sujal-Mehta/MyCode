#include <iostream>

using namespace std;

//function prototype 
int factorial(int num);

//Body
int main()
{
    int num, result;

    cout << endl
         << "Input a Number : ";
    cin >> num;

    result = factorial(num);
    cout << endl
         << "The factorial of " << num << " is " << result << endl;
    return 0;
}

//Function defination 
int factorial(int num)
{
    if ((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

//suppose num = 4 then , 

/*
factorial (4) = 4 * factorial (3) -> (n-1) --> 4-1 
factorial (4) = 4 * 3 * factorial (2)
factorial (4) = 4 * 3 * 2 * factorial (1) ;
factorial (4) = 4 * 3 * 2 * 1
*/ 
//In this way the same function is called repeatedly until it don't satisfy condition

