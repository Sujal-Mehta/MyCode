/*
    OOPs - Classes and objects 

    c++     --> initially called --> C with classes by stroustroup 
    class   --> extension of structures (in C)
    
    Structures had Limitations
            --> Members are public 
            --> No methods

    Classes 
            --> Structures + more 
            --> can have methods and properties 
            --> can make few members as private & few as public

    structures in c++ are typedef 

    You can declare objects along with the class declaration  like below method
    i.e ->
    ->i      class employee {
    ->ii           class defination
    ->iii    } sujal , alpha , gamma , agerabagera ;

    sujal.salary_suppose = 8 ; --> It makes no sense if salary is private

*/

#include <iostream>
#include <string>

using namespace std;

//-> Class
class binary
{
        string s;

public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};

//-> Body
int main()
{
        binary b;
        b.read();
        b.chk_bin();
        cout << endl
             << "Binary input before ones_compliment execution" << endl;
        b.display();
        b.ones_compliment();
        cout << endl
             << "Binary input after ones_compliment execution" << endl;
        b.display();
}

//-> Class function defination
void binary ::read(void)
{
        cout << endl
             << "Input an Binary Number" << endl;
        cin >> s;
}

void binary ::chk_bin(void)
{
        for (int i = 0; i < s.length(); i++)
        {
                if (((s.at(i)) != '0') && ((s.at(i)) != '1'))
                {
                        cout << endl
                             << "Incorrect Binary Format" << endl;
                        exit(0);
                }
        }
        cout << endl
             << "It is in Binary Format" << endl;
}

void binary ::ones_compliment()
{
        for (int i = 0; i < s.length(); i++)
        {
                if (s.at(i) == '0')
                {
                        s.at(i) = '1';
                }
                else
                {
                        s.at(i) = '0';
                }
        }
}

void binary ::display(void)
{
        chk_bin();
        cout << "Displaying The Binary Number " << endl;
        for (int i = 0; i < s.length(); i++)
        {
                cout << s.at(i);
        }
}