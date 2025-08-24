// single inheritance in cpp

#include <iostream>
using namespace std;

class base // base class
{
private:
    int a, b, c;
public:
    void display()
    {
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        c = a + b;
        cout << "c = " << c << endl;
    }
};
// derived class inheriting from base class
// class (derived-class-name) : (visibiity-mode) (base-class-name)
class derived : public base
{
private:
    int d, e, f;

public:
    void set()
    {
        cout << "d = ";
        cin >> d;
        cout << "e = ";
        cin >> e;
        f = d + e;
        cout << "f = " << f << endl;
    }
};
int main()
{
    derived obj;
    obj.display(); // calling base class function
    obj.set();     // calling derived class function
    return 0;
}

// visibility mode
// 1. default visibility mode is private
// 2. private visibility mode public members of the base class become public members of the derived class
// 3. privste visibility mode public members of the base class become private members of the derived class
// 4. private members are never inhirited
