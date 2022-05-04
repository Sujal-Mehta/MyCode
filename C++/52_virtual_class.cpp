#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll_number is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here , " << endl
             << "\tMaths = " << maths << endl
             << "\tPhysics = " << physics
             << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your Total Mark is = " << total << endl;
    }
};

int main()
{
    result sujal;
    sujal.set_number(4200);
    sujal.set_marks(78.9, 99.5);
    sujal.set_score(9);
    sujal.display();
    return 0;
}

/*
    student --> test 
    student --> sports

    test --> result 
    sports --> result 
*/