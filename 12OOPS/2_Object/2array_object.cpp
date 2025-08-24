// array of objects im c++

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    int salary;

public:
    void setid()
    {
        salary = 122;
        cout << "enter the id of emplyee" << endl;
        cin >> id;
    }  

    void getid()
    {

        cout << "the id of employee is " << id << endl;
    }
};

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}
