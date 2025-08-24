// default argument

#include <iostream>
using namespace std;

float money_received(int current_money, float fac = 1.04)
{
    return current_money * fac;
}
int main()
{

    int money = 100000;
    cout << "if you have " << money << "Rs in " << money_received(money) << endl;
    cout << "if vip have " << money << "Rs in " << money_received(money, 1.1) << endl;

    return 0;
}
