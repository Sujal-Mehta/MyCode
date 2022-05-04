#include <iostream>

using namespace std;

int product(int a, int b);
inline int multiply(int a, int b);
int no_reason_function(int a, int b);

//Extra function related to default
float interestfunction(int currentMoney, float interest = 1.04)
{
    //In this function the interest default value is 1.04 so we can even pass single value of double if we want to change interest rate
    return currentMoney * interest;
}

int main()
{
    int a, b;

    cout << endl
         << "Enter the value of a and b" << endl;

    cin >> a >> b;

    //Not inline
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;
    cout << "The product of a and b is " << product(a, b) << endl;

    cout << endl
         << "Here we executed function 5 times and each time a and b value goes to function process begins and return the result and a lot of time get used in simple functions too so we used inline where it will not be wrong writting product(a,b) to a*b directly because it keep that value there" << endl;

    //Inline function
    cout << "The product of a and b is " << multiply(a, b) << endl;
    cout << "The product of a and b is " << multiply(a, b) << endl;
    cout << "The product of a and b is " << multiply(a, b) << endl;
    cout << "The product of a and b is " << multiply(a, b) << endl;
    cout << "The product of a and b is " << multiply(a, b) << endl;

    //Noreason function
    cout << endl
         << "The calculated result of operation is : " << no_reason_function(a, b) << endl;
    cout << "The calculated result of operation is : " << no_reason_function(a, b) << endl;
    cout << "The calculated result of operation is : " << no_reason_function(a, b) << endl;
    cout << "The calculated result of operation is : " << no_reason_function(a, b) << endl;
    cout << "The calculated result of operation is : " << no_reason_function(a, b) << endl;

    //Extra calculation
    float money;
    cout << endl
         << "Enter your current amount/money at bank ";
    cin >> money;

    cout << endl
         << "The interest of your money at RLAS bank is " << interestfunction(money);
    cout << endl
         << "The interest of your money at RLAS bank if you are worker at bank is  " << interestfunction(money , 2);
    return 0;
}

//No inline
int product(int a, int b)
{
    return a * b;
}

//Inline
inline int multiply(int a, int b)
{
    return a * b;
}

int no_reason_function(int a, int b)
{
    static int c = 0; // This line of code will just executed for a single time next time it will get replaced by c new value which we assign like this
    c = c + 1;
    return a * b + c;
}
