// copy constructor in cpp

#include <iostream>
using namespace std;

class copy_constructor
{
private:
    int a;

public:
    copy_constructor()
    {
        a = 0;
    }
    copy_constructor(int x)
    {
        a = x;
    }

    // when no copy constructor is found , compiler supplies its own copy constructor
    copy_constructor(copy_constructor &obj)
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{

    copy_constructor x, y, z(10), z2;
    x.display();
    y.display();
    z.display();

    copy_constructor z1(z);  // invoking copy constructor
    z2 = z;                  // invoking default copy constructor
    copy_constructor z3 = z; // invoking copy constructor
    z1.display();

    return 0;
}
