#include <iostream>
using namespace std;

/*
    // Class without template 
    class vector
{
    int size;

public:
    int *arr;
    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotproduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
*/

template <class T>
class vector
{
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    /*
    // class without template objects and calculations 
    vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 0;
    v2.arr[2] = 1;
    int a = v1.dotproduct(v2);
    cout << a << endl;

    //here if we would like to pass float or any other data type we cant perform within this class so for reusabilty template concept get introduce
    */

    // template class model uses
    vector<float> v1(3);
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}
