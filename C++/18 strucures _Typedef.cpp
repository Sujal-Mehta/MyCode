#include <iostream>
using namespace std;

typedef struct employee
{
    int id;
    float salary;
} em;

int main()
{
    //First Employee
    struct employee sujal;

    sujal.id = 1090;
    sujal.salary = 8484.84;

    cout << endl
         << "The id of employee is : " << sujal.id << endl;
    cout << "The salary of employee is : " << sujal.salary << endl;

    //Second Employee
    struct employee harry;

    harry.id = 1080;
    harry.salary = 5005.4;

    cout << endl
         << "The id of employee is : " << harry.id << endl;
    cout << "The salary of employee is : " << harry.salary << endl;

    //Third Employee with typedef structure
    em genish;
    genish.id = 1070;
    genish.salary = 4006.4;

    cout << endl
         << "The id of employee is : " << genish.id << endl;
    cout << "The salary of employee is : " << genish.salary << endl;

    return 0;
}