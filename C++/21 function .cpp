#include <iostream>

using namespace std;

//A full function declaration in same part
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

//Using function prototype declaration
int difference(int a, int b);

/*
            Or we can even decalre like this 
int difference (int , int ) ;
*/

void msg ();


int main()
{
    //Here this a is totally different from the a variable of function
    int a, b;

    cout << endl
         << "Enter the value for a and b" << endl;
    cin >> a >> b;

    cout << endl
         << "The sum of a and b is : " << sum(a, b) << endl; //Function call

    //another function call
    cout << endl
         << "The differnce between a and b is : " << difference(a, b) << endl;

    msg();
    return 0;
}



//Function defination for pre called function prototype differnce
int difference(int a, int b)
{
    return a - b;
}

void msg()
{
    cout <<endl<<"Thank you for operating me ."<<endl ;
}