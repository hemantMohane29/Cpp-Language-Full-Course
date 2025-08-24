// vector STL

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // Zero length vector
    // vector<char>vec2(4); // 4-element character vector
    // vector<char>vec2(4);  // 4-element char vector  from vec
    int element, size;
    cout << "enter the size of your vector " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "enter an element to add to this vector" << endl;
        cin >> element;
        vec1.push_back(element); // use for element push
    }
    // vec1.pop_back();
    display(vec1);
    // iterator
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter,50,566);  // use fro multi tasking
    display(vec1);
    vector<int> vec4(6, 3);
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}
