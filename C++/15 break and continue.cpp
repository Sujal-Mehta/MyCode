#include <iostream>
using namespace std;

int main()
{

    // Break (keyword)
    for (int i = 0; i <= 20; i++)
    {
        if (i == 10)
        {
            break;
        }
        else
        {
            cout << i << endl;
        }
    }

    cout << endl;
    // Continue
    for (int i = 0; i <= 20; i++)
    {
        if (i == 10){
            continue ;
        }
        else {
            printf("%d \n" , i);
        }
    }
    return 0;
}