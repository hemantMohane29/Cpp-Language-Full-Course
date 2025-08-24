// object of pointer in cpp

#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getdata(void)
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {

        real = a;
        imaginary = b;
    }
};

int main()
{
    // normal object
    cout << " noraml object " << endl;
    complex obj;
    obj.setdata(1, 5);
    obj.getdata();

    // pointer of object (1)
    cout << " pointer of object (1) " << endl;
    complex obj1;
    complex *ptr = &obj1;
    (*ptr).setdata(2, 5);
    (*ptr).getdata();

    // pointer of object (2)
    // use arrow operator
    cout << " pointer of object (2) " << endl;
    complex *ptr1 = new complex;
    ptr1->setdata(5, 6);
    ptr1->getdata();

    // array of object
    cout << " arrya of object  " << endl;
    complex *ptr2 = new complex[4];
    ptr2->setdata(5, 6);
    ptr2->getdata();

    return 0;
}
