// List in cpp

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {

        cout << *it << " ";
    }
}
int main()
{

    list<int> list1; // list of 0 length
    // list<int> list2(7); //empty list of size 7
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(9);
    // display(list1);
    list1.reverse();
    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);
    // display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter;
    // iter++;
    // cout<<*iter<< " ";
    // iter++;

    return 0;
}
