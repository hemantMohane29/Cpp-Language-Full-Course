// parameterized constructor

#include <iostream>
using namespace std;

class parameterized_constructor
{
private:
    int a, b;

public:
    // creating a parameterized constructor
    parameterized_constructor(int, int);
    void printnumber()
    {
        cout << "your number is " << a << " and " << b << endl;
    }
};

parameterized_constructor :: parameterized_constructor(int x, int y)
{
    a = x;
    b = y;
    cout << "parameterized_constructor called" << endl;
}

int main()
{

    parameterized_constructor a(10, 20);
    a.printnumber();

    parameterized_constructor b(30, 40);
    b.printnumber();

    return 0;
}
