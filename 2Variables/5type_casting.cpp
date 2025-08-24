#include<iostream>
using namespace std;

int main(){

  int a = 10;
  float b = 10.25;
  double c = 102.0254;
  // ********** type casting ************ 
cout<<"value of a ="<<float(a)<<endl;
cout<<"value of b ="<<int(b)<<endl;
cout<<"value of c ="<<int(c)<<endl;

 // ********** Reference variable ***************
 int x = 5;
 int &y =x;
 cout<<"x = "<<x<<endl;
 cout<<"x = "<<y<<endl;

return 0; 
}