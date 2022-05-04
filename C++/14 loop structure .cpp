#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 1, k = 1;

    cout << "\n\nfor loop \n"
         << endl
         << endl;
    // for loop
    // printing 1 to 100 ;
    for (i; i <= 100; i++)
    {
        cout << i << endl;
    }

    cout << "\n\nwhile loop \n"
         << endl
         << endl;

    // while loop
    // printing 1 to 100 ;
    while (j <= 100)
    {
        cout << j << endl;
        j++;
    }

    cout << "\n\ndo-while loop \n"
         << endl
         << endl;

    // do-while loop (it always run for 1 times even if condition false)
    // printing 1 to 100 ;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 100);
}
