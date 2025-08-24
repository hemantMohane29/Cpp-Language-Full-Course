// Read Write file in handling

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // connting our file with hout stream
    ofstream hout("simple.txt");
    // creating a name string and filling it with the string by the user
    cout << "Enter Your name";
    string name;
    cin >> name;
    // writing a string to the file
    hout << " My name is " + name;
    hout.close();

    // connting our file with hin stream
    ifstream hin("simple_1.txt");
    string content;
    // Reading a string to the file
    hin >> content;
    cout << " the content of the file is " << content;
    hin.close();

    return 0;
}
