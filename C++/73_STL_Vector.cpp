#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(T &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " "; // it will show the element at i -> index
    }
    cout << endl;
}

int main()
{
    // Ways to Create a Vector
    vector<int> vec1; // Zero Length Vector

    int element, size;

    /*
        cout << "Enter an element to add to this vector " << endl;
        for (int i = 0; i < 4; i++)
        {
            cin >> element;
            vec1.push_back(element);
        }
        display(vec1);
    */
    /*
        //Some Other method techniques
        cout << "Enter the size of Your Vector" << endl;
        cin >> size;

        //Pushing Element
        cout << "Enter an element to add to this vector " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> element;
            vec1.push_back(element);
        }
        //Poping Element
        // vec1.pop_back();

        //displaying Element
        display(vec1);

        //Inserting Element
        vector<int>::iterator iter = vec1.begin();
        vec1.insert(iter + 1, 566);
        display(vec1);

        //Inserting Multiple Element
        vector<int>::iterator itera = vec1.begin();
        vec1.insert(itera + 4, 5, 10);
        display(vec1);
   */

    vector<char> vec2(4); // 4-Element Vector
    vec2.push_back('b');
    // display(vec2);
    vector<char> vec3(vec2); //vec2 = 4 = Element vector from vec2
        // display(vec3);
    vector<int> v(6, 3); // 6-Element vector of 3s
    display(v);
    cout << v.size() << endl;

    return 0;
}

// https://www.cplusplus.com/reference/vector/vector/