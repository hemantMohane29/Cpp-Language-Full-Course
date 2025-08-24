// file handling

#include <iostream>
#include <fstream>

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream  --> derived from fstreambase
3. ofstream  --> derived from fstreambase
*/

// In order work with files in c++, you will have to open it. primarity, there are 2 ways to open a file:
// 1. using the constructor
// 2. using the memeber function open() of class

using namespace std;
int main()
{
    // string st = " Hemant Mohane";
        // opening files using costruction
        // ofstream out("simple.txt"); // write operation
        // out << st;

    string st2; 
    // Opening files using construction and reading it 
    ifstream in("simple_1.txt"); // read operator 
    getline(in,st2);
    cout<<st2;

    return 0;
}
