// while loop

#include <iostream>
using namespace std;
int main()
{

    int a, i = 1;
    cout << "enter the required table = ";
    cin >> a;

    while (i <= 10)
    {
        cout << a << "*" << i << "=" << a * i << endl;
        i++;
    }

    return 0;
}
