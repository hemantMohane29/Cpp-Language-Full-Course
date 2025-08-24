// Default template

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class A
{
public:
    T1 x;
    T2 y;
    T3 z;
    A(T1 a, T2 b, T3 c)
    {
        x = a;
        y = b;
        z = c;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};

int main()
{
    A<> obj(4, 5.2, 'c');
    obj.display();
    cout << endl;
    A<float, int, char> H(4.2, 4, 'H');
    H.display();
    return 0;
}
