/* variable scope
1. Global scope
2. Local Scope*/

#include <iostream>
using namespace std;

int b = 12; // global scope

int main()
{

    int a = 10; // Local scope
    int b = 14;
    cout << "a =" << a << endl;
    cout << "b = " << b << endl;
    cout << "b = " << ::b << endl; // :: this is called scope resolution operator
    return 0;
}