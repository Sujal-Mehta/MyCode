#include <iostream>

int c = 100 ;

using namespace std;

int main ()
{
    int a , b , c ;

    cout<<"Enter the value for a"<<endl;
    cin>>a;
    cout<<"Enter the value for b"<<endl;
    cin>>b;

    c = a + b ;
    
    cout<<"The value of c is "<<c<<endl;
    cout<<"The global variable c value is "<<::c<<endl; //--> '::' this is scope resolution operator which talk about global variable

}