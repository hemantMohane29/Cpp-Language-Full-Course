// Call Reference in cpp

#include <iostream>
using namespace std;

// Swap function to demonstrate
// call by Reference method 2 
int swap_pointer(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{

    int a = 5, b = 6;
    cout << " a = " << a << " b = " << b << endl;
    swap_pointer(a, b);
    cout << "swaping" << endl;
    cout << " a = " << a << " b = " << b << endl;

    return 0;
}
