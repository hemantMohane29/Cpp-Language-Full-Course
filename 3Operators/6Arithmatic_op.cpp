//    operator

// 1 Arithmtic operator (+,-,*,/)
// 2 comparison operator (==,!=,<=,>=,<,>)
// logic operator (&&,||,!)

//    Arithmatic  operator (+,-,*,/)

#include <iostream>
using namespace std;
int main()
{

        int a ,b;
        cout<<"Enter the first Num = ";
        cin>>a;
        cout<<"Enter the Second Num = ";
        cin>>b;

        cout << " Addition = " << a + b << endl;
        cout << " SUbtraction = " << a - b << endl;
        cout << " Multiple = " << a * b << endl;
        cout << " divided = " << a / b << endl;
        cout << " Moduls = " << a % b << endl;
        cout << " Increment = " << a++ << endl;
        cout << " first Increment = " << ++a << endl;
        cout << " Decrement = " << a-- << endl;
        cout << " First Decrement = " << --a << endl;

        return 0;
}