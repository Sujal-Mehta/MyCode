#include <iostream>
using namespace std;

//Class
class employee
{
private:
    int id;
    int salary;

public:
    void setid(void);
    void getid(void);
};

//Body
int main()
{
    employee sujal, rohan, genish, piyush;

    //1st Way to operate
    sujal.setid();
    sujal.getid();

    rohan.setid();
    rohan.getid();

    //And if we have lots of data to store then we will operate on array of classes like this
    employee organization[100];
    for (int i = 0; i <= 100; i++)
    {
        organization[i].setid();
        organization[i].getid();
    }

    return 0;
}

//Function Defination
void employee ::setid(void)
{
    salary = 1001 ; 
    cout << endl
         << "Enter the id of the employee " << endl;
    cin >> id;
}

void employee ::getid(void)
{
    cout << "The id of employee is " << id << endl;
}
