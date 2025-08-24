// operatoe overloading in cpp

#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload the '+' operator
    Complex operator + (const Complex &other)
    {
        real = real + other.real;
        imag = imag + other.imag;
        return Complex(real , imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex result = c1 + c2; // Operator '+' is overloaded
    cout << "Sum = ";
    result.display();

    return 0;
}



//  rule for virtual functions
// 1. they cna not be static 
// 2. they are accessed by object pointers 
// 3. virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used  
// 4. if  a virtual function is defined in a base class, there is no necessity of redefining it in the derived class