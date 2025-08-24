// constructor in cpp

#include <iostream>
using namespace std;

class constructor
{
    int a, b;

public:
    // creating a constuctor
    //  constructor is aspecial member function with the  same name as of the class. it is automatically invoked
    //  it is uesd to initializ the object of the class
    constructor(void); //--> default constructor
    void printnumber()
    {
        cout << "your number is " << a << " and " << b << endl;
    }
};

constructor :: constructor(void)
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

// properties of constructor
//  1. it should be declared inn the public section of the class
//  2. they are automatically invoked whenever the object is create
//  3. they cannot return value and do not have retuen types
//  4. it can have default arguments
//  5. we cannot refer to their address