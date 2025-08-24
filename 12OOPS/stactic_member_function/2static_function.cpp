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
        cout << "the id of this employee is -  " << id <<"\nand this is employee number " << count << endl;
    }

    static void getcount(void){
        //cout<<id; // id is not accessible in static memberfunction
        cout<< "the value of count is "<<count<<endl;
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
    Employee  :: getcount(); // calling static member function using class name 

    zayed.setdata();
    zayed.getdata();
    Employee  :: getcount(); 

    abhi.setdata();
    abhi.getdata();
    Employee  :: getcount(); 

    return 0;
}
