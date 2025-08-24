// pointer to pointer

#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    int *ptr = &a;
    int **ptrr = &ptr;

    cout << "Address of ptr = " << &ptr << endl;
    cout << "value of ptr = " << **ptrr << endl;

    return 0;
}
