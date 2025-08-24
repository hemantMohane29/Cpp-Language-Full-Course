// // OOps -- class & object in cpp

// c++ --> initially called --> c with classes stroustroup
// classes --> extension of structures in c

// structures had limitations
//        - members are public
//        - no methods

// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public

// structures in c++ are typedefed
// you can declare objects along with the class declartion like this:
/*class employee{
     class defination
} hemant , rohan, abhi ;
 */
//   hemant.salary = 8 makes no sense if salary is private

/* nesting of memeber function */
#include <iostream>
#include <string>
using namespace std;
class binary
{
private: // by default private hota hai ye
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << " Enter a binary number " << endl;
    cin >> s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {

            s.at(i) = '0';
        }
    }
}

void binary ::display()
{

    cout << "Display your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}
