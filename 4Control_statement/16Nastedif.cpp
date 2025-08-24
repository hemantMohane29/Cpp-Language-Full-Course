// write the program by used in naset if statement

#include <iostream>
using namespace std;

int main()
{
   int a, b, c;

   cout << "enter the number a =";
   cin >> a;
   cout << "enter the number b =";
   cin >> b;
   cout << "enter the number c =";
   cin >> c;

   if ((b < a) && (c < a))
   {
      if (c < a)
      {
         cout << "a is big value" << endl;
      }

      else
      {
         cout << "a small value " << endl;
      }
   }
   if (a == b || a == c)
   {
      cout << "i think some value is equal";
   }
   else if ((a < b) && (c < b))
   {
      if (c < b)
      {
         cout << "b is big value" << endl;
      }

      else
      {
         cout << "b small value " << endl;
      }
   }
   else
   {

      if ((a < c) && (b < c))
      {
         cout << "c is nig value" << endl;
      }
      else
      {
         cout << "c small value" << endl;
      }
   }

   return 0;
}
