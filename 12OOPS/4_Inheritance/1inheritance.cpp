// inheritamce in cpp
// type of inheritance
//  1. single inheritance
//  2. multiple inheritance
//  3. multilevel inheritance
//  4. hierarchical inheritance
//  5. hybrid inheritance
//  6. multipath inheritance

// --> inheritance is a way to form new classes using classes that have already been defined.
#include <iostream>
using namespace std;

class base // base class
{
public:
    void hemant()
    {
        cout << "Hemant is a Good boy" << endl;
    }
};

class derived : public base // derived class
{
public:
    void abhi()
    {
        cout << "Abhi is a B ad boy" << endl;
    }
};

int main()
{
    derived obj; // creating object of derived class
    cout << "we are inside main function" << endl;
    cout << "creating object of derived class" << endl;
    cout << "calling function of base class \n\n"
         << endl;
    obj.hemant();
    obj.abhi();
    return 0;
}
