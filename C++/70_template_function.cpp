#include <iostream>
using namespace std;

/*
    // functions without template definations and prototype 
    float functAverage(int a, int b)
    {
        float avg = (a + b) / 2.0;
        return avg;
    }

    float functAverage2(int a, float b)
    {
        float avg = (a + b) / 2;
        return avg;
    }
*/
template <class T1, class T2>
float functAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class R>
void swapp(R &a, R &b)
{
    R temp = b;
    b = a;
    a = temp;
}

int main()
{
    /*
    float av;
    av = functAverage2(5, 2.4);
    av = functAverage(5, 2);
    printf("The average of these numbers is %.1f\n", av);

    //here we see that we need to execute lots of function for different data types 
    //for simplicity we use template functions
*/
    float av;
    av = functAverage(5.5, 2.5);
    printf("The average of these numbers is %.1f\n", av);

    int x = 5, y = 6;
    cout << "x = " << x << " y = " << y<<endl;
    swapp(x, y);
    cout << "x = " << x << " y = " << y<<endl;
    return 0;
}