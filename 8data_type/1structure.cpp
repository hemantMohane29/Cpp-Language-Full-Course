// structure data type....

#include <iostream>
using namespace std;
int main()
{

    struct student
    {
        string name;
        long long int mob_num;
        char name_c;
        float fee;
    };
    struct student hemant;
    hemant.name = "Hemant Mohane";
    hemant.mob_num = 7974942457;
    hemant.fee = 40000.00;
    hemant.name_c = 'S';

    cout << "student is name = " << hemant.name << endl;
    cout << "student is name = " << hemant.mob_num << endl;
    cout << "student is name = " << hemant.name_c << endl;
    cout << "student is name = " << hemant.fee << endl;

    return 0;
}
