// revisiting of pointer 
// --> new operator
//  --> delete operator 


#include <iostream>
using namespace std;
int main()
{

   int a = 4;
   int *ptr = &a;
   *ptr = 999;
   cout << "the value of a is " << *(ptr) << endl;

   // new operator 
   int *p = new int(40);
   // int *p = new float(40.78);
   cout << " value is  = " << *(p) << endl;

   // int *arr = new int[3];
   // arr[0] = 10;
   // arr[1] = 20;
   // arr[2] = 30;
   // cout << " the value of arr  " << arr[0] << " \n " << arr[1] << " \n " << arr[2] << endl;

  // delete operator 
     int *arr = new int[3];
   arr[0] = 10;
   arr[1] = 20;
   *(arr+1) = 30;
   arr[2] = 30;
   delete[] arr;
   cout << " the value of arr  " << arr[0] << " \n " << arr[1] << " \n " << arr[2] << endl;




   return 0;
}
