#include <iostream>

using namespace std;

int main ()
{
    cout<<"int to float"<<endl<<"\n";
    int a = 45 ;
    cout<<"The value of a is : "<<a<<endl;
    //-->Now typecasting a from int to float 
    cout<<"The value of a is : "<<(float)a<<endl;
    cout<<"The value of a is : "<<float(a)<<endl;

    cout<<endl<<"float to int"<<endl<<"\n";
    float b = 45.6 ;
    cout<<"The value of b is : "<<b<<endl;
    //-->Now typecasting b from float to int 
    cout<<"The value of b is : "<<(int)b<<endl;
    cout<<"The value of b is : "<<int(b)<<endl;

    // --> suppose pointing int to float then 
    // int c = b ; //-->This is not valid 

    int c = (int)b;

}