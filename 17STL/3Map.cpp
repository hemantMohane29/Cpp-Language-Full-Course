// Map in STL in cpp

#include <iostream>
#include <string>
#include <map>
using namespace std;

// Map is an associative array
int main()
{

    map<string, int> marksmap;
    marksmap["hemant"] = 92;
    marksmap["zayed"] = 45;
    marksmap["rudra"] = 85;
    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout<<" The size is = "<<marksmap.size()<<endl;
    cout<<"The max size is = "<<marksmap.max_size()<<endl;
    cout<<"The empty return value is "<<marksmap.empty()<<endl;

    return 0;
}
