// pointer as array in __cpp_aggregate_nsdmi

#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = arr;

    cout << "Address of arr[0] = " << ptr << endl;
    cout << "Address of arr[1] = " << (ptr + 1) << endl;
    cout << "Address of arr[2] = " << (ptr + 2) << endl;
    cout << "Address of arr[3] = " << (ptr + 3) << endl;
    cout << "Address of arr[4] = " << (ptr + 4) << endl;

    cout << "print value of arr is " << endl;

    cout << "value of arr[0] is = " << *ptr << endl;
    cout << "value of arr[1] is = " << *(ptr + 1) << endl;
    cout << "value of arr[2] is = " << *(ptr + 2) << endl;
    cout << "value of arr[3] is = " << *(ptr + 3) << endl;
    cout << "value of arr[4] is = " << *(ptr + 4) << endl;

    int *p = arr;

    // increament
    cout << *(p++) << endl;
    // decrement
    cout << *(++p) << endl;

    return 0;
}
