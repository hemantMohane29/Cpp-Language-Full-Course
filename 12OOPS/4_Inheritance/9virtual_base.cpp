// virtual base class

#include <iostream>
using namespace std;

/*
student --> test
student --> sports
test --> result
sports --> result

*/

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void printnumber()
    {
        cout << " a  = " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmark()
    {
        cout << " you result is here = " << endl
             << "maths = " << maths << endl
             << "physics = " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float s_c)
    {
        score = s_c;
    }
    void printscore(void)
    {
        cout << " your PT score is  = " << score << endl;
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
        printnumber();
        printmark();
        printscore();
        cout << "your total score is  " << total << endl;
    }
};

int main()

{
    result obj;
    obj.set_number(78);
    obj.set_mark(88.2, 98.2);
    obj.setscore(8.35);
    obj.display();
    return 0;
}
