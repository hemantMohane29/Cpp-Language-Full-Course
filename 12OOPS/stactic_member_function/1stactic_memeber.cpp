// stactic member function

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the the id of employee" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is -  " << id << "and this is employee number " << count << endl;
    }
};

int Employee ::count; // default value of static member is 0
int main()
{
    Employee hemant, zayed, abhi;
    //    hemant.id = 1;
    //    hemant.count = 1;

    hemant.setdata();
    hemant.getdata();

    zayed.setdata();
    zayed.getdata();

    abhi.setdata();
    abhi.getdata();

    return 0;
}
