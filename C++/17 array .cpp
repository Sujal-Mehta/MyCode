#include <iostream>

using namespace std;

int main()
{
    //This is one of the way to assign value in array
    int marks[] = {1, 2, 3, 4, 5};

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    // even we can assign individually values
    marks[5] = 6;
    cout << marks[5] << endl;

    cout << endl
         << "\tNow printing same stuff using loops" << endl;

    // Simply we can print these all stuff easily with loops like
    cout << endl
         << "For loop" << endl;
    for (int i = 0; i < (marks[5]); i++)
    {
        cout << marks[i] << endl;
    }

    cout << endl
         << "while loop" << endl;
    int i = 0;
    while (i <= 5)
    {
        cout << marks[i] << endl;
        i++;
    }

    cout << endl
         << "do-while loop" << endl;

    int j = 0;
    do
    {
        cout << marks[j] << endl;
        j++;
    } while (j <= 5);
    return 0;
}