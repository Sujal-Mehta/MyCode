#include <iostream>
#include <string>
#include <map>
using namespace std;

//Map is an asssociative array

int main()
{
    map<string, int> marksMap;
    marksMap["sujal"] = 98;
    marksMap["harry"] = 58;
    marksMap["Rohan"] = 8;

    marksMap.insert({{"gajen" , 0} , {"sajen " , 100}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout << "The size is "<< marksMap.size()<<endl;
    return 0;
}