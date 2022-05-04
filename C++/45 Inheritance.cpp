#include <iostream>
using namespace std;

// Base Class
class employee
{

public:
    int id;
    float salary;
    employee() {}
    employee(int inpid)
    {
        id = inpid;
        salary = 3500;
    }
};

//creating a programmer class derived from employee base class
class programmer : employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 10;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee sujal(5), rahul(6);
    cout << sujal.salary << endl;
    cout << rahul.salary << endl;
    cout << sujal.id << endl;

    programmer pm(4);
    cout << pm.languagecode << endl;
    pm.getdata();
    // cout << pm.id << endl;
    return 0;
}

//Derived class syntax
/*
    class {{derived - class - name}} : {{visibility - mode}} {{base - class - namespace}}
    {
     members/methods/etc....
    };

    Note :  1. DEFAULT VISIBILITY MODE IS PRIVATE
            2. PRIVATE VISIBILITY MODE : PUBLIC MEMBERS OF THE BASE CLASS BECOMES PRIVATE MEMBERS OF THE DERIVED CLASS 
            3. PUBLIC VISIBILITY MODE : PUBLIC MEMBERS OF THE BASE CLASS BECOMES PUBLIC MEMBERS OF THE DERIVED CLASS 
            4. PRIVATE MEMBERS ARE NEVER INHERITED 
*/