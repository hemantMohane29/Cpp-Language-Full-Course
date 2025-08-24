// fabonacci serier

#include <iostream>
using namespace std;
int fab(int n)
{
     if (n <= 1){
        return n;  // Base case: return 0 if n==0, return 1 if n==1
     }
        else
    {
        return fab(n - 1) + fab(n - 2);
        //STEP by step calculate
        // fib(4)
        // fib(3) + fib(2)
        // fib(3)+ fib(2) + fib(2) + fib(1)

        // fab(2) = 1 + 0 = 1
        // fab(3) = 1 (from fab(2)) + 1 = 2
        // fab(4) = 2 (from fab(3)) + 1 (from fab(2)) = 3

    }
}
int main()
{
    int a;
    cout << "enter the number  " << endl;
    cin >> a;

    cout << "the fibonacci of " << a << " is =  " << fab(a);
    return 0;
}
