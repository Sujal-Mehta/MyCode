#include <iostream>
using namespace std;

//As like strucutre we can use union but we can just use one at a time for better memory allocation if we use anothe in same program then one will be overwrite other
union employee_pahichan
{
    int id;
    float unique_id;
};

int main()
{
    union employee_pahichan pahichan;

    pahichan.id = 100;

    cout << endl
         << "The id of employee is : " << pahichan.id << endl;

    pahichan.unique_id = 5060.56;

    cout << endl
         << "The unique_id of employee is : " << pahichan.unique_id << endl;

    cout << endl
         << "The id of employee after third assignment : " << pahichan.id << endl;
    // Here we dont get result as aspected 
    
    return 0;
}