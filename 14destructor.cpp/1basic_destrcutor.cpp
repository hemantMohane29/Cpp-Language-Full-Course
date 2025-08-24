// Destructor in cpp

#include <iostream>
using namespace std;

int count = 0;
// destructor never takes an argument and nevr returns a value
class destructor
{
public:
  destructor()
  {
    count++;
    cout << "this is the time when constructr is called for object" << count << endl;
  }
  ~destructor()
  {
    cout << "this  is the time when destructor is called for object" << count << endl;
    count--;
  }
};
int main()
{
  cout << "we are inside our main function" << endl;
  cout << "creating two object n1 " << endl;
  destructor n1;
  {
    cout << "entering this object" << endl;
    cout << "creating two more object " << endl;
    destructor n2, n3;
  }

  cout << "back to main " << endl;

  return 0;
}
