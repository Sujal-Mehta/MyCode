// --> There are two mainpulators endl and setw --> setw is included in iomanip header file

#include<iostream>
#include<iomanip>

using namespace std ;

int main ()
{
    int a = 11 , b = 111 , c = 1111 ;

    cout<<endl;

    // -->without setw
    cout<<"the value of a is : "<<a<<endl;
    cout<<"the value of b is : "<<b<<endl;
    cout<<"the value of c is : "<<c<<endl;

    cout<<endl;

    //-->with setw
    cout<<"the value of a with setw is : "<<setw(5)<<a<<endl;
    cout<<"the value of b with setw is : "<<setw(5)<<b<<endl;
    cout<<"the value of c with setw is : "<<setw(5)<<c<<endl;
}