// Friend class and member friend function

#include <iostream>
using namespace std;

// Forward declaration
class Complex; 

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    } 

    // Friend function declaration
    int sumRealComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Declare the specific function as friend
    friend int Calculator::sumRealComplex(Complex, Complex);
    // friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Friend function definition
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2;
    Calculator calc;

    c1.setNumber(1, 4);
    c2.setNumber(5, 7);

    c1.printNumber();
    c2.printNumber();

    int result = calc.sumRealComplex(c1, c2);
    cout << "Sum of real parts: " << result << endl;

    return 0;
}
