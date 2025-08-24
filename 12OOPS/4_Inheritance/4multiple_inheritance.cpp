// multiple inheritance in cpp

#include <iostream>
using namespace std;

class base_1
{

public:
    int a, b;
    void getdata()
    {
        cout << "emter base_1 class data " << endl;
        cout << "enter the value of a an b " << endl;
        cin >> a >> b;
    }
};

class base_2
{
public:
    int c, d;
    void showdata()
    {
        cout << "enter base_2 class data" << endl;
        cout << "enter the value of c and d" << endl;
        cin >> c >> d;
    }
};

class derived : public base_1, public base_2
{
public:
    int A, B;
    void displaydata()

    {
        cout << "enter derived class data " << endl;
        A = a + b;
        cout << "sum of a and b is = " << A << endl;
        B = c + d;
        cout << "sum of c amd d is = " << B << endl;
    }
};
// class deerived_1 : visibility -mode  base1 , visibility -mode base_2

int main()
{

    derived hemant;
    hemant.getdata();
    hemant.showdata();
    hemant.displaydata();

    return 0;
}

/*
the inheritance derived class will look somethng like this
base_1 --> protected
base_2 --> protected
*/