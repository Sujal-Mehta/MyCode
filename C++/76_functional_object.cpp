#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    // Function Objects/Functor  : Function wrapped in a class so that it available like an object

    int arr[] = {1, 73, 444, 12, 54, 77};
    cout << "The smallest element is " << *std::max_element(arr, arr + 5) << "\nLargest Number is ";
    cout << *std::min_element(arr, arr + 6) << '\n';

    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl
         << endl;
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

//References
// c++ functional object -> website
// c++ algorithm -> websites