// There three type loop
//  1. for loop
//  2. while loop
//  3. do while loop

// for loop

#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "enter the number which is table you required = ";
    cin >> a;

    for (int i = 1; i <= 10; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    
    }

    return 0;
}
