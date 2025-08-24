// private access modifiers

#include <iostream>
using namespace std;
class B
{
private:
    int a, b, c;

public:
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "value of a = " << a << endl;
        cout << "value of a = " << b << endl;
        cout << "value of a = " << c << endl;
    }
};

void B::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    B obj;
    obj.setdata(1, 2, 3);
    obj.getdata();

    return 0;
}
