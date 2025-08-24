#include <iostream>
using namespace std;
int main()
{

    int a = 3;
    int *ptr = &a;

    // & --> (address of ) operator

    cout << "address of a = " << ptr << endl;
    cout << "address of a = " << &a << endl;

    // * --> dereference operator

    cout << "Address of value ptr is  = " << *ptr << endl;

    return 0;
}
