// unions data type....

#include <iostream>
using namespace std;
int main()
{

    union student
    {
        // string name;
        long long int mob_num;
        float salary;
        char namr_c;
    };

    union student h1;

        h1.mob_num = 797942457;
        h1.salary = 40000.00;

    cout << "mob = " << h1.mob_num<<endl;
    // cout << "salary = " << h1.salary<<endl;

    return 0;
}
