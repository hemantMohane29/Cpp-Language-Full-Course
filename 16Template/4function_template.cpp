// function template 



#include<iostream>
using namespace std;

template <class t1 ,class t2>
    float funavg(t1 a ,t2 b){
        float avg = (a+b)/2.0;
        return avg;
    }
int main()
{

  float a;
  a = funavg(5,2);
  cout<<"average = "<<a;
return 0;
}
