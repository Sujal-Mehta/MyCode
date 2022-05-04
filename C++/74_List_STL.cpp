#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // List of 0 length

    cout << "list 1 " << endl;
    //pushing element in empty list
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    /*
        //sorting
    list1.sort();
    display(list1);
*/

    /*
    //popoing
        list1.pop_back();
        list1.pop_front();
        list1.remove(7);
*/

    /*
    // Displaying Lists
        list<int>::iterator iter;
        iter = list1.begin();
        cout << *iter++ << endl;
        cout << *iter++ << endl;
*/

    cout << "list2" << endl;
    list<int> list2(3); // Empty list of size 7
    // setting the empty value of list2
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 55;
    iter++;
    *iter = 65;
    iter++;
    display(list2);

    /*
    //merging
        cout << "list1 merging with list2" << endl;
        list1.merge(list2);
        display(list1);
*/

    /*
    Reversing
    list1.reverse();
    display(list1);
*/
}