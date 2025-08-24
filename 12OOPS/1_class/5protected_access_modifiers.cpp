// protected access modifier in cpp

#include <iostream>
using namespace std;

class base
{
protected:
    int a, b;

public:
    int c, d;

    void show()
    {

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d = " << d << endl;
    }
};

// for a protected memeber :
//                        public derived     private derived   protected derivation

//  1. private member     Not inherited       notinherited      not interited
//  2. protected member   protected           private             protected
//  3. public member      public               private            protected

class derived : public base
{
public:
    void display()
    {
        cout << "a =";
        cin >> a;
        cout << " b =";
        cin >> b;
        cout << " c = ";
        cin >> c;
        cout << " d = ";
        cin >> d;
    }
};

int main()
{
    derived obj;
    obj.display();
    obj.show(); // calling base class functin
    return 0;
}

//