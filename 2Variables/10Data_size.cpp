#include <iostream>
using namespace std;

int main()
{

    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long) << endl;

    int a;
    char b;
    float c;
    double d;
    long e;

    cout << "size of a = " << sizeof(a) << endl;
    cout << "size of b = " << sizeof(b) << endl;
    cout << "size of c = " << sizeof(c) << endl;
    cout << "size of d = " << sizeof(d) << endl;
    cout << "size of e = " << sizeof(e) << endl;

    return 0;
}