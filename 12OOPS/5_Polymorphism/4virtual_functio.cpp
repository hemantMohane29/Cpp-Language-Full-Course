// virtual function in cpp

#include<iostream>
using namespace std;

class base_class
{
public:
    int var_base = 1 ;
     virtual void display()
    {
        cout << "display base class var_base  " << var_base << endl;
    }
};

class derived_class : public base_class
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "display base class var_base " << var_base << endl;
        cout << "display base class var_derived " << var_derived << endl;
    }
};

int main()
{  

  // pointer object calling 
    base_class * base_class_pointer;
    base_class obj_base;
    derived_class obj_derived; 

    base_class_pointer = &obj_derived;
    base_class_pointer -> display();

 // normal object calling 
    // derived_class obj;
    // obj.display();    

return 0;
}
