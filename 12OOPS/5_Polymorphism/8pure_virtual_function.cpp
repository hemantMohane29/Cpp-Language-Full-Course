// pure virtual function   // abstract base class

// virtual void draw() = 0;  // Pure virtual function
// The = 0 means “no default implementation”.
// It forces derived classes to implement the function.

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
    void hemant()
    {
        cout << " Hemant Mohane" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

int main()
{
    // Shape s;       Error: Cannot create object of abstract class
    Shape *s = new Circle(); // Pointer to abstract class
    s->draw();
    s->hemant(); // Output: Drawing Circle
    delete s;
}
