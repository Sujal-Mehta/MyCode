#include <iostream>

using namespace std;

void swap(int a, int b);
void swap_pointer(int *a, int *b);
void swap_reference_variable(int &a, int &b);

int main()
{
     int x, y;
     x = 5;
     y = 6;

     cout << endl
          << "The value of x is : " << x << endl
          << "The value of y is : " << y << endl;
     swap(x, y);
     cout << endl
          << "The value of x after swap functionis : " << x << endl
          << "The value of y after swap is : " << y;

     cout << endl
          << "Here we see the swap function didn't change the value or swapped because the value are only swapped in function not in main so we need call by reference here where we send address so that we can change the real time value in main function..." << endl;

     // ---------> Call by reference actions begins from here
     cout << endl
          << "The current value of x and y are :" << x << " and " << y << endl;

     swap_pointer(&x, &y);
     cout << endl
          << "The value of x and y after swapping throug reference/address method are : " << x << " and " << y << endl;

     cout << endl
          << "*****"
          << " This is called as an call by reference (pointer ) where we pass address in function "
          << "*****" << endl;

     cout << endl
          << "***** Now using reference variable . we will just make an variable which will be pointing to our main variables *****" << endl
          << endl
          << "The value of x and y is now : " << x << " and " << y << endl;

     swap_reference_variable(x, y);

     cout << "The value of x and y after being swapped from reference variable method x = " << x << " y =  " << y << endl;
     return 0;
}

//This did't work and even it is not called call by reference
void swap(int a, int b)
{
     int temp;
     temp = a;
     a = b;
     b = temp;
}

//This works and it is called call by reference using pointer method
void swap_pointer(int *a, int *b)
{
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
}

//This works and it is called call by reference using reference variable
void swap_reference_variable(int &a, int &b)
{
     int temp;
     temp = a;
     a = b;
     b = temp;
}
