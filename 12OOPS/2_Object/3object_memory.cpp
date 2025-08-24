// object memory allocation and array of class

#include <iostream>
using namespace std;

class shop
{
private:
    int iteamId[100];
    int iteamPrice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter the id of your item no " << counter + 1 << endl;
    cin >> iteamId[counter];
    cout << "enter the price of your item no " << endl;
    cin >> iteamPrice[counter];
    counter++;
}

void shop ::displayprice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << " the price of item with id " << iteamId[i] << " is " << iteamPrice[i] << endl;
    }
}

int main()
{

    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}
