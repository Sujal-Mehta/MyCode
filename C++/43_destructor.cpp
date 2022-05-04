#include <iostream>
using namespace std;

int count = 0;

// destructor never takes an argument nor does it return any value , its free the memory occupied be constructor 
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when mu destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << "creating two objects" << endl;
        num n2, n3;
        cout << "exiting the block" << endl;
    }
    cout << "back to main function " << endl;
    num n4 ;
    num n5 , n6 ;
    return 0;
}