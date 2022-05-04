#include <iostream>
using namespace std;

//Class
class employee
{
    int id;
    static int count;
    // static int count =  1000 ; // If we want to start it count from any number then we can't do it here so we can do that below in (line number (16))

public:
    void setdata(void);
    void getdata(void);

    //Static function
    static void getcount(void)
    {
        // cout << id ; // It will through error because only static data , function can be operated here 
        cout << "The count is " << count << endl;
    }
};

int employee ::count = 1000;
// Here count will come with class and it will take once a memory space and get updated in same (default value of static variable are 0) --> every object share count

//Body
int main()
{
    //Count is the static data member of class employee
    //here sujal , lujal , dhujal share count instead of having particular count
    employee sujal, lujal, dhujal;
    //static function 
    employee ::getcount();
    sujal.setdata();
    sujal.getdata();

    employee ::getcount();
    lujal.setdata();
    lujal.getdata();

    employee ::getcount();
    dhujal.setdata();
    dhujal.getdata();

    return 0;
}

//Class function defination
void employee ::setdata(void)
{
    cout << "Enter the id " << endl;
    cin >> id;
    count++;
}

void employee ::getdata(void)
{
    cout << "The id of this employee is " << id << endl;
    cout << "This is an employee no." << count << endl;
}
