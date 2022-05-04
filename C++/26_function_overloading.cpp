//Function Overloading -> Same name of function with diffferent works/functions ;

#include <iostream>
using namespace std;

//Functions Prototype
int sum(int a, int b);
int sum(int a, int b, int c);

//Body
int main()
{
    cout << endl
         << "The sum of (3 , 4) is " << sum(3, 4) << endl;

    cout << endl
         << "The sum of (3 , 4 , 5) is " << sum(3, 4, 5) << endl;

    /* 
        Here we see that compiler catches the perfect function according to our arguments
    */
    return 0;
}

//Function Definations
int sum(int a, int b)
{
    cout << "\n(Using 2 arguments) ";
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "\n(Using 3 arguments) ";
    return a + b + c;
}


// ----> Here we have created two sum with different number of arguments and compiler smartly chooses the right one in this case su is an overloaded function . <----