// constructor derived in cpp

#include <iostream>
using namespace std;

/*

case 1
 class B : public class A {
    // order of exeution of constructor  -> first A() then B()
 };

 case 2
 class A : public class B , public C {
    // Order of execution of constructor  -> then C() and A()

 };

 case 3
 class A : public B , vitrual public c{
    // Order of execution of constructor  -B> C() then B() and A()
 };

*/

class base_1
{
  int data1;

public:
  base_1(int a)
  {
    data1 = a;
    cout << "base class constructor called " << endl;
  }
  void printdata1(void)
  {
    cout << "the value of data1 is " << data1 << endl;
  }
};
class base_2
{
  int data2;

public:
  base_2(int a)
  {
    data2 = a;
    cout << "base class constructor called " << endl;
  }
  void printdata2(void)
  {
    cout << "the value of data1 is " << data2 << endl;
  }
};

class derived : public base_1, public base_2
{
  int derived1, derived2;

public:
  derived(int a, int b, int c, int d) : base_1(a), base_2(b)
  {
    derived1 = c;
    derived2 = d;
    cout << "Derived class constructor called " << endl;
  }
  void printdataderived(void)
  {
    cout << "the value of derived 1 is " << derived1 << endl;
    cout << "the value of derived 2 is " << derived2 << endl;
  }
};
int main()
{

  derived obj(1, 2, 3, 4);
  obj.printdataderived();
  return 0;
}
