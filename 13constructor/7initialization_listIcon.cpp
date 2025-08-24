// initialization list in constructor

#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor :
constructor (agrument - list ) : initilization-setion

{
 assignment + other code;
}
*/

class test
{
    int a, b;

public:
// test(int i, int j) : a(i), b(j)
// test(int i, int j) : a(i), b(j+5)
test(int i, int j) : a(i), b(j+a)
{
        cout << "constructor exeecuted " << endl;
        cout<< " a = "<<a<<" b = "<<b<<endl;
    }
};
int main()
{
    test t(4,5);
    return 0;
}
