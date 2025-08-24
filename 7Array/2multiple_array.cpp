// Multiple array and changes value

#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 5, 4, 7};
    int marks[4] = {45, 78, 87, 98};

    cout << "arr array " << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    cout << "array value of marks " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    // change marks
    marks[3] = 89;
    cout << marks[3] << endl;
    //    cout<<marks[0]<<endl;

    return 0;
}
