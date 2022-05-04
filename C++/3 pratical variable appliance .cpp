#include<iostream>

using namespace std ;

//Note local variable has more preferecne
int  glo = 5 ; // <-- Global variable declared

int main ()
{
    int a = 4 , b = 5 ;
    float pi = 3.1554 ;
    char spell = '@' ;
    bool choose = true ;
    bool choose_1 = false ;
    int glo = 6 ;

    cout<<"The value of a is : "<<a<<"\nThe value of b is : "<<b;
    cout<<"\nThe value of pi is : " <<pi;
    cout<<"\nThe character stored in spell variable is : " <<spell;
    cout<<"\nif bool value is true it will print 1 like this choose = "<<choose;
    cout<<"\nif bool value is false it will print 0 like this choose_1 = "<<choose_1;
    cout<<"\nThe prior global variable value of glo is : "<<glo;

    return 0 ;
}
