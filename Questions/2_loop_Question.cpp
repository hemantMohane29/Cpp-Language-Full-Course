// \\ write the program by using if - else statement and print the prime number

#include<iostream>
using namespace std;

int main(){

   int a;

   cout<<"enter the number ";
   cin>>a;
  for(int i=1; i<=10; i++){
 
   if(a%i==0){
   cout<<"prime number ";
   break;
   }
   else{ 
   cout<<"not prime number ";
   break;
  }
  }
    return 0;
}