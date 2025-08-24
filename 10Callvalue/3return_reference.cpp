// Call return by Reference in cpp

#include <iostream>
using namespace std;

// Swap function to demonstrate
// call by return by Reference method 
int & swap_pointer(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return x ;

}
int main()
{

    int a = 5, b = 6;
    cout << " a = " << a << " b = " << b << endl;
    swap_pointer(a, b) = 566 , 655;
    cout << "swaping" << endl;
    cout << " a = " << a << " b = " << b << endl;

    return 0;
}
