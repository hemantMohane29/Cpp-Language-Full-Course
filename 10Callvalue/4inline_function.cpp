// inline function in cpp

#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    // not recommended to use below lines with inline function
    // static int d = 0;  // this executes only once 
    // d = d+1;  //next time this function is run , the value of c wil be retained 
    int c = a + b;
}

int main()
{
    int a, b;

    cout << "enter the number of a  = " << endl;
    cin >> a;
    cout << "enter the number of b  = " << endl;
    cin >> b;

    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;
    cout << "sum =" << sum(a, b)<<endl;

    return 0;
}
