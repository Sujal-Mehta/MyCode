#include <iostream>

using namespace std;

int main()
{
    //-->variable declaration
    int option, age, VIPcode;

    //->switch option choosing
    cout << "Choose any one of the option" << endl;
    cout << "1. VIP Membership Code" << endl;
    cout << "2. Your age " << endl;
    cin >> option;

    //-->Switch case control structure begins
    switch (option)
    {

    case 1:
        cout << endl;
        cout << "Enter your VIP pass number ->";
        cin >> VIPcode;

        //--> if else
        if (VIPcode == 2022)
        {
            cout << "You can enter at vip compartment" << endl;
        }
        else
        {
            cout << "Invalid vip code" << endl;
        }
        break;

    case 2:
        cout << endl;
        cout << "Enter your age" << endl;
        cin >> age;

        //-->if - else - if ladder contro structure
        if (age < 1)
        {
            cout << "You are not born yet so we reserved you seat and you can enter in the party after 18 year later";
        }
        else if ((age >= 1) && (age < 18))
        {
            cout << "You cannot get entry" << endl
                 << "try to get vip pass for entry";
        }
        else if (age == 18)
        {
            cout << "You just reached 18 so you get basic third compartment childs party entry";
        }
        else
        {
            cout << " You can enter and enjoy up to second compartment except vip compartment";
        }
        break;
        
    default:
        cout << "invalid !";
        break;
    }
}