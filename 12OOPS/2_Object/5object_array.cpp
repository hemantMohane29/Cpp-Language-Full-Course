// object of array

#include <iostream>
using namespace std;

class shopitem
{
private:
    int id ;
    float price ;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};
int main()
{
   // normal object
    // shopitem obj;
    // obj.setdata(1,2);
    // obj.getdata();

    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int[34];
    shopitem *ptr = new shopitem[size];
    int p ,q;
    shopitem *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"id and price of item "<<i+1;
        cin>>p>>q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<" item number "<< i +1 <<endl;
        ptrtemp->getdata();

    }
    return 0;
}



// concept 
   // 1   2   3
   /* ^
      |
      |    
      |  
     ptr
   */
