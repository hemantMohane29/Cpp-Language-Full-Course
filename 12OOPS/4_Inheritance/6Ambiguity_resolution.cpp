// Ambiguity resolution  in cpp

#include <iostream>
using namespace std;

class base_1
{
public:
    void getdata()
    {
        cout << "hemant mohane is good boy" << endl;
    }
};

class base_2
{
public:
    void getdata()
    {
        cout << "hemant is the bad boy" << endl;
    }
};

class derived : public base_1, public base_2
{
public:
    void getdata()
    {
        base_1::getdata();
        // base_2::getdata();
    }
};

int main()
{
    //    base_1 obj;
    //    base_2 obj1;
    derived obj;
    obj.getdata();
    return 0;
}
