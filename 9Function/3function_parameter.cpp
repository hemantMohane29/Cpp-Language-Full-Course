// Function prototype
// type function_name (argument);

#include <iostream>
using namespace std;

int sum(int a, int b); 

int main()
{

    int n1, n2;
    cout << "enter the number n1 = " << endl;
    cin >> n1;
    cout << "enter the number n2 = " << endl;
    cin >> n2;
// n1 , n2 are actual parameters
    cout << "sum = " << sum(n1, n2);

    return 0;
}

int sum(int a, int b)
{
    // a , b are formal parameters 
    int c = a + b;
    return c;
}
