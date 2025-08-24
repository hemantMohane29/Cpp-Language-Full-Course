// call value in cpp

#include <iostream>
using namespace std;

// Swap function to demonstrate
// call by value method
int swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;

    cout << "swaping" << endl;
    cout << " a = " << x << " b = " << y << endl;
}

int main()
{

    int a = 5, b = 6;
    cout << " a = " << a << " b = " << b << endl;
    swap(a, b);
    return 0;
}
