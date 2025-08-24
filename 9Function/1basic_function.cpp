// basic function execution

#include <iostream>
using namespace std;
int hemant(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int num1, num2;

    cout << "enter the num1 = " << endl;
    cin >> num1;

    cout << "enter the num2" << endl;
    cin >> num2;

    cout << "sum = " << hemant(num1, num2);

    return 0;
}
