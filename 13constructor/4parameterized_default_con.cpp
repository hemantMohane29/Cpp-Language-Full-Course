// parameterized constructor (default arguments)

#include <iostream>
using namespace std;

class parameterized_constructor
{
private:
    int x, y;

public:
    // creating a parameterized constructor
    parameterized_constructor(int a, int b = 5)
    {
        x = a;
        y = b;
        cout << "parameterized_constructor called" << endl;
    }

    void printnumber()
    {
        cout << "your number is " << x << " and " << y << endl;
    }
};

int main()
{

    parameterized_constructor a(1);
    a.printnumber();
    return 0;
}
