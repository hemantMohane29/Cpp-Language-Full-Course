// C++ program for Hierarchical Inheritance

#include <iostream>
using namespace std;

class base // superclass A
{
public:
  void show_A()
  {
    cout << "class base" << endl;
  }
};
class derived_1 : public base // subclass B
{
public:
  void show_B()
  {
    cout << "class derived_1" << endl;
  }
};

class derived_2 : public base // subclass C
{
public:
  void show_C()
  {
    cout << "class derived_2" << endl;
  }
};

int main()
{
  derived_1 b;
  cout << "calling from B: " << endl;
  b.show_B();
  b.show_A();

  derived_2 c;
  cout << "calling from C: " << endl;
  c.show_C();
  c.show_A();
  return 0;
}