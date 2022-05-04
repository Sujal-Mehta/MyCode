#include <iostream>
using namespace std;

int main()
{
    enum test
    {
        classTest,
        schoolTest,
        universityTest,
        mineTest
    };

    cout << endl
         << classTest << endl;
    cout << endl
         << schoolTest << endl;
    cout << endl
         << universityTest << endl;
    cout << endl
         << mineTest << endl;

    //Now our test is one of the data type of c++ so we can alsp perform inidvidual function on that
    test t1 = classTest;
    test t3 = universityTest;

    cout << endl
         << "The value of t1 is " << t1 << endl;
    cout << endl
         << "The value of t3 is " << t3 << endl;

    return 0;
}