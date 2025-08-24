// // type of control statement (selection control structure)

//  if statement
//  if else statement
//  else if statement
//  nasted if statement

// write the program by used in if statement
#include <iostream>
using namespace std;

int main()
{

   int age;
   cin >> age;

   if (age >= 18)
   {

      cout << "your eligibal " << endl;
   }
   if (age < 18)
   {

      cout << "your not eligibal" << endl;
   }

   return 0;
}