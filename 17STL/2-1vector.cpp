// exmple of vector 

#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int>& v) {
    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}
int main() {

    // Creating a vector of 5 elements from
    // initializer list
    vector<int> v1 = {1, 4, 2, 3, 5};

    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5, 9);

    printVector(v1);
    printVector(v2);
    return 0;
}