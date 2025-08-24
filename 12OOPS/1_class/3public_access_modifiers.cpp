// public access modifiers

#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    int c, d;

    void getdata()
    {

        cout << " a =  ";
        cin >> a;
        cout << " b = ";
        cin >> b;
        cout << " c = ";
        cin >> c;
        cout << " d = ";
        cin >> d;
    }

    int call()
    {
        cout<<"value out ";
        cout << " a =  " << a;
        cout << "\n b = " << b;
        cout << " \n c = " << c;
        cout << " \n d = " << d;
    }
};

int main()
{

    A obj;
    obj.getdata();
    obj.call();
    return 0;
}
