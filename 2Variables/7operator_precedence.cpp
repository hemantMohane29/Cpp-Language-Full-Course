// operator precedence
// 1. a*b ,a/b
// 2. a+b , a-b
 
#include <iostream>
using namespace std;
int main()
{

    int a = 4, b = 5;
    int c = 4 + (a * b) - (45 / 5);

    cout << c << endl;
    return 0;
}
