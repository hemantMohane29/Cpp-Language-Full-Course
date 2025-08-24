// this pointer

#include <iostream>
using namespace std;
class A
{
private:
    int a;
public:
    void setdate(int a)
    {
        // (this) is a keyword which is a point to the object which invokes the member function
        this->a = a;
        
    }
    void getdata()
    {
        cout << " the vlaue of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setdate(4);
    a.getdata();

    return 0;
}
