// class is a key word in cpp language 
// A class is a template to cerate objects

#include <iostream>
using namespace std;

class A
{
public:
    string name;
    int Roll_no;
    string dept_name;
    string sub_code;

    void getdata()
    {

        cout << "Student Name is = ";
        cin >> name;
        cout << "Roll_no = ";
        cin >> Roll_no;
        cout << "deptament name = ";
        cin >> dept_name;
        cout << "subject code is = ";
        cin >> sub_code;
    }

    int call()
    {
        cout << "student details" << endl;
        cout << "\n\nStudent Name is = " << name;
        cout << "\nRoll_no = " << Roll_no;
        cout << "\ndeptament name = " << dept_name;
        cout << "\nsubject code is = " << sub_code;
    }
};

int main()
{
    A obj;
    obj.getdata();
    obj.call();
    return 0;
}
