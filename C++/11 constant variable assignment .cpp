#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "the value of a was : " << a << endl;

    a = 10;
    cout << "the value of a is : " << a << endl;

    // --> In upper case we can manipulate/change the variables value so if we dont want that changes we implies this

    const int b = 5;
    cout << "the value of b is : " << b << endl;

    /* 
    b = 10 ;
    cout<<"the value of b is : "<<b<<endl; 
    
    Here we are unable to change and if we apply this our compiler didn't compile our program 
    */
}