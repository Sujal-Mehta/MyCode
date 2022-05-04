#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;

    cout << "The value of a is " << *(ptr) << endl;

    // new operator/keyword
    //dynamic variable creation

    int *p = new int(40);
    cout << "The value of a is " << *(p) << endl;

    float *pt = new float(50.5);
    cout << "The value of a is " << *(pt) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    //deleting allocated memory
    delete[] arr; // this syntax for deleting contiguous blocks of memory
    // delete arr ; // for deleting non contiguous blocks of memory

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}