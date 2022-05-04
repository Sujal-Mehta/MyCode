#include <iostream>
using namespace std;

class shop_items
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "code of this item is : " << id << endl;
        cout << "price of this item is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    int id;
    float pr;
    
    shop_items *ptr = new shop_items[size];
    shop_items *ptrtemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Id and Price of item " << i + 1 << endl;
        cin >> id >> pr;
        ptr->setdata(id, pr);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "item number : " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}