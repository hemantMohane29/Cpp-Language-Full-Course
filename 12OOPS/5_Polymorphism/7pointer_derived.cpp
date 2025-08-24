// pointr derived in cpp

#include <iostream>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "display base class" << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "display base class" << var_base << endl;
        cout << "display base class" << var_derived << endl;
    }
};
int main()
{

    base *base_pointer;
    base obj_base;
    derived obj_derived;
    base_pointer = &obj_derived; // pointing base class pointer to derived

    base_pointer->var_base = 34;
    // base_pointer -> var_derived = 54; // not working
    base_pointer->display();

    base_pointer->var_base = 3400;
    base_pointer->display();

    derived *derived_pointer;
    derived obj_derived;
    derived_pointer = &obj_derived;
    derived_pointer->var_derived = 3400;
    derived_pointer->display();

    return 0;
}
