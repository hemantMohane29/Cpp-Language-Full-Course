// polymorphism
//    - one name and multiple form

//   polymorphism in c++ can be pf two types:
// 1. compiler time polymorphism   --> 1.function overloading polymorphism  and 2.operator overloading polymorphism
// 2. run time polymorphism        --> 1.virtual overriding polymorphism  and 2.friend function

// polymorphism
#include <iostream>
using namespace std;

class A
{
public:
    void Hemant(int a, int b)
    {
        cout << "first function but same name " << endl;
        cout << "value of a =  " << a << endl;
        cout << "value of b = " << b << endl;
    }

    void Hemant(int c, int d, int e)
    {
        cout << "second function but same name " << endl;
        cout << "value c = " << c << endl;
        cout << "value d = " << d << endl;
        cout << "value e = " << e << endl;
    }
};

int main()
{
    A obj;
    obj.Hemant(25, 14);
    obj.Hemant(12, 47, 54);
    return 0;
}
