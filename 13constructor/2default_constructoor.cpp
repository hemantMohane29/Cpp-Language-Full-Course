// default constructor

#include <iostream>
using namespace std;

class constructor
{
private:
    int a, b;

public:
    constructor(void); //--> default constructor
    void printnumber()
    {
        cout << "your number is " << a << " and " << b << endl;
    }
};

constructor ::constructor(void)
{
    a = 10;
    b = 20;
    cout << "constructor called" << endl;
}

int main()
{

    constructor obj;
    obj.printnumber();

    return 0;
}
