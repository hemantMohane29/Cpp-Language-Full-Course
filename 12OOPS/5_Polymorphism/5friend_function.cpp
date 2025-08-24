// friend function in c++

// properties of friend function 
// 1. friend function is not in the scope of class
// 2. since it is not in the sope of the class, it can not be called from the object of that class. c1.sumcplex()==invalid 
// 3. can be invoked without the help of any object 
// 4. usually contans the objects as arguments 
// 5. can be declared inside public or private section of the class 
// 6. it can not access the members directly by their names and need object_name.memeber_name to access any member of the class


#include <iostream>
using namespace std;

class complex
{

private:
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    //below line means that non member sumcomplex function is allowed to do anything with my private parts 
    friend complex sumcomplex(complex o1, complex o2);
    void prinumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
}

int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.prinumber();

    c2.setnumber(5, 6);
    c2.prinumber();

    return 0;
}
