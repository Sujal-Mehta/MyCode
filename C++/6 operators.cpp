#include <iostream>

using namespace std;
int main()
{
    int a = 10, b = 5;

    cout <<endl;

    cout << "Airthematic Operators"<<endl;
    // Airthematic operator operations i.e '+' , '-' , '%' , '++'..
    cout << "The value of a + b is : " << a + b << "\t'+' is an operator in this case" << endl;
    cout << "The value of a - b is : " << a - b << "\t'-' is an operator in this case" << endl;
    cout << "The value of a * b is : " << a * b << "\t'*' is an operator in this case" << endl;
    cout << "The value of a / b is : " << a / b << "\t'/' is an operator in this case" << endl;
    cout << "The value of a % b is : " << a % b << "\t'%' is an operator in this case" << endl;
    cout << "The value of a++  is : " << a++ << "\t'++' is an operator in this case" << endl;
    cout << "The value of b-- is : " << b-- << "\t\t'--' is an operator in this case" << endl;
    cout << "The value of ++a  is : " << ++a << "\t'++' is an operator in this case" << endl;
    cout << "The value of --b is : " << --b << "\t\t'--' is an operator in this case" << endl;

    cout <<endl;

    // 2. Assignment operator
    //Assignment operators are used to assign value i.e '='

    cout << "Comparison Operator"<<endl;
    // 3.   Comparison operators
    cout << "The value of a == b is : " << (a == b) <<endl;
    cout << "The value of a != b is : " << (a != b) <<endl;
    cout << "The value of a > b is : " << (a > b) <<endl;
    cout << "The value of a < b is : " << (a < b) <<endl;
    cout << "The value of a >= b is : " << (a >= b) <<endl;
    cout << "The value of a <= b is : " << (a <= b) <<endl;

    cout <<endl;

    cout << "Logical Operator"<<endl;
    // 4. Logical Operator 
    cout << "The value of (a == b) && (a<=b) is (and): " <<((a == b) && (a<=b)) <<"\t'&&' is an logical operator"<<endl;
    cout << "The value of (a != b) && (a>=b) is (and): " <<((a != b) && (a>=b)) <<"\t'&&' is an logical operator"<<endl;
    cout << "The value of (a != b) || (a>=b) is (and): " <<((a != b) || (a>=b)) <<"\t'||' is an logical operator"<<endl;
    cout << "The value of (a != b) || (a>=b) is (and): " <<((a != b) || (a>=b)) <<"\t'||' is an logical operator"<<endl;
    cout << "The value of (!(a != b))  is (not): " <<(!(a != b)) <<"\t \t'!' is an logical operator"<<endl;


}