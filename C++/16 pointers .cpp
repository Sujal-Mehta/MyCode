#include <iostream>
using namespace std;

int main()
{
    // Normal variable
    int num = 5;

    //Variable which can store other variable address
    int *number = &num;

    //Now number is pointing to address of num
    //& = address of operator
    //* = Dereference operator

    cout << "the address of num is : " << &num << endl
         << "\tOR ->Second way to find" << endl
         << "the address of num is : " << number << endl;

    cout << endl
         << "The value of num is :" << num << endl
         << "\tOR ->Second way to find is " << endl
         << "The value of num/number is : " << *number << endl;

    //storing an address of pointer variable then
    int **numbers = &number;

    cout << endl
         << "The address of number is : " << &number << endl
         << "\tOR" << endl
         << "the address of number is : " << numbers << endl;

    cout << endl
         << "The value of numbers is :" << **numbers << endl;
    return 0;
}