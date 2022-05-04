#include <iostream>
using namespace std;

class base
{
protected: //By using this we can even inherited private members of class to another
    int a;

private:
    int b;
};

/*

for a protected member : 
                    Public derivation       private derivation      protected derivation
    private         Not inherited           not inherited           Not inherited
    protected       protected               private                 protected               
    public          public                  private                 protected
*/

class derived : protected base
{
};

int main()
{
    base bs;
    derived dr;

    //These don't work
    // cout << bs.a << endl ;
    // cout << d.a << endl ;

    return 0;
}