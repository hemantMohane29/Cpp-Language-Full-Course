// function overloading polymorphism

// Function overloading in C++ is a feature that allows multiple functions within the same scope to share the same name, provided they have different parameter lists. This means that the functions must differ in at least one of the following ways:
// Number of parameters: For example, add(int a, int b) and add(int a, int b, int c).
// Type of parameters: For example, print(int x) and print(double x).
// Order of parameter types: For example, calculate(int x, float y) and calculate(float x, int y).

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

    void Hemant(double c, double d)
    {
        cout << "second function but same name " << endl;
        cout << "value c = " << c << endl;
        cout << "value d = " << d << endl;
    }
};

int main()
{
    A obj;
    obj.Hemant(25, 14);
    obj.Hemant(12.4, 47.2);
    return 0;
}
