// multilevel inheritance in c++

#include <iostream>
using namespace std;

class base // base class
{
public: // base class function
    void getdata()
    {
        cout << "enter base class data " << endl;
    }
};

class derivated_1 : public base // derived class inheriting from base class
{
public:
    void showdata()
    {
        cout << " enter derived class data" << endl;
    }
};

class derivated_2 : public derivated_1 // second  derived class inheriting from first derived class
{
public:
    void displaydata()
    {
        cout << " enter second derived class data " << endl;
    }
};

int main()
{

    derivated_2 obj;
    obj.getdata();
    obj.showdata();
    obj.displaydata();
    return 0;
}

//  notes

/*
  if we are inheritance b form a and c form b : [ a --> b --> c]
 1. A is the base class for B and B is the base class for c
 2. ABC is called innheritance path
 3. A is the top level base class
 4. c is the bottom level derived class
 5. b is the inheritance class


*/
