
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

   ofstream out;
   out.open("sample.txt");
   out<<"this is me\n";
   out<<" this is also me";
   out<<" this is also me";
   out<<" this is also me";
   out.close();

   ifstream in;
   string st ,st2;
   in.open("sample.txt");

   while(in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
   }
   in.close(); 
   
   
   
   return 0;
}
